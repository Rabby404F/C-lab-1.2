#include<iostream>
#include<string>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
    {
  string a,b;
  cin>>a>>b;
  int n=a.length();
  int m=b.length();
  if(a==b){cout<<"="<<endl;}
  if(a=="S" && b=="M" )cout<<"<"<<endl;
  else if(a=="M" && b=="S")cout<<">"<<endl;
   if(a=="" && b=="M" )cout<<"<"<<endl;
  else if(a=="M" && b=="S")cout<<">"<<endl;
  else if(a.back()=='S' && b.back()=='S' && n>m){cout<<"<"<<endl;}
  else if(a.back()!='S' && b.back()!='S' &&a.back()==b.back() && n>m){cout<<">"<<endl;}
  else if(n>m){cout<<">"<<endl;}
  else if(n<m){cout<<"<"<<endl;}
    }
}