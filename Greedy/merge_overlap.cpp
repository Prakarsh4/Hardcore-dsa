#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {

        sort(arr.begin(), arr.end());

        vector<vector<int>> result;

        result.push_back({arr[0][0], arr[0][1]});

        for (int i = 1; i < arr.size(); i++) {

            vector<int> &last = result.back();

            if (arr[i][0] <= last[1]) {

                last[1] = max(last[1], arr[i][1]);

            } else {

                result.push_back({arr[i][0], arr[i][1]});
            }
        }

        return result;
    }
};