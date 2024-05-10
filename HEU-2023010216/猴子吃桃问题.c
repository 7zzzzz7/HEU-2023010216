#include <stdio.h>
#include <stdlib.h>
int hs(int n){
	if(n==0){
		return(1);
	}
	else{
	return((hs(n-1)+1)*2);
	}
}
int main(int argc, char *argv[]) {
	int hs(int n);
	int a = 9;
	printf("%d",hs(a));
	return 0;
}