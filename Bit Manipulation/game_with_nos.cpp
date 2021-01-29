https://practice.geeksforgeeks.org/problems/game-with-nos3123/1/?problemStatus=unsolved&page=1&category[]=Arrays&category[]=Strings&category[]=Sorting&query=problemStatusunsolvedpage1category[]Arrayscategory[]Stringscategory[]Sorting#

int* game_with_number(int arr[], int n)
{
   for(int i=0;i<n-1;i++){
        arr[i] = arr[i]^arr[i+1];
    }
    return arr;
}
