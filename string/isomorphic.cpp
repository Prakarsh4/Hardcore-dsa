#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<i; j++){
                if(s[i]==s[j] && t[i]!=t[j] ){
                    return false;
                }
                if(t[i]==t[j] && s[i]!=s[j]){
                    return false;
                }
                
            }
           
        }
         return true;
    }
};