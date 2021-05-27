class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        
        //your code here
        //If median is in fraction then convert it to integer and return
        int sum = 0;
        if(N%2==0)//even
        {
            
            return (A[N/2] + A[(N/2-1)])/2;
        }
        else 
        return A[N/2];//odd
    }
    
    int mean(int A[],int N)
    {
        int sum = 0;
        //your code here
        for(int i=0; i<N; i++)
        {
            sum = sum + A[i];
        }
        return sum/N;
        
    }

};
