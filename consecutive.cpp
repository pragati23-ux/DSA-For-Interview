//meri gltiya mene out of bound mtlb n-1 likhna tha aur count ko 1 krenge kyuki hum maan k chal rhe hai usko phla usse hum dekhenge aur elements cosecutive hai ya nhi
#include<bits/stdc++.h>
using namespace std;
int consecutive(vector<int>&nums){
    int n=nums.size();
    if(n==0)
     return 0;
    int count=1;
    int maxi=INT_MIN;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-1;i++){
        if(nums[i]+1==nums[i+1])
         count++;
        else
         count=1;
        maxi=max(maxi,count);
    }
    return maxi;


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
    cout<<consecutive(nums);
    return 0;

}