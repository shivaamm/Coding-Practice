vector<int> formatArray(vector<int> a,int n)
{
    // int temp=0;
    // for(int i =0; i+1<n;i+=2)
    //     if(a[i]>a[i+1])
    //     {
    //         temp=a[i];
    //         a[i]=a[i+1];
    //         a[i+1]=temp;
    //     }
    // return a;
    
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            if(a[i-1]>a[i])
            {
                swap(a[i-1],a[i]);
            }
        }
        
    }
    return a;
}
