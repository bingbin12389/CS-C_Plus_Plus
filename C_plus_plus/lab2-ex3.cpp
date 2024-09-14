#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

class Vector
{
private:
    int n;
    float *data;
public:
    Vector()
    {
        cout << " Enter Number of Co-ordinates :";
        cin >> n;
        data=new float[n];
        cout<<"\n Enter " << n << " Co-ordinates : \n";
        for(int i=0; i<n; i++)
        {
                cout<<" ";
                cin>>data[i];
        }
    }
    //Constructor initializes values to data members from another array
    Vector(float *a , int n)
    {
        this->data=a;
        this->n=n;
    }
    //Destructor initializes values to data members from another array
    ~Vector()
    {
        delete[] data;
    }
    //Returns the current capacity of this vector
    int capacity()
    {
        return n;
    }
    //Removes all of the elements from this Vector.
    void Clear()
    {
        delete[] data;
        n=0;
    }
    //Tests if the specified object is a component in this vector.
    bool contains(float elem)
    {
        for(int i=0;i<n;i++)
        {
            if(data[i]==elem)
                return true;
            else
                return false;
        }

    }
    //Searches for the first occurrence of the given argument.
    int indexOf(float elem)
    {
        for(int i=0;i<n;i++)
        {
            if(data[i]==elem)
                return i+1;
            return 0;
        }
    }
    //Returns the index of the last occurrence of the specified object in this vector.
    int lastIndexOf(float elem)
    {
        for(int i=n-1;i>=0;i--)
            {
            if(data[i]==elem)
                return i+1;
            }
        return 0;
    }
    //Returns the component at the specified index
    float elementAt(int index)
    {
        return data[index-1];
    }
    //Tests if this vector has no components.
    bool isEmpty()
    {
        if(n==0)
            return true;
        else
            return false;
    }
    //Returns an array containing all of the elements in this Vector in the correct order
    float toArray(float *d)
    {
        for(int i=0;i<n;i++)
            {
                *(d+i)=data[i];
                }
        return n;
    }
    //Show values of vector
    void display()
    {
        cout<<"\n Vector : (";
        for(int i=0; i<n; i++)
        {
                cout<<data[i];
                if(i!=n-1)
                cout<<",";
        }
        cout<<")";
    }
};

int main()
{
    cout << "Vector Creator :" << endl;
    float x[]={1,4,5,4,1};
    float d[]={};
    Vector z(x, 5);
    Vector y;

    cout << "Capacity of y: " << y.capacity() << endl;
    cout << "Is y contain 5? : " << y.contains(5) << endl
         << "Is y contain 6? : " << y.contains(6) << endl;

    cout << "Index position of 5: " << y.indexOf(5) << endl
         << "Index position of 6: " << y.indexOf(6) << endl;

    cout << "Last Index position of 5: " << y.lastIndexOf(5) << endl
         << "Last Index position of 6: " << y.lastIndexOf(6) << endl;

    cout << "Element at first (1) position is: " << y.elementAt(1) << endl;

    cout << "Details Vector y: ";
    y.display();

    cout << "Put elements from vector y to array d :" << endl;
    int n = y.toArray(d);   //return the size of vector y
    cout << "Vector d: ";
    for (int i = 0; i < n; i++){
        cout << d[i] << " ";
    }
    cout << endl;
    y.Clear();
    cout << "y was cleared." << endl;
    cout << "Capacity of y: " << y.capacity() << endl;
    cout << "Is y empty? : " << y.isEmpty() << endl
         << "Is z empty? : " << z.isEmpty() << endl;
    cout << "End of Program !" <<endl;
}
