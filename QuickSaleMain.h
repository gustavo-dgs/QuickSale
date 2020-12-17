/***************************************************************
 * Name:      QuickSaleMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-12-17
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef QUICKSALEMAIN_H
#define QUICKSALEMAIN_H

//(*Headers(QuickSaleFrame)
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class QuickSaleFrame: public wxFrame
{
    public:

        QuickSaleFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~QuickSaleFrame();

    private:

        //(*Handlers(QuickSaleFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(QuickSaleFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(QuickSaleFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // QUICKSALEMAIN_H
    