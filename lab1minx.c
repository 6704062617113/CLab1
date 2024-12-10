#include <stdio.h>
int main() {
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	if (num1>num2){
		printf("num1 is more then num2 %d\n",num1-num2);
	}
	else{
		printf("num2 is more then num1 %d\n",num2-num1);
	}
}

