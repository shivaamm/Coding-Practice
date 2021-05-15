class Solution {
  public:
    int commonSubseq(string S1, string S2){
        int freq[256]={0};
        for(int i=0;i<S1.size();i++)
          freq[S1[i]]++;
        for(int i=0;i<S2.size();i++)
        {
            if(freq[S2[i]]!=0)
             return 1;
        }
        return 0;
        
        
        ****************************************************************
        
        
        int f[26] = {0};
        for (int i=0;i<S1.length();i++)
            f[S1[i]-'A'] = 1;
            
        for (int i=0; i<S2.length();i++)
            if(f[S2[i]-'A'] == 1) return 1;
            
        return 0;
        
        
        
    }
};

Input: S1 = "ABEF" , S2 = "CADE"
Output: 1
Explanation: "A", "E", "AE" are in 
both S1 and S2.
