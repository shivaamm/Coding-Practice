//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	   //int odd=0,even=0;
	   // for(int i=0;i<s.size();i++){
	   //     if(i%2==0 and s[i]=='1')even++;
	   //     else if(i%2==1 and s[i]=='1')odd++;
	   // }
	   // if(abs(even - odd)%3==0)return 1;
	   // return 0;
	    
	    
	    vector<int> arr;
        reverse(s.begin(), s.end());
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1' && i % 2 == 0) {
                sum = sum + 1;
            } else if (s[i] == '1' && i % 2 == 1) {
                sum = sum - 1;
            }
        }
        if (sum % 3 == 0)
            return 1;
        else
            return 0;
	}

};
