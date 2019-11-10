#include<iostream>
using namespace std;
class Rectangle
{
    int height,width;
public:
    Rectangle(int,int);
    Rectangle();
    int area(){return (height*width);}
};

Rectangle::Rectangle(int x,int y)
{
    height=x;
    width=y;
}
Rectangle::Rectangle()
{
    height=12;
    width=10;
}
int main()
{
    Rectangle rect(3,5);
    Rectangle rectb;
    cout<<"rect area "<<rect.area()<<endl;
    cout<<"rectb area "<<rectb.area()<<endl;
    return 0;
}
