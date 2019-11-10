
#include<iostream>
using namespace std;
class prime
{
    int i,j,n,flag;
public:
    prime();
    int prim()
    {  for(i=1;i<n;i++)
        {   flag=0;
            for(j=2;j<=i/2;j++)
            {   if(i%j==0)
                    flag=1;
            }
            if(flag==0) cout<<i<<" ";
        }
    }
};

prime::prime()
{
    cout<<"Enter a value ";
    cin>>n;
    cout<<"The prime numbers are "<<endl;
}
int main()
{
    prime p;

    cout<<p.prim()<<endl;
    return 0;
}
