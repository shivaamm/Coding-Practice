class Solution{
public:
    int isPossible(int n, int a[]){
        long long int b,c,sum=0,tot=0;
        for(int i=0;i<n;i++)
	     {
	         while(a[i]!=0)
	         {
	              b=a[i]%10;
	              c=a[i]/10;
	              a[i]=c;
	              sum+=b;
	         }
	         tot+=sum;
	     }
	     if(sum%3==0)
	        return 1;
        else
            return 0;
    }
};
