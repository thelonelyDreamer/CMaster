#include<stdio.h>
#include"module.h"

extern int i;
int j=0;
int main(void){
	printf("%d",i);
	printf("%d",j);
	return 0;	
}
