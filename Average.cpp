#include <stdio.h>

int main()
{
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a < b < c || a > b > c) {

		printf("%d", b);
	}
	else if (b < a < c || b > a > c) {

		printf("%d", a);
	}
	else if (b < c < a || b > c > a)
	{	

		printf("%d", c);
	}
}