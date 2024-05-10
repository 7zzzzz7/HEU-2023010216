#include <stdio.h>
#include <stdlib.h>
float lrdd (int n,int x){
	if(n==0){
		return(1);
	}
	else if(n==1){
		return(x);
	}
	else{
		return(((2*n-1)*x-lrdd(n-1,x)-(n-1)*lrdd(n-2,x))/n);
	}
}
int main(int argc, char *argv[]) {
	float lrdd (int n,int x);
	int n,x;
	scanf("%d,%d",&n,&x);
	if(n<0){
		printf("error");
	}
	else{
	printf("%.2f",lrdd(n,x));
	}
	return 0;
}