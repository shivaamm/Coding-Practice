class Solution{
public:
    int nextHappy(int N){
        if (N<7) return 7;
        while (true){
            int temp=++N;
            while (temp>6){
                int s=0;
                while (temp){
                    s+=(temp%10)*(temp%10);
                    temp/=10;
                }
                temp=s;
            }
            if (temp==1) return N;
        }
        return 0;
    }
};
