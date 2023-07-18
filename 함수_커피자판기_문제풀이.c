#include <stdio.h>

int coffee_machine(int coffee, char guest); // 사용자 함수 선언

int main(void) {

	int cof_num1 = 0, cof_num2 = 0; //커피잔
	char guest = 'A'; // 손님들 이름들 변수
	int rel = 0;

	printf("몇잔의 커피를 원하는가요? : ");
	scanf_s("%d", &cof_num1); //몇잔의 커피를 입력

	// do - while 문으로 만들어 보기
	//for (int i = 0; i <= cof_num1; i++, guest++) {
	//	printf("\n%c님 어떤 커피를 드릴까요?\n",guest);
	//	printf("|프림 : 1 | 설탕 : 2 | 아메리카노 : 3 | 마끼아또 : 4 | : ");
	//	scanf_s("%d", &cof_num2);
	//	rel = coffee_machine(cof_num2, guest);

	//	if (cof_num2 < 1 || cof_num2 > 4) {
	//		printf("%c님 커피를 잘못 주문했습니다.\n", guest);
	//		printf("주문을 취소합니다.\n");
	//		return 0;
	//	}

	do
	{
		printf("\n%c님 어떤 커피를 드릴까요?\n", guest); //손님들 이름 변경
		printf("|프림 : 1 | 설탕 : 2 | 아메리카노 : 3 | 마끼아또 : 4 | : ");
		scanf_s("%d", &cof_num2);//메뉴선택
		rel = coffee_machine(cof_num2, guest); // 사용자 함수로 값이 복사

		if (cof_num2 < 1 || cof_num2 > 4) { // 예외 처리
			printf("%c님 커피를 잘못 주문했습니다.\n", guest);
			printf("주문을 취소합니다.\n");
			return 0; // 프로그램 종료
		}
		guest++; // 여기서 증감을 해야지 값이 저장이 된다.
		cof_num1--; // 5잔 주문을 하면 점차 감소하면서 0이면면 탈출

	} while (cof_num1 > 0);

	return 0;
}

int coffee_machine(int coffee, char guest) {

	// 생각해보니 스위치문을 해도 좋은데 나는 if문이 편함
	if (coffee == 1) {
		printf("%c님 커피나왔습니다.\n", guest);
		printf("프림 커피입니다.\n\n");
		//여기에서 guest ++가 안되는 이유는 call by value이기때문에 
		//이 함수가 종료되면 스택에서 사라지기에 증감이 안된다.

	}
	else if (coffee == 2) {
		printf("%c님 커피나왔습니다.\n", guest);
		printf("설탕 커피입니다.\n\n");

	}
	else if (coffee == 3) {
		printf("%c님 커피나왔습니다.\n", guest);
		printf("아메리카노입니다.\n\n");

	}
	else if (coffee == 4) {
		printf("%c님 커피나왔습니다.\n", guest);
		printf("마끼아또 입니다.\n\n");

	}

	return coffee_machine;
}





