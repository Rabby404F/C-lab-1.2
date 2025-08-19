#include<iostream>
using namespace std;
template<typename t,typename t2>
class show
{
    private:
    t a;
    t2 b;
    public:
       show(t x,t2 y)
       {
           a=x;
           b=y;
       }
       void get()
       {
        cout<<a<<endl;
        cout<<b<<endl;
       }
       
};
int main()
{
    show <int,string>obj(10,"Eyasin");
    obj.get();

}
