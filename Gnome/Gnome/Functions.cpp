#include "Functions.h"

////////////////// SEPARATORS //////////////////////////////

void printSeparator() {

	SetConsoleTextAttribute(hConsole, blueTextColor);

	cout.setf(ios::left);
	cout.width(separatorTextWidth);
	cout.fill('=');
	cout << "=" << endl;
}

void printMenuSeparator() {

	cout.setf(ios::left);
	cout.width(SeparatorMenuWidth);
	cout.fill('-');
	cout << "-" << endl;
}

void printEmptySeparator()
{
	cout.setf(ios::left);
	cout.width(SeparatorWidth);
	cout.fill(' ');
	cout << " ";
}

void printSeparatorForBattle() {

	SetConsoleTextAttribute(hConsole, blueTextColor);

	cout.setf(ios::left);
	cout.width(separatorTextWidth);
	cout.fill('=');
	cout << "=";

	printEmptySeparator();

	SetConsoleTextAttribute(hConsole, cyanTextColor);

	cout.setf(ios::left);
	cout.width(separatorTextWidth);
	cout.fill('=');
	cout << "=" << endl;
}

void printSeparatorForShop() {

	SetConsoleTextAttribute(hConsole, blueTextColor);

	cout.setf(ios::left);
	cout.width(separatorTextWidth);
	cout.fill('=');
	cout << "=";

	printEmptySeparator();

	cout.setf(ios::left);
	cout.width(separatorTextWidth);
	cout.fill('=');
	cout << "=" << endl;
}

////////////////// END SEPARATORS //////////////////////////////

void coutCentered(string text) 
{
	PCONSOLE_SCREEN_BUFFER_INFO lpScreenInfo = new CONSOLE_SCREEN_BUFFER_INFO();
	GetConsoleScreenBufferInfo(hConsole, lpScreenInfo);
	COORD NewSBSize = lpScreenInfo->dwSize;

	if (NewSBSize.X > text.size()) {
		int newpos = ((NewSBSize.X - text.size()) / 2);
		for (int i = 0; i < newpos; i++) cout << " ";
	}
	cout << text << endl;
}

void showConsoleCursor(bool showFlag)
{
	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(hConsole, &cursorInfo);
	cursorInfo.bVisible = showFlag;
	SetConsoleCursorInfo(hConsole, &cursorInfo);
}

void setWindowAttribute() {

	HWND consoleWindow = GetConsoleWindow();
	RECT rect1;

	GetWindowRect(consoleWindow, &rect1);
	MoveWindow(consoleWindow, rect1.left, rect1.top, windowWidth, windowHeight, TRUE);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SMALL_RECT rect2 = { 0, 0, consoleWidth, consoleHeight };
	SetConsoleWindowInfo(hConsole, true, &rect2);
}

void setConsoleColor(int textColor) {

	SetConsoleTextAttribute(hConsole, textColor);
}

void setCursorPosition(int line, int column)
{
	COORD coord;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	coord.X = column;
	coord.Y = line;

	SetConsoleCursorPosition(hConsole, coord);
}

