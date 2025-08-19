#include<iostream>
using namespace std;
class Box
{   protected:
    int length,width,height;
    public:
    Box()
    {
        length=1;
        width=1;
        height=1; 
    }
    Box(int x)
    {
        length=x;
        width=x;
        height=x;
    }
    Box(int x,int y,int z)
    {
        length=x;
        width=y;
        height=z;
    }
    void display()
    {
        cout<<"Cube value is : "<<length*width*height<<endl;
    }
};
int main()
{
    Box obj;
    obj.display();

    Box obj2(5);
    obj2.display();

    Box obj3(5,7,9);
    obj3.display();


}
