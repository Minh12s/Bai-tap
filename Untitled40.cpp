#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	// Bien luu tru tong cac so tu a toi b 
	// luu y: ban can khoi tao gia tri cho bien = 0
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 1) {
			// sum += 1 tuong duong voi sum = sum +i
			sum += i;
		}
	} 
	printf("%d", sum);
	return 0;
} 
