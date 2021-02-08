https://leetcode.com/problems/shortest-distance-to-a-character/

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ioc; // vector for storing the indexed of c present in s
        int n=s.length();
        
        vector<int>ans(n); // answer vector
        
        for(int i=0;i<n;++i){
            if(s[i]==c) 
                ioc.push_back(i);
        }
        
        int m=ioc.size(); // size of ioc vector
        int left=0,right=0;
        
        for(int i=0;i<n;++i){
            
            // if current index has crossed ioc[right] then,
            // we need to make the current left to right and 
            // increment current right for pointing to next index of ioc vector ( if exists )
            if(i>ioc[right]){
                left=right;
                if(right<m-1)
                    ++right;
            }
                        
            // difference = min(abs(right nearest 'c' - curr index),abs(left nearest 'c' - curr index))
            ans[i]=min(abs(ioc[right]-i),abs(ioc[left]-i)); 

        }
        
        return ans;
    }
};



// EXPLANATION

//     First, iterate the string 's' and store the indexes of 'c' present in 's' into an array or vector ( here vector<int>ioc ) .
//     Make a left variable for storing the index of left nearest 'c' in ioc and a right variable for storing the index of right nearest 'c' in ioc. Initially, left=0 and right=0, that is keeping the first index of ioc.
//     Then, iterate string 's' again and at each iteration check if current index crosses ioc[right] ( that is index of 'c' present in ioc pointed by right ) then we need to make left = right and right=right+1.
//     Also, at each iteration find the minimum value between the following two and store it in ans[i].
//         absolute value of (right nearest 'c' - current index) represented by abs(ioc[right]-i)
//         absolute value of (left nearest 'c' - current index) represented by abs(ioc[left]-i)
//     Return ans.
