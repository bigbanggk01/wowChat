#include "PreTreate.h"

void PreTreate::setPoint(wxPoint* ps, int size) {
    HWND hd = GetDesktopWindow();
    RECT rect;
    GetClientRect(hd, &rect);
    int client_width = (rect.right - rect.left);
    ps->x = client_width - size-15;
    ps->y = 10;
}

void PreTreate::setSize(wxSize* ss) {
    HWND hd = GetDesktopWindow();
    RECT rect;
    GetClientRect(hd, &rect);
    int client_height = (rect.bottom - rect.top);
    ss->x=300;
    ss->y = client_height - 100;
}