class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // int k=0, n=array.size()-1;
        // for(int i=0; i<=n; i++){
        //     if(array[i]<a){
        //         swap(array[i],array[k++]);
        //     }
        //     else if(array[i]>b){
        //         swap(array[i--],array[n--]);
        //     }
        // }
        
        
      
        
        int low = 0;
        int high = array.size()-1;
        int i=0;
        while(i<=high)
        {
            if(array[i]<a)
            {
                swap(array[i],array[low]);
                i++;
                low++;
            }
            else if(array[i]>b)
            {
                swap(array[i],array[high]);
                high--;
            }
            else
            {
                i++;
            }
        }
    }
};


// vector<int> threeWayPartition(vector<int> a, int lowVal, int highVal){
//     vector<int> low, equal, greater;
//     int i;
//     for(i = 0; i < a.size(); ++i){
//         if(a[i] < lowVal){
//             low.push_back(a[i]);
//         }
//         else if(a[i] >= lowVal && a[i] <= highVal){
//             equal.push_back(a[i]);
//         }
//         else if(a[i] > highVal){
//             greater.push_back(a[i]);
//         }
//     }
//     vector<int> ans;
//     for(i = 0; i < low.size(); ++i){
//         ans.push_back(low[i]);
//     }
//     for(i = 0; i < equal.size(); ++i){
//         ans.push_back(equal[i]);
//     }
//     for(i = 0; i < greater.size(); ++i){
//         ans.push_back(greater[i]);
//     }
//     return ans;
// }
