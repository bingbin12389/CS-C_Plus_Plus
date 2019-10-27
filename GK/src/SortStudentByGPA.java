
import java.lang.Float; 
import java.util.Comparator;;

	public class SortStudentByGPA implements Comparator<Student> 
	{
		public int compareTo(Student s) 
		{
			return Float.valueOf(s.gpa).compareTo(s.getGpa());
		}

		@Override
		public int compare(Student o1, Student o2) {
			// TODO Auto-generated method stub
			return 0;
		}
	}

