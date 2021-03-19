int sumDiagonal(int n, int M[][n])
{
    int sum = 0; 
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++) 
        { 
  
              if (i == j) 
                sum += M[i][j]; 
 
        }
    }
        return sum;
}
