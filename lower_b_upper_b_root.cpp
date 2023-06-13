#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);

double multiply(double x, double y){
    double mul=1;
    while(y--){
        mul*=x;
    }
    return mul;
}

double root(double n, double y){
    double l=1, r=n, mid;
    while(r-l>(1e-8)){
        mid=(l+r)/2;
        if(multiply(mid, y)<n)l=mid;
        else r=mid;
    }
    if(l==n)return l;
    else return r;
}

// int lower_bound(vector<int>&v, int n){
//     int l=0, h=v.size()-1, mid;
//     while(h-l>1){
//         mid=(l+h)/2;
//         if(v[mid]<n)l=mid+1;
//         else h=mid;
//     }
//     if(v[l]>=n)return v[l];
//     else if(v[h]>=n) return v[h];
//     else return -1;
// }
// int upper_bound(vector<int>&v, int n){
//     int l=0, h=v.size()-1, mid;
//     while(h-l>1){
//         mid=(l+h)/2;
//         if(v[mid]<=n)l=mid+1;
//         else h=mid;
//     }
//     if(v[l]>n)return v[l];
//     else if(v[h]>n) return v[h];
//     else return -1;
// }

signed main(){
    King()
    double n, y; cin>>n>>y;
    double ans=root(n, y);
    cout<<ans;

    // vector<int>v(n);
    // for(int i=0; i<n; i++)cin>>v[i];
    // sort(v.begin(), v.end());
    // int x; cin>>x;
    // int l_b=lower_bound(v, x);
    // int u_b=upper_bound(v, x);
    // cout<<"Lower_bound:"<<l_b<<endl;
    // cout<<"Upper_bound:"<<u_b<<endl;
}
