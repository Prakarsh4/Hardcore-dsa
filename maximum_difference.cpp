#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maximum_difference(const vector<int>& arr) {
    int minval=arr[0];
    int maxval= arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]<minval)
            minval=arr[i];
        if(arr[i]>maxval)
            maxval=arr[i];
    }
    int ans= maxval-minval;
    return ans;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> vec(arr, arr + n);
    int result = maximum_difference(vec);
    int minval = *min_element(vec.begin(), vec.end());
    int maxval = *max_element(vec.begin(), vec.end());
    cout << "The maximum difference is: " << result << endl;
    cout << "numbers are: " << maxval << " and " << minval << endl;
    return 0;
}
