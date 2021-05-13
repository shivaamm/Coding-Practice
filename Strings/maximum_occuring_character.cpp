class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char,int>map;
        for(int i=0;str[i]!='\0';i++)
              map[str[i]]++;
        int count=0;char ch;
        for( auto i:map )
        {   
            if(i.second>count)
            {   count=i.second;
                ch=i.first;
            }
        }
        return ch;
        
        
        
        ****************************************************************************
        
        
        
	    int count[26] = {0};
	    int Max = 0;
	    char res;
	    for(int i=0;i<str.length();i++) {
	        count[str[i]- 'a']++;
	    }
	    for(int i=0;i<26;i++) {
	         if(Max  < count[i]) {
	            Max = count[i];
	            res = char(i+'a');
	        }
	    }
	    return res;
    }

};
