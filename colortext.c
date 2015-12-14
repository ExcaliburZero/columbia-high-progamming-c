//Chirs Wells 2015
//956335
//November 10, 2014
//colortext.c
//Purpose: To print colored text.

#include <stdio.h>
#include <windows.h>

//Begin main function
void main()
{
	//Ready console stuff
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	//Save starting atributes
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	printf("Normal\n");

	//Set new atributes
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);

	printf("New\n");

	//Reset attributes
	SetConsoleTextAttribute(hConsole, saved_attributes);

	printf("Normal2\n");
}