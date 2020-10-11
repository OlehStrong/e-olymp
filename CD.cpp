// CD.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main()
{
	int n;

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	int price = 0;
	if (n >= 70) {
		if (n >= 100) {
			price = 100 * (n / 100);
			n = n - 100 * (n / 100);
		}
		else
		{
			price = price + 100;
		}
	
	}
	 if (n < 70 && n>15) {
		if (n > 20) {
			price = price + (30 * (n / 20));
			n = n - (n / 20 * 20);
		}
		else {
			price = price + 30;
		}
	}
	if(n<=15){

		price += n * 2;
	}
	printf("%d", price);
    
}

