// comparator function for sorting 2D vector
bool comp(vector<int> &a, vector<int> &b){
    return a[1] < b[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0) return 0; 
		
        sort(points.begin(), points.end(), comp);
        int arrows = 1;
        int last = points[0][1];
        
        for(int i = 1; i < points.size(); i++){
            if(points[i][0] > last){ // if point of start is greater then current end
                arrows++;// take another arrow and update our arrow
                last = points[i][1];  // update our end with the current point we are processing
            }
        }
        return arrows;
    }
};
