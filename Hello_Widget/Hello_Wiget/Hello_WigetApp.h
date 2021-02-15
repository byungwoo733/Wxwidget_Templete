/***************************************************************
 * Name:      Hello_WigetApp.h
 * Purpose:   Defines Application Class
 * Author:    kbw (kimbyungwoo733@hanmail.net)
 * Created:   2021-02-16
 * Copyright: kbw ()
 * License:
 **************************************************************/

#ifndef HELLO_WIGETAPP_H
#define HELLO_WIGETAPP_H

#include <wx/app.h>

class Hello_WigetApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // HELLO_WIGETAPP_H
