#include<iostream>
#include<algorithm>
using namespace std;
int kande_Algo(int arr[], int n){
     if(n<=0) return 0;
     int currentsum=arr[0];
     int maxsum=arr[0];
      for(int i=1;i<n;i++){
          currentsum=max(arr[i],currentsum+arr[i]);
          maxsum=max(currentsum, maxsum);
      }
      return maxsum;
}
int main(){
    int arr[100000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<kande_Algo(arr, n)<<endl;
    return 0;
}