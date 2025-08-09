#include<iostream>
using namespace std;

class data_value; // শুধু নাম ঘোষণা

class area_finder
{
  public:
    void aree(data_value obj); // ডিক্লারেশন আগে দিলাম
};

class data_value
{
  public:
    int x,y;

    data_value()
    {
      cout << "Enter Height and Width: ";
      cin >> x >> y;
    }
    friend void area_finder::aree(data_value obj); // এখন কম্পাইলার জানে aree আছে
};

void area_finder::aree(data_value obj)
{
    int r = obj.x * obj.y;
    cout << "Area of the rectangle is: " << r << endl;
}

int main()
{
    data_value obj;
    area_finder obj2;
    obj2.aree(obj);
    return 0;
}
