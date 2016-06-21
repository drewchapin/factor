///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui__
#define __gui__

#include <wx/intl.h>

#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/statline.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/listctrl.h>
#include <wx/panel.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrameBase
///////////////////////////////////////////////////////////////////////////////
class MainFrameBase : public wxFrame 
{
	private:
	
	protected:
		wxPanel* m_panel1;
		wxStaticBitmap* m_bitmap1;
		wxStaticLine* m_staticline1;
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText3;
		
		wxButton* m_Calculate;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseFrame( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnCalculate( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxTextCtrl* m_textCtrlA;
		wxTextCtrl* m_textCtrlB;
		wxTextCtrl* m_textCtrlC;
		wxListCtrl* m_Work;
		
		MainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Factor Quadratics"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,350 ), long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX|wxSTATIC_BORDER|wxTAB_TRAVERSAL );
		~MainFrameBase();
	
};

#endif //__gui__
