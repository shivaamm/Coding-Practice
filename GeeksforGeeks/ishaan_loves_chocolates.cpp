int chocolates(int arr[], int n)
{
    int i,j;
	i = 0, j = n-1;
	while( i != j ) {
		if( arr[i] >= arr[j]  && i < j )
			i++;
		else if( arr[j] >= arr[i] && j > i )
			j--;
	}
	return arr[i];
    
}
