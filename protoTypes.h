#pragma once

/*
��������� ������
*/
int** generateCardsSet();
/*
����������� ������
*/
void show(int** arr);
/*
������������� ������
*/
void shuffleCardSet(int** arr);
/*
�������� �������
*/
string* createPlayers(int count);
/*
��������� ������� �����
*/
int* createCash(int countPlayer, int countMoney);
/*
����������� ������� �� ����
*/
void showPlayers(string*& players, int* cash, int count);



