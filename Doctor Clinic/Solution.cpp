using namespace std;

int main() {
	//code
	int t=1;
	cin>>t;
	for(int k=0;k<t;k++){
	    int n,x,nmin=0,xmin=0;
	    cin>>n>>x;
	    nmin=(n-1)*10;
	    xmin=x*(n-1);
	    if(n==1){
	        cout<<"0"<<endl;
	    }
	    else if(nmin>xmin){
	        cout<<nmin-xmin<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
