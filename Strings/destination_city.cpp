https://leetcode.com/problems/destination-city/

MORE SOLUTION APPROACH CAN BE FOUND HERE- https://leetcode.com/problems/destination-city/discuss/840953/4-approachesusing-set-map-and-vectoreasy-understanding

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
//         vector<string> source;
//         vector<string> destination;
//         for(int i = 0 ; i < paths.size() ; i++)
//         {
//             for(int j = 0; j<2 ; j++)
//             {
//                source.push_back( paths[i][0]);
//                 destination.push_back( paths[i][1]);
//             }
//         }
//         vector<string>::iterator it; 
//         for(int i =0 ; i< destination.size() ; i++)
//         {
//            it = find(source.begin(), source.end(), destination[i]); 
//            if(it == source.end() ) 
//                return destination[i];
            
//         }
        
//         return NULL;

  // 2nd approach
  
        unordered_map<string, int> m;// using a map will decrease the runtime significantly
        for(int i=0;i<paths.size(); i++)
            for(int j=0;j<paths[i].size(); j++){
                m[paths[i][j]]++;
            }
       vector<string> temp;
        for(auto x: m){
            if(x.second==1){
                temp.push_back(x.first);
            }
        }
        bool flag=false;
        string res="";
        for(int i=0;i<temp.size(); i++)
            for(int j=0;j<paths.size(); j++){
                if(paths[j][1]==temp[i]){
                    return temp[i];
                }
            }
        return 0;
    }
};
