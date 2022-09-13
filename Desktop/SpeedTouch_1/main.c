#include "main.h"

int main() {
	init();
	while (1) {
		titleDraw();
		int menuCode = menuDraw();
		if (menuCode == 0) {
			//게임시작
			int n = SelectPlay();

			if (n == 0) {
				printf("1P 선택함");
				Sleep(1000);
			}
			else if (n == 1) {
				printf("2P 선택함");
				Sleep(1000);
			}
		}
		else if (menuCode == 1) {
			//게임정보
			infoDraw();
		}
		else if (menuCode == 2) {
			return 0;//종료
		}
		system("cls");//콘솔창의 모든 글자를  비우는 역할 & 콘솔 좌표를 0.0으로 초기화
	}

	
	return 0;
	

}
