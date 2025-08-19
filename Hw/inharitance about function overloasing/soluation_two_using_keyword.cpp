#include<iostream>
using namespace std;
class base_class
{
    public:
    void number()
    {
        cout<<"This is a Function about Number!"<<endl;
    }
    void number(int a)
    {
      cout<<"Number is : "<<a<<endl;
    }
    void number(int a,int b)
    {
        cout<<"Sum is : "<<a+b<<endl;
    }
};
class derived_class : public base_class
{
  public:
  
            using base_class ::number;

  void number(int x,int y)
  {
    cout<<"2 Number product is : "<<x*y<<endl;
  }
};
int main()
{
    derived_class obj;
    
    obj.number();
    obj.number(10);
    obj.number(99,99);
}