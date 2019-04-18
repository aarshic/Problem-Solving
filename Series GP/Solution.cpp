#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    float a,b,n;
	    cin>>a>>b;
	    cin>>n;
	    float r,p,res;
	    r=b/a;
	    p=pow(r,(n-1));
	    res=a*p;
	   // cout<<"r = "<<r<<" p = "<<p<<" res = "<<res<<endl;
	    cout<<floor(res)<<endl;
	}
	return 0;
}
