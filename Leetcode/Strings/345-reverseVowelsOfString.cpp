    #include<iostream>
    #include<vector>
    #include<algorithm>

    using namespace std;

// Source: https://leetcode.com/problems/reverse-vowels-of-a-string/
    string reverseVowels(string s) {
        vector<char> vow;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'|s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
            {
                vow.push_back(s[i]);
            }

        }

        reverse(vow.begin(),vow.end());
        int p=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'|s[i]  =='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
            {
                s[i]=vow[p];
                p++;
            }

        }
        return s;
    }

    int main()
    {
        string s="hello";
        cout<<reverseVowels(s);
        return 0;
    }