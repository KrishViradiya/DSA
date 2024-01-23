#include<iostream>
using namespace std;
    
bool isPrime(int n){
    if(n<2){
        return 0;
    }

    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }

    return 1;
}

int main()
{
     int n;
     cin >> n;

    int cnt=0;

    for(int i=2;i<n;i++){
        if(isPrime(n)) {
            cnt++;
        }
    }
    // the problem here will be that it will get time limit exceed if the value of n is very large, so we need to optimize the solution more and for that we'll use the concept named sieve of eratosthenes
    // take n=5000000 then try output 
    cout << cnt;


    
return 0;
}