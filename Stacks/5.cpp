Question - https://leetcode.com/problems/baseball-game/

Solution-
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0;
        vector<int> rec;
        for (int i = 0; i < ops.size(); ++i)
        {
            if (ops[i] == "D") {
                rec.push_back(rec[rec.size()-1] * 2);
            }
            else if (ops[i] == "C") {
                rec.pop_back();
            }
            else if (ops[i] == "+") {
                rec.push_back(rec[rec.size()-1] + rec[rec.size()-2]);
            }
            else {
                rec.push_back(stoi(ops[i]));
            }
        }
        for (int i = 0; i < rec.size(); ++i) {
            sum += rec[i];
        }
        return sum;
    }
};
