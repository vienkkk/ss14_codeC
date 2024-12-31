#include <stdio.h>
#include<string.h>


int main() {
	char a[100];
	printf("Nhap chuoi ki tu ");
	fgets(a,100,stdin);
	char c=' ';
	int sum=0;
	a[strcspn(a, "\n")] = '\0';
	int size = strlen(a);
	for(int i=0; i<size; i++) {
		if(a[i]==c) {
			sum--;
		}
		sum++;
	}
	printf("%d",sum);
	return 0;
}
