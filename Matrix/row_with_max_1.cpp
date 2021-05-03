class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   // int index=0;
	   // int max=INT_MIN;
	   // int temp=0,sum=0;
	   // for(int i=0;i<n;i++)
	   // {
	   //     //int &sum;
	   //      auto sum=accumulate(arr[i].begin(),arr[i].end(),temp);
	   //      //cout<<sum<<endl;
	   //     if(sum>max)
	   //     {
	   //         max=sum;
	   //         index=i;
	   //     }
	   // }
	   // if(max==0)
	   // {
	   //     return -1;
	   // }
	   // return index;
	   
     
     ********************************************************************************************
     
     
	   int i=0;
	    int j=m-1;
	    int row = -1;
	    
	    while(i<n && j>=0)
	    {
	        if(arr[i][j]==0)
	            i++;
	       else
	       {
	           j--;
	           row = i;
	       }
	    }
	    return row;

	}

};
