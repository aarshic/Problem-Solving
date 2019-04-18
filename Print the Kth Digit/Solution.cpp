#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int a,b,k;
	    cin>>a>>b>>k;
	    long int p=pow(a,b);
	    int num;
	    while(k>0){
	        num=p%10;
	        p=p/10;
	        k--;
	    }
	    cout<<num<<endl;
	}
	return 0;
}
