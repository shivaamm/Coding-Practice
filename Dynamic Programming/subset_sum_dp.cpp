class Solution {
public:
     bool canPartition(vector<int>& nums) 
    {
        int N = nums.size();
        int sum = 0;
        
        for(int i = 0; i < N; i++)
            sum += nums[i];
        
        if(sum % 2 != 0)
            return false;
        
		int M = sum/2;
		
        bool t[N + 1][M + 1];
		
        for(int i = 0; i <= N; i++)
           for(int j = 0; j <= M; j++)
              {
                  if(i == 0)
                    t[i][j] = 0;
                  if(j == 0)
                    t[i][j] = 1;
              }
            for(int i = 1; i <= N; i++)
              for(int j = 1; j <= M; j++)
                {   if(nums[i - 1] <= j)   
                      t[i][j] = t[i - 1][j - nums[i - 1]] || t[i - 1][j]; 
                    else 
                      t[i][j] = t[i - 1][j];
                }
            return t[N][M];
        
    }
};
