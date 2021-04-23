// Explanation
// a XOR b = c, we know the values of a and c. we use the formula to find b -> a XOR c = b

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        //  vector<int> res;
        // res.push_back(first);
        // for(int i = 0; i < encoded.size(); i++)
        //     res.push_back(res[i] ^ encoded[i]);
        // return res;
        
         encoded.insert(encoded.begin(),first);
        for(int i = 1; i < encoded.size(); i++)
        {
            encoded[i] = encoded[i-1]^encoded[i];
        }
        return encoded;
    }
};

