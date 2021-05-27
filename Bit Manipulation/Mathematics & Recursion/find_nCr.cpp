You are given two numbers n and r. You need to find nCr.
nCr = (n!) / ((n-r)!*(r!))

In recursive way, we can write nCr as nCr = (n-1)C(r-1) + (n-1)Cr           /// important line



//Complete this function
int nCr(int n,int r)
{
    if(n==r || r==0)
    return 1;
    
    return nCr(n-1,r-1)+nCr(n-1,r);
}
