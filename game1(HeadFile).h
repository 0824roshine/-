#define ROW 4     //���ﲻ���зֺţ�
#define COL 4
#define GOAL 4
#include<stdio.h>    //��������ͷ�ļ�����������Ͳ���Ҫ�ˣ�
#include<time.h>
#include<stdlib.h>
#include<windows.h>
void initial_board(int row, int col,char board[ROW][COL]);  //����   ������Ҫ�÷ֺš���
void dispaly(int Row, int Col,char Board[ROW][COL]);
void move(int ROw, int COl, int WHO, char BOard[ROW][COL]);
int JudgeWin(int rOW, int cOL, int Goal, int whom, char BoArd[ROW][COL]);