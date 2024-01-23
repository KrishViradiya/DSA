#include<iostream>
using namespace std;

void getGcd(int a,int b){
    if(a ==0 || b == 0){
        cout<<"GCD = "<<a;
        return;
    }

     while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    cout<<"GCD = "<<a;
}    

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

     getGcd(a,b);
   
    
return 0;
}