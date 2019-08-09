#include <stdio.h>
int main() {
	int a, b;
	printf("Pleas Enter a Value:");
	scanf_s("%d", &a);
	printf("\n");
	printf("Pleas Enter b Value:");
	scanf_s("%d", &b);
	printf("\n");
	if(a > b){
		printf(">");
	}
	if (a < b) {
		printf("<");
	}
	if (a == b) {
		printf("==");
	}
	return 0;
}