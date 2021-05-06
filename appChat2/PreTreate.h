#include <wx/wx.h>
#include <windows.h>

#ifndef PRETREATE
#define PRETREATE

class PreTreate {
public:
    void setPoint(wxPoint* ps, int size);
    void setSize(wxSize* ss);
};

#endif