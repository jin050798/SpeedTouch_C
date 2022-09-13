#include "game.h"

int keyControl() {
	char temp = _getch();//���͸� �Է����� �ʾƵ� �ٷ� ��ȯ�ϴ� �Է��Լ�

	if (temp == 'w' || temp == 'W') {
		return UP;
	}
	else if (temp == 'a' || temp == 'A') {
		return LEFT;
	}
	else if (temp == 's' || temp == 'S') {
		return DOWN;
	}
	else if (temp == 'd' || temp == 'D') {
		return RIGHT;
	}
	else if (temp == ' ') {//�����̽��ٰ� ����  ��ư
		return SUBMIT;
	}
}

void infoDraw() {
	system("cls");
	printf("\n\n");
	printf("1P  ���� ���� �ð��ȿ� ��ǻ�͸� �̱⼼��!\n");
	printf("�� 5������ ���ӿ��� �¸��ϼ���\n");
	printf("2P  ���� ģ������ �ο򿡼� �¸��ϼ���\n");
	printf("���� �� ���� ������?\n");

	while (1) {
		if (keyControl() == SUBMIT) {
			break;
		}
	}

}

int menuDraw() {
	int x = 30;
	int y = 20;
	gotoxy(x - 2, y);
	printf("> �� �� �� ��");
	gotoxy(x, y + 1);
	printf("�� �� �� ��");
	gotoxy(x, y + 2);
	printf("��       ��   ");
	printf("\n\n\n");

	while (1) {
		int n = keyControl();
		switch (n) {
		case UP:
			gotoxy(x - 2, y);
			printf(" ");

			y = y - 1;
			if (y < 20)
			{
				y = 20;
			}
			else {/**/ }
			gotoxy(x - 2, y);
			printf(">");
			break;

		case DOWN:
			gotoxy(x - 2, y);
			printf(" ");

			y = y + 1;
			if (y > 22)
			{
				y = 22;
			}
			else {/**/ }
			gotoxy(x - 2, y);
			printf(">");
			break;
		case SUBMIT: {
			return y - 20;
		}

		}
	}
}
void titleDraw() {

	printf("\n\n\n\n");
	printf("   ������   ������   ������   ������   �����  \n");
	printf("   ��           ��      ��   ��           ��           ��     �� \n");
	printf("   ��           ��      ��   ��           ��           ��      ��\n");
	printf("   ������   ������   �����     �����     ��       ��\n");
	printf("           ��   ��           ��           ��           ��      ��\n");
	printf("           ��   ��           ��           ��           ��     ��\n");
	printf("   ������   ��           ������   ������   �����\n");
	printf("\n");
	printf("         ������    ���    ��    ��   ����  ��    ��\n");
	printf("             ��      ��    ��  ��    ��  ��       ��    ��\n");
	printf("             ��      ��    ��  ��    ��  ��       �����\n");
	printf("             ��      ��    ��  ��    ��  ��       ��    ��\n");
	printf("             ��        ���     ����    ����  ��    ��\n");

}
int SelectPlay() {
	int x = 24;
	int y = 6;
	system("cls");
	printf("\n\n");
	printf("             Play ����\n");
	gotoxy(x - 2, y);
	printf(">  1 P");
	gotoxy(x, y+1);
	printf(" 2 P");
	gotoxy(x, y+2);
	printf(" �� ��");

	while (1) {
		int n = keyControl();
		switch (n) {
		case UP: {
			if (y > 6) {
				gotoxy(x - 2, y);
				printf(" ");//���� ��ġ ����
				gotoxy(x - 2, --y);
				printf(">");
			}
			break;
		}
		case DOWN: {
			if (y < 9) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break;
		}
		case SUBMIT: {
			return y - 6;
		}
		}
	}

}