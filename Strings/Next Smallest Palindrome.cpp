class Solution{
public:
  vector<int> generateNextPalindrome(int num[], int n) {
   int i=n/2,j=n/2;
   vector<int>v(n);
   for(int x=0; x<n; x++) v[x]=num[x];
   if((n&1)==0) i--;
   while(i>=0){
     if(v[j]>v[i]) break;
     if(v[i]>v[j]){
         while(i>=0){
             v[j]=v[i];
             i--,j++;
         }
         return v;
     }
     i--,j++;
   }
   i=n/2,j=n/2;
   if((n&1)==0) i--;
   while(i>=0){
       if(num[i]!=9){
           if(num[j]>=num[i]) num[i]++;
           while(i>=0){
               num[j]=num[i];
               j++,i--;
           }
           for(int x=0; x<n; x++) v[x]=num[x];
           return v;
       }
       else{
           num[i]=0; num[j]=0;
           i--,j++;
       }
   }
   vector<int>ans(n+1,0);
   ans[0]=1, ans[n]=1;
   return ans;
}

};
