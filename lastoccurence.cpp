#include<bits/stdc++.h>
using namespace std;
int lastoccurenc(vector<int>&nums,int target){
    int answer=-1;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            answer=i;
        }
    }
    return answer;
}
int main(){
    vector<int>nums;
    int n;
    cin>>n;
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<lastoccurenc(nums,target);
    return 0;
}