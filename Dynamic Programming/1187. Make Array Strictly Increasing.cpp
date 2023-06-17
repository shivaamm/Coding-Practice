class Solution {
public:
    //can be done using "upper_bound", implemented it just to explain clearly
    int getBigger(vector<int>&nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        int ans =  -1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] <= target) low = mid + 1;
            else 
            {
                ans = nums[mid];
                high = mid - 1;
            }
        }
        return ans;
    }
    int solve(vector<int>&nums1, vector<int>& nums2, int currIdx, int prev)
    {
        if (currIdx == nums1.size()) return 0;
        
        int x = INT_MAX, y = INT_MAX, z = INT_MAX;
        int newCurr = nums1[currIdx], curr = nums1[currIdx];
        //==================================================================================
        if (nums1[currIdx] <= prev)  
        {
            newCurr = getBigger(nums2, prev); //get a "just" bigger value than prev
            if (newCurr > prev) 
                x = solve(nums1, nums2, currIdx + 1, newCurr); //increase curr
            if (x != INT_MAX) x++;  //including the current operation done
        }
        //=========================================================================================
        else  
        {
            y = solve(nums1, nums2, currIdx + 1, curr);  //don't change Curr, no operation done
            
            newCurr = getBigger(nums2, prev); //get a "just" bigger value than prev 
            if (newCurr > prev) 
                z =  solve(nums1, nums2, currIdx + 1, newCurr); //decrease curr
            if (z != INT_MAX) z++; //including the current operation done
        }
        //==============================================================================================
        return min({x, y, z});
    }
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) 
    {
        sort(arr2.begin(), arr2.end());
        int ans = solve(arr1, arr2, 0, -1);
        return (ans == INT_MAX? -1 : ans);
    }
};


*******************************************************************************************************************************************************************************

class Solution {
public:
    //can be done using "upper_bound", implemented it just to explain clearly
    int getBigger(vector<int>&nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        int ans =  -1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] <= target) low = mid + 1;
            else 
            {
                ans = nums[mid];
                high = mid - 1;
            }
        }
        return ans;
    }
    int solve(vector<int>&nums1, vector<int>& nums2, map<pair<int, int>, int>&mp, int currIdx, int prev)
    {
        if (currIdx == nums1.size()) return 0;
        if (mp.count({currIdx, prev})) return mp[{currIdx, prev}];
        
        int x = INT_MAX, y = INT_MAX, z = INT_MAX;
        int newCurr = nums1[currIdx], curr = nums1[currIdx];
        //==================================================================================
        if (nums1[currIdx] <= prev)  
        {
            newCurr = getBigger(nums2, prev); //get a "just" bigger value than prev
            if (newCurr > prev) 
                x = solve(nums1, nums2, mp, currIdx + 1, newCurr); //increase curr
            if (x != INT_MAX) x++; //including the current operation done
        }
        //=========================================================================================
        else  
        {
            y = solve(nums1, nums2, mp, currIdx + 1, curr);  //don't change Curr, no operation done
            
            newCurr = getBigger(nums2, prev); //get a "just" bigger value than prev 
            if (newCurr > prev) 
                z =  solve(nums1, nums2, mp, currIdx + 1, newCurr); //decrease curr
            if (z != INT_MAX) z++; //including the current operation done
        }
        //==============================================================================================
        return mp[{currIdx, prev}] = min({x, y, z});
    }
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) 
    {
        sort(arr2.begin(), arr2.end());
        map<pair<int, int>, int>mp;
        int ans = solve(arr1, arr2,mp,  0, -1);
        return (ans == INT_MAX? -1 : ans);
    }
};
