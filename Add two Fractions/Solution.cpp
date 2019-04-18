void addFraction(int num1, int den1, int num2,int den2){
    int num=(num1*den2)+(num2*den1);
    int den=den1*den2;
    for(int i=2;i<(num/2);i++){
        if(num%i==0){
            if(den%i==0){
                num=num/i;
                den=den/i;
                i=1;
            }
        }
    }
    cout<<num<<"/"<<den<<endl;
}
