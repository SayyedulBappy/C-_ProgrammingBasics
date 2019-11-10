#include<iostream>
using namespace std;
class fibonacci
{


public:
    int i,n;
    fibonacci();
    fibo(int i)
    {
            if(i==0||i==1)
                return i;
            else
                return(fibo(i-2)+fibo(i-1));

    }
};

fibonacci::fibonacci()
{
    cout<<"Enter a value ";
    cin>>n;

}
int main()
{
    int i,n;
    fibonacci f;
    cout<<"The fibonacci s are "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<f.fibo(i)<<endl;}
    return 0;
}

