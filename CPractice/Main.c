#include<stdio.h>

int sum(int a, int b) {
	int c = a + b;
	return c;
}

int main()//�۾� ������ ��Ÿ���� entry function.
		  // entry point(��������)�� �˷��־� ��ǻ�Ϳ��� �۾��� ����Ѵ�.
		  //��ǻ�ʹ� ���α׷� �� ���� �� ��ɵ��� � ������ �����ϴ��� �𸣱⿡ �۾� ������ �𸣸� �������� ���Ѵ� �׷��� 
	//�۾������� �˷��ִ� entry�Լ��� �ʿ��ϸ� �װ� ���������� main�̶��Ѵ�.
{
	printf("Welcome to Cprogramming!\r\n");
	
	int Result = sum(1, 2);

	return 0;
	
}