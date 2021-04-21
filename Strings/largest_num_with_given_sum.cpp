string max(int n,int s){
    if(s>9*n){
        return "-1";
    }
    if(s==0){
        return to_string(0);
    }
    string res="";
    for(int i=0;i<n;i++){
        if(s>=9){
            res=res+'9';
            s=s-9;
        }
        else{
            res=res+to_string(s);
            s=0;
        }
    }
    return res;
}

******************************************************************************
******************************************************************************

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        string s(n,'0');
        for(int i=0;i<n;i++)
        {
            if(sum>=9)
            {
                s[i]='9';
                sum-=9;
            }
            else
            {
                s[i]=sum+'0';
                sum=0;
            }
        }
        if(sum>0)
        return "-1";
        return s;
        
        
        // vector<int>v;
        // // memset(&v[0], 0, v.size() * sizeof v[0]);
        // int res=0;
         
        
        // if(sum>9)
        //     v.push_back(9); 
            
        // for(int i=0;i<n;i++)
        // {
        //     if(sum>9)
        //     {
        //         res=sum-9;
        //         if(res<9)
        //         {
        //             v.push_back(res);
        //         }
        //         else{
        //           v.push_back(9);
        //         }
        //     }
        //     // else{
        //     //     v.push_back(0);
        //     // }
        //     sum=res;
        // }
        
        // int count=0;
        // for (auto it = v.begin(); it != v.end(); ++it)
        //     {
        //         // cout << *it;
        //         count++;
        //     }
        //     // cout<<"  "<<count;
        //     int rem=n-count;
        //     for(int i=0;i<rem;i++)
        //     {
        //         v.push_back(0);
        //     }
        //     if(n*9<sum) 
        //         cout<<"-1";
        //     else{
        //         for (auto it = v.begin(); it != v.end(); ++it)
        //         {
        //             cout << *it;
                    
        //         }
        //     }
    }
};
**************************************************************************************************************

**************************************************************************************************************

using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s,k;
	    cin>>n>>s;
	    int arr[n],j;
	    if(9*n<s)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        for(int i=0;i<n;i++)
	        {
	            for(j=9;j>=0;j--)
	            {
	                int k=s-j;
	                if(k>=0)
	                {
	                    arr[i]=j;
	                    break;
	                }
	            }
	             s=s-j;
	        }
	        for(int p=0;p<n;p++)
	        {
	            cout<<arr[p];
	        }
	        cout<<endl;
	        
	    }
	}
	return 0;
}
