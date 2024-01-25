#include<iostream>
using namespace std;

int getModularExponention(int x,int n,int m){
     int res=1;
    while(n>0){
        if(n&1){
            res = ( 1LL * (res) * (x%m))%m;
        }
        x = (( 1LL * (x) * (x)%m))%m;
        n=n>>1;
    }
    return res;
}
    
int main()
{
    int x,n,m;
    cout<<"Enter three numbers:(x^n)%m : ";
    cin>>x>>n>>m;
    int res = getModularExponention(x,n,m);
    cout<<"Result = "<<res;
    
return 0;
}