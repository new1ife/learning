//#include <stdio.h>
//
//int calculatePower(int base, int exponent);
//
//int main() {
//	int num1 = 0, num2 = 0;
//
//	printf("num1 input : ");
//	scanf_s("%d", &num1);
//	printf("num2 input : ");
//	scanf_s("%d", &num2);
//
//	int result = calculatePower(num1, num2);
//	printf("out put : %d", result);
//
//	return 0;
//}
//
//int calculatePower(int base, int exponent) {
//	int result = 1;
//	for (int i = 1; i <= exponent; i++) {
//		result = base * result;
//	}
//	return result;
//}
//
////����Ǯ��
////�̹����� ����ϰ� �Ǿ���. ���� �ڵ��� �Ƿ��� �ø��µ� �ְ��ε�
//
//#include <stdio.h>
//
//int calculatePower(int base, int exponent) {
//	int result = 1;
//	for (int i = 0; i < exponent; i++) {
//		result *= base;
//	}
//	return result;
//}
//
//int main() {
//	int base, exponent;
//	printf("Enter the base: ");
//	scanf("%d", &base);
//	printf("Enter the exponent: ");
//	scanf("%d", &exponent);
//
//	int result = calculatePower(base, exponent);
//	printf("%d raised to the power of %d is: %d\n", base, exponent, result);
//
//	return 0;
//}
