EXPLANATION
(https://leetcode.com/problems/container-with-most-water/discuss/1069818/C%2B%2B-or-Two-Pointers-or-O(n)-0ms-Beats-100-or-Explanation)

Make two pointers one (l) pointing to the start of the height vector and the other (r) pointing to the end of the height vector.
  int l=0,r=height.size()-1;
 
Iterate the height vector until l<r and at each iteration, find the total water between l and r by the below method:
 
  For any given l and r, the height of the contained water depends upon the minimum ( left height, right height).
  If left height is (lh = height[l]) and right height is (rh = height[r]), then the height of the contained water is min(lh, rh).
  Also the width of the contained water is equal to the difference between right and left index, that is r-l.
  So the total area of water contained is width * height, that is (r - l) * min(lh, rh).
 
    int lh=height[l];
    int rh=height[r];
    max_area=max(max_area,(r-l)*min(lh,rh));
 
The maximum area of water that can be contained in each iteration is the answer.
    max_area=max(max_area,(r-l)*min(lh,rh));
 
Also, after finding the area of water for a given l and r, increase l or decrease r according to whole height is smaller lh or rh.
    if(lh<rh) ++l
    else --r



class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int max_area=0;
        
        while(l<r){
            int lh=height[l];
            int rh=height[r];
            
            max_area=max(max_area,(r-l)*min(lh,rh));
            
            if(lh<rh) ++l;
            else --r;
        }
		
        return max_area;
    }
};
