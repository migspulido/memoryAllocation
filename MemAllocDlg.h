// MemAllocDlg.h : header file
//

#if !defined(AFX_MEMALLOCDLG_H__5F7BE69D_7567_4908_AB93_01053B6261FC__INCLUDED_)
#define AFX_MEMALLOCDLG_H__5F7BE69D_7567_4908_AB93_01053B6261FC__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

/////////////////////////////////////////////////////////////////////////////
// CMemAllocDlg dialog

class CMemAllocDlg : public CDialog
{
// Construction
public:
	CMemAllocDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMemAllocDlg)
	enum { IDD = IDD_MEMALLOC_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMemAllocDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMemAllocDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnOk();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft eMbedded Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MEMALLOCDLG_H__5F7BE69D_7567_4908_AB93_01053B6261FC__INCLUDED_)
