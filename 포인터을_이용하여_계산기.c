#include <stdio.h>

double add(double* num1, double* num2);
double sub(double* num1, double* num2);
double mul(double* num1, double* num2);
double div(double* num1, double* num2);

int main() {
	double num1 = 0.0, num2 = 0.0;
	char select = ' ', select2 = ' ';

	do
	{
		printf("\n�� ���� �Ǽ��� �Է��ϼ��� (, ������ �̿�) : ");
		scanf_s("%lf, %lf", &num1, &num2); //���� �Է�
		getchar(); //���۸� ����ߵ�

	re:
		printf("\n�����ڸ� �Է��ϼ���(+,-,*,/) : ");
		scanf_s("%c", &select, sizeof(char));
		getchar(); //���۸� ����ߵ�

		switch (select)
		{
		case'+':
			add(&num1, &num2);
			// ������ �ּҰ��� ������ ���� �� �ּҰ����� ���� ���� ���� ����Ҳ���
			break;
		case'-':
			sub(&num1, &num2);
			break;
		case'*':
			mul(&num1, &num2);
			break;
		case'/':
			div(&num1, &num2);
			break;

		default:
			printf("\n�߸��Է��߽��ϴ�. �ٽ� �Է��ϼ��� \n");
			goto re; //if�� ����ؼ� ��Ƽ�� �ص� �ɵ�
		}

		printf("\n��� �����Ͻðڽ��ϱ�? (Y/N) : "); //Ż�� ���� �ۼ�
		scanf_s("%c", &select2, sizeof(char));
		getchar(); //���۸� ����ߵ�

		if (select2 == 'y' || select2 == 'Y')
		{
			continue; // �̷��� �Ʒ����� �ǳʶٰ� �ٷ� ���� �ö󰥲���
		}
		else if (select2 == 'n' || select2 == 'N') {
			printf("���α׷��� ���� �մϴ�.");
			return 0; // �Լ� ������Ѽ� Ż��

		}
	} while (1);


	return 0;
}

double add(double* num1, double* num2) { //���ϱ�

	printf("%.2lf + %.2lf = %.2lf\n", *num1, *num2, *num1 + *num2);

	return 0.0;
	// ��ȯ���� ������ ���߾�� �Ǳ⶧���� �̷��� ���������� ����ξ ������ ��
}
double sub(double* num1, double* num2) {//����

	printf("%.2lf - %.2lf = %.2lf\n", *num1, *num2, *num1 - *num2);

	return 0.0;
}
double mul(double* num1, double* num2) {//���ϱ�

	printf("%.2lf * %.2lf = %.2lf\n", *num1, *num2, *num1 * *num2);

	return 0.0;
}
double div(double* num1, double* num2) {//������

	printf("%.2lf / %.2lf = %.2lf\n", *num1, *num2, *num1 / *num2);

	return 0.0;
}


