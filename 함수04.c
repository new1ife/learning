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
//	/* if문으로 만들어 보았다.
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
//// 문제 풀이
////느낀점 : max를 사용할려면 stdlib.h를 사용하든 if문을 사용해서 저렇게 찾자
//// 아래에 있는게 훨씬 짧고 간결하다
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
