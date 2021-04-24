class Solution
{
    public:
    static bool cmp(struct Item a,struct Item b)
    {
        double r1 = (double)a.value/(double)a.weight;
        double r2 = (double)b.value/(double)b.weight;
        
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        
        double profit = 0.0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight<=W)
            {
                W = W - arr[i].weight;
                profit = profit + arr[i].value;
            }
            else
            {
                profit = profit + arr[i].value*((double)W/(double)arr[i].weight);
                break;
            }
        }
        return profit;
    }
        
};

**************************************************************************************************

class Solution
{
    public:
    bool static comparator(Item a, Item b){
      double r1 = (double)(a.value)/a.weight;
      double r2 = (double)(b.value)/b.weight;
      return (r1>r2);
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
       sort(arr,arr+n,comparator);
       double res = 0.0;
       for(int i=0;i<n;i++){
          if(arr[i].weight<=W){ res+= arr[i].value; W-= arr[i].weight; }
          else { res+= arr[i].value*((double)W/arr[i].weight); break; }
       }
       return res;
    }
        
};
