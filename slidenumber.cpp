#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count=0;
    bool slided=false;
    while(n>0){
        if(n%2!=0){
          n=n-1;
          count++;
        }
        else{
            if(!slided){
            while(n%2==0 && n>0){
                n=n/2;
            }
            count++;
            slided=true;
        }
        else{
            n=n/2;
            count++;
        }
        }
    }
    cout<<count;

}