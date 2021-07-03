https://practice.geeksforgeeks.org/problems/plus-one/1
https://leetcode.com/problems/plus-one/

Example 1:

Input: 
N = 3
arr[] = {1, 2, 4}
Output: 
1 2 5
Explanation:
124+1 = 125, and so the Output

///////////////////////////////////////////////////////////////////////////  GFG /////////////////////////////////////////////////////////////////////////

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int n) {
       vector<int> res;
       
        int rem=(arr[n-1]+1)/10;
        arr[n-1]=(arr[n-1]+1)%10;
        if(rem == 0)
        {
            return arr;   
        }
        res.push_back(arr[n-1]);
        reverse(arr.begin(), arr.end());
        for(int i=1;i<n;i++)
        {
            if(rem > 0)
            {
                int t=arr[i];
                arr[i]=(arr[i]+rem)%10;
                rem=(t+rem)/10;
               
            }
             res.push_back(arr[i]);
        }
        if(rem!=0)
            res.push_back(rem);
        reverse(res.begin(), res.end());
        return res;
    }
};


///////////////////////////////////////////////////////////////////////////  leetcode  /////////////////////////////////////////////////////////////////////////



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        long int i=n-1;
        while(i>=0 and digits[i]==9){
            digits[i]=0;
            i--;
        }
        if(i==-1){
            digits.insert(digits.begin(),1);
        } else {
            digits[i]++;
        }
        return digits;
    }
};

// Logic : If there are 9 from right in number then make them 0 till non 9 number occur. Once non 9 number occur increase it by one.
// Exception: If all digits of number are 9 then make them 0's and insert 1 to the begining of vector.




///////////////////////////////////////////////////////////////////////////  leetcode  /////////////////////////////////////////////////////////////////////////


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz= size(digits);
        if(digits[sz-1]!=9)
        {
            digits[sz-1]= digits[sz-1]+1;
            return digits;
        }
        vector<int> res;
        int i=(sz-1);
        while(i>=0  &&  digits[i]==9)
        {
            digits[i]= 0;
            i--;
        }
        if(i==-1)
        {
            res.push_back(1);
            for(int it: digits)
            {
                res.push_back(it);
            }
        }
        else
        {
            digits[i]= digits[i]+1;
            for(int it: digits)
            {
                res.push_back(it);
            }
        }
        return res;
    }
};
