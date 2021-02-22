#include<bits/stdc++.h>

using namespace std;

int firstIndex(int input[], int size, int x, int currIndex){
    if(size==currIndex){
        return -1;
    }

    if(input[currIndex] == x){
        return currIndex;
    }

    return firstIndex(input,size,x,currIndex+1);
    
}

int main(){
    int input[] = {9,8,10,8};
    int x = 8;
    int size = 4;

    cout<<firstIndex(input,size,x,0);

    return 0;
}
