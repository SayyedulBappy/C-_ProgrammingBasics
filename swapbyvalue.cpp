#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"Enter values: ";
    cin>>a>>b;
    cout<<"Before swapping values are: "<<a<<" "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping values are: "<<a<<" "<<b;
    return 0;
}

