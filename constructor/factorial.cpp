#include<iostream>
using namespace std;
class factorial
{
    int i,n,f=1;
public:
    factorial();
    int fact()
    {   for(i=1;i<=n;i++)
            f*=i;
        return f;
    }
};

factorial::factorial()
{
    cout<<"Enter a value ";
    cin>>n;
}
int main()
{
    factorial f;
    cout<<"The factorial is "<<f.fact()<<endl;
    return 0;
}
