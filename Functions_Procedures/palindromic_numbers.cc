bool is_palindromic(int n){
	int reverse=0, memory=n, i=1;
	while(n/10!=0 or n%10 !=0){
	      i *= 10;
	      n= n/10;
	}
	i = i/10;
	n=memory;
	while(n!=0 or n%10!=0){
		reverse += (n%10)*i;
		i /= 10;
		n = n/10;	
	}
	if (reverse == memory) return true;
	else return false;
}
