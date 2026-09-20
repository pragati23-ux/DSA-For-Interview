#include<bits/stdc++.h>
using namespace std;
int slide(vector<int>&nums, int k){
    int i=0;
    int j=0;
    int sum=0;
    int maxi=0;
    int length=0;
    while(j<nums.size()){
        sum +=nums[j];
        while(sum>k){
             sum -=nums[i];
            i++;     
        }
        if(sum==k){
            length=j-i+1;
            maxi=max(maxi,length);       
        }
        j++;
    }
    return maxi;


}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<slide(nums,k);
    return 0;

}