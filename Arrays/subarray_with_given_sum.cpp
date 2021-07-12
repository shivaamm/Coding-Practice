class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        vector<int>v;
       int i=0,j=0,sum=0,t=0;
        while(j<=n)
        {   
            if(sum<s)
             {
                sum=sum+arr[j];   
                j++;
             }
            else if(sum>s)
            {   
                sum=sum-arr[i];
                i++;
            }
            if(sum==s)
             {
                 t++;   
                 break;
             }
        }
        if(t>0){
            v.push_back(i+1);
            v.push_back(j);   //  cout<<i+1<<" "<<j;
        }
        else
            v.push_back(-1);  //cout<<-1;
            
        return v;
    }
};
