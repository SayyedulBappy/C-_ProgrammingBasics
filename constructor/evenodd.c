
#include<iostream>
using namespace std;
class Circle
{
    float pi=3.14,r;
public:
    Circle();
    float area(){return (pi*r*r);}
};

Circle::Circle()
{
    cout<<"Enter radius ";
    cin>>r;
}
int main()
{
    Circle c;
    cout<<"Area of the circle is  "<<c.area()<<endl;
    return 0;
}
