#include<stdio.h>
#include<string.h>


int main(){
	char a[100];
	printf("Nhap chuoi ki ti ");
	fgets(a,100,stdin);
	char b; 
	printf("Nhap chu can tim  ");
	scanf("%c",&b);
	int sum=0; 
	int size = strlen(a);
	for(int i=0;i<=size;i++){
		if(b==a[i]){
			sum++; 
		} 
	} 
	printf("so lan lap %d",sum) ;
	
	return 0; 
} 
