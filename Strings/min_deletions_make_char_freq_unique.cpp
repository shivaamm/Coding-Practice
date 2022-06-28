class Solution {
public:
    int minDeletions(string s) {
        // create a vector of size 26 to store frequencies of char elements
        vector<int>v(26);
        
        // traverse the entire string s and increment frequency of each char element
        for(auto i:s)
        {
            v[i-'a']++;
        }
        
        // sort the frequencies in descending order to get largest freq in 0th index
        sort(v.begin(),v.end(),greater<int>());
        
        int max=v[0];  // store max freq allowed
        int res=0;
        for(auto freq:v)
        {
            // if this freq is greater than max_allowed_freq
            if(freq>max)
            {
                if(max>0) // reduce the frequency of current element to freq
                    res+=(freq-max);
                else
                    res+=freq;  // smaller than or equal to zero we have to delete
            }
            //each time reducing the max freq allowed for next character frequency
            max=min(max-1,freq-1);  
        }
        return res;
    }
    
};
