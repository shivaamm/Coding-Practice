class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        int a[100001] = {0};
        vector<int> ans;
        for(int i=0; i<v1.size(); i++){
            a[v1[i]]++;
            
        }
        for(int i=0; i<v2.size();i++){
            if(a[v2[i]]> 0){
            ans.push_back(v2[i]);
            a[v2[i]]--;
            }
        }
            sort(ans.begin(), ans.end());
            return ans;
    }
};

more solutions - https://practice.geeksforgeeks.org/viewSol.php?subId=fdab3f3b14784eb0b7b882f878e1b93c&pid=701733&user=shivaamm
