#include<iostream>
using namespace std;
    
int main()
{
    // here 10 is integer and hence pointer should be created of that data-type.
     
    int a = 10;

    int *p = &a;
    cout<< "Value of a is: " << a<<endl;
    cout<< "Value of &a is: " << &a<<endl;
    cout<< "Value of p is: " << p<<endl;
    cout<< "Value of &p is: " << &p<<endl;
    cout<< "Value of *p is: " << *p<<endl;
    
return 0;
}