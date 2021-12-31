class Solution {
public:
    int getSum(int a, int b) {
        while(b)             // using XOR
        {
            unsigned c = a&b;
            a ^= b;
            b = c << 1;
        }
        return a;
    }
};
