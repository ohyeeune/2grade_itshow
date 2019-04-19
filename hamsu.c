#include "header.h"

void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void levelup() {

}

void hangman_game() {

} //비어있음

void character_set() {
	char name[100];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	gotoxy(10, 10);
	printf("당신의 이름을 알려주세요! ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	gets_s(name,100);
	gotoxy(10, 11);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("%s 님 어서 마을을 지켜주세요! \n", name);
}

void intro_Game() {
	char start;
	unsigned char a = 0xa6, b[7], i;

	for (i = 1; i<7; i++) b[i] = 0xa0 + i;

	gotoxy(6, 5);
	printf("%c%c", a, b[3]); //r
	for (int i = 1; i <= 50; i++) printf("%c%c", a, b[1]); //-
	printf("%c%c", a, b[4]); //ㄱ

	printf("\n");
	for (int i = 1; i <= 5; i++) {
		printf("     ");
		printf("%c%c", a, b[2]);
		for (int j = 1; j <= 50; j++) printf(" ");
		printf("%c%c\n", a, b[2]);
	}

	printf("\n");
	gotoxy(6, 11);
	printf("%c%c", a, b[6]); //ㄴ
	for (int i = 1; i <= 50; i++) printf("%c%c", a, b[1]);
	printf("%c%c", a, b[5]); //l
	printf("\n\n");
	
	gotoxy(20, 7);
	printf("    농장을 지켜라!   \n");
	gotoxy(21, 9);
	printf("  Protect the Farm!\n");

	gotoxy(22, 14);
	printf("\n          게임을 시작하려면 아무거나 누르세요 Start!");
	start = _getch();
	system("pause>null");
}

void infor_Game() {
	
	gotoxy(21, 10);
	printf("평화로운 마을... 몬스터의 급습~ 꺄악 걸음아 나 살려라 달리고 있는 마을 사람들...\n");
	gotoxy(21, 11);
	printf("몬스터들은 마을의 밭을 여기저기 쑤시고 다니는데! 어머나 저기는 아예 쑥대밭이 되었잖아!\n");
	gotoxy(21, 12);
	printf("당신은 이 마을을 다시 평화롭게 지켜야하는 하늘에서부터 내려오는 중대한 임무가 내려졌습니다.\n");
	gotoxy(21, 15);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf(" 어서 나와서 마을을 지켜주세요!!\n");
	system("pause>null");
}