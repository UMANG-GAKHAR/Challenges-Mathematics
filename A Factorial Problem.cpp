#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
int comp(int n,int x){
    int k = x;
    int ans = 0;
        while(k<=n){
            ans = ans + (n/k);
            k = k*x;
        }
    return ans;
}
int prime(int n, int k){
    int ans = INT_MAX;
    for(int i=2;i*i<=k;i++){
        if(k%i == 0){
            int cnt = 0;
            while(k%i == 0){
                k = k/i;
                cnt++;
            }
            int x = comp(n,i);
            x = x/cnt;
            ans = min(ans,x);
        }
    }
    if(k!=1){
        ans = min(ans,comp(n,k));
    }
    return ans;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<prime(n,k)<<endl;
    }
    return 0;
}
