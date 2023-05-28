#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>line;
    while(n--){
         ll k;
         cin>>k;
         line.push_back(k);
    }
    sort(line.begin(),line.end());
    while(m--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll z=4*a*c;
        ll f=0;
        if(z<=0)cout<<"NO"<<endl;
  else{
        ll s=0,e=line.size()-1;
         while(s<=e){
             ll mid = (s+e)/2;
               if((b-line[mid])*(b-line[mid])<z)
               {
                   cout<<"YES"<<endl;
                   cout<<line[mid]<<endl;
                   f=1;
                   break;
               }
               else if(b>line[mid])
                 s=mid+1;
                 else 
                 e=mid-1;
               } 
               if(f==0)cout<<"NO"<<endl;
        }
       
    }
   
}
int main(){
      ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tc;
    cin>>tc;
for (int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}
