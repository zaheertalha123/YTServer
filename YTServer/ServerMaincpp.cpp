#define WIN32_LEAN_AND_MEAN

#include <iostream>
#include <conio.h>
#include <WinSock2.h>
#include <WS2tcpip.h>

#pragma comment (lib, "ws2_32.lib")

using namespace std;

int main()
{
	WSAData wsadata;
	int result = WSAStartup(MAKEWORD(2, 2), &wsadata);
	if (result != 0)
	{
		cout << "WSAStartup Failed With Error: " << result << endl;
	}

	cout << "Status: " << wsadata.szSystemStatus << endl;

	WSACleanup();

	cout << "Completed" << endl;
	(void)getch();
	return 0;
}

