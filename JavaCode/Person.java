class Person
{
private String name;
private int age;
private String address;
public Person(String name, int age, String address)
{
this.name=name;
this.age =age;
this.address =address;
}
public void display()
{
System.out.print("Nhan vien " + name+", "+age+" tuoi, tai dia chi "+address);
}
}

