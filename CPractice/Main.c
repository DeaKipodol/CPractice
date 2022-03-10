#include<stdio.h>

int sum(int a, int b) {
	int c = a + b;
	return c;
}

int main()//작업 순서를 나타내는 entry function.
		  // entry point(시작지점)을 알려주어 컴퓨터에게 작업을 명령한다.
		  //컴퓨터는 프로그램 속 여러 부 명령들을 어떤 순서로 실행하는지 모르기에 작업 순서를 모르면 실행조차 안한다 그래서 
	//작업순서를 알려주는 entry함수가 필요하며 그걸 전통적으로 main이라한다.
{
	printf("Welcome to Cprogramming!\r\n");
	
	int Result = sum(1, 2);

	return 0;
	
}