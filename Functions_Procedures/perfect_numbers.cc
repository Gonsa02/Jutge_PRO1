bool is_perfect(int n){
	if (n>=2){
	int result=0, i=1;
	while(i*i<=n){
		if(n%i==0){
		      result += i;
		      result += n/i;
		}
		++i;
	}
	if (result/2 == n and result%2==0) return true;
	else return false;
	}
	else return false;
}
