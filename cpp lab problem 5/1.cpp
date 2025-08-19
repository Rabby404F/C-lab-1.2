#include<iostream>
using namespace std;

class shape
{
    protected:
    int side;
    public:
    void area(int side)
    {
        int squre=side*side;
        cout<<"squre is: "<<squre<<endl;
    }
};
class ractangle: public shape
{
    public:
    

    void area(int length, int width)
    {
        int ractangle_area=length*width;
        cout<<"ractangle area is : "<<ractangle_area<<endl;
    }
};
int main()
{
    ractangle obj;
    obj.shape::area(5);
    obj.area(10,10);
}