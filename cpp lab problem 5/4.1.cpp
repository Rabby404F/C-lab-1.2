#include<iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;
public:
    Complex()   
    {
        real = 0;
        imaginary = 0;
    }

    Complex(int x, int y)   
    {
        real = x;
        imaginary = y;
    }

    Complex operator * (Complex& obj)   
    {
        Complex temp;
        temp.real = real * obj.real;
        temp.imaginary = imaginary * obj.imaginary;
        return temp;  
    }

    void display()
    {
        cout << "Real part : " << real << endl;
        cout << "Imaginary part : " << imaginary << endl;
    }
};

int main()
{
    Complex obj1(5, 7), obj2(9, 2), obj;
    obj = obj1 * obj2;
    obj.display();
}
