int theSequence(int N)
{
    if(N==0)
     {
         return 1;
     }
     
     return N + N*(theSequence(N-1));
}
