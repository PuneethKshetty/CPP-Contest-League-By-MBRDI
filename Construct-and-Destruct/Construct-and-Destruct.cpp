#Learn concepts about constructor and destructor in a single file

#include <iostream>
using namespace std;
class Base{
public:
    Base(){
        cout<<"Base construct\n";
    }
~Base(){
        cout<<"Base Destruct\n";
    }
     void show(){
      cout<<"Hi\n";
  }
    //Base(const Base& b){
       // cout<<"Copy Base construct\n";
    //}
};
class Derived: public Base{
public:
    Derived(){
        cout<<"Derived construct\n";
    }
~Derived(){
        cout<<"Derived Destruct\n";
    }
};
int main()
{
    cout<<"\n===========Direct assign===========\n";
    Derived d;
    Base b;
 
    cout<<"\n===========Other object assign===========\n";
    Base b0 = d; // Slicing 
    // Derived d1;
    // Base b1 = d1; // Slicing
 
    // cout<<"\n===========Reference assign===========\n";
    // Base* ptr = &d;
    // ptr->show();
    // Derived d2;
    // Base* ptr1 = &d2;
 
    // cout<<"\n===========Destructors===========\n";
    return 0;
}
