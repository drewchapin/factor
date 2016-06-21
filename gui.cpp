///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

#include "banner.xpm"

///////////////////////////////////////////////////////////////////////////

MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap1 = new wxStaticBitmap( m_panel1, wxID_ANY, wxBitmap( banner_xpm ), wxDefaultPosition, wxDefaultSize, 0 );
	mainSizer->Add( m_bitmap1, 0, 0, 5 );
	
	m_staticline1 = new wxStaticLine( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	mainSizer->Add( m_staticline1, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrlA = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer2->Add( m_textCtrlA, 0, wxALL, 5 );
	
	m_staticText1 = new wxStaticText( m_panel1, wxID_ANY, _("x² +"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlB = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer2->Add( m_textCtrlB, 0, wxALL, 5 );
	
	m_staticText2 = new wxStaticText( m_panel1, wxID_ANY, _("x +"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText2->Wrap( -1 );
	bSizer2->Add( m_staticText2, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlC = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer2->Add( m_textCtrlC, 0, wxALL, 5 );
	
	m_staticText3 = new wxStaticText( m_panel1, wxID_ANY, _("= 0"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText3->Wrap( -1 );
	bSizer2->Add( m_staticText3, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer2->Add( 25, 0, 0, wxEXPAND, 5 );
	
	m_Calculate = new wxButton( m_panel1, wxID_ANY, _("&Calculate"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer2->Add( m_Calculate, 0, wxALL, 5 );
	
	mainSizer->Add( bSizer2, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_Work = new wxListCtrl( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_ICON|wxSUNKEN_BORDER );
	bSizer3->Add( m_Work, 1, wxEXPAND|wxALL, 5 );
	
	mainSizer->Add( bSizer3, 1, wxEXPAND, 5 );
	
	m_panel1->SetSizer( mainSizer );
	m_panel1->Layout();
	mainSizer->Fit( m_panel1 );
	bSizer4->Add( m_panel1, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer4 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	m_Calculate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnCalculate ), NULL, this );
}

MainFrameBase::~MainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	m_Calculate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnCalculate ), NULL, this );
}
