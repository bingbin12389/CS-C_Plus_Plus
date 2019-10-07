/* Example of overloaded + operator function for Real objects
*/
#include <iostream>
#include <conio.h>

using namespace std;

class Real
{
private:
    float value;
public:
    Real(float v=0)
    {
        value=v;
    }
Real operator+(Real &A)
{
    float temp = value + A.value ;
    return Real(temp) ;
}
Real operator-(Real &A)
{
    float temp = value - A.value ;
    return Real(temp) ;
}
Real operator*(Real &A)
{
    float temp = value * A.value ;
    return Real(temp) ;
}
Real operator/(Real &A)
{
    float temp = value / A.value ;
    return Real(temp) ;
}
void display()
{
    cout << value <<endl;
}
};

main()
{
    Real A(6.5);
    Real B(3.5) ;
    cout << "Sum of Two Complex: ";
    Real C = A+B ;
    C.display();
    cout << "Subtituted of Two Complex: ";
    Real D = A-B;
    D.display();
    cout << "Product of Two Complex: ";
    Real E = A*B;
    E.display();
    cout << "Divided of Two Complex: ";
    Real F = A/B;
    F.display();
    getch();
}

