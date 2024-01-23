#include<iostream>
#include<vector>

using namespace std;
    
int countPrimes(int n){
    int count = 0;

    vector<bool> prime(n+1,true);

    prime[0]=prime[1]=false;

    for(int i=2;i<n;i++){

        if(prime[i]){
            count++;
        
            for(int j=i*2; j<n;j=j+i){
                prime[j]=0;
            }

        }
    }
    return count;
}

int main()
{

    int n;
    cin>>n;
    // here try n=5000000 and see how fast the algorith works
    // its time complexity will be O( n* log(logn)) as it will form HP of prime numbers
    int ans = countPrimes(n);
    cout<<ans;
     
    
return 0;
}