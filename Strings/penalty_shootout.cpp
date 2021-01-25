class Solution{
public:	
	
	int penaltyScore(string s)
	{
	    int i=0,count=0;
	   while(s[i]!='\0')
	    {
	        if(s[i]=='2' && s[i+1]=='1')
	        {
	            count ++;
	        }
	        i++;
	    }
	    return count;  
	}
};
