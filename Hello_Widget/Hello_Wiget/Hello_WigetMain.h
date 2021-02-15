/***************************************************************
 * Name:      Hello_WigetMain.h
 * Purpose:   Defines Application Frame
 * Author:    kbw (kimbyungwoo733@hanmail.net)
 * Created:   2021-02-16
 * Copyright: kbw ()
 * License:
 **************************************************************/

#ifndef HELLO_WIGETMAIN_H
#define HELLO_WIGETMAIN_H

//(*Headers(Hello_WigetFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/glcanvas.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class Hello_WigetFrame: public wxFrame
{
    public:

        Hello_WigetFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Hello_WigetFrame();

    private:

        //(*Handlers(Hello_WigetFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(Hello_WigetFrame)
        static const long ID_GLCANVAS1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Hello_WigetFrame)
        wxButton* Button1;
        wxButton* Button2;
        wxGLCanvas* GLCanvas1;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // HELLO_WIGETMAIN_H
