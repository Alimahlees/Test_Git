#include <stdio.h>
int fun(int x){};
int main(){
	int x = 5;
	fun(x);
	printf("%d ", x);
	return 0;
}

int fun(int x){

	x++;
	return x;
}
