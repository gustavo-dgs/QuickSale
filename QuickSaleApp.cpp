/***************************************************************
 * Name:      QuickSaleApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-12-17
 * Copyright:  ()
 * License:
 **************************************************************/

#include "QuickSaleApp.h"

//(*AppHeaders
#include "QuickSaleMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(QuickSaleApp);

bool QuickSaleApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	QuickSaleFrame* Frame = new QuickSaleFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
        