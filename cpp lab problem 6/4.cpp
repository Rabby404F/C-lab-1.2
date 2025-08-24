#include<iostream>
using namespace std;
template<class T>
class Box
{
    private:
    T value;
    public:
    set_value(T n)
    {
       value=n;
    }
    get_value()
    {
        cout<<value<<endl;
    }
};
int main()
{
    cout<<"For integer"<<endl;
    Box <int>obj;
    obj.set_value(76);
    obj.get_value();
    
    cout<<"For string "<<endl;
    Box <string> obj1;
    obj1.set_value("Eyasin");
    obj1.get_value();
    
}