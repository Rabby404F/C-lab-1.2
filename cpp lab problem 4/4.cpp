#include<iostream>
using namespace std;
class data_value
{
    protected:
    int a;
    public:
    void set()
    {
        cout<<"Input value of a :";
        cin>>a;
    }
    int save_value()
    {
        return a;
    }
};
class squre : public data_value
{  
    public:
    void sq( )
    {
        cout<<"Squre is : "<<a*a<<endl;
    }

};
class cube : public data_value
{
    public:
    void cb(squre obj)
    {   int r=obj.save_value();
        
        cout<<"Cube is : "<<r*r*r<<endl;
    }
};
int main()
{
    
    

    squre obj;
    obj.set();
    obj.sq();

    cube obj2;
    obj2.cb(obj);
}
