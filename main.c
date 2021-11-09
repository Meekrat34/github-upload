#include <ncurses.h>


int main()
{
	initscr(); //creates stdscr
	raw(); // allow break in program
	printw("Hello World");  // print this
	getch(); //pause in program
	endwin(); //free the memory


	return 0;
}
