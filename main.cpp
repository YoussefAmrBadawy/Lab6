//Youssef Badawy|| Lab 6


#include<iostream>

using namespace std;


const int ARRAY_SIZE = 5;

double* arr = new double[ARRAY_SIZE];   

void enterArrayData();
void outputArrayData()



int main()
{

enterArrayData();

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

}

double sumArray()
{
    double tempSum = 0;
    for (int i = 0;i<ARRAY_SIZE;i++)
    {
        
    }
}