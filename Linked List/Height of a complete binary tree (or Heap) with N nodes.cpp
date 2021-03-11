// CPP program to find height of complete 
// binary tree from total nodes. 
#include <bits/stdc++.h> 
using namespace std; 
  
int height(int N) 
{ 
    return ceil(log2(N + 1)) - 1; 
} 
  
// driver node 
int main() 
{ 
    int N = 6; 
    cout << height(N); 
    return 0; 
} 
