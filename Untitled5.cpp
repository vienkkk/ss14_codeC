#include<stdio.h>
#include<string.h>


int main(){
	char a[100];
	printf("Nhap chuoi ki tu "); 
	fgets(a,100,stdin); 
	char b=' ';
	int sum=1;
	int size = strlen(a); 
	for(int i=0;i<size;i++){
		if(a[i]==b){
			sum++; 
		} 
	} 
	printf("%d",sum); 
	
	return 0; 
} 
