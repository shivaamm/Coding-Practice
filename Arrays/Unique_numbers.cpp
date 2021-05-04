class Solution
{
public:

    bool check(int n)
    {
        int hash[10]={0},x;
        while(n!=0)
        {
            x=n%10;
            if(hash[x]==0)
            {
                hash[x]=1;
            }
            else
            {
                return false;
            }
            n=n/10;
        }
        return true;
    }
    
    vector<int> uniqueNumbers(int L,int R)
    {
       vector<int> a;
        for(int i=L; i<=R; i++)
        {
            if(check(i)==true)
            {
                a.push_back(i);
            }
        }
        return a;
    }
};
