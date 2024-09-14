public class Employee extends Person
{
private float salary;
private float rate;

public Employee(String name, int age, String address, float salary, float rate)
{
super(name,age,address);
this.salary=salary;
this.rate=rate;
}
public float totalSalary()
{
return salary*rate;
}
public void display()
{
super.display();
System.out.print(" co tong luong la: "+totalSalary());
}
public static void main(String[] args) {
Employee A = new Employee("Dung", 30, "Quang Nam",11050,3.66f);
A.display();
}
}