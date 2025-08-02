#include<iostream>
using namespace std;
class number
{
    public:
      int a;
    public:
        void get()
        {
          cout<<"Enter a number : ";
          cin>>a;
        }
    friend void add_value(number obj);
    
};
void add_value(number obj)
{
    
    obj.a=obj.a+6;
    cout<<"After add "<<6<<" resutl :"<<obj.a<<endl;
   
}

int main()
{
   number obj;
   obj.get();
   add_value(obj);
   return 0;
   
}