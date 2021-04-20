class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool comp(const pair<int, int>&a, const pair<int, int>&b){
            if(a.second == b.second)
                return a.first  <= b.first;
            return a.second < b.second;
        }
    
        int maxMeetings(int start[], int end[], int n) {
        // Your code here
        vector<pair<int, int>>vec;
        int i,c=0, fin;
        for(i=0;i<n;i++){
            vec.push_back({start[i], end[i]});
        }
        sort(vec.begin(), vec.end(), comp);
        
        for(i=0;i<n;){
            c++;
            fin=vec[i].second;
            i++;
            while(i < n && fin >= vec[i].first){
                i++;
            }
        }
        return c;
    }
};

**********************************************************************************

      int maxMeetings(int start[], int end[], int n) {
            
            vector < pair <int,int> > v;
            
            for(int i=0;i<n;i++)
            {
                v.push_back(make_pair(end[i],start[i]));
            }
            
            sort(v.begin(),v.end());
            
            int i = 0;
            int ct = 1;
            
            for(int j=1;j<n;j++)
            {
                if(v[j].second>v[i].first)
                {
                    ct++;
                    i = j;
                }
            }
            
            return ct;
        }  
