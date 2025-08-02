#include<iostream>
using namespace std;
class  mean2;
class data_value
{
    public:
    int x,y;
    friend class  mean2;
    data_value()
    {
        cout<<"Enter two numbers : ";
        cin>>x>>y;
    }
  
};
class  mean2
{ public:
        void two_mean(data_value obj)
        {
            float average=(obj.x+obj.y)/2.0;
            cout<<"Mean = "<<average<<endl;
        }
};

int main()
{
data_value obj;
mean2 obj1;
 obj1.two_mean(obj);
return 0;
}