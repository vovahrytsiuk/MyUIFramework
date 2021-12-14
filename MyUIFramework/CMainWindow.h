#pragma once
#include "CWindowInterface.h"
class CMainWindow :
    public CWindowInterface<CMainWindow>
{
public:
    CMainWindow(PCWSTR className) : CWindowInterface(className) {};
    LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

