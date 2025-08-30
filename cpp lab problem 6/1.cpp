#include<iostream>
using namespace std;
template<typename t>
void swap(t a, t b)
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
    swap<int>(10 ,15);
    cout<<"For string "<<endl;
    swap<string>("Eyasin","Bhuiyan");
    cout<<"For double "<<endl;
    swap<double>(174.4846474,56.94754);

    return 0;
}
