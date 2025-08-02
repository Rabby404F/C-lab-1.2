#include<iostream>
using namespace std;
class area_finder;
class data_value
{  public:
   int x,y;
   friend class area_finder;
    public:
    data_value()
    {
      cout<<"Enter Height and Weidth : ";
      cin>>x>>y;
    }
    
};
class area_finder
{
  public:
    void aree(data_value obj)
    {
        int r=obj.x*obj.y;
        cout<<"Area Of the ractagle is : "<<r<<endl;
    }
};

int main()
{
data_value obj;
area_finder obj2;
obj2.aree(obj);

return 0;


}