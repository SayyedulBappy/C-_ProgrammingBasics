
#include<iostream>
using namespace std;
class factor
{
    int f,n;
public:
    factor();
    int fact()
    { for(f=2;f<n;f++)
        {   if(n%f==0)
                cout<<f<<" ";
        }
    }
};

factor::factor()
{
    cout<<"Enter a value ";
    cin>>n;

}
int main()
{
    factor f;
    cout<<"The factors are "<<endl;
    cout<<f.fact()<<endl;
    return 0;
}

