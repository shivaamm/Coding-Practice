https://leetcode.com/problems/maximum-frequency-stack/

class FreqStack {
public:
//     unordered_map<int,int> freq;
//     unordered_map<int,stack<int>> m;
//     int mxFreq;
//     FreqStack() {
//         mxFreq=0;
//     }
    
//     void push(int x) {
//         freq[x]++;
//         mxFreq=max(mxFreq,freq[x]);
//         m[freq[x]].push(x);
//     }
    
//     int pop() {
//         int ans=m[mxFreq].top();
//         m[mxFreq].pop();
//         freq[ans]--;
//         if(m[mxFreq].size()==0){
//             m.erase(mxFreq);
//             mxFreq--;
//         }
//         return ans;
//     }
    unordered_map<int, int> fmap;
    vector<vector<int>> fstack = {{}};
    
    void push(int x) {
        int freq = fmap[x] + 1;
        fmap[x] = freq;
        if (freq == fstack.size()) fstack.push_back(vector<int>());
        fstack[freq].push_back(x);
    }
    
    int pop() {
        int x = fstack.back().back();
        fstack.back().pop_back();
        if (fstack.back().empty()) fstack.pop_back();
        fmap[x]--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
