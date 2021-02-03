https://ideone.com/FJ7C0E

#include <iostream>
#include <algorithm>
#include <map>  
#include <cctype>       // ctype.h - isspace
#include <string>       // Different than C - string.h or cstring
#include <cstdio>       // stdio.h or cstdio

using namespace std;

int main(){

    int t; 
    scanf("%d\n", &t); // To get rid of \n after first line

    while(t--){
        string s; 
        getline(cin, s);
        
        map<string, int> freq;

        int st=0, end=0;
        int IN=0;
        for(int i=0;i<s.size();i++){
            if(isspace(s[i])){
                if(IN==1){
                    end = i-1;
                    // st to end there is a word
                    freq[s.substr(st, end-st+1)]++;
                    IN = 0;
                }
            }
            else{
                if(IN!=1)
                {
                    IN = 1;
                    st = i;
                }
            }
        }
        
        if(IN==1){
            freq[s.substr(st, end-st+1)]++;
        }

        // if we print C++ string using printf %s we need to convert it to C string.
        // c++str.c_str()
        for(auto stringIntPair : freq){
            //cout<<stringIntPair.first<<" "<<stringIntPair.second<<"\n";
            printf("%s %d\n", stringIntPair.first.c_str(), stringIntPair.second);
        }

    }

    return 0;
}
