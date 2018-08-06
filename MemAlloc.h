// MemAlloc.h : main header file for the MEMALLOC application
//

#if !defined(AFX_MEMALLOC_H__7FF75EBB_CED4_4AB1_A365_0E1976BA7B9A__INCLUDED_)
#define AFX_MEMALLOC_H__7FF75EBB_CED4_4AB1_A365_0E1976BA7B9A__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMemAllocApp:
// See MemAlloc.cpp for the implementation of this class
//

class CMemAllocApp : public CWinApp
{
public:
	CMemAllocApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMemAllocApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMemAllocApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft eMbedded Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MEMALLOC_H__7FF75EBB_CED4_4AB1_A365_0E1976BA7B9A__INCLUDED_)
