#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    unsigned long int square=0;
	    for(int i=m,j=n;i>0,j>0;i--,j--){
	        if(i<=0 || j<=0){
	            break;
	        }
	        square=square+(i*j);
	    }
	    cout<<square<<endl;
	}
	return 0;
}
