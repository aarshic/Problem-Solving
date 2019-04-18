#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum=0;
	    while(n>0){
	        sum+=n%10;
	        n=n/10;
	    }
	    vector<int> d;
	    while(sum>0){
	        d.push_back(sum%10);
	        sum=sum/10;
	    }
	    int m=d.size(),flag=0;
	    for(int i=0,j=m-1;i<=m/2,j>=m/2;i++,j--){
	        if(d[i]==d[j]){
	            continue;
	        }
	        else{
	            flag=1;
	        }
	    }
	    if(flag==1){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
