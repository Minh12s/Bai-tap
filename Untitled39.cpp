#include<stdio.h>

int main() {
	int a, b;
	// sum la bien luu tru tong cac so tu a toi b
	// luu y: ban gan phai gan gia tri cho sum = 0
	int sum = 0;
	scanf("5%d", &a, &b);
	 for (int i = a; i<= b; i++) {
	 	sum = sum + i;
	 }
	 printf("%d", sum);
	 return 0;
} 
