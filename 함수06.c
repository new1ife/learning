//#include <stdio.h>
//
//int calculateAverage(int arr[], int size); // ������ �迭�� ũ�⸦ �Ű������� ����ϰ� �迭�� �ִ� ������ ����� ��ȯ�Ҳ���
//
//int main() {
//	; // ���ڸ��� null
//	int size_arr = 0;
//	
//	printf("�迭�� ũ�⸦ ���ض� : ");
//	scanf_s("%d", &size_arr);
//	int a = size_arr;
//
//	int arr[a] = { NULL };
//
//	printf("�迭�� ���� ���� �־�� :");
//	for (int i = 0; i < size_arr; i++) {
//		printf("%d ��", i);
//		scanf_s("%d", &arr[i]);
//
//	}
//
//	int result = calculateAverage(arr, size_arr); //�Լ�ȣ�� 
//	printf("arr average = %d", result);
//	
//	return	0;
//}
//
//int calculateAverage(int arr[], int size) {
//	int arr_size = sizeof(arr) / sizeof(int); //�迭�� ũ�⸦ ���ϴ� ��
//	int sum = 0;
//	for (int i = 0; i <= arr_size; i++) {
//		sum = sum + arr[i];
//	}
//	return sum; 
//}
//
////���� Ǯ��
//
//
////#include <stdio.h>
////
////float calculateAverage(int arr[], int size) {
////    int sum = 0;
////    for (int i = 0; i < size; i++) {
////        sum += arr[i];
////    }
////    return (float)sum / size;
////}
////
////int main() {
////    int size;
////    printf("Enter the size of the array: ");
////    scanf("%d", &size);
////
////    int arr[size];
////
////    printf("Enter %d elements: ", size);
////    for (int i = 0; i < size; i++) {
////        scanf("%d", &arr[i]);
////    }
////
////    float average = calculateAverage(arr, size);
////    printf("Average of the numbers: %.2f\n", average);
////
////    return 0;
////}