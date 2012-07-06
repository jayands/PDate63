#include "include.h"/* essential for proper function; ncurses, etc. are included there.*/
#ifndef OK_EXIT
#define OK_EXIT 0 /* since everything's kosher */
#
int main( int argc, char *argv[]){
	initscr();
	setlocale(LC_ALL, "");
	cbreak();
	keypad(stdscr,TRUE); /* for function key availability; will have to test outside of Mac OS X*/
	/*TODO: initialize everything here  */
	while (1){
		/* TODO:main menu goes here */
		/* TODO:game logic will go here */
		break;
	}

	endwin();  /*end curses mode*/
	exit(OK_EXIT);
}
