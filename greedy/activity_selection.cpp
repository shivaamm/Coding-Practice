class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    
    static bool cmp(pair<int,int>a, pair<int,int>b)
    {
        return a.second<b.second;    
    }
    
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int,int>>ac;
        for(int i=0; i<n; i++) 
            ac.push_back(make_pair(start[i],end[i]));
	    sort(ac.begin(), ac.end(),cmp);
	    
	    int j=0,count=1;
	    for(int i=1; i<n; i++)
	    {
	        if(ac[i].first>ac[j].second)
	        {
	            count++;
	            j=i;
	        }
	    }
	    return count;
    }
};

*********************************************************************************************

using namespace std;
struct Activity
{
  int start,end;  
};
bool activityCompare(Activity s1,Activity s2)
{
    return s1.end<s2.end;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Activity arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i].start;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i].end;
	    }
	    sort(arr,arr+n,activityCompare);
	    int y=0;
	    int count=1;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i].start>=arr[y].end)
	        {
	            count++;
	            y=i;
	        }
	    }
	    cout<<count<<endl; 
	}
	return 0;
}

*******************************************************************************************************

void find(int start[],int finish[],int n)
{
  struct node arr[n];
  for(int i=0;i<n;i++)
  {
      arr[i].start = start[i];
      arr[i].finish = finish[i];
  }
  sort(arr,arr+n,myfun);
  int count=1;
  int val = arr[0].finish;
  for(int i=1;i<n;i++)
  {
      if(arr[i].start >= val)
      {
          count++;
          val = arr[i].finish;
      }
  }
  cout << count;
}
