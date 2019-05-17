#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int ax,ay,bx,by,cx,cy,dx,dy;
	    cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
	    if((ax==bx && ((ay==cy && ax-cx!=0) || (ay==dy && ax-dx!=0))) || (ax==cx && ((ay==by && ax-bx!=0) || (ay==dy && ax-dx!=0))) || (ax==dx && ((ay==by && ax-by!=0) || (ay==cy && ax-cx!=0)))){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
