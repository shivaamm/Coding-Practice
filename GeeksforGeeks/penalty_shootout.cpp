class Solution{
public:	
	
	int penaltyScore(string s)
	{
	    int count=0;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='2' && s[i+1]=='1')
	            count++;
	    }
	    return count;
	}
};
