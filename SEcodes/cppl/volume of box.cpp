#include<iostream>
using namespace std;
 
class Box{
    private:
    int length;
    int breadth;
    int height;
 
    public:
    Box(){
        length = breadth = height = 0;
    }
 
    Box(int l , int b , int h)
    {
        length = l;
        breadth = b;
        height = h; 
    }
 
    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }
 
    int getHeight()
    {
        return height;
    }
 
    long long volume()
    {
        return length*breadth*height;
    }
  
};
 
int main()
{
    Box b1();
    Box b2(10,2,3);
    b2.getLength();
    b2.getBreadth();
    b2.getHeight();
    cout<<"Volume of given box is: "<<b2.volume();
    return 0;
}

