import java.util.ArrayList;

public class Scraper implements ThreadListener {
    
    // where to store the result
    private ArrayList<Student> result;
    
    // nim prefix. e.g : 135, 182, 165, etc.
    private ArrayList<String> nimPrefixes;
    
    // nim years. e.g : 18, 19, 20, etc.
    private ArrayList<String> nimYears;
    
    // current thread count for this instance
    private int threadCounter; 
    
    // nim limit, will scrape from 001 to 050.
    private static int NIM_LIMIT = 50;

    // limit for scrraping in each thread
    private static int BATCH_SIZE = 20;
    
    // where to get the data from
    private static Website NIM_WEBSITE = new Website();


    // constructor
    public Scraper(ArrayList<String> prefixes, ArrayList<String> years) {
        this.result = new ArrayList<Student>();
        this.nimPrefixes = prefixes;
        this.nimYears = years;
        this.threadCounter = 0;
    }

    // getter for result
    public ArrayList<Student> getResult() {
        return this.result;
    }

    // handler when student scraping is success from a thread
    public synchronized void onSuccess(ArrayList<Student> student) {
        for(Student s: student) {
            result.add(s);
        }
        --this.threadCounter;
        notify();
    }

    // scrape for each combination
    // e.g: 135 + 18, 135 + 19, 182 + 18, etc.
    public synchronized void scrapeStudentData() {
        for(String prefix: nimPrefixes) {
            for (String year : nimYears) {

                // ceil batch
                for(int batch = 0; batch < (NIM_LIMIT/BATCH_SIZE) + (NIM_LIMIT%BATCH_SIZE != 0 ? 1 : 0); batch++) {
                    int suffixFirst = batch*BATCH_SIZE + 1;
                    int suffixLast = (batch + 1)*BATCH_SIZE;
                    
                    // limit search to given NIM_LIMIT
                    suffixLast = suffixLast > NIM_LIMIT ? NIM_LIMIT : suffixLast ;
                    
                    // make thread and run thread
                    ++this.threadCounter;
                    Thread t = new Thread(new ScraperThread(NIM_WEBSITE, this, prefix, year, suffixFirst, suffixLast));
                    t.start();
                }
            }
        }
        
        // block when not finished
        while(this.threadCounter != 0) {
            try {
                wait();
            } catch (Exception e) {
                System.out.println("ngambek");
                break;
            }
        }

        return;
    }

}