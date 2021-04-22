class Solution{
public:
    int maxNumbers(int n, int k, int arr[]){
        sort(arr,arr+n);
       long long sum=0;
       int c=0;
       int j=1;
       while(sum<=k)
       {
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(j==arr[i])
                {flag=1;break;}
                if(j<arr[i])
                    break;
        }
        if(flag==0)
            {
                c++;
                sum+=j;
            }
           j++;
       }
      return c-1;
    }
};

***********************************************************************************

void coins(int a[],int n,int k)
{
    int i=1,count=0,j=0,s=0;
    
    sort(a,a+n);
    
    while(s<=k)
    {
        if(i!=a[j])
        {
            count++;
            i++;
            s=s+i;
        }
        else if(i==a[j])
        {
            i++;
            j++;
        }
    }
    
    cout<<count<<endl;
}
