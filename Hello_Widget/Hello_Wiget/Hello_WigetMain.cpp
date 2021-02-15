/***************************************************************
 * Name:      Hello_WigetMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    kbw (kimbyungwoo733@hanmail.net)
 * Created:   2021-02-16
 * Copyright: kbw ()
 * License: LGPL
 **************************************************************/

#include "Hello_WigetMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Hello_WigetFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Hello_WigetFrame)
const long Hello_WigetFrame::ID_GLCANVAS1 = wxNewId();
const long Hello_WigetFrame::ID_BUTTON1 = wxNewId();
const long Hello_WigetFrame::ID_BUTTON2 = wxNewId();
const long Hello_WigetFrame::idMenuQuit = wxNewId();
const long Hello_WigetFrame::idMenuAbout = wxNewId();
const long Hello_WigetFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Hello_WigetFrame,wxFrame)
    //(*EventTable(Hello_WigetFrame)
    //*)
END_EVENT_TABLE()

Hello_WigetFrame::Hello_WigetFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Hello_WigetFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(728,450));
    int GLCanvasAttributes_1[] = {
    	WX_GL_RGBA,
    	WX_GL_DOUBLEBUFFER,
    	WX_GL_DEPTH_SIZE,      16,
    	WX_GL_STENCIL_SIZE,    0,
    	0, 0 };
    GLCanvas1 = new wxGLCanvas(this, ID_GLCANVAS1, wxPoint(0,0), wxSize(728,360), 0, _T("ID_GLCANVAS1"), GLCanvasAttributes_1);
    Button1 = new wxButton(this, ID_BUTTON1, _("Play"), wxPoint(200,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("Stop"), wxPoint(392,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Hello_WigetFrame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Hello_WigetFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Hello_WigetFrame::OnAbout);
    //*)
}

Hello_WigetFrame::~Hello_WigetFrame()
{
    //(*Destroy(Hello_WigetFrame)
    //*)
}

void Hello_WigetFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Hello_WigetFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Hello_WigetFrame::OnButton1Click(wxCommandEvent& event)
{
    lb1->setlabel(txt->GetLabel());
}
