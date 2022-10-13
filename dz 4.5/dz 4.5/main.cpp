#define _USE_MATH_DEFINES
#include <Windows.h>
#include <conio.h>
#include <cmath>
#include <iostream>
int main()  
{
    int per = 0, ampl = 0;
    std::cout << "vvedite period i amplitudu" <<std::endl;
    std::cin >> per >> ampl;
    HDC hdc = GetDC(GetConsoleWindow());
    HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 0));
    SelectObject(hdc, pen);
    MoveToEx(hdc, 500, 100, NULL);
    LineTo(hdc, 500, 600);
    MoveToEx(hdc, 0, 350, NULL);
    LineTo(hdc,1000, 350);
    MoveToEx(hdc, 1000, 350 - int(sin(M_PI * (-500) / per) * ampl), NULL);
    for (int i = -500; i < 500; i++)
    {
        LineTo(hdc, 500 - i, 350 - int(sin(M_PI * i / per) * ampl));
    }
    DeleteObject(hdc);
}

    

