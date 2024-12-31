#include <stdio.h>
#include <string.h> 


int main(){
	char a[100];
	printf("Nhap vao chuoi bat ki ");
	fgets(a,100,stdin); 
	printf("Do dai cua chuoi %d",strlen(a)-1); 
	
	return 0; 
} 
