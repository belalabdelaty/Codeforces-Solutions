#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;


signed main(){
	int t;cin>>t;
  	while(t--){
      int a,b,k;cin>>a>>b>>k;
      int aa=(a+k-1)/k,bb=(b+k-1)/k;
      if(aa<=bb)cout<<2*bb<<endl;
      else cout<<2*aa-1<<endl;
}
return 0;
}
