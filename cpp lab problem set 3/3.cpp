#include<iostream>
using namespace std;
class manupulation
{
    public:
      int a;
    public:
        void get()
        {
          cout<<"Enter value of a :";
          cin>>a;
        }
    friend void change_value(manupulation &obj);
    
};
void change_value(manupulation &obj)
{
    int n;
    cout<<"Enter any value :";
    cin>>n;
    obj.a=obj.a+n;
    
   
}

int main()
{
   manupulation obj;
   obj.get();
   cout<<"Previous obj.a : "<<obj.a<<endl;
   change_value(obj);
   cout<<"After add resutl is :"<<obj.a<<endl;
   return 0;
   
}