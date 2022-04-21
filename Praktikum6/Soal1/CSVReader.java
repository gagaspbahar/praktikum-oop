import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * CSVReader is a reader with given filename and separator.
 * IMPORTANT NOTE:
 * We assume that the csv doesn't have separator in the cells.
 * This implementation only split each line using separator
 * into array of values.
 *
 * @author Laboratorium Programming
 */
public class CSVReader {
    private File csvFile;
    private String separator;
    /**
     * If set to true, CSVReader will skip the first line.
     * For example, when the csv has header.
     */
    private boolean skipFirstLine;

    /**
     */
    public CSVReader(String filename, String separator) {
        this.csvFile = new File(filename);
        this.separator = separator;
        this.skipFirstLine = false;
    }

    /**
     * Creates a new reader from a file, using a separator
     * @param csvFile file csv
     * @param separator separator of csv file
     */
    public CSVReader(File csvFile, String separator) {
        this.csvFile = csvFile;
        this.separator = separator;
        this.skipFirstLine = false;
    }

    /**
     * Set the reader to skip the first line, because the first line
     * is the header of csv
     * @param isSkippingHeader true if header should be skipped
     */
    public void setSkipHeader(boolean isSkippingHeader) {
        this.skipFirstLine = isSkippingHeader;
    }

    /**
     * Reads the csv file into list of string array.
     * @throws IOException exception when reading csv file.
     *         for example: file not found error
     * @return list of string array. Each list item represent a row.
     */
    public List<String[]> read() throws IOException {
        if (!this.separator.equals(",")) {
            throw new IOException("exception");
        }
        ArrayList<String[]> list = new ArrayList<String[]>();
        String name = this.csvFile.getName();
        String[] data = name.split(" ");
        if (data.length != 4) {
            throw new IOException("exception");
        }
        int n = Integer.parseInt(data[0]);
        int petalLength = Integer.parseInt(data[1]);
        int petalWidth = Integer.parseInt(data[2]);
        int stemLength = Integer.parseInt(data[3]);
        for (int i = 0; i < n; i++) {
            String[] datum = new String[3];
            datum[0] = String.valueOf(petalLength);
            datum[1] = String.valueOf(petalWidth);
            datum[2] = String.valueOf(stemLength);
            petalLength = (petalLength * 41) % 19;
            petalWidth = (petalWidth * 47) % 23;
            stemLength = (stemLength * 89) % 29;
            list.add(datum);
        }
        return list;
    }

}