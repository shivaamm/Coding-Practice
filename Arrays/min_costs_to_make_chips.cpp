class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
         int oddPos = 0;
        for (auto n: position) oddPos += n % 2;
        return min(oddPos, (int)position.size() - oddPos);
        
        
        **************************************************
        
        //  int cnt[2]={};        
        // for(auto p: position) ++cnt[p%2];
        // return min(cnt[0],cnt[1]);       
        
        
        **********************************************
        
        //  int n=position.size();
        // int i;
        // int even=0;
        // int odd=0;
        // for(i=0;i<n;i++){
        //     if(position[i]%2==0)
        //         even++;
        //     else{
        //         odd++;
        //     }
        // }
        // if(even>odd)
        //     return odd;
        // else
        //     return even;
    }
};
