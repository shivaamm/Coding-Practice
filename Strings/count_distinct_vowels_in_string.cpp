class Solution{
  public:
    int countVowels(string str){
        int n = str.length();
        int arr[26] = {0};
        int count = 0;
        
        for(int i=0; i<n; i++)
        {
            if(str[i] == 'a' || str[i]=='e' || str[i]=='i' || str[i] == 'o' || str[i] =='u')
            {
                if(arr[str[i] - 'a'] == false)
                {
                    arr[str[i] - 'a'] = true;
                    count++;
                }
            }
            
        }
        return count;
            
    }
};
