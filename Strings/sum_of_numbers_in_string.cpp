
class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string s)
    {
    	string temp="";
        int sum=0;
        for(char ch:s)
        {
            if(isdigit(ch))
            {
                temp=temp+ch;
                
            }
            else
            {
                sum=sum+atoi(temp.c_str());
                temp="";
            }
        }
        return sum+atoi(temp.c_str());
    }
};


*********************************************************************************


// int curr = 0, sum = 0;
// 	        for(int j = 0; j<s.size(); j++)
// 	        {
// 	            if(isdigit(s[j]))
// 	            {
// 	                curr = curr*10 + int(s[j] - '0');
	                
// 	            }
// 	            else
// 	            {
// 	                sum += curr;
// 	                curr = 0;
// 	            }
// 	        }
// 	        sum +=curr;
// 	        cout<<sum<<endl;
	        

*********************************************************************************


// int c;
//     int sum=0;
//     for(int i=0;i<s.size();i++)
//     {
//         if((int)s[i] >= 48 && (int)s[i] <= 57)
//             c = c*10 + ((int)s[i]-48);
//         else
//         {
//             sum = sum+c;
//             c=0;
//         }
//     }
//     sum = sum+c;
//     cout << sum;	        
	     
