/****** ALGORITHM

1. Traverse string str. And initialize a variable v as true.
2. If str[i] == ' '. Set v as true.
3. If str[i] != ' '. Check if v is true or not.
   a) If true, copy str[i] to output string and set v as false.
   b) If false, do nothing.
*/

class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	     string result = ""; 
  
    // Traverse the string. 
    bool v = true; 
    for (int i=0; i<S.length(); i++) 
    { 
        // If it is space, set v as true. 
        if (S[i] == ' ') 
            v = true; 
  
        // Else check if v is true or not. 
        // If true, copy character in output 
        // string and set v as false. 
        else if (S[i] != ' ' && v == true) 
        { 
            result.push_back(S[i]); 
            v = false; 
        } 
    } 
  
    return result; 
	}
};

