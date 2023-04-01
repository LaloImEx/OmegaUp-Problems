#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    bool ok;    
    int n, k, d, m; 
    cin>>n; 
    d = n;
    int doors[n];    
    for(int i = 0; i < n; i++)cin>>doors[i];
    cin>>n;
    while(n--){
        cin>>k;
        int R = d, L = 1;        
        ok =  false;
        while(L<R)
        {   
            m = L+(R-L)/2;            
            if(doors[m-1]==k){
                cout<<m<<" ";                
                ok = true;
                break;
            }            
            if(doors[m-1]>k)
                R = m-1;
            else
                L = m+1;
        }  
        m = L+(R-L)/2;  
        if(doors[m-1]==k)
        {
            if(!ok)cout<<m<<" ";
        }else 
        {
            cout<<"0 ";
        }                  
        
    }
}
