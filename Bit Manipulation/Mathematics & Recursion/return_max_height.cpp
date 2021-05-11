// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    int mx = INT_MIN;
    for (int i = 0 ; i < n ; i++) { 
        int temp = 12 * (arr[i].feet) + arr[i].inches;
        mx = max (mx , temp);
    }
    return mx;
}
