#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define pb push_back
int hsh[26];

int main(){
    int t; cin>>t;
    while(t--){
       int n, sum=0; cin>>n;
       vector<int>v(n);
       for(int i=0; i<n; i++)cin>>v[i];
       for(int i=0; i<n-1; i++){
            sum+=abs(v[i]-v[i+1]);
       }
       int mn=*min_element(v.begin(), v.end());
       sort(v.begin(), v.end(), greater<int>());
       int sm=0, c=0;
       for(auto l : v){
            if(sm==sum)break;
            sm+=abs(mn-l);
            c++;
       }
       cout<<c+1<<endl;

    }

}
