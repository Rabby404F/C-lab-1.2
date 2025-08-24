#include<iostream>
using namespace std;
template <class t1,class t2>
class calculator
{
   private:
    t1 value1;
    t2 value2;
    public:
    calculator(t1 a,t2 b)
    {
      value1=a;
      value2=b;
    }
    void sum()
    {
        cout<<value1+value2<<endl;
    }
    void mul()
    {
        cout<<value1*value2<<endl;
    }
};
int main()
{
    cout<<"For integer :"<<endl;
    calculator <int,int> obj(6,7);
    obj.sum();
    obj.mul();

    cout<<"For float :"<<endl;
    calculator <int,float> obj1(5,7.89f);
    obj1.sum();
    obj1.mul();
}