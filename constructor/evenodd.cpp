
#include<iostream>
using namespace std;
class num
{
    int n;
public:
    num();
    int evenodd()
    {
        if(n%2==0)cout<<n<<" is even\n";
        else cout<<n<<" is odd";
        return 0;
    }
};

num::num()
{
    cout<<"Enter an integer ";
    cin>>n;
}
int main()
{
    num n;
    cout<<n.evenodd()<<endl;
    return 0;
}
