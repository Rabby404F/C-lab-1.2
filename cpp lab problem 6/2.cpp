#include<iostream>
using namespace std;
template <typename t>
void display_array(t arr[],int size)
{
   for(int i=0;i<size;i++)
   {
    cout<<arr[i]<<" ";
   }
}
int main()
{   cout<<"For integer array :"<<endl;
    int arr[5]={6,5,9,2,7};
    
    display_array<int>(arr,5);

     cout<<"For double :"<<endl;
    double arr1[5]={4.777,7.888,9,2.76567,7.7777};
    
      display_array<double>(arr1,5); 
      return 0;
}