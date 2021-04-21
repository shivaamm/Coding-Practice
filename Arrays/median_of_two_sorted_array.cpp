class Solution {
public:
    double findMedianSortedArrays(vector<int>& array1, vector<int>& array2) {
        int m=array1.size();
    int n=array2.size();
    int z=m+n;
    vector<int> arr3(m+n);
    
    sort(array1.begin(), array1.end());
    sort(array2.begin(), array2.end());
    
    merge(array1.begin(), array1.end(), array2.begin(), array2.end(), arr3.begin());
    
    int ss=arr3.size();
    // for (int i = 0; i < ss; i++)
    //     cout << arr3[i] << " ";
    if(z%2!=0)
        return arr3.at(ss/2);
    else
        return (double) (arr3.at((ss-1)/2) + arr3.at(ss/2))/2;
    }
};
