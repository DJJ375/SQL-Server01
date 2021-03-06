
// SQL-Server01.h : main header file for the SQL-Server01 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CSQLServer01App:
// See SQL-Server01.cpp for the implementation of this class
//

class CSQLServer01App : public CWinAppEx
{
public:
	CSQLServer01App();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSQLServer01App theApp;
