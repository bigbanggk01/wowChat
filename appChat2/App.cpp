#include "App.h"

MyApp::MyApp()
{
}

MyApp::~MyApp()
{
}

bool MyApp::OnInit()
{
    frame = new MainFrame();
    frame->Show(true);
    return true;
}
