#include <stdio.h>
#define LENGTH 100

int main() {
	int input_number = 0;
	int arr[LENGTH] = { 0 };
	printf("배열 arr[%d] 개의 방이 %d으로 초기화가 다 되었습니다.\n", LENGTH, arr[0]);
	
	for (int j = 0; j < LENGTH; j++) {
		arr[j] = j;
	}
	for (int j1 = 0; j1 < LENGTH; j1++) {
		printf("%2d ", arr[j1]);
	}
	printf("\n어디까지 2의 배수를 출력할까요? :");
	scanf_s("%d", &input_number);
	
	for (int i = 1; i <= input_number; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d\n", arr[i]);
		}
	}


	return 0;
}