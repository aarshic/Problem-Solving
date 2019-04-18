#include <bits/stdc++.h>
using namespace std;

int minval(int a,int b){
    if(a>b)
        return b;
    else
        return a;
}

int maxval(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}

int gcdab(int a,int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a;
    if(a>b)
        return gcdab(a-b,b);
    return gcdab(a,b-a);
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long int a,b;
	    cin>>a>>b;
	    long int gcd=gcdab(a,b);
	    long int lcm=(a*b)/gcd;
	    cout<<lcm<<" "<<gcd<<endl;
	}
	return 0;
}
