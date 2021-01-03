https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/a-game-of-numbers-1-5d3a8cb3/

#include<bits/stdc++.h>
using namespace std;

   // Complete the function program
vector<long long> solution (vector<long long> A) {
   int i,j,k,x,top=0,flag,flag1;
   vector<long long> res(A.size());

   for(i=0;i<A.size();i++)
   {
      flag=0,flag1=0;
      for(j=i+1;j<A.size();j++)
      {
         if(A[j]>A[i])
         {
            flag=1;
            x=A[j];
            break;
         }
      }
      if(flag==1)
      {
         for(k=j+1;k<A.size();k++)
         {
            if(A[k]<x)
            {
               flag1=1;
               res[top++]=A[k];
               break;
            }
         }
            if(flag1!=1)
            {
               res[top++]=-1;
            }
      }
      else
         {
            res[top++]=-1;
         }
      
   }
   return res;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    vector<long long> out_;
    out_ = solution(A);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}
