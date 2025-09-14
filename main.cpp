//Youssef Badawy|| Lab 6


#include<iostream>

using namespace std;


const int ARRAY_SIZE = 5;

double* arr = new double[ARRAY_SIZE];   

void enterArrayData();
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
