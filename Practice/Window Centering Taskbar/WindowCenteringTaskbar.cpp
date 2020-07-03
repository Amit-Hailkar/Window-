// Headers
#include<windows.h>
#include<windef.h>
#define iWidth 800
#define iHeight 600

//Global Function Declaration
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

//Winmain()
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
	//Variable Declarations
	WNDCLASSEX wndclass;
	HWND hwnd;
	MSG msg;
	TCHAR szAppName[] = TEXT("MyApp");
	TCHAR str[255];
	BOOL bFunctionReturnValue;
	int iTemp1, iTemp2, iX, iY;

	struct sScreenPoints 
	{
		 LONG left;
	 	 LONG top;
		 LONG right;
		 LONG bottom;
	};

	struct sScreenPoints sPoints;
	//Code

	bFunctionReturnValue = SystemParametersInfo(SPI_GETWORKAREA, 0, &sPoints, 0);       
	wsprintf(str, TEXT("Start Point of 'X' = %d\nStart Point of 'Y' = %d\nEnd Point of 'X' = %d\nEnd Point of 'Y' = %d\n"),sPoints.left, sPoints.top, sPoints.right, sPoints.bottom);
	MessageBox(NULL, str, TEXT("Size of Screen Without Taskbar "), MB_OK);
	
	iTemp1 = sPoints.right - iWidth;
	iTemp2 = sPoints.bottom - iHeight;
	iX = iTemp1 / 2;
	iY = iTemp2 / 2;

		
	//initialization of WNDCLASSEX
	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.lpfnWndProc = WndProc;
	wndclass.hInstance = hInstance;
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	wndclass.lpszClassName = szAppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	//register above claas
	RegisterClassEx(&wndclass);

	//create window
	hwnd = CreateWindow(szAppName,
		TEXT("MY FIRST WINDOW -:RTR:- AMIT HAILKAR"),
		WS_OVERLAPPEDWINDOW,
		iX,
		iY,
		800,
		600,
		NULL,
		NULL,
		hInstance,
		NULL);

	ShowWindow(hwnd, iCmdShow);
	UpdateWindow(hwnd);


	//message loop
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return((int)msg.wParam);
}
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
	//code
	switch (iMsg)
	{
	
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	}
	return(DefWindowProc(hwnd, iMsg, wParam, lParam));
}