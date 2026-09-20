#include<bits/stdc++.h>
using namespace std;
vector<int>sorted(vector<int>&nums,vector<int>&nums2){
    vector<int>result;
    int i=0;
    int j=0;
    while(i<nums.size()&&j<nums2.size()){
        if(nums[i]<nums2[j])
        {
          result.push_back(nums[i]);
          i++;
        }
        else
        {
          result.push_back(nums2[j]);
          j++;
        }
    }
    while(i<nums.size()){
        result.push_back(nums[i]);
        i++;
    }
    while(j<nums2.size()){
        result.push_back(nums[j]);
        j++;
    }
    return result;

}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    vector<int>nums2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
        sort(nums.begin(),nums.end());
    }
    for(int j=0;j<n;j++){
        int y;
        cin>>y;
        nums2.push_back(y);
        sort(nums2.begin(),nums2.end());
    }
    sorted(nums,nums2);
}