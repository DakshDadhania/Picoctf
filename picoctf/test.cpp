#include<bits/stdc++.h>
#include<string>
using namespace std;


#define ll long long
#define pb push_back
#define F first

typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
void readvl(vl &v,ll n)
{
    for(ll i=0; i<n; i++)cin>>v[i];
}
void yes()
{
    cout<<"YES"<<endl;
}


ll lengthOfLIS(vector<ll>& a)
{
    ll n = a.size();
    vector<ll> len;
    for(ll i = 0; i < n; i++)
    {
        auto lb = upper_bound(len.begin(), len.end(), a[i]);
        if(lb != len.end())
        {
            *lb = min(*lb, a[i]);
        }
        else
        {
            len.push_back(a[i]);
        }
    }
    return len.size();
}

void solve()
{
    ll n,m;
    cin>>n>>m;
    vl a(n),b(m);
    readvl(a,n);
    readvl(b,m);
    ll mx1=1,mx2=1;
    mx1 = lengthOfLIS(a);
    mx2 = lengthOfLIS(b);
    cout<<mx1+mx2<<endl;
}




int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll testcasehai = 1;
    cin>>testcasehai;


    while(testcasehai--)
    {
        solve();
    }
    return 0;
}