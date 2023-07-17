class Solution {
	public:
		string FirstNonRepeating(string s){
		    // Code here
		    string ans;
		    int n=s.size();
		    map<char,int>mp;
		    queue<char>q;
		    for(int i=0;i<n;i++){
		        mp[s[i]]++;
		        q.push(s[i]);
		        while(!q.empty() && mp[q.front()]>1){
		            q.pop();
		        }
		        if(!q.empty()){
		            ans+=q.front();
		        }else{
		            ans+='#';
		        }
		    }
		    return ans;
		}

};
