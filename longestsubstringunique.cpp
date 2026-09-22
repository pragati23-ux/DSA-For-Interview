#include<bits/stdc++.h>
using namespace std;
int longest(string s){
    int l=0;
    int r=0;
    int maxi=0;
    int n=s.length();
    int length=0;
    unordered_map<char,int>mp;
    while(r<n){
        mp[s[r]]++;
        while(mp[s[r]]>1){
            mp[s[l]]--;
            l++;
            
        }
        length=r-l+1;
        maxi=max(maxi,length);

        r++;

    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<longest(s);
     
}
