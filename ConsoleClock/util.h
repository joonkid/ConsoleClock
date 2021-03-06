#pragma once


#define WINDOW_LINE_SIZE 9
#define WINDOW_COL_SIZE 66
/*
	커서의 위치를 옮기는 함수
*/
void CursorUtil_GotoXY(int x, int y);
/*
	커서를 감추는 함수
*/

void CursorUtil_Hide();
/*
	콘솔window에 크기를 조절하는 함수
*/

void WindowUtil_ChangeWindowSize(int lines, int cols);
/*
	콘솔 폰트의 색깔을 바꾸는 함수
*/
void FontUtil_ChangeFontColor(int color);

