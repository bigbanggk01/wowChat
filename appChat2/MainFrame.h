#pragma once
#include <wx/wxprec.h>
#include <wx/stattext.h>
#include <wx/event.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
class MainFrame : public wxFrame
{

private:
    int focus_flag = NULL;
    void OpenChatFrame(bool login);
public:
    MainFrame();
    /*Login frame control*/
    wxPanel* m_panel = nullptr;
    wxStaticText* m_label1 = nullptr;
    wxStaticText* m_label2 = nullptr;

    wxButton* m_btn1 = nullptr;
    wxTextCtrl* m_txt1 = nullptr;
    wxTextCtrl* m_txt2 = nullptr;

    void OnButtonClicked(wxCommandEvent& evt);
    void KeyPress(wxKeyEvent& event);

    
    /*Chat frame control*/
    wxPanel* m_panel2 = nullptr;
    wxDECLARE_EVENT_TABLE();

};
