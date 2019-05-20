/************************Code by Hardik Aggarwal!!!!***********************************/

#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL); 

#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define mp make_pair
#define pu push
#define pp pop_back
#define in insert
#define ld long double
#define endl '\n'
#define debug cout << "Hold right there sparky.....\n";
#define forn(low,high,i) for(i=low;i<high;i++)
#define forrev(high,low,i) for(i = high; i>= low;i--)
#define trace(x) cerr << #x << ": " << x << " " << endl;

typedef long long int ll;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
const ll mod =998244353;


int main()
{
	   #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    IOS
    ll n,i,ans;
    cin>>n;
    bool a[n];
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    }

   
    	for(i=n-2;i>=0;i--)
    	{
    		if(a[i]==!a[n-1])
    		{
    			ans=i;
    			break;
    		}

    	}
    


    cout<<ans;

    
}
    
 
    
    


