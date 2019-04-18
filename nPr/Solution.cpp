#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,r;
	    long int num=1;
	    cin>>n>>r;
	    for(int i=n;i>(n-r);i--){
	        num*=i;
	    }
	    cout<<num<<endl;
	}
	return 0;
}
