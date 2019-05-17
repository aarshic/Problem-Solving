//Square of all prime no less than sqrt(n)
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
    int t;
    cin>>t;
    while(t--){
        long long int n;
        int pcount=0,flag=0;
        cin>>n;
        int m=sqrt(n);
        for(int i=2;i<=m;i++){
            flag=0;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                pcount++;
            }
        }
        cout<<pcount<<endl;
	}
	return 0;
}
