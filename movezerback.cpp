#include<bits/stdc++.h>
using namespace std;
vector<int>move(vector<int>&nums){
    int n;
    n=nums.size();
    int j=0;
    int i=0;
    for( i=0;i<n;i++){
        if(nums[i] !=0){
            nums[j]=nums[i];
            j++;
        }
    }
    for(j=i;j<n;j++){
        nums[i]=0;
    }
    return nums;
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
    move(nums);
    return 0;

}