//#include <stdio.h>
//#include <stdlib.h>
//
//int findmax(int n1, int n2, int n3);
//
//int main() {
//	int num0 = 10, num1 = 5, num2 = 1;
//	int result = findmax(num0, num1, num2);
//
//	printf("max = %d",result);
//
//	return 0;
//}
//
//
//int findmax(int n1, int n2, int n3){
//	/* if������ ����� ���Ҵ�.
//	if (n1 > n2 && n1 > n3) {
//		return n1;
//	}
//	else if (n2 > n1 && n2 > n3) {
//		return n2;
//	}
//	else {
//		return n3;
//	}*/
//
//	return max(n1, n2, n3);
//}
//// ���� Ǯ��
////������ : max�� ����ҷ��� stdlib.h�� ����ϵ� if���� ����ؼ� ������ ã��
//// �Ʒ��� �ִ°� �ξ� ª�� �����ϴ�
//
//int findMax(int a, int b, int c) {
//	int max = a;
//	if (b > max)
//		max = b;
//	if (c > max)
//		max = c;
//	return max;
//}
//
//int main() {
//	int num1 = 10, num2 = 25, num3 = 17;
//	int maxNum = findMax(num1, num2, num3);
//	printf("The largest number is: %d\n", maxNum);
//
//	return 0;
//}
