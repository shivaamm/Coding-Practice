class Solution {
public:
    int trap(vector<int>& height) {
//         int n=height.size();
//         int left[n],right[n];
//         int maxleft=height[0];
//         int maxright=height[n-1];
        
//         for(int i=0,j=n-2;i<n && j>=0;i++,j--)
//         {
//             if(height[i]>maxleft) maxleft=height[i];
            
//             if(height[j]>maxright) maxright=height[j];
        
//             left[i]=maxleft;
//             right[i]=maxright;
//         }
        
//         long water=0;
//         for(int i=0;i<n;i++)
//         {
//             water=water + min(right[i],left[i])-height[i];
//         }
//         return water;
        
        
        
        
        
        
        int n= height.size();
        vector<int> left(n,0), right(n,0);

        int lmax=0;
        for(int i=0;i<n;i++){
            if(height[i]>=lmax) lmax=height[i];
            left[i]=lmax;
        }
        int rmax=0;
        for(int i=n-1;i>=0;i--){
            if(height[i]>=rmax) rmax=height[i];
            right[i]=rmax;
        }

        int res=0;
        // res+= min(lmax,rmax)-height[i]
        for(int i=0;i<n;i++){
            res+=min(left[i],right[i])-height[i];
        }
        return res;
        
        
    }
};
