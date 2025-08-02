#include<iostream>
using namespace std;
class result
{
    public:
    int a,b,c,d;
    public:
    result()
    {
        cin>>a>>b;
    }
    result(int x ,int y)
    {
      c=x;
      d=y;
      
    }
   void average(result obj1,result obj2)
{
   int arr[4]={obj1.a,obj1.b,obj2.c,obj2.d};
   
   int lowest=arr[0];
    for(int i=1;i<4;i++)
        {
            if(arr[i]<lowest)
            {
                lowest=arr[i];
            }
        }
   
   
   int sum=0;
   
    
   for(int i=0;i<4;i++)
   {
    sum=sum+arr[i];
     
   }
   
   float average=(sum-lowest)/3.0;
   cout<<average<<endl;
}
};

int main()
{   
    result obj1;
    int x,y;
    cin>>x>>y;
   result obj2(x,y);
    obj1.average(obj1,obj2);
    
    return 0;

}