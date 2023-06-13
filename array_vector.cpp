#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    King()
    int N;cin>>N;
    vector<int>v[N];
    for(int i=0; i<N; i++){
        int n; cin>>n;
        for(int j=0; j<n; j++){
            int x; cin>>x;
            v[i].push_back(x);
        }
    }
    cout<<"vectors are:\n";
    for(int i=0; i<N; i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


}