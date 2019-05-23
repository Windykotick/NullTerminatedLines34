#include<iostream>
#include <Windows.h>
using namespace std;

void InPutLine(char szStr[], const int n);
int StrLen(char szStr[]);
void UpperCase(char szStr[]);

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "¬ведите строку: ";
	const int n = 256;
	char szStr[n]{};
	InPutLine(szStr, n);
	cout << szStr << endl;
	cout << StrLen(szStr) << endl;
	UpperCase(szStr);
	cout << UpperCase << endl;
	/*for (int i = 0; i < 256; i++)
	{
		cout << i << "\t" << (char)i << endl;
	}*/
}
void InPutLine(char szStr[], const int n)
{
	SetConsoleCP(1251);
	cin.getline(szStr, n);
	SetConsoleCP(866);
}
int StrLen(char szStr[])
{
	int i = 0;
	for (; szStr[i]; i++);
	return i;
}
void UpperCase(char szStr[])
{
	int i = 0;
	for (; szStr[i]; i++)
	{
		szStr[i] -= 32;
	}
}