#include <windows.h>
//make a message box
#pragma comment(lib, "user32.lib")

int main(VOID)
{
	MessageBox(NULL, "Shutting Down!!" , "Own_The_Net", MB_ICONEXCLAMATION | MB_OK);
	return 0;
}
