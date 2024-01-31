#include<iostream>
using namespace std;

//For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).

// Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

int gcd(int a, int b) {
    return b==0 ? a : gcd(b,a%b);
}

string gcdOfStrings(string str1, string str2) {
    return (str1+str2==str2+str1) ? str1.substr(0,gcd(size(str1),size(str2))) : "";
}
    
int main()
{
    string str1 = "ABCABC", str2 = "ABC";
    cout << gcdOfStrings(str1, str2) << endl;
    
return 0;
}