#include<bits/stdc++.h>
using namespace std;
// void print(int n){
//     print(n-1);
//     cout<<n;
// } ye output dega tmhara aise 1 2 3 4 5
void print(int n){
    if(n==0)
        return;
    cout<<n;
    print(n-1);
}
// ye output dega tmhara 5 4 3 2 1
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}