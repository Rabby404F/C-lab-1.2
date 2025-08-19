#include<iostream>
using namespace std;
template<typename t>
class ICE
{
    private :
    t a;
    public:
    ICE(t var)
    {a=var;}
   t get();
    
};
template<typename t>
 t ICE <t>::  get()
    {
        return a;
    }
int main()
{
    ICE <int> obj(10);
    cout<<obj.get()<<endl;
    ICE <string> obj2("Eyasin");
    cout<<obj2.get()<<endl;
}