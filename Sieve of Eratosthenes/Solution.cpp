#include <bits/stdc++.h>
using namespace std;

int main() {
	//code	
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0;
	    cin>>n;
	    vector<int> prime;
	    for(int i=2;i<=n;i++){
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
	        cout<<prime[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
