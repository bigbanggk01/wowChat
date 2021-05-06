#pragma once
#include <wx/wxprec.h>
#include <wx/stattext.h>
#include <wx/event.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
class Frame : public wxFrame
{

private:
    int focus_flag=NULL;

public:
    Frame();
    wxPanel* m_panel = nullptr;
    wxStaticText* m_label1 = nullptr;
    wxStaticText* m_label2 = nullptr;

    wxButton* m_btn1 = nullptr;
    wxTextCtrl* m_txt1 = nullptr;
    wxTextCtrl* m_txt2 = nullptr;

    void OnButtonClicked(wxCommandEvent& evt);
    void KeyPress(wxKeyEvent& event);
    wxDECLARE_EVENT_TABLE();

    int* ptr = nullptr;

};

