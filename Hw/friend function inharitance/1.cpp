#include <iostream>
using namespace std;

class Base_class {
    private:
        int a;
    protected:
        int b;
    public:
       void  Base(int x, int y) 
        { a = x; b = y; }

   
    friend void showBase(Base_class obj);
};

void showBase(Base_class obj) {
    cout << "Private a = " << obj.a << endl;  // Access allowed
    cout << "Protected b = " << obj.b << endl;
}


class Derived_class : public Base_class {
private:
    int c;
public:
    void get()
    {
        cin>>c;
    }
    void show()
    {
        cout<<c<<endl;
    }
  // friend void showDerived(Derived_class obj);
};
/*
void showDerived(Derived_class obj) {
   
    cout << "Private c = " << obj.c << endl;
}*/

int main() {
    Base_class obj1;
    Derived_class obj2;
    obj1.Base(9,2);
    obj2.get();
    obj2.show();

    showBase(obj1);    
   // showDerived(obj2);  
}