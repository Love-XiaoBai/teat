#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string>
#define ROW 3
#define COL 3

//初始化表格
void csh(char qp[ROW][COL], int row, int col);

//打印表格
void dy(char qp[ROW][COL], int row, int col);

//玩家下棋
void wjxq(char qp[ROW][COL], int row, int col);

//电脑下棋
void dnxq(char qp[ROW][COL], int row, int col);

int pj(char qp[ROW][COL], int row, int col);

//判断输赢
char pd(char qp[ROW][COL], int row, int col);

