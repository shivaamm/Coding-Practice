class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> v;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
                v.push_back(A[i]);
        }
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2!=0)
                v.push_back(A[i]);
        }
        return v;
    }
};

************************************************************ 3 different wayss *****************************************************



 // sort(A.begin(), A.end(), [](int i, int j){return (i&1) < (j&1);});
 //        return A; 


 // partition(A.begin(), A.end(), [](int x){ return (x&1) == 0; }); 
 //        return A; 


// partition(A.begin(),A.end(),[](int x) {return x%2==0;});
//         return A;
