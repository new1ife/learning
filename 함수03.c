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
//	printf("%d�� ���丮�� : %d", num,result);
//
//	return 0;
//}
//
//int computeFactorial(int num) { //num = 5
//	/* for������ �������� ���丮��
//	int fac = 1;
//	for (int i = 1; i <= num; i++) {
//		fac = fac * i;
//	} 
//	return fac; */
//	// ����Լ��� �� Ż�⹮�� �ۼ�����
//
//	if (num == 0 || num == 1) {
//		return 1;
//	}
//	return num * computeFactorial(num - 1); // ����Լ��� Ǯ����
//}
//
//// ���� Ǯ�� 
////������ ����Լ� �ҋ� Ż�� �ڵ带 ��������
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
