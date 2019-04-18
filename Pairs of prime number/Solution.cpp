#include <bits/stdc++.h>
using namespace std;

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int flag=0;
	    vector<int> prime;
	    for(int i=2;i<n;i++){
	        flag=0;
	        for(int j=2;j<i;j++){
	            if(i%j==0){
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0){
	            prime.push_back(i);
	        }
	    }
	    for(int i=0;i<prime.size();i++){
	        for(int j=0;j<prime.size();j++){
	            if(prime[i]*prime[j]<=n){
	                cout<<prime[i]<<" "<<prime[j]<<" ";
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
