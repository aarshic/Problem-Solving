#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    long long int sum=1;
	    cin>>n;
	    for(long long int i=2;i<=sqrt(n);i++){
	        if(n%i==0){
	            sum=sum+i+(n/i);
	        }
	    }
	    if(sum==n){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
