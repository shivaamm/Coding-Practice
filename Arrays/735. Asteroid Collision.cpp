class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        int j = 0;

        for (int i = 0; i < n; i++) {
            int asteroid = asteroids[i];

            while (j > 0 && asteroids[j - 1] > 0 && asteroid < 0 && asteroids[j - 1] < abs(asteroid)) {
                j--;
            }

            if (j == 0 || asteroid > 0 || asteroids[j - 1] < 0) {
                asteroids[j++] = asteroid;
            } else if (asteroids[j - 1] == abs(asteroid)) {
                j--;
            }
        }

        vector<int> result(asteroids.begin(), asteroids.begin() + j);

        return result;
    }
};


/*
Intuition
The intuition behind the optimized approach is to simulate the asteroid collisions while using an in-place modification of the original array. By iterating through the array and updating it in a way that ensures surviving asteroids are placed in the front of the array, we can avoid using an additional stack for storing the final state of the asteroids.

Approach
Initialize a variable j to keep track of the position where the next surviving asteroid should be placed in the array.
Iterate through the given asteroids array using a loop.
For each asteroid, check if it will collide with the asteroids that are already placed in the array.
If the current asteroid survives the collision, place it at index j and increment j by 1.
If it explodes during the collision, discard it and continue checking the remaining asteroids in the array.
The final state of the asteroids will be the elements from index 0 to j-1 in the modified array.
The above approach eliminates the need for an additional stack, reduces space complexity, and achieves the same result as the initial approach with improved performance.

Complexity
Time complexity: O(n)
Space complexity: O(1)

*/
