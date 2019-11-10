#include<iostream>
using namespace std;
int Swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    cout<<"Enter values: ";
    cin>>a>>b;
    cout<<"Before swapping values are: "<<a<<" "<<b<<endl;
    Swap(&a,&b);
    cout<<"After swapping values are: "<<a<<" "<<b;
    return 0;
}
