class Solution{
  public:
    void reverseArray(int n, int* arr){
        
      stack<int> s;
      int i;
      for(i=0;i<n;i++)
      {
          s.push(arr[i]);
      }
      int index=0;
      while(!s.empty())
      {
          arr[index]=s.top();
          index++;
          s.pop();
      }
    }
};


Input: N = 5, arr[] = {1, 2, 3, 4, 5}
Output: 5 4 3 2 1
Explanation: After the reverse, array will 
look like {5, 4, 3, 2, 1}.
