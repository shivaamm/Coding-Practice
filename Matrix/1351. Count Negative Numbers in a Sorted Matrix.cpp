class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int i=0;
       int j=grid[0].size()-1;
       int count=0;
       while(i<grid.size()&&j>=0)
       {
           if(grid[i][j]<0)
           {
               count+=(grid.size()-i); // add Negative Count = Total Row - current Row
               j--; //decrease the Column Pointer ( j--)
           }
           else if(grid[i][j]>=0)
           {
               i++; // increase the Row pointer ( i++ )
           }
       }
       return count;
    }
};
