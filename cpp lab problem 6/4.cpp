#include<iostream>
using namespace std;
template<class T>
class Box
{
    private:
    T value;
    public:
    void set_value(T n)
    {
       value=n;
    }
    T get_value()
    {
        return value;
    }
};
int main()
{
    cout<<"For integer"<<endl;
    Box <int>obj;
    obj.set_value(76);
    cout<<obj.get_value()<<endl;
    
    cout<<"For string "<<endl;
    Box <string> obj1;
    obj1.set_value("Eyasin");
    cout<<obj1.get_value()<<endl;
    
}