//package SV;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class StudentManage {
	List<Student> lstStudent = new ArrayList<>();
	Scanner key = new Scanner(System.in);
	public StudentManage()
	{
		Add();
		Display();
		//Edit();
		//SortByName();
		//SortByGPA();
		//DeleteById();
	}
	
	//1. Add Students
	public void Add()
	{
		System.out.println("n=");
		int n = Integer.parseInt(key.nextLine());
		for(int i = 0;i<n;i++)
		{
			System.out.println("Input Name =");
			String name =key.nextLine();
			System.out.println("Input ID =");
			String id =key.nextLine();
			System.out.println("Input GPA =");
			float gpa =Float.parseFloat(key.nextLine());
			Student s = new Student(name,id,gpa);
			lstStudent.add(s);
		}
	}
	
	//2. Display Student
	public void Display()
	{
		for (Student s : lstStudent)
		{
			System.out.println(s.name+ " "+s.id+" "+s.gpa);
		}
	}
	
	//3. Edit Student
	public void Edit(String idSearch)
	{
		for(int i=0;i<lstStudent.size();i++)
			if(lstStudent.get(i).id.contains(idSearch))
			{
				System.out.println("Input name edit");
				lstStudent.get(i).setName(key.nextLine());
				System.out.println("Input gpa edit");
				lstStudent.get(i).setGpa(Float.parseFloat(key.nextLine()));
			}
	}
	
	//4. Sorted by Name
	public void SortByName() {
		Student[] arr= new Student[lstStudent.size()];
		for(int i=0;i<lstStudent.size();i++) {
			arr[i]= (Student)lstStudent.get(i);
		}
		Arrays.sort(arr);
		Collections.sort(lstStudent,new SortStudentByName());
	}
	
	//5. Sorted by GPA
	public void SortByGPA()
	{
		Student[] arr= new Student[lstStudent.size()];
		for(int i=0;i<lstStudent.size();i++) {
			arr[i]= (Student)lstStudent.get(i);
		}
		Arrays.sort(arr);
		Collections.sort(lstStudent,new SortStudentByGPA());
	}
	
	//6. Delete id
	public void DeleteById()
	{
		Student[] arr= new Student[lstStudent.size()];
		for(int i=0;i<lstStudent.size();i++) {
			arr[i]=arr[i+1];
			arr[arr.length - 1] = null;
		}
		Arrays.sort(arr);
		Collections.sort(lstStudent,new SortStudentById());
	}
	public static void main(String[] args) {
		
		new StudentManage();
}
}