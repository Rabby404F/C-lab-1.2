#include<iostream>
using namespace std;
class complex
{
    private:
    int real,imaginary;
    public:
    complex(int x,int y)
    {
      real=x;
      imaginary=y;
    }
    complex operator * (complex& obj)
    {
        complex temp(0,0);
        temp.real = real * obj.real;
        temp.imaginary = imaginary * obj.imaginary;
        return temp;
    }

    void display()
    {
        cout<<"Real part : "<<real<<endl;
        cout<<"imaginary part : "<<imaginary<<endl;
    }
};
int main()
{
    complex obj1(5,7),obj2(9,2),obj(0,0);
    obj=obj1*obj2;
    obj.display();
    
    
}