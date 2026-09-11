#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>&nums){
     unordered_set<int>duplicate;
     int actualsum=0;
     int dup=-1;
     int n=nums.size();
     for(int x:nums){
        actualsum +=x;
        if(duplicate.count(x))
         { dup=x;
          
         }
        else
         duplicate.insert(x);
     }
     int expected_sum=n*(n-1)/2;
     int missing=expected_sum-actualsum+dup;
     cout<<"duplicate"<<dup;
     return missing;

}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<missing(nums);
}