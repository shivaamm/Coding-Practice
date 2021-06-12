Input : arr[ ] = {10, 11, 1, 2, 3}
Output : 1 10 3 1 3
Explanation:
At index 0, arr[0] xor arr[1] = 1
At index 1, arr[1] xor arr[2] = 10
At index 2, arr[2] xor arr[3] = 3
...
At index 4, No element is left So, it will remain as
it is.
New Array will be {1, 10, 3, 1, 3}.
   
   ******************************************************************************

int* game_with_number(int arr[], int n)
{
   for(int i=0;i<n-1;i++){
        arr[i] = arr[i]^arr[i+1];
    }
    return arr;
}
