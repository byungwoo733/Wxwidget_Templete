/***************************************************************
 * Name:      Hello_WigetApp.cpp
 * Purpose:   Code for Application Class
 * Author:    kbw (kimbyungwoo733@hanmail.net)
 * Created:   2021-02-16
 * Copyright: kbw ()
 * License:
 **************************************************************/

#include "Hello_WigetApp.h"

//(*AppHeaders
#include "Hello_WigetMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Hello_WigetApp);

bool Hello_WigetApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Hello_WigetFrame* Frame = new Hello_WigetFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
