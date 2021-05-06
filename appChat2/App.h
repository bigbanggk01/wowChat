#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include "MainFrame.h"
class MyApp : public wxApp
{
public:
    MyApp();
    ~MyApp();
    virtual bool OnInit();
public:
    MainFrame* frame = nullptr;

};

enum
{
    ID_Hello = 1
};
wxIMPLEMENT_APP(MyApp);