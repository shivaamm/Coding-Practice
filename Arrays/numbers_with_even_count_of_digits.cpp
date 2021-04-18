class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0,res=0;
        for(int i=0;i<nums.size();i++)
        {
            int number=nums[i];
            while (number > 0)
            {
                int digit = number%10;
                number /= 10;
                count++;
                
            }
            if(count%2==0)
                {
                    res++;
                }
            count=0;
        }
        
        return res;
        
        *************************************************
            
            // int count=0;
            // for(int i=0;i<nums.size();i++)
            // {
            //     string s = to_string(nums[i]);   // to_string is used to convert the int to string
            //     if(s.length()%2==0){count++;}
            // }
            // return count;
    }
};
