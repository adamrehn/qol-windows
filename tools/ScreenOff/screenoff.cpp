#include <windows.h>

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{
	//Adapted from the SendMessage() call here: <https://gallery.technet.microsoft.com/scriptcenter/Turn-off-screen-4d173e0a>
	SendNotifyMessageW((HWND)(-1), 0x0112, 0xF170, 2);
	return 0;
}
