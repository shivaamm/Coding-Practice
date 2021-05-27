class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        //  int size=__gcd(d,n);
        // d=d%n;
      
        // for(int i=0;i<size;i++){
        //     int temp=arr[i];
        //     int j=i;
        //     while(1){
        //         int k=j+d;
        //         if(k>=n)
        //         k=k-n;
        //         if(k==i)
        //         break;
        //         arr[j]=arr[k];
        //         j=k;
        //     }
        //     arr[j]=temp;
        // }
        
        
        *******************************************************
        
        
         int p,q;
         vector<int>v(arr,arr+n);
            rotate(v.begin(),v.begin()+d,v.end());
            for(int i=0;i<n;i++)
                arr[i]=v[i];
    }
};
