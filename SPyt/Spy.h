// Spy.h : main header file for the SPY application
//

#if !defined(AFX_SPY_H__0032EBC5_A139_11D1_8229_00600815B1D4__INCLUDED_)
#define AFX_SPY_H__0032EBC5_A139_11D1_8229_00600815B1D4__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSpyApp:
// See Spy.cpp for the implementation of this class
//

class CSpyApp : public CWinApp
{
public:
	CSpyApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSpyApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSpyApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPY_H__0032EBC5_A139_11D1_8229_00600815B1D4__INCLUDED_)
