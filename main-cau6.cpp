#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class bank_account
{
private:
    double balance;
    long id;
public:
    bank_account(double BALANCE, long ID)
    {
        balance=BALANCE;
        id=ID;
    }
    void deposit(double x)
    {
        if(x>0)
        balance=balance+x;
    }
    void withdraw(double y)
    {
        if(y<balance)
        balance=balance-y;
    }
    void display()
    {
        cout << "Bank account ID : " << id <<endl;
        cout << "Balance : " << balance << " $" <<endl;

    }
};

main()
{
    bank_account acc1(1000,123456);
    bank_account acc2(5000,789012);
    cout << "Acc 1 " << "BALANCE after deposit : ";
    acc1.deposit(300);
    acc1.display();
    cout << "Acc 2" << "BALANCE after withdraw : ";
    acc2.withdraw(400);
    acc2.display();
    getch();
}
