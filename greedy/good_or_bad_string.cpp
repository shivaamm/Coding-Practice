class Solution {
  public:
   bool vowel(char a ){
        if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u' )return true;
        return false;
    }
    bool conso(char a ){
        if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u' )return false;
        return true;
    }
    int isGoodorBad(string str) {
        int f=1;
        int n = str.length();
	    int c1=0,c2=0;
	    for(int i=0;i<n;i++){
            if(vowel(str[i]))
                c1++;
            else 
                c1=0;
            if(conso(str[i]))
                c2++;
            else 
                c2=0;
            if(c1>5 || c2>3){
                return 0;
                f=0;
                break;
            }
	    }
	    if(f)
	        return 1;
    }
};
