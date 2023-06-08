string ans = "";
        vector<int> fact(10);
        fact[0] = fact[1] = 1;

        --k;

        for(int i = 2; i < 10; i++)
            fact[i] = fact[i - 1] * i;

        vector<bool> values(n + 1, 0);

        for(int i = 0; i < n; i++){
            int rem = n - i - 1;
            int comb = fact[rem];

            int up = k / comb;

            int val = 1;

            while(1){
                if(!values[val]){
                    if(up == 0)
                        break;

                    --up;
                }

                ++val;
            }

            k = k % comb;

            ans += to_string(val);
            values[val] = 1;
        }

        return ans;
