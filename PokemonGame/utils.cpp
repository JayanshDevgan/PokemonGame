#include <iostream>

void ClearConsole()
{
#ifdef _WIN32
    system("cls");
#else
    (void)system("clear");
#endif
}

void waitForEnter() { std::cin.get(); ClearConsole(); }
