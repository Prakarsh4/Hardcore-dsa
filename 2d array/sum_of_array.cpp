#include<iostream>
#include<vector>
using namespace std;
int sum_of_array(const vector<vector<int>>& arr) {
    int sum = 0;
    int rows = arr.size();
    int cols = arr[0].size();
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}
int main(){
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
    cout << "Enter the elements of the array: " << endl;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cin >> arr[i][j];
        }
    }
    int result = sum_of_array(arr);
    cout << "The sum of the array elements is: " << result << endl;
    return 0;
}