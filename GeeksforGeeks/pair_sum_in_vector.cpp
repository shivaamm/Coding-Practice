void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    for(auto i:v)
    {
        sum+=i.second;
    }
    cout<<sum;
    cout<<endl;
}
