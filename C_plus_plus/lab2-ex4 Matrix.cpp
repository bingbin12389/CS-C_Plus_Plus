#include <iostream>
#include <conio.h>

using namespace std;
const int MAX_INT=1000;

class Matrix
{
private:
    int n,m;
    int **data;
    void allocArray()
    {
        data = new int*[m];
        for(int i = 0;i<m;i++)
        {
            data[i] = new int[n];
        }
    }
public:
    Matrix()
    {

    }
    int getColumns()
    {
        return n;
    }
    int getRows()
    {
        return m;
    }
    Matrix(int M, int N)
    {
        m=M;
        n=N;
        data = new float[M][N];
    }
    Matrix(float a[][MAX_INT])
    {
        this->a = new float[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                    {
                        this->a[i][j] = a[i][j];
                    }
        }
    }
    void Swap(int i, int j)
    {
        float temp[];
        temp = data[i];
        data[i] = data[j];
        data[j] =temp
    }
    Matrix transpose()
    {
        Matrix A(n,m);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                A.data[j][i]=this->data[i][j];
        }
    }
    Matrix add(Matrix B)
    {
        Matrix A(m,n);
        if(B.m != A.m || B.n != A.n)
        {
            cout << "Illegal matrix dimension !" <<endl;
        }
        Matrix C(m,n);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                C.data[i][j] = A.data[i][j] + B.data[i][j];
            }
        }
        return C;
    }
    Matrix sub(Matrix B)
    {
        Matrix A(m,n);
        if(B.m != A.m || B.n != A.n)
        {
            cout << "Illegal matrix dimension !" <<endl;
        }
        Matrix C(m,n);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               C.data[i][j] = A.data[i][j] - B.data[i][j];
            }
        }
        return C;
    }
    bool Equal(Matrix B)
    {
        Matrix A(m,n);
        if(B.m != A.m || B.n != A.n)
        {
            cout << "Illegal matrix dimension !" <<endl;
        }
        for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                    if (A.data[i][j] != B.data[i][j])
                        return false;
                    else
                        return true;
            }
    }
    Matrix prod(Matrix B)
    {
        Matrix A(m,n);
        if (A.n != B.m)
        {
            cout << "Illegal matrix dimension !" <<endl;
        }
        Matrix C(A.m,B.n);
        for (int i = 0; i < C.m; i++)
            {
            for (int j = 0; j < C.n; j++)
                {
                for (int k = 0; k < A.n; k++)
                    C.data[i][j] += (A.data[i][k] * B.data[k][j]);
                }
            }
        return C;
    }
    display()
    {
        cout <<"The matrix is: ";
        for (int i=0;i<m;i++)
        {
            cout <<endl;
            for (int j=0;j<n;j++)
            {
                cout << p[i][j] <<" ";
            }
        }
    }
};
int main()
{
    cout << "CREATE MATRIX NOW !" << endl;
    float [][] a = {{1,2,3}{4,5,6}{7,8,9}};
    Matrix X,Y,Z;
    cout << "Show MATRIX X:"<<endl;
    X.display();
    cout << "Show MATRIX transpose of X:"<<endl;
    X.transpose();
    cout << "Swap X :" <<endl;
    X.Swap(1,2);
    X.display();
    cout << "Add MATRIX : "<<endl;
    X.add(Y);
    cout << "Subtraction MATRIX : "<<endl;
    X.sub(Z);
    return 0;
}
