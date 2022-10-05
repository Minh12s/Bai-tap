#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if (n % 2 ==0) {
		printf("n is an even number");
	}
	if (n % 2 != 0) {
		printf("n is anodd number");
	}
	return 0;
}

