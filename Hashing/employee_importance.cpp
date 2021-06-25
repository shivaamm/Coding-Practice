/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
//    int totalImportance = 0;
//     unordered_map<int, Employee*> map;
    
//     void checkEmployee(int id) {
//         totalImportance += map[id]->importance;
		
//         for(int x: map[id]->subordinates) {
//             checkEmployee(x);
//         }
//     }
    
//     int getImportance(vector<Employee*> employees, int id) {
//         for(auto x: employees){
//             map[x->id] = x;
//         }
        
//         checkEmployee(id);
//         return totalImportance;
//     }
    
    
    
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    
    int getImportance(vector<Employee*> employees, int id) {
        //we have to store Employee* with id in map to optimise lookup
        unordered_map<int,Employee*> mp;
        for(auto i:employees)
            mp[i->id] = i;
        
        //now we store id in queue in every iteration we pop from front and add their sub ordinate in queue
        int totval = 0;
        queue<int> q;
        q.push(id);
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            totval += mp[curr]->importance;
            for(auto i:mp[curr]->subordinates)
                q.push(i);
        }
        return totval;
    }
};
