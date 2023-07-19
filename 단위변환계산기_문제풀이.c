#include <stdio.h>
#define MILE 0.62 // 1km = 0.62이다.
#define LB 2.2 // 1kg = 2.2파운드이다.

void change_mile(double km);  //킬로를 마일로 환산하는 함수
void change_pound(double kg); //kg를 파운드로 환산하는 함수

int main() {
	
	int km = 0;
	int kg = 0;
	char cho = ' ';
		
	do
	{

		printf("A. Km/h를 mile/h 로 환산하는 프로그램\n");
		printf("B. kg을 lb로 환산하는 프로그램\n");
		printf("Q. 프로그램 종료\n 선택 : ");
		scanf_s("%c", &cho, sizeof(char));
		getchar();

		if (cho == 'A' || cho == 'a') {
			printf("\nA. Km/h를 mile/h 로 환산하는 프로그램\n");
			printf("문 > km을 입력하세요: ");
			scanf_s("%d", &km);
			change_mile(km);
			getchar();
		}
		else if (cho == 'B' || cho == 'b') {
			printf("\nB. kg을 lb로 환산하는 프로그램\n");
			printf("문 > kg을 입력하세요: ");
			scanf_s("%d", &kg);
			change_pound(kg);
			getchar();

		}
		else if (cho == 'q' || cho == 'Q') {
			printf("\nQ.프로그램을 종료합니다.");
			return 0;
		}		
		else{
			printf("\n잘못 입력 했습니다. 다시입력하세요 \n");
			getchar();
		}


	} while (1);

	return 0;
}

void change_mile(double km)  //킬로를 마일로 환산하는 함수
{
	double rep = 0.0;
	rep =  km * MILE;
	printf("답 > %lf km/h 는 %lf mile/h입니다.\n", km, rep);
	printf("환산에 성공했습니다 \n\n");
	return;
}
void change_pound(double kg)//kg를 파운드로 환산하는 함수
{
	double rep = 0.0;
	rep = kg * LB;
	printf("답 > %lf kg 는 %lf lbs입니다.\n", kg, rep);
	printf("환산에 성공했습니다 \n\n");
	return;
}
