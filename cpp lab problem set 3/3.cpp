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
    friend void change_value(manupulation obj);
    
};
void change_value(manupulation obj)
{
    int n;
    cout<<"Enter any value :";
    cin>>n;
    obj.a=obj.a+n;
    cout<<"After add "<<n<<" resutl :"<<obj.a<<endl;
   
}

int main()
{
   manupulation obj;
   obj.get();
   change_value(obj);
   return 0;
   
}