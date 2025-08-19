#include<iostream>
using namespace std;
class printer
{
    public:
    void print(int x)
    {
        cout<<"Number is : "<<x<<endl;
    }
    void print(double y)
    {
        cout<<"Double value is : "<<y<<endl;
    }
};
class Advanceprinter: public printer
{
    public :
     
    void print(string s)
    {
        cout<<"String is : "<<s<<endl;
    }
};
int main()
{
    Advanceprinter obj;
    obj.print(10);
    obj.print(33.33);
    obj.print("Eyasin");
}
