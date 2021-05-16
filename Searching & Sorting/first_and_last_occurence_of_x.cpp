vector<int> find(int arr[], int n , int x )
{
    
    int first = -1;
    int last = -1;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(arr[i]==x && first==-1){
            first = i;
        }
        if(arr[i]==x && first!= -1){
            last = i;
        }
    }
    v.push_back(first);
    v.push_back(last);
    
    return v;
    
    
    ********************************************************************************************
      
    
    // int mid, low=0,high=n-1;
    // bool flag=false;
    // vector<int> ans;
    // while(low<=high)
    // {
    //     mid= low+ (high-low)/2;
    //     if(a[mid]==x)
    //     {
    //         flag=true;
    //         break;
    //     }
    //     if(a[mid]<x)
    //     {
    //         low=mid+1;
    //     }
    //     else
    //     {
    //         high=mid-1;
    //     }
    // }
    // if(flag==false)
    // {
    //     ans.push_back(-1);
    //     ans.push_back(-1);
    //     return ans;
    // }
    // low=mid,high=mid;
    // while(a[low]==x)
    // {
    //     low--;
    // }
    // while(a[high]==x)
    // {
    //     high++;
    // }
    // ans.push_back(low+1);
    // ans.push_back(high-1);
    // return ans;
}
