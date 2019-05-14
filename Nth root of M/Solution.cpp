#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int m;
	    cin>>n>>m;
	    int k = (int(round(pow(m,1.0/n))));
	    if(pow(k,n)==m){
	        cout<<k<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
