class Solution {
public:
    double average(vector<int>& salary) {
        double ss=salary.size();
        double rem=ss-2;
        double sum=0;
        sort(salary.begin(),salary.end());
        for(double i=1;i<ss-1;i++){
            sum+=salary[i];
        }
        return sum/rem;
    }
};
