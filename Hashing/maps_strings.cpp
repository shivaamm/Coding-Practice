https://ideone.com/3d3ntp

#include <iostream>
#include <algorithm>
#include <map>
#include <string>       // Different than C - string.h or cstring
#include <cstdio>       // stdio.h or cstdio

using namespace std;

int main(){

    int t; cin>>t;
    
    //aabbcc
    // EXP ANS: c 

    while(t--){
        string s; cin>>s;

        map<char, int> freq;
        int mx = 0;
        char mxChar=' ';
        for(int i=0; i<s.size(); i++){

            char c = s[i];
            freq[c]++;

            if(freq[c]>=mx){
                mx = freq[c];
                mxChar = c;
            }
        }
        cout<<mxChar<<"\n";
    }

    return 0;
}


stdin
3
aaabbbcccdddeee
abcaaaaaaaaabbb
abcddddeeefghijkl

stdout
e
a
d

