#include<stdio.h>
#include <string.h>

 
int main(){
	char a[100];
	printf("Nhap chuoi ki tu ");
	fgets(a,100,stdin);
	int size =strlen(a);
	for(int i=0;i<=size;i++){
		printf("%c ",a[i]); 
	}	
	return 0; 
} 
