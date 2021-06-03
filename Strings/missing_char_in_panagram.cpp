class Solution{
  public:
    string missingPanagram(string str){
    
    int arr[26]={0};
     string ans="";
     int i=0;
     while(str[i]!='\0')
     {
        
        int letter=tolower(str[i])-'a';
        arr[letter]=1;
        i++;
     }
     for(int i=0;i<26;i++)
     {
        if(arr[i]==0)
            ans+=(97+i);
     }
     
     if(ans=="")
        return "-1";
        
     return ans;
    }

};

Example 1:

Input:
s = Abcdefghijklmnopqrstuvwxy
Output: z
 

Example 2:

Input:
s = Abc
Output: defghijklmnopqrstuvwxyz
