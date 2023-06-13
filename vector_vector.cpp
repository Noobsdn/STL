#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    vector<vector<int>>v;
    int N; cin>>N;

    for(int i=0; i<N; i++){
        vector<int>tmp;
        int n; cin>>n;
        for(int j=0; j<n; j++){
            int x; cin>>x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}