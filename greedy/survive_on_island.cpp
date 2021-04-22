Approach: 
In this problem, the greedy approach of buying the food for some consecutive early days is the right direction. 
If we can survive for the first 7 days then we can survive any number of days for that we need to check two things 
-> Check whether we can survive one day or not. 
-> (S >= 7) If we buy food in the first 6 days of the week and we can survive for the week i.e. total food we can buy in a week (6*N) is greater then or equal to total food we require to survive in a week (7*M) then we can survive. 

Note : We are buying the food in the first 6 days because we are counting from Monday and the shop will remain close on Sunday.
If any of the above conditions are not true then we can’t survive else the minimum number of days required to buy food will be = ceil(total food required/units of food we can buy each day).

class Solution{
public:
    int minimumDays(int S, int N, int M){
         // If we can not buy at least a week
        // supply of food during the first week
        // OR We can not buy a day supply of food
        // on the first day then we can't survive.
        if (((N * 6) < (M * 7) && S > 6) || M > N)
            return -1;
        else {
            // If we can survive then we can
            // buy ceil(A/N) times where A is
            // total units of food required.
            int days = (M * S) / N;
            if (((M * S) % N) != 0)
                days++;
            return days;
        }
    }
};
