//spoj EKO???
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);

//Have faith in your function!

int sum_n(int n){
    if(n==0)return 0; 
    return n+sum_n(n-1);
}
int factorial_n(int n){
    if(n==0)return 1; 
    return n*factorial_n(n-1);
}
int sum_digit(int n){
    if(n==0)return 0;
    return n%10+sum_digit(n/10);
}
void pattern_print(int n){
    if(n==0)return;
    for(int i=1; i<=n; i++)cout<<'*'<<" ";
    cout<<endl;
    pattern_print(n-1);
    for(int i=1; i<=n; i++)cout<<'*'<<" ";
    cout<<endl;
    // pattern_print(n-1);
}
int fibonacci(int n){
    if(n==1)return 1;
    if(n==2)return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
string palindrome_check(string &s, int l, int r){
    if(s[l]!=s[r])return "no";
    else return "yes";
    palindrome_check(s, l+1, r-1);
}
int nCr(int n, int r){
    if(r==1)return n;
    if(n==r)return 1;
    return nCr(n-1, r)+nCr(n-1, r-1);
}
int gcd(int x, int y){
    if(y==0)return x;
    return gcd(y, x%y);
}
// int lcm(int x, int y){
//     return (x*y)/gcd(x,y);
// }
int lcm(int x, int y){
    if(x==0 || y==0)return 0;
    static int c=1;
    if(c%x==0 && c%y==0)return c;
    c++;
    return lcm(x, y);
}

int main(){
    King()
    // int n; cin>>n;
    // cout<<sum_n(n)<<endl;

    // cout<<factorial_n(n)<<endl;

    // cout<<sum_digit(n)<<endl;

    // pattern_print(n);

    // cout<<fibonacci(n)<<endl;

    // string s; cin>>s;
    // int r=s.size();
    // cout<<palindrome_check(s, 0, r-1)<<endl;
    // int n, c;
    // cin>>n>>c;
    // cout<<nCr(n, c)<<endl;
    // int x, y; cin>>x>>y;
    // cout<<gcd(x, y)<<endl;
    // cout<<__gcd(x, y)<<endl;
    // if(lcm(x, y)) cout<<lcm(x, y)<<endl;
    // else cout<<"INVALID!";
    // cout<<boost::math::lcm(x, y)<<endl;
}
