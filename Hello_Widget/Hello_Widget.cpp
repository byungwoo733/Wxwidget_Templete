#include "wx/wx.h"



class MyApp : public wxApp

{

public:

    virtual bool OnInit();

};



DECLARE_APP(MyApp)

IMPLEMENT_APP(MyApp)



bool MyApp::OnInit()

{

    wxFrame* frame = new wxFrame(NULL, wxID_ANY, wxT("Hello World!!!"),

                wxDefaultPosition, wxSize(500, 500), wxDEFAULT_FRAME_STYLE);

    frame->Show(true);

    SetTopWindow(frame);

    return true;

}
