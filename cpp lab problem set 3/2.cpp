#include<iostream>
using namespace std;
class result
{
    public:
    int a,b,c,d;
    result()
    {
        cin>>a>>b;
    }
    result(int x ,int y)
    {
      c=x;
      d=y;
    }
    friend void average();
};
void average(result obj,result obj2)
{
   int arr[4]={obj.a,obj.b,obj2.c,obj2.d};
   for(int i=0;i<4;i++)
   {
     for(int j=i+1;j<4;j++)
     {  if(arr[j]>arr[i])
        {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
     }
   }
   int sum=0;
   for(int i=0;i<3;i++)
   {
    sum=sum+arr[i];
   }
   float average=sum/3.0;
   cout<<average<<endl;
}
int main()
{
    result obj;
    int x,y;
    cin>>x>>y;
   result obj2(x,y);
    average(obj,obj2);
    
    return 0;

}