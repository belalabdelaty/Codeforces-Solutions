	#include <bits/stdc++.h>
	#define endl '\n'
	using namespace std;
	#define ison(n,k)   ((n>>k)&1)
	
	signed main() {
	  
	  int t; cin>>t ;
	  while(t--){
        int n,q;cin>>n>>q;
        int mx=0;
        int arr[n]; for(int i =  0 ; i < n ; i++) {
		cin>>arr[i];
		mx=max(mx,arr[i]);
	}
	while(q--){
		char ch;cin>>ch;
		int l,r; cin>>l>>r;
		if(ch=='+' && mx>=l && mx <=r){mx++;}
		if(ch=='-' && mx>=l && mx <=r){mx--;}
		cout<<mx<<" ";
	}
	cout<<endl;
	
	}
	

	  return 0;
	}
		
