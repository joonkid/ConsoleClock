#pragma once


#define WINDOW_LINE_SIZE 9
#define WINDOW_COL_SIZE 66
/*
	Ŀ���� ��ġ�� �ű�� �Լ�
*/
void CursorUtil_GotoXY(int x, int y);
/*
	Ŀ���� ���ߴ� �Լ�
*/

void CursorUtil_Hide();
/*
	�ܼ�window�� ũ�⸦ �����ϴ� �Լ�
*/

void WindowUtil_ChangeWindowSize(int lines, int cols);
/*
	�ܼ� ��Ʈ�� ������ �ٲٴ� �Լ�
*/
void FontUtil_ChangeFontColor(int color);

