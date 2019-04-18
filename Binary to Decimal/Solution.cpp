#include <math.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long int b;
	    int i=0,sum=0;
	    cin>>b;
	    while(b>0){
	        if(b%10==1){
	            sum+=(b%10)*pow(2,i);
	        }
	        b=b/10;
	        i++;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
