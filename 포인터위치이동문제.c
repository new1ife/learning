#include <stdio.h>
#include <stdlib.h>
int arrlen(int* arr);

int main() {
	int arr[10] = {0};

	for (int i = 0; i <= 9; i++) {
		arr[i] = (1 + rand() % 100);
	} // �� �迭�� ������ �����Ǿ ������ �Ǿ���.

	arrlen(arr); //����� ���� �Լ� ȣ��, �迭���� �� �ּҸ�
	
	printf("�迭 ���� �� : =  ");
	for (int i = 0; i <= 9; i++) {
		printf("%d ", arr[i]);
	} 

	int x = sizeof(arr) / sizeof(int); // �迭�� ���̸� ���ҋ� ����
	// int = 4byt �ε� �迭�� 10���̴� 4*10/4�ϸ� �ȴ�.
	printf("�迭�� ���� : %d", x);

	return 0;
}


int arrlen(int* arr) {
	//������ ������ �迭 �ּҰ� �� �ִ�.
	printf("��°�� \n");

	for (int i = 0; i <= 9; i++) {
		printf("���� = [%d], arr �迭�� �ε���  = %d\n", arr[i], i);
		printf("������ �ּ� ��ġ �̵� : %p \n", &arr[i]); 
		// ���⼭ &�� ���̴� ������ arr[i]�� �迭�� ���Ҹ� �ǹ� �ϱ⿡
		//&�� ����ؼ� �迭�ǿ��� �ּҸ� ������ �;��Ѵ�.

	}
	
	return 0;
}