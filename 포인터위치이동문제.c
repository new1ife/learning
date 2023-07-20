#include <stdio.h>
#include <stdlib.h>
int arrlen(int* arr);

int main() {
	int arr[10] = {0};

	for (int i = 0; i <= 9; i++) {
		arr[i] = (1 + rand() % 100);
	} // 각 배열의 난수가 생성되어서 대입이 되었다.

	arrlen(arr); //사용자 정의 함수 호출, 배열명은 곧 주소명
	
	printf("배열 원본 값 : =  ");
	for (int i = 0; i <= 9; i++) {
		printf("%d ", arr[i]);
	} 

	int x = sizeof(arr) / sizeof(int); // 배열의 길이를 구할떄 공식
	// int = 4byt 인데 배열이 10개이니 4*10/4하면 된다.
	printf("배열의 길이 : %d", x);

	return 0;
}


int arrlen(int* arr) {
	//포인터 변수에 배열 주소가 들어가 있다.
	printf("출력결과 \n");

	for (int i = 0; i <= 9; i++) {
		printf("숫자 = [%d], arr 배열의 인덱스  = %d\n", arr[i], i);
		printf("포인터 주소 위치 이동 : %p \n", &arr[i]); 
		// 여기서 &을 붙이는 이유는 arr[i]는 배열의 원소를 의미 하기에
		//&을 사용해서 배열의원소 주소를 가지고 와야한다.

	}
	
	return 0;
}