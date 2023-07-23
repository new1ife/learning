//#include <stdio.h>
//
//int calculateAverage(int arr[], int size); // 정수의 배열과 크기를 매개변수로 사용하고 배열에 있는 숫자의 평균을 반환할꺼임
//
//int main() {
//	; // 한자리는 null
//	int size_arr = 0;
//	
//	printf("배열의 크기를 정해라 : ");
//	scanf_s("%d", &size_arr);
//	int a = size_arr;
//
//	int arr[a] = { NULL };
//
//	printf("배열의 값을 집어 넣어라 :");
//	for (int i = 0; i < size_arr; i++) {
//		printf("%d 번", i);
//		scanf_s("%d", &arr[i]);
//
//	}
//
//	int result = calculateAverage(arr, size_arr); //함수호출 
//	printf("arr average = %d", result);
//	
//	return	0;
//}
//
//int calculateAverage(int arr[], int size) {
//	int arr_size = sizeof(arr) / sizeof(int); //배열의 크기를 구하는 것
//	int sum = 0;
//	for (int i = 0; i <= arr_size; i++) {
//		sum = sum + arr[i];
//	}
//	return sum; 
//}
//
////문제 풀이
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