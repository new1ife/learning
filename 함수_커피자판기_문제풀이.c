#include <stdio.h>

int coffee_machine(int coffee, char guest); // ����� �Լ� ����

int main(void) {

	int cof_num1 = 0, cof_num2 = 0; //Ŀ����
	char guest = 'A'; // �մԵ� �̸��� ����
	int rel = 0;

	printf("������ Ŀ�Ǹ� ���ϴ°���? : ");
	scanf_s("%d", &cof_num1); //������ Ŀ�Ǹ� �Է�

	// do - while ������ ����� ����
	//for (int i = 0; i <= cof_num1; i++, guest++) {
	//	printf("\n%c�� � Ŀ�Ǹ� �帱���?\n",guest);
	//	printf("|���� : 1 | ���� : 2 | �Ƹ޸�ī�� : 3 | �����ƶ� : 4 | : ");
	//	scanf_s("%d", &cof_num2);
	//	rel = coffee_machine(cof_num2, guest);

	//	if (cof_num2 < 1 || cof_num2 > 4) {
	//		printf("%c�� Ŀ�Ǹ� �߸� �ֹ��߽��ϴ�.\n", guest);
	//		printf("�ֹ��� ����մϴ�.\n");
	//		return 0;
	//	}

	do
	{
		printf("\n%c�� � Ŀ�Ǹ� �帱���?\n", guest); //�մԵ� �̸� ����
		printf("|���� : 1 | ���� : 2 | �Ƹ޸�ī�� : 3 | �����ƶ� : 4 | : ");
		scanf_s("%d", &cof_num2);//�޴�����
		rel = coffee_machine(cof_num2, guest); // ����� �Լ��� ���� ����

		if (cof_num2 < 1 || cof_num2 > 4) { // ���� ó��
			printf("%c�� Ŀ�Ǹ� �߸� �ֹ��߽��ϴ�.\n", guest);
			printf("�ֹ��� ����մϴ�.\n");
			return 0; // ���α׷� ����
		}
		guest++; // ���⼭ ������ �ؾ��� ���� ������ �ȴ�.
		cof_num1--; // 5�� �ֹ��� �ϸ� ���� �����ϸ鼭 0�̸�� Ż��

	} while (cof_num1 > 0);

	return 0;
}

int coffee_machine(int coffee, char guest) {

	// �����غ��� ����ġ���� �ص� ������ ���� if���� ����
	if (coffee == 1) {
		printf("%c�� Ŀ�ǳ��Խ��ϴ�.\n", guest);
		printf("���� Ŀ���Դϴ�.\n\n");
		//���⿡�� guest ++�� �ȵǴ� ������ call by value�̱⶧���� 
		//�� �Լ��� ����Ǹ� ���ÿ��� ������⿡ ������ �ȵȴ�.

	}
	else if (coffee == 2) {
		printf("%c�� Ŀ�ǳ��Խ��ϴ�.\n", guest);
		printf("���� Ŀ���Դϴ�.\n\n");

	}
	else if (coffee == 3) {
		printf("%c�� Ŀ�ǳ��Խ��ϴ�.\n", guest);
		printf("�Ƹ޸�ī���Դϴ�.\n\n");

	}
	else if (coffee == 4) {
		printf("%c�� Ŀ�ǳ��Խ��ϴ�.\n", guest);
		printf("�����ƶ� �Դϴ�.\n\n");

	}

	return coffee_machine;
}





