#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int stock_price(vector<int> & arr){
    int minprice=arr[0];
    int maxprofit=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]<minprice){
            minprice=arr[i];
        }
        int profit=arr[i]-minprice;
        if(profit>maxprofit){
            maxprofit=profit;
        }
    }
    return maxprofit;
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
    int result = stock_price(vec);
    cout << "The maximum profit is: " << result << endl;
    return 0;
}
