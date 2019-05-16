#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int max_prime_factor=-1;
	    while(n%2==0){
	        max_prime_factor=2;
	        n=n/2;
	    }
	    for(long long int i=3;i<=sqrt(n);i+=2){
	        while(n%i==0){
	            n=n/i;
	        }
	    }
        max_prime_factor=n;
	    cout<<max_prime_factor<<endl;
	}
	return 0;
}
