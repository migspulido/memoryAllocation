//Miguel Pulido / Systems Architect
//Implementation file used to test 32MB address space limitation for processes.

#include "stdafx.h"
#include "MemAlloc.h"
#include "MemAllocDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMemAllocDlg dialog

CMemAllocDlg::CMemAllocDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMemAllocDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMemAllocDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMemAllocDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMemAllocDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMemAllocDlg, CDialog)
	//{{AFX_MSG_MAP(CMemAllocDlg)
	ON_BN_CLICKED(IDC_OK, OnOk)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMemAllocDlg message handlers

BOOL CMemAllocDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	CenterWindow(GetDesktopWindow());	// center to the hpc screen

	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}



void CMemAllocDlg::OnOk() 
{
	// TODO: Add your control notification handler code here
	CString cs;
	unsigned char *ptr = (LPBYTE)VirtualAlloc(NULL, (64*1024*1024), MEM_RESERVE, PAGE_READWRITE);
	cs.Format(_T("64MB, ptr=%d"), ptr);
	MessageBox(cs);
	if(ptr != NULL)
		VirtualFree(ptr, (64*1024*1024), MEM_RELEASE);

	ptr = (LPBYTE)VirtualAlloc(NULL, (32*1024*1024), MEM_RESERVE, PAGE_READWRITE);
	cs.Format(_T("32MB: ptr=%d"), ptr);
	MessageBox(cs);
	if(ptr != NULL)
		VirtualFree(ptr, (32*1024*1024), MEM_RELEASE);

	ptr = (LPBYTE)VirtualAlloc(NULL, (16*1024*1024), MEM_RESERVE, PAGE_READWRITE);
	cs.Format(_T("16MB: ptr=%d"), ptr);
	MessageBox(cs);
	if(ptr != NULL)
		VirtualFree(ptr, (16*1024*1024), MEM_RELEASE);

	ptr = (LPBYTE)VirtualAlloc(NULL, (8*1024*1024), MEM_RESERVE, PAGE_READWRITE);
	cs.Format(_T("8MB, ptr=%d"), ptr);
	MessageBox(cs);
	if(ptr != NULL)
		VirtualFree(ptr, (8*1024*1024), MEM_RELEASE);
}
