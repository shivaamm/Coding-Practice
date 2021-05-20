vector<int> inversePermutation(int arr[], int size) {

************************************************* TLE ***************************************************************
//     vector<int>v;
//     // Loop to select Elements one by one
//   for (int i = 0; i < size; i++) {
 
//     // Loop to print position of element
//     // where we find an element
//     for (int j = 0; j < size; j++) {
 
//       // checking the element in increasing order
//       if (arr[j] == i + 1) {
 
//         // print position of element where
//         // element is in inverse permutation
//         // cout << j + 1 << " ";
//         v.push_back(j+1);
//         break;
//       }
//     }
//   }
//   return v;


******************************************* EFFICIENT *****************************************************************

    vector<int>v;
    // to store element to index mappings
  int arr2[size];
 
  // Inserting position at their
  // respective element in second array
  for (int i = 0; i < size; i++)
    arr2[arr[i] - 1] = i + 1;
 
  for (int i = 0; i < size; i++)
  {
      int p=arr2[i];
        v.push_back(p);
    // cout << arr2[i] << " "; 
  }
    return v;
}
