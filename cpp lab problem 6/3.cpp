#include<iostream>
using namespace std;
template<typename t=double, typename t1=double>
t add(t a,t1 b)
{
  t sum=a+b;
  return sum;
}

int main()
{
    cout<<"For integer :"<<endl;
    cout<<add<int,int>(5,6)<<endl;
    cout<<"For float :"<<endl;
    cout<<add<float,float>(5.77f,6.66f)<<endl;
    cout<<"For default :"<<endl;
    cout<<add(4.686686768,6.4957857585)<<endl;
}