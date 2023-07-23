//#include <stdio.h>
//
//void isEven(int num);
//
//int main() {
//	int num_main = 0;
//	printf("intput number : ");
//	scanf_s("%d", &num_main);
//	isEven(num_main);
//	return 0;
//}
//
//void isEven(int num) {
//	if (num % 2 == 0) {
//		printf("1");
//	}
//	else if(num %2 == 1){
//		printf("0");
//	}
//	return ;
//}
////문제 풀이
////느낀점 : 조건문이 꼭 if 만 있는게 아니였지? 라는 생각이 들었음
//
//#include <stdio.h>
//
//int isEven(int num) {
//	return num % 2 == 0 ? 1 : 0;
//}
//
//int main() {
//	int num;
//	printf("Enter an integer: ");
//	scanf("%d", &num);
//
//	int result = isEven(num);
//	if (result) // 참이면 위에 아니면 아래 출력이군
//		printf("%d is even.\n", num);
//	else
//		printf("%d is odd.\n", num);
//
//	return 0;
//}
//
//
