#include "header.h"

void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void levelup() {

}

void hangman_game() {

} //�������

void character_set() {
	char name[100];
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	gotoxy(10, 10);
	printf("����� �̸��� �˷��ּ���! ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	gets_s(name,100);
	gotoxy(10, 11);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("%s �� � ������ �����ּ���! \n", name);
}

void intro_Game() {
	char start;
	unsigned char a = 0xa6, b[7], i;

	for (i = 1; i<7; i++) b[i] = 0xa0 + i;

	gotoxy(6, 5);
	printf("%c%c", a, b[3]); //r
	for (int i = 1; i <= 50; i++) printf("%c%c", a, b[1]); //-
	printf("%c%c", a, b[4]); //��

	printf("\n");
	for (int i = 1; i <= 5; i++) {
		printf("     ");
		printf("%c%c", a, b[2]);
		for (int j = 1; j <= 50; j++) printf(" ");
		printf("%c%c\n", a, b[2]);
	}

	printf("\n");
	gotoxy(6, 11);
	printf("%c%c", a, b[6]); //��
	for (int i = 1; i <= 50; i++) printf("%c%c", a, b[1]);
	printf("%c%c", a, b[5]); //l
	printf("\n\n");
	
	gotoxy(20, 7);
	printf("    ������ ���Ѷ�!   \n");
	gotoxy(21, 9);
	printf("  Protect the Farm!\n");

	gotoxy(22, 14);
	printf("\n          ������ �����Ϸ��� �ƹ��ų� �������� Start!");
	start = _getch();
	system("pause>null");
}

void infor_Game() {
	
	gotoxy(21, 10);
	printf("��ȭ�ο� ����... ������ �޽�~ ���� ������ �� ����� �޸��� �ִ� ���� �����...\n");
	gotoxy(21, 11);
	printf("���͵��� ������ ���� �������� ���ð� �ٴϴµ�! ��ӳ� ����� �ƿ� ������� �Ǿ��ݾ�!\n");
	gotoxy(21, 12);
	printf("����� �� ������ �ٽ� ��ȭ�Ӱ� ���Ѿ��ϴ� �ϴÿ������� �������� �ߴ��� �ӹ��� ���������ϴ�.\n");
	gotoxy(21, 15);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf(" � ���ͼ� ������ �����ּ���!!\n");
	system("pause>null");
}