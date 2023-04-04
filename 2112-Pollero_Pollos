#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main() { fastio

    int n, sum = 0, it;
    long long int sizbag, inp;
    vector<long long int> v;
    
    cin>>n>>sizbag;
    for(int o = 0; o < n; o++)
    {
        cin>>inp;
        v.push_back(inp);
    }

    sort(v.begin(), v.end());

    int c = 0, div = n/2;    
    
    for(int i = 0; i < n; i++)
    {   
        it = 0;
        for(int m = i; m < n-1; m++)
        {                        
            if(v[c] + v[m+1] <= sizbag) sum += 1;
            it += 1;
        }    
        if(it == 1) break;
        
        c++;
    }

    cout<<sum;

}
