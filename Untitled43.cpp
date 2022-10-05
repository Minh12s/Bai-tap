#include<stdio.h>

int  main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i<= n; i++) {
		//Neu n chi het cho i thi i chinh la uoc cua n
		if (n % i == 0) {
			printf("%d ", i); 
		} 
	} 
	return 0; 
} 
