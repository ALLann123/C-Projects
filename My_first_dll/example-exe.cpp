#include <iostream>
#include <windows.h>
using namespace std;

int main(void)
{
	//where execution begins
	cout<<"Hello, World"<<endl;
	
	HINSTANCE hDll;
	hDll=LoadLibrary(TEXT("allan.dll"));
	return 0;
}
