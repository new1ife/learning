#include <stdio.h>
#define MILE 0.62 // 1km = 0.62�̴�.
#define LB 2.2 // 1kg = 2.2�Ŀ���̴�.

void change_mile(double km);  //ų�θ� ���Ϸ� ȯ���ϴ� �Լ�
void change_pound(double kg); //kg�� �Ŀ��� ȯ���ϴ� �Լ�

int main() {
	
	int km = 0;
	int kg = 0;
	char cho = ' ';
		
	do
	{

		printf("A. Km/h�� mile/h �� ȯ���ϴ� ���α׷�\n");
		printf("B. kg�� lb�� ȯ���ϴ� ���α׷�\n");
		printf("Q. ���α׷� ����\n ���� : ");
		scanf_s("%c", &cho, sizeof(char));
		getchar();

		if (cho == 'A' || cho == 'a') {
			printf("\nA. Km/h�� mile/h �� ȯ���ϴ� ���α׷�\n");
			printf("�� > km�� �Է��ϼ���: ");
			scanf_s("%d", &km);
			change_mile(km);
			getchar();
		}
		else if (cho == 'B' || cho == 'b') {
			printf("\nB. kg�� lb�� ȯ���ϴ� ���α׷�\n");
			printf("�� > kg�� �Է��ϼ���: ");
			scanf_s("%d", &kg);
			change_pound(kg);
			getchar();

		}
		else if (cho == 'q' || cho == 'Q') {
			printf("\nQ.���α׷��� �����մϴ�.");
			return 0;
		}		
		else{
			printf("\n�߸� �Է� �߽��ϴ�. �ٽ��Է��ϼ��� \n");
			getchar();
		}


	} while (1);

	return 0;
}

void change_mile(double km)  //ų�θ� ���Ϸ� ȯ���ϴ� �Լ�
{
	double rep = 0.0;
	rep =  km * MILE;
	printf("�� > %lf km/h �� %lf mile/h�Դϴ�.\n", km, rep);
	printf("ȯ�꿡 �����߽��ϴ� \n\n");
	return;
}
void change_pound(double kg)//kg�� �Ŀ��� ȯ���ϴ� �Լ�
{
	double rep = 0.0;
	rep = kg * LB;
	printf("�� > %lf kg �� %lf lbs�Դϴ�.\n", kg, rep);
	printf("ȯ�꿡 �����߽��ϴ� \n\n");
	return;
}
