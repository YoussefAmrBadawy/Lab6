//Youssef Badawy|| Lab 6


#include<iostream>

using namespace std;


const int ARRAY_SIZE = 5;

double* arr = new double[ARRAY_SIZE];   

void enterArrayData();
void outputArrayData();
double sumArray();


int main()
{

enterArrayData();
outputArrayData();
cout <<"Sum of the elements is: "<<sumArray()<<endl;
delete[] arr;



return 0 ;
}

void enterArrayData()
{
    
    for(int i =0 ;i<ARRAY_SIZE;i++)
    {
        cout<<"Enter elemnt #"<<i+1<<": ";
        cin>>*(arr+i);
    }
    

}

void outputArrayData()
{
    cout<<"The element are: ";
    for(int i =0 ;i<ARRAY_SIZE;i++)
    {
       cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}

double sumArray()
{
    double tempSum = 0;
    for (int i = 0;i<ARRAY_SIZE;i++)
    {
        tempSum+=*(arr+i);
    }

    return tempSum;
}