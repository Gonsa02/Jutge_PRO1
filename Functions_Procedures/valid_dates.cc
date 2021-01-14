bool is_leap_year(int year){
    	if ((year%4==0 and year%100!=0)or(year%400==0)){
		return true;
    	}else{
		return false;
    	}
}

bool is_valid_month(int d, int m){
	if ((m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12)and d<=31) return true;
	else if ((m==2 or m==4 or m==6 or m==9 or m==11) and d<=30) return true;
	else return false;
}

bool is_valid_date(int d, int m, int y){
	if (m!=2){
	if((0<d and d<=31 and 0<m and m<=12 and 1800<=y and y<=9999)and is_valid_month(d,m)) return true;
	else return false;
	}
	else{
		if (is_leap_year(y) and(0<d and d<=29 and 0<m and m<=12 and 1800<=y and y<=9999)) return true;
		else if (!is_leap_year(y) and(0<d and d<=28 and 0<m and m<=12 and 1800<=y and y<=9999)) return true;
		else return false;
	}
}
