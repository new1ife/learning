//#include <stdio.h>
//
//int computeFactorial(int num);
//
//
//int main() {
//	int num = 0;
//	printf("input number : ");
//	scanf_s("%d", &num);
//	int result = computeFactorial(num);
//	printf("%d의 팩토리얼 : %d", num,result);
//
//	return 0;
//}
//
//int computeFactorial(int num) { //num = 5
//	/* for문으로 돌릴때에 팩토리얼
//	int fac = 1;
//	for (int i = 1; i <= num; i++) {
//		fac = fac * i;
//	} 
//	return fac; */
//	// 재귀함수는 꼭 탈출문을 작성하자
//
//	if (num == 0 || num == 1) {
//		return 1;
//	}
//	return num * computeFactorial(num - 1); // 재귀함수로 풀었음
//}
//
//// 문제 풀이 
////느낀점 재귀함수 할떄 탈출 코드를 깜박했음
//int computeFactorial(int n) {
//	if (n == 0 || n == 1)
//		return 1;
//	else
//		return n * computeFactorial(n - 1);
//}
//
//int main() {
//	int num;
//	printf("Enter a number: ");
//	scanf("%d", &num);
//
//	int result = computeFactorial(num);
//	printf("Factorial of %d is %d.\n", num, result);
//
//	return 0;
//}
