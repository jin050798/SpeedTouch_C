#include "game.h"

int keyControl() {
	char temp = _getch();//엔터를 입력하지 않아도 바로 반환하는 입력함수

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
	else if (temp == ' ') {//스페이스바가 선택  버튼
		return SUBMIT;
	}
}

void infoDraw() {
	system("cls");
	printf("\n\n");
	printf("1P  게임 제한 시간안에 컴퓨터를 이기세요!\n");
	printf("총 5라운드의 게임에서 승리하세요\n");
	printf("2P  게임 친구와의 싸움에서 승리하세요\n");
	printf("누가 더 빨리 누를까?\n");

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
	printf("> 게 임 시 작");
	gotoxy(x, y + 1);
	printf("게 임 정 보");
	gotoxy(x, y + 2);
	printf("종       료   ");
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
	printf("   ■■■■■   ■■■■■   ■■■■■   ■■■■■   ■■■■  \n");
	printf("   ■           ■      ■   ■           ■           ■     ■ \n");
	printf("   ■           ■      ■   ■           ■           ■      ■\n");
	printf("   ■■■■■   ■■■■■   ■■■■     ■■■■     ■       ■\n");
	printf("           ■   ■           ■           ■           ■      ■\n");
	printf("           ■   ■           ■           ■           ■     ■\n");
	printf("   ■■■■■   ■           ■■■■■   ■■■■■   ■■■■\n");
	printf("\n");
	printf("         □□□□□    □□    □    □   □□□  □    □\n");
	printf("             □      □    □  □    □  □       □    □\n");
	printf("             □      □    □  □    □  □       □□□□\n");
	printf("             □      □    □  □    □  □       □    □\n");
	printf("             □        □□     □□□    □□□  □    □\n");

}
int SelectPlay() {
	int x = 24;
	int y = 6;
	system("cls");
	printf("\n\n");
	printf("             Play 선택\n");
	gotoxy(x - 2, y);
	printf(">  1 P");
	gotoxy(x, y+1);
	printf(" 2 P");
	gotoxy(x, y+2);
	printf(" 뒤 로");

	while (1) {
		int n = keyControl();
		switch (n) {
		case UP: {
			if (y > 6) {
				gotoxy(x - 2, y);
				printf(" ");//원래 위치 지움
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