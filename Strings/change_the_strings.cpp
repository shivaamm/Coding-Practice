class Solution{
    public:
    
    string modify (string s)
    {
        int len = s.length();
        int tri = 1;
        if(s[0] >='A' && s[0] <='Z'){
            tri = 0;
        }
        for(int i = 0;i<len;i++){
            if(!tri){
                cout<<atoA(s[i]);
            }else{
                cout<<Atoa(s[i]);
            }
            
        }        
    }
        char Atoa(char a){
            if(a>='a' && a<='z'){
                return a;
            }else{
                int temp = a-'A';
                char rem = temp+'a';
                return rem;
            }
        }
        char atoA(char a){
            if(a>='A' && a<='Z'){
                return a;
            }else{
                int temp = a-'a';
                char rem = temp+'A';
                return rem;
            }
        }
};  
