#include<iostream>
using namespace std;
template<typename t,typename t1>
void swap(t a, t1 b)
{
   t temp=a;
   a=b;
   b=temp;
   cout<<"a is :"<<a<<endl;
   cout<<"b is :"<<b<<endl;
}
int main()
{
    cout<<"For int "<<endl;
    swap<int ,int>(10 ,15);
    cout<<"For string "<<endl;
    swap<string,string>("Eyasin","Bhuiyan");
    cout<<"For double "<<endl;
    swap<double,double>(174.4846474,56.94754);

    return 0;
}
