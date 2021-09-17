
Problem Statement 2 Solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main() {
    long n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }  
    long count=0; 
    for(int i=0;i<n;i++)
    {
        if(i+1==arr[i])
        {
            if(i!=n){
                swap(arr[i],arr[i+1]);
                count++;
                }
            else{
                swap(arr[n-1],arr[n-2]);
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
