#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define pb push_back
#define pp pop_back


int main(){
    King()
    stack<ll>s;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        s.push(x);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        // s.front() This is for Queues!!!
        s.pop();
    }

}