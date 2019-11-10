#include <iostream>
using namespace std;
class palindrome
{
    int n, *p, temp, s = 0, r;

  public:
    palindrome();
    int pal()
    {
        temp = *p;
        while (*p != 0)
        {
            r = *p % 10;
            s = s * 10 + r;
            *p = *p / 10;
        }
        if (s == temp)
            cout << "Number is Palindrome" << endl;
        else
            cout << "Number is not Palindrome" << endl;
        return 0;
    }
};

palindrome::palindrome()
{
    cout << "Enter an integer ";
    cin >> n;
    p = &n;
}
int main()
{
    palindrome p;
    cout << p.pal() << endl;
    return 0;
}
