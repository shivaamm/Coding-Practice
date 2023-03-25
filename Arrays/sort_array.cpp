class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        priority_queue<int,vector<int>, greater<int>> pq;
        for(int i =0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        vector<int> vec;
        while(!pq.empty())
        {
            vec.push_back(pq.top());
            pq.pop();
        }
        return vec;
    }
};


*******************************************************************************************

class Solution {
public:

    void Merge(vector<int>& arr,int left,int mid,int right){

        if(left>=right){
            return;
        }

        int len=right-left+1;
        vector<int> temp(len,0);
        int i=left;
        int j=mid+1;
        int k=0;

        while(i<=mid && j<=right){

            if(arr[i]<arr[j]){
                temp[k++]=arr[i++];
            }

            else{
                temp[k++]=arr[j++];
            }
        }

        while(i<=mid){
            temp[k++]=arr[i++];
        }

        while(j<=right){
            temp[k++]=arr[j++];
        }

        for(k=0;k<len;k++){
            arr[k+left]=temp[k];
        }

    }

    void MergeSort(vector<int>& arr,int left,int right){

        if(left>=right){
            return;
        }

        int mid=(left+(right-left)/2);
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);
        Merge(arr,left,mid,right);

    }

    vector<int> sortArray(vector<int>& nums) {
        // Using Merge Sort to Sort the array 
        // Time Complexity --> O(nlogn) 
        // Space Complexity --> O(n)
        int left=0;
        int right=nums.size()-1;
        MergeSort(nums,left,right);
        return nums;
    }
};
