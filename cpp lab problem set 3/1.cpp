#include<iostream>
using namespace std;
class calculation
{  public:
    int a,b,c,d,sum,rem,dev;
    calculation()
    {   cout<<"This is constructor !"<<endl;
        cout<<"Enter Distance_1 : "<<endl;
        cout<<"\t"<<"Enter value of feets : ";
        cin>>a;
        cout<<"\t"<<"Enter value of inches : ";
        cin>>b;
         cout<<"Enter Distance_2 : "<<endl;
        cout<<"\t"<<"Enter value of feets : ";
        cin>>c;
        cout<<"\t"<<"Enter value of inches : ";
        cin>>d;

      
    }
    ~calculation()
    {
     cout<<"This is distructor !"<<endl;
     sum=a+c;
     dev=(b+d)/12;
     rem=(b+d)%12;
     sum=sum+dev;
     cout<<"Feet :"<<sum<<endl;
     cout<<"Inches : "<<rem<<endl;



    }
};
    int main()
    {
        calculation obj;

        return 0;

    }

