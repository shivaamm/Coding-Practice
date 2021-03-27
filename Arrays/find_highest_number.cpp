class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int max=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        return max;
    }
};

