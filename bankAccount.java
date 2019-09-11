public class bankAccount {
	private double balance;
	private long id;
	public bankAccount(double balance, long id)
	{
		this.balance = balance;
		this.id = id;
	}
	public void deposit(double value)
	{
		if(value>0)
			balance = balance + value;
	}	
	public void withdraw(double value)
	{
		if(value<=balance)
			balance = balance - value;
	}
	public void display()
	{
		System.out.println("ID="+id);
		System.out.println("Balance="+balance);
	}
	public static void main(String[] args) {
		bankAccount acc1 = new bankAccount(1000,123456);
		bankAccount acc2 = new bankAccount(5000,789012);
		acc1.deposit(300);
		acc2.withdraw(400);
		acc1.display();
		acc2.display();
	}
}
