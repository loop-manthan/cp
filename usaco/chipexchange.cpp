#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pair<ll,ll>>
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define sz(x) (ll)(x).size()
#define endl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
#define f(i,a,b) for(ll i=a;i<b;i++)
#define rf(i,a,b) for(ll i=a;i>=b;i--)
#define input(a) for(auto &x:a)cin>>x
#define output(a) for(auto x: a) cout<<x<<" ";
#define maxe(a) *max_element(all(a))
#define mine(a) *min_element(all(a))
#define lb lower_bound
#define ub upper_bound
#define sum(a) accumulate(all(a), 0LL)
const ll INF=1e18;
const ll MOD=998244353;

void solve(){
    ll a, b, ca, cb, fa;
    cin>>a>>b>>ca>>cb>>fa;
    //first convert all b to a
    ll k = (b/cb);
    b -= k*cb;
    a += k*ca;
    ll arem = fa-a;
    if(arem<=0){
        cout<<0<<endl;
        return;
    }
    if(ca>=cb){
        //assume all given are As
        cout<<arem<<endl;
        return;
    }
    // if cb>ca then assume all x are b
    // then solve equation ((x+b)/cb)*ca >= arem where x+b is a multiple of cb, solev for x
}

int main(){
    fast;
    ll t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
