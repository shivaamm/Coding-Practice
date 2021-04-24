#include<iostream> 
#include<algorithm> 
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
char id;   
int dead; 
int profit; 
}; 

// This function is used for sorting all the jobs according to the profit 
bool compare(Job a, Job b) 
{ 
  return (a.profit > b.profit); 
} 


void jobschedule(Job arr[], int n) 
{ 
  // Sort all jobs according to decreasing order of prfit 
  sort(arr, arr+n, compare); 

  int result[n]; // To store result 
  bool slot[n];  

  // Initialize all slots to be free 
  for (int i=0; i<n; i++) 
    slot[i] = false; 


  for (int i=0; i<n; i++) 
  { 
  // Find a free slot for this job (Note that we start 
  // from the last possible slot) 
  for (int j=min(n, arr[i].dead)-1; j>=0; j--) 
  { 
    // Free slot found 
    if (slot[j]==false) 
    { 
      result[j] = i; // Add this job to result 
      slot[j] = true; // Make this slot occupied 
      break; 
    } 
  } 
  } 

  // Print the result 
  for (int i=0; i<n; i++) 
  if (slot[i]) 
    cout << arr[result[i]].id << " "; 
} 


int main() 
{ 
  Job arr[] = { {'a', 2, 20}, {'b', 2, 15}, {'c', 1, 10}, 
        {'d', 3, 5}, {'e', 3, 1}}; 
  int n = 5; 
  cout << "maximum profit sequence of jobs is-->"; 
  jobschedule(arr, n); 
   
} 


**********************************************  GFG SOLUTION  *************************************************************

class Solution 
{
    public:
    static bool compare(Job a,Job b)
    {
	    return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector <int> ans;
        int avl[n];
        int result[n];
        
        sort(arr,arr+n,compare);
        
        for(int i=0;i<n;i++)avl[i] = 0;
        
        int ct = 0;
        int cost = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=min(n,arr[i].dead)-1;j>=0;j--)
            {
                if(avl[j]==0)
                {
                    avl[j] = 1;
                    result[j] = i;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(avl[i])
            {
                 ct++;
                 cost = cost + arr[result[i]].profit;
            }
        }
        ans.push_back(ct);
        ans.push_back(cost);
        return ans;
    } 
};

******************************************* USING PAIR  *****************************************************************

bool compare(Job a,Job b)
{
    return a.profit>b.profit;
}

pair<int,int> JobScheduling(Job arr[], int n) 
{ 
    // your code here
    
    int max_deadline=0;
    for(int i=0;i<n;i++)
    max_deadline=max(max_deadline,arr[i].dead);
    
    vector<int> slot(max_deadline,-1);
    
    sort(arr,arr+n,compare);
    
    for(int i=0;i<n;i++)
    {
        int end=arr[i].dead-1;
        
        while(end>=0&&slot[end]!=-1)
        end--;
        
        if(end!=-1)
        slot[end]=arr[i].profit;
    }
    
    int profit=0,count=0;
    
    for(int i=0;i<max_deadline;i++)
    {
        if(slot[i]!=-1)
        {
            count++;
            profit+=slot[i];
        }
    }
    
    return make_pair(count,profit);
}
    
