/*Complete the function below*/
int PalinArray(int a[], int n)
{  
//     for(int j=0;j<n;j++)
//   {
//       int n=a[j];
//       int rem=0;
//       int rev=0;
//       while(n>0)
//       {
//           rem=n%10;
//           rev=rev*10+rem;
//           n=n/10;
//       }
//       if(rev!=a[j])
//       return 0;
//   }
//   return 1;


**********************************************************************


    int pass = 1;
    for(int i=0;i<n;i++)
    {
        int temp1 = a[i];
        int temp2 = 0;
        int rem;
        
        while(temp1)
        {
            rem = temp1%10;
            temp2 = temp2  *10+rem;
            temp1 = temp1/10;
        }
        if(temp2!=a[i])
        {
            pass=0;break;
        }
    }
    if(pass==1)
    return 1;
    else 
    return 0;
}
