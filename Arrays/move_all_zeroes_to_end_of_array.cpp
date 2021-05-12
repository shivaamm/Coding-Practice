class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    
	    int j = 0;
	    for(int i=0;i<n;i++) {
	        if(arr[i] != 0) {
	            swap(arr[i], arr[j]);
	            j++;
	        }
	    }
	    
      
      ************************************
      
	   // vector<int>v;
	   // int count=0;
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(arr[i]==0)
	   //         count++;
    //         else
    //             v.push_back(arr[i]);
	   // }
	   // sort(v.begin(), v.end());
	   // for(int i=0;i<count;i++)
	   // {
	   //     v.push_back(0);
	   // }
	   // for(int i = 0; i < n; ++i)
    //         cout << v[i] << ' ';
    //     cout<<endl;
    
     ****************************************************
    
    
    //     int i,c=0;
    //         for(i=0;i<n;i++){
	   //     if(a[i] == 0){
	   //         c++ ;
	   //     }
	   //     else{
	   //         cout << a[i] << " " ;
	   //     }
	   // }
	   // for(i=0;i<c;i++){
	   //     cout << "0 " ;
	   // }
	   // cout << endl ;
	}
};
