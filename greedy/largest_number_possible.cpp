class Solution{
public:
    string findLargest(int n, int s){
        if(n>1 && s==0)          // extra condition
            return "-1";
        if(s>9*n){
            return "-1";
        }
        if(s==0){
            return to_string(0);
        }
        string res="";
        for(int i=0;i<n;i++){
            if(s>=9){
                res=res+'9';
                s=s-9;
            }
            else{
                res=res+to_string(s);
                s=0;
            }
        }
        return res;
    }
};
