#include <iostream>
#include "math.h"
#include <iomanip>
#include<conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int n=5 ;
double Avg_val[4];

class Matrix
{
private:
    int M [n] [n];
public:
    void InputMatrix();
    void OutputMatrix();
    void bubbleSort();
    void sered_arefmetychne(double ar[]);
    void solver();
};

void Matrix::InputMatrix()
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<"["<<i + 1 << "][" << j+1<<"]=";
            cin>>M[i][j];
        }
    }

}

void Matrix::OutputMatrix()
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {

            cout<< setw(7)<<M[i][j]<<" ";

        }
        cout<<endl;
    }
    cout << endl;
}


void Matrix::bubbleSort()
{
    int  i,j,k,c;
    for (i=0;i<n;i++)
    {
        for (k= n-1 ; k >= 0; k--)
            for (j=0; j<k;j++)
            {
                while (M[i] [j]< M[i][j+1])
                {
                    c=M[i][j];
                    M[i][j]=M[i][j+1];
                    M[i][j+1]=c;
                }
            }
    }
}

void Matrix::solver(){
    int k=n, count=0, mnogenia;
    for (int j = 0; j < n-1; j++) {
    	
        mnogenia=1;
        for (int i = 0; i < k; i++) {
            if (i>j) {
                mnogenia *= M[i][j];
            }
        }
        Avg_val[count] = mnogenia;
        count++;
    }

    double ser_aref = 0, sum = 0;
    for (int i = 0; i < n-1; i++) {
        cout << "mnogenia N" << i+1 << " "<<Avg_val[i] << "\n";
        sum += Avg_val[i];
    }
    ser_aref = sum/(n-1);
    cout << "\n" << "seredne arefmetych = " << ser_aref << "\n";
}

int main(void)
{
    Matrix A;
    A.InputMatrix ();
    A.OutputMatrix();
    A.bubbleSort();
    A.OutputMatrix();
    A.solver();





    _getche();
    return 0;
}



