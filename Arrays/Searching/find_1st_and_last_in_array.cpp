class Solution {
public:
    
//  using binary search   
    
	vector<int> searchRange(vector<int>& nums, int target) {
		int left = get_first_element_position(nums, target);
		int right = get_last_element_position(nums, target);
		return left <= right ? vector<int>{left, right} : vector<int>(2, -1);
        // here vector(2, -1) gives a vector of size two filled with -1 s..... it gives {-1,-1}...
	}
private:
	int get_first_element_position(vector<int>& nums, int target){
		int left = 0, right = nums.size() - 1, mid;
		while ( left <= right )
		{
			mid = (right + left) / 2;
			if ( nums[mid] < target) left = mid + 1;
			else right = mid - 1;
		}
		return left;
	}
	int get_last_element_position(vector<int>& nums, int target){
		int left = 0, right = nums.size() - 1, mid;
		while ( left <= right )
		{
			mid = (right + left) / 2;
			if ( nums[mid] <= target ) left = mid + 1;
			else right = mid - 1;
		}    
		return right;
	}        
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Solution {
	int findLow(const vector<int>& nums, int target) {
		int low = 0, high = nums.size() - 1, mid = 0, lowPos = -1;

		while (low <= high) {
			mid = low + (high - low) / 2;

			if (target < nums[mid]) {
				high = mid - 1;
			}
			else if (target > nums[mid]) {
				low = mid + 1;
			}
			else {
				lowPos = mid;
				high = mid - 1;
			}
		}

		return lowPos;
	}

	int findHigh(const vector<int>& nums, int target, int l) {
		int low = l, high = nums.size() - 1, mid = 0, highPos = -1;

		while (low <= high) {
			mid = low + (high - low) / 2;
			if (target < nums[mid]) {
				high = mid - 1;
			}
			else if (target > nums[mid]) {
				low = mid + 1;
			}
			else {
				highPos = mid;
				low = mid + 1;
			}
		}

		return highPos;
	}
public:
	vector<int> searchRange(vector<int>& nums, int target)
	{
		int low = findLow(nums, target);
		int high = -1;
		if (low >= 0)
			high = findHigh(nums, target, low);
		return vector<int>({ low, high });
	}
};
