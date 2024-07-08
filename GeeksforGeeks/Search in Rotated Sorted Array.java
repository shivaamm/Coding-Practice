class Solution {
    // int search(int[] arr, int key) {
        
    //     for(int i=0;i<arr.length;i++){
    //         if(arr[i]==key)
    //             return i;
    //     }
    //     return -1;
    // }
    
    // ****************** Above is O(n) solution, better is O(log(n)) ******
    
    
    public int findPivotIndex(int[] arr) {
        int s = 0, e = arr.length - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (mid < e && arr[mid] > arr[mid + 1]) return mid;
            if (mid > s && arr[mid - 1] > arr[mid]) return mid - 1;
            if (arr[s] <= arr[mid]) s = mid + 1;
            else e = mid - 1;
        }
        return -1;
    }

    public int binarySearch(int s, int e, int[] arr, int key) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] == key) return mid;
            if (arr[mid] < key) s = mid + 1;
            else e = mid - 1;
        }
        return -1;
    }

    public int search(int[] arr, int key) {
        int pivotIdx = findPivotIndex(arr);
        if (pivotIdx == -1) return binarySearch(0, arr.length - 1, arr, key);
        if (key >= arr[0] && key <= arr[pivotIdx]) {
            return binarySearch(0, pivotIdx, arr, key);
        }
        return binarySearch(pivotIdx + 1, arr.length - 1, arr, key);
    }
}
