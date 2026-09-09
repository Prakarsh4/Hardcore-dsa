/*#include<iostream>
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
};*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;
        
         for(int i=0;i<t.length();i++){
            char a= s[i];
            char b= t[i];
            if(mp1.count(a)&&mp1[a]!=b){
                return false;
            }
            if(mp2.count(b) && mp2[b]!=a){
                return false;
            }
            mp1[a]=b;
            mp2[b]=a;
         }
        return true;
    }
};