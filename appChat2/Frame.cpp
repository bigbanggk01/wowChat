#include "Frame.h"

wxBEGIN_EVENT_TABLE(LogFrame, wxFrame)
    EVT_BUTTON(100,OnButtonClicked)
    EVT_CHAR_HOOK(KeyPress)
wxEND_EVENT_TABLE()

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "WOW!")
{
    m_label1 = new wxStaticText(this, wxID_ANY, "Username:", wxPoint(10, 10), wxSize(100, 20));
    m_label1->SetBackgroundColour(wxColor(100, 100, 200));

    m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 30), wxSize(215, 30));

    m_label2 = new wxStaticText(this, wxID_ANY, "Password:", wxPoint(10, 75), wxSize(100, 20));
    m_label2->SetBackgroundColour(wxColor(100, 100, 200));

    m_txt2 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 100), wxSize(215, 30),wxTE_PASSWORD);

    m_btn1 = new wxButton(this, 100, "Login", wxPoint(150, 140), wxSize(75, 20));

    m_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(235, 210));
    m_panel->SetBackgroundColour(wxColor(100, 100, 200));

    wxBoxSizer* Sizer = new wxBoxSizer(wxVERTICAL);
    Sizer-> Add(m_panel, 1, wxEXPAND);
    this->SetSizerAndFit(Sizer);
    Center();

    focus_flag = 1;
}

void LogFrame::OnButtonClicked(wxCommandEvent& event)
{
    m_txt1->SetValue("");
    m_txt2->SetValue("");
    
}


void LogFrame::KeyPress(wxKeyEvent& event)
{
    wxChar kc = event.GetKeyCode();
    
    if (kc == 9 && focus_flag==1) {
        m_txt2->SetFocus();
        focus_flag = 2;
        return;
    }
    else if (kc == 9 && focus_flag == 2) {
        m_txt1->SetFocus();
        focus_flag = 1;
        return;
    }
    else
    {
        event.Skip();
    }
}
