class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
//         map<int,int> mp;
//         for(auto &r : rectangles)
//           if(r[0] < r[1]) mp[r[0]]++;
//           else mp[r[1]]++;

//         return mp.rbegin()->second;  //rbegin() is a function in C++ STL. It returns a reverse iterator which points to the last element of the map. 
        
        
    *************************************************************************************************
    
        // unordered_map<int,int> maxsquarelen;
        // int maxlen=INT_MIN;
        // for(auto rectangle : rectangles){
        //     maxsquarelen[min(rectangle[0],rectangle[1])]++;
        //     maxlen = max(maxlen,min(rectangle[0],rectangle[1]));//store the maxpossible length of square formed
        // }
        // return maxsquarelen[maxlen];
        
        
    *************************************************************************************************
    
        unordered_map<int,int> map;
        for(vector<int> rectangle: rectangles){
		    //storing number of time a particular square can obtain
            map[min(rectangle[0],rectangle[1])]++; //[4,6], you can cut it to get a square with a side length of at most  4.
        }
        int cnt=INT_MIN,maxlen=INT_MIN;
        for(auto m: map){
            if(m.first>maxlen) cnt=m.second,maxlen=m.first; //finding out the maxlength square then storing its count in cnt
        }
        return cnt;
        
        
        ************************************************ WITHOUT MAP ******************************************************************
        
    int cnt = 0, max = 0;
        for (vector<int>rectangle: rectangles) {
		//get the minimum from width and height
            int side = min(rectangle[0], rectangle[1]); //[4,6], you can cut it to get a square with a side length of at most  4.
            if (side > max) {  //comparing max side with new side 
                cnt = 1; // intialise count with 1
                max = side; //update the max by new side 
            }else if (side == max) { // square with maxlength 
                cnt++; //just increase the count of square with max len
            }
        }
        return cnt;
        
        
    }
};
