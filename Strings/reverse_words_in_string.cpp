Input:
S = i.like.this.program.very.much
Output: 
much.very.program.this.like.i

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string str) 
    { 
    
    //     string str ="";
    //     string B = "";
	   // for(int i = s.size()-1; i >= 0; i--)
	   // {
	   //     if(s[i] != '.')
	   //     B = s[i]+B;
	   //     else
	   //     {
	   //         str = str+B+".";
	   //         B ="";
	   //     }
	   // }
	   // str = str+B;
	   // return str;
	   
	   
     *****************************************************************
     
     
	   vector<string> v;
	    string temp = "";
	    //cout << str.size() << endl;
	   
	    for (int i = 0; i < str.size(); i++) {
	        if (str[i] == '.') {
	            v.push_back(temp);
	            //cout << temp << endl;
	            temp = "";
	        } else {
	            temp += str[i];
	        }
	    }
	    v.push_back(temp);
	    
	    reverse(v.begin(), v.end());
	    string final_string = "";
	    for (int i = 0; i < v.size()-1; i++) {
	        //cout << v[i] << endl;
	        final_string += v[i]+'.';
	    }
	    final_string += v[v.size()-1];
	    return final_string;
    } 
};
