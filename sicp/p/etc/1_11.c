/* Recrusion */
int fn_rec(int n)
{
	if (n < 3) {
		return n;
	} else {
		return fn_rec(n-1) + 2 * fn_rec(n - 2) + 3 * fn_rec(n - 3);
	}
}

/* Iteration */
int fn_iter(int n)
{
	if (n < 3) {
		return n;
	}

	int a = 0;
	int b = 1;
	int c = 2;
	int result = 0;

	for (int i = 3; i <= n; ++i) {
		result = c + 2 * b + 3 * a;
		a = b;
		b = c;
		c = result;
	}

	return result;
}
