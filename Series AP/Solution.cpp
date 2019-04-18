#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int n,res=0;
	    cin>>n;
	    res = a+(n-1)*(b-a);
	    cout<<res<<endl;
	}
	return 0;
}
