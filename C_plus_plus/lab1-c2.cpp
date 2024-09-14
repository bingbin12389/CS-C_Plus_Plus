#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;
class Cube
{
private:
    double Size = 10;
public:
    Cube(double val)
    {
        if(val > 0)
        {
            Size=val;
        }
    }
    void setSize(double val)
    {
        if(val>0)
        {
            Size=val;
        }
    }
    double getSize()
    {
        return Size;
    }
    double volume()
    {
        return Size*Size*Size;
    }
    void details()
    {
        cout<< "\ndetails of rectangle" <<endl;
        cout<< "witdth = " << Size << endl;
        cout<< "height = " << Size << endl;
        cout<< "length = " << Size <<endl;
        cout<< "volume = " << volume() << endl << endl ;
    }
};
main()
{
    Cube cube1(5);
    Cube cube2(6);
    Cube cube3(7);
    cube1.details();
    cube2.details();
    cube3.details();
    getch();
}
