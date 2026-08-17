#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int count_maximum(vector<int> & arr){
    int candidates=0;
    int count=0;
    for(int num:arr){
        if(count==0){
            candidates=num;
        }
        if(num==candidates){
            count++;
        }
        else{
            count--;
        }
    }
    return candidates;
}
int main(){
    int n;
    cout<<"enetr the elements of the arr";
    cin>>n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = count_maximum(arr);
    cout << "Majority candidate: " << result << endl;

    return 0;

}