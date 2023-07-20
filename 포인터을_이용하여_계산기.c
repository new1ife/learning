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
		printf("\n두 개의 실수를 입력하세요 (, 연산자 이용) : ");
		scanf_s("%lf, %lf", &num1, &num2); //변수 입력
		getchar(); //버퍼를 비워야됨

	re:
		printf("\n연산자를 입력하세요(+,-,*,/) : ");
		scanf_s("%c", &select, sizeof(char));
		getchar(); //버퍼를 비워야됨

		switch (select)
		{
		case'+':
			add(&num1, &num2);
			// 변수의 주소값을 넣으면 이젠 그 주소값으로 가서 실제 값을 사용할꺼임
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
			printf("\n잘못입력했습니다. 다시 입력하세요 \n");
			goto re; //if문 사용해서 컨티뉴 해도 될듯
		}

		printf("\n계속 진행하시겠습니까? (Y/N) : "); //탈출 조건 작성
		scanf_s("%c", &select2, sizeof(char));
		getchar(); //버퍼를 비워야됨

		if (select2 == 'y' || select2 == 'Y')
		{
			continue; // 이러면 아래부터 건너뛰고 바로 위로 올라갈꺼임
		}
		else if (select2 == 'n' || select2 == 'N') {
			printf("프로그램을 종료 합니다.");
			return 0; // 함수 종료시켜서 탈출

		}
	} while (1);


	return 0;
}

double add(double* num1, double* num2) { //더하기

	printf("%.2lf + %.2lf = %.2lf\n", *num1, *num2, *num1 + *num2);

	return 0.0;
	// 반환값과 리턴을 맞추어야 되기때문에 이렇게 선언했지만 비워두어도 실행이 됨
}
double sub(double* num1, double* num2) {//빼기

	printf("%.2lf - %.2lf = %.2lf\n", *num1, *num2, *num1 - *num2);

	return 0.0;
}
double mul(double* num1, double* num2) {//곱하기

	printf("%.2lf * %.2lf = %.2lf\n", *num1, *num2, *num1 * *num2);

	return 0.0;
}
double div(double* num1, double* num2) {//나누기

	printf("%.2lf / %.2lf = %.2lf\n", *num1, *num2, *num1 / *num2);

	return 0.0;
}


