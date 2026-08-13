#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minJumps(const vector<int>& arr) {
    int n = arr.size();

    // If array has 1 or 0 elements, no jumps needed
    if (n <= 1)
        return 0;

    // If the first element is 0, we can never move forward
    if (arr[0] == 0)
        return -1;

    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + arr[i]);

        // If we reach the boundary of the current jump
        if (i == currentEnd) {
            jumps++;
            currentEnd = farthest;

            // If currentEnd cannot advance past 'i', we are stuck
            if (currentEnd <= i) {
                return -1;
            }
        }
    }

    return jumps;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " non-negative integers separated by spaces:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = minJumps(arr);

    if (result == -1) {
        cout << "\nResult: The end of the array is unreachable." << endl;
    } else {
        cout << "\nMinimum jumps required to reach the end: " << result << endl;
    }

    return 0;
}