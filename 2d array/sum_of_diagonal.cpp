#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class solution{
    public:
    int sum_of_diagonal(vector<vector<int>>&arr){
        int n=arr.size();
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i][i];
            if(i!=n-1){
                sum+=arr[i][n-i-1];
            }
        }
        return sum;
    }
};
int main(){
    int n;
    cout<<"enter the size of the 2d array: ";
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(n));
    cout<<"enter the elements of the 2d array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    solution s;
    cout<<"sum of diagonal elements: "<<s.sum_of_diagonal(arr)<<endl;
}