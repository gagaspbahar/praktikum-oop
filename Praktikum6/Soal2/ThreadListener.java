import java.util.ArrayList;

// interface for classes that listens for thread call
public interface ThreadListener {
	void onSuccess(ArrayList<Student> student);
}