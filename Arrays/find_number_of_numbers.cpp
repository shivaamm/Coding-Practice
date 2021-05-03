int num(int a[], int n, int k)
{
     int ans=0,x,q,r;
     for(int i=0;i<n;i++){
         x=a[i];
         while(x!=0){
             r=x%10;
             x=x/10;
             if(r==k) ans++;
         }
     }
     return ans;
}
