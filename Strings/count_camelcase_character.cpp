class Solution
{
  public:   
    int countCamelCase (string s)
    {
    	int c=0;
    	int a=s.size();
    	for(int i=0;i<a;i++)
    	{
    	    if(s[i]<97)
    	        c++;
    	}
    	return c;
    }
};
