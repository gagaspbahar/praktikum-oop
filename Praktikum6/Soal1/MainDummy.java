import java.util.ArrayList;

// DISCLAIMER: Ini hanya gambaran kasar untuk menggambarkan penggunaan setiap kelas, bukan untuk run test
public class MainDummy {
   public static void main(String[] args) {
       int nOrchidSpecies = 10;
       ArrayList<OrchidMeanDatum> meanData = new ArrayList<OrchidMeanDatum>();
       for (int i = 0; i < nOrchidSpecies; i++) {
           meanData.add(new OrchidMeanDatum(i));
       }

       // Load setiap jenis anggrek dengan thread berbeda 
       for (int i = 0; i < nChunk; i++) {
            OrchidMeanProcessor processor = new OrchidMeanProcessor(meanData.get(i), "orchidspecies-" + i + ".txt");
            Thread t = new Thread(processor);
            t.start();
       }
       System.out.println("done");
   }
}