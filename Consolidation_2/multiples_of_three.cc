bool is_multiple_3(int n) {

	bool multiple = true;
	int sum = 0;
	while (n != 0) {

		sum += n%10;
		n /= 10;

	}

	if (sum >= 10) multiple = is_multiple_3(sum);
	else if (sum % 3 == 0) return true;
	else if (sum % 3 != 0) return false;
	return multiple;

}
