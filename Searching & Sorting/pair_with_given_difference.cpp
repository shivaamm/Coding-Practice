bool findPair(int arr[], int size, int num){
    unordered_map<int, int> mp;
    
    for (int i = 0; i < size; i++) {
 
        if (mp.find(num + arr[i]) != mp.end() || mp.find(abs(num - arr[i])) != mp.end()) {
 
            return true;
        }
 
        mp[arr[i]] = 1;
    }
    return false;
    
}



// bool findPair(int a[], int l, int n) {
    
//     if(l == 0 or l==1) {
//         return false;
//     }
    
//     sort(a, a+l);
    
//     int i = 0, j =1;
    
//     while(i<l and j <l) {
//         if(i != j and a[j] - a[i] == n) {
//             return true;
//         }
//         else if(a[j]- a[i] < n) {
//             j++;
//         }
//         else {
//             i++;
//         }
//     }
//     return false;
// }
