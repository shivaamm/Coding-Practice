class Solution{   
public:
    int klengthpref(string a[], int n, int k, string s){    
        if(s.size()<k)return 0;
        string x=s.substr(0,k);
        int i,cnt=0;
        for(i=0;i<n;i++){
            if(a[i].size()<k)continue;
            string temp=a[i].substr(0,k);
            if(x==temp)cnt++;
        }
        return cnt;
    }
};
