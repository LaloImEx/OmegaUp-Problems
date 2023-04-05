#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long int lli;
lli m, sum, L = 0, R = 1000000000;

bool pos(vector<lli>& chocos, lli cant)
{
    sum = 0;
    for(int i=0; i < chocos.size(); i++){
        sum += chocos[i];
        sum -= cant;
        if(sum < 0) return false;    
    }
    return true;
}

lli bns(vector<lli>& vec)
{
    while(L<R)
    {
        m = L+(R-L+1)/2;
        if(pos(vec, m)) L = m;
        else R = m-1;
    }
    return L;    
}

int main()
{
    int n; cin>>n;
    vector<lli> c;
    lli ct = 0,inp;

    while(cin>>inp){
        c.push_back(inp);
        ct += inp;
    }

    lli res;
    res = bns(c);
    cout<<res;
}
