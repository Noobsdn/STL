#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define pb push_back

int main(){
    King()
    vector<ll>v={1, 2, -3, 4, 5, 6};
    cout<<all_of(v.begin(), v.end(), [](int x){return x>0;})<<endl;
    cout<<none_of(v.begin(), v.end(), [](int x){return x>0;})<<endl;
    cout<<any_of(v.begin(), v.end(), [](int x){return x>0;})<<endl;

}