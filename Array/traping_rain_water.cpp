#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int leftmax=0;
        int rightmax=0;
        int water=0;
        while(left<right){
            if(height[left]<=height[right]){
                if(height[left]>=leftmax){
                    leftmax=height[left];
                }
                else{
                water+=leftmax - height[left];
                }
            
                left++;
            }else{
                if (height[right]>=rightmax){
                    rightmax=height[right];
                }
                else{
                water+=rightmax-height[right];
            }
            right--;
        }
     }
  
     return water;
    }
};
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    vector<int> height(n);
    cout<<"enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    Solution s;
    cout<<"the amount of water that can be trapped is: "<<s.trap(height)<<endl;
}
