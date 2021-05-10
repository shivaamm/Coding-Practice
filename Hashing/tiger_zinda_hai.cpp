class Solution{
    public:
    int count_tabs(string s[], int n)
    {
        
        map<int,int> m;
        for(int i=0;i<n;i++)
	    { 
	        if(s[i]=="END")
	        {
	            m.clear();
	        }
	        else
	        {
	            m[stoi(s[i])]++;
	        }
	    }
	    int c=0;
	    for(auto it=m.begin();it!=m.end();it++)
	    {
	        if((it->second)%2!=0)
	        {
	            c++;
	        }
	    }
        
        return c;
        
    }
};
