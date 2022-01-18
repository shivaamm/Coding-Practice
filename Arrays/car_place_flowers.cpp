class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    
    // this is failing at edge case (starting and ending zeros)
        
//         int ss=flowerbed.size();
//         int flag=0;
//         // int last=flowerbed[ss-1];
//         for(int i=0;i<ss;i++)
//         {
//             if(ss==1 && flowerbed[0]==0 && n==1) return true;
//             if(ss==1 && flowerbed[0]==1 && n>0) return false;
//             if(flowerbed[i]!=1)
//             {
//                if(flowerbed[i]==flowerbed[i+1] || flowerbed[ss-1]==flowerbed[ss-2])
//                     flag++;
//             }
//         }
//         // cout<<flag;
//         if(flag==n)
//             return true;
//         else
//             return false;
        
        
        //  all correct from here. 
        
        int current = 0; const int size = flowerbed.size();
    for(int i = 0; i <= size; i++) {
        if (i < size && flowerbed[i] == 0) {
            current++;
            if (i == 0) current++;
            if (i == size - 1) current++;
        } else {
            n -= (current - 1) / 2;
            if (n <= 0) return true;
            current = 0;
        }
    }
    return false;
        
        
        
//          // Edge cases:
//         if (n == 0) return true;
//         if (flowerbed.size() == 0) return false;
//         if (flowerbed.size() == 1) return flowerbed[0] == 0;
        
//         // Add empty plots in the beginning and end:
//         flowerbed.push_back(0);
//         flowerbed.insert(flowerbed.begin(), 0);
        
//         // Check if there are three empty plots in a row:
//         int flowers = 0, i = 0;
//         while ((i < flowerbed.size() - 2) && (flowers < n)) {
//             if ((flowerbed[i] == 0) && (flowerbed[i+1] == 0) && (flowerbed[i+2] == 0)) {
//                 flowers++;
//                 flowerbed[i+1] = 1;
//             }
//             i++;
//         }
//         return flowers == n;
        
        
//         if (n == 0) return true;
//         for (int i = 0; i < flowerbed.size(); i ++) {
//             if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) { // can place?
//                 -- n;
//                 if (n == 0) return true;
//                 flowerbed[i] = 1; // place!
//             }
//         }
//         return false;
        
        
        
        //  int zeros = 1, ans = 0; // Easier handling of prefixes, just initialize zeros to 1
        // for (int i = 0; i < flowerbed.size(); i ++) {
        //     if (flowerbed[i] == 0) {
        //         ++ zeros;
        //     } else {
        //         ans += (zeros - 1) / 2;
        //         zeros = 0;
        //     }
        // }
        // return ans + zeros / 2 >= n; // Note that suffix zeros need not -1
        
        
    }
};
