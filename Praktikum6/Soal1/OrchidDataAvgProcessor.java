import java.util.List;
import java.util.ArrayList;
import java.io.IOException;

public class OrchidDataAvgProcessor implements Runnable {
    // Tambahkan atribut sesuai kebutuhan
    private OrchidMeanDatum meanDatum;
    private String filename;

    public OrchidDataAvgProcessor(OrchidMeanDatum meanDatum, String rawDataFilename) {
        // Konstruktor
        this.meanDatum = meanDatum;
        this.filename = rawDataFilename;
    }

    @Override
    public void run() {
        // Menghitung rata-rata dari data yang dibaca dengan CSVReader, lalu update
        // meanDatum dengan rata-rata dari setiap aspek data

        // Apabila muncul IOException, maka hasil pembacaan data adalah kosong
        // dan meanDatum tidak di-update (tidak di throw lagi)
        int length = 0;
        float petalSum = 0;
        float petalWidthSum = 0;
        float stemSum = 0;
        CSVReader reader = new CSVReader(this.filename, ",");
        try{
            List<String[]> data = reader.read();
            length = data.size();
            for(String[] datum: data){
                petalSum += Integer.parseInt(datum[0]);
                petalWidthSum += Integer.parseInt(datum[1]);
                stemSum += Integer.parseInt(datum[2]);
            }
            this.meanDatum.setMean(petalSum/length, petalWidthSum/length, stemSum/length);
        }
        catch(IOException e){
            this.meanDatum.setMean(-1,-1,-1);
            return;
        }
    }
}