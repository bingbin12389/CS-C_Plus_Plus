#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

class Point3D
{
private:
    double x;
    double y;
    double z;
public:
    Point3D(double X, double Y, double Z)
    {
        x=X;
        y=Y;
        z=Z;
    }
    double getPoint()
    {
        return x;
        return y;
        return z;
    }
    double distanceFromCenter()
    {
        return distanceFrom(0,0,0);
    }
    double distanceFrom(Point3D other)
    {
        return sqrt(pow(x-other.x,2))+pow(y-other.y,2)+pow(z-other.z,2);
    }
    double distanceFrom(double xVal, double yVal, double zVal)
    {
        return sqrt(pow(xVal-x,2))+pow(yVal-y,2)+pow(zVal-z,2);
    }
    void detail()
    {
        cout << "x= " << x << " y= " << y << " z= " << z <<endl;
    }
};

main()
{
    Point3D point1(0,0,0);
    Point3D point2(3,7,8);
    cout << "The distance between point1 and (0,0,0) is : " << point1.distanceFromCenter() <<endl;
    cout << "Value of point1 is : " <<endl;
    point1.detail();
    cout << "The distance between point1 and point 2 is : " << point1.distanceFrom(point2) <<endl;
    cout << "Value of point2 is : " <<endl;
    point2.detail();
    getch();
}
