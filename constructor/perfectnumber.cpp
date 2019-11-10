#include<iostream>
using namespace std;
class perfect
{
    int n,rem,result=0,i;
public:
    perfect();
    int perf()
    {  for(i=1;i<=(n-1);i++)
        {
            rem=n%i;
            if(rem==0)
            {
                result=result+i;
            }
        }
        if(result==n)
            cout<<"Number is perfect number"<<endl;
        else
            cout<<"Number is not perfect number"<<endl;
    return 0;
    }
};

perfect::perfect()
{
    cout<<"Enter a value ";
    cin>>n;
}
int main()
{
    perfect p;
    cout<<p.perf()<<endl;
    return 0;
}
