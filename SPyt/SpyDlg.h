// SpyDlg.h : header file
//
// Author : Marius C.
#if !defined(AFX_SPYDLG_H__0032EBC7_A139_11D1_8229_00600815B1D4__INCLUDED_)
#define AFX_SPYDLG_H__0032EBC7_A139_11D1_8229_00600815B1D4__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

/////////////////////////////////////////////////////////////////////////////
// CSpyDlg dialog

class CSpyDlg : public CDialog
{
// Construction
public:
	void XPrint(CDC* pDC,int xc,int yc);
	CSpyDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSpyDlg)
	enum { IDD = IDD_SPY_DIALOG };
	CListBox	m_lb;
	CStatic	m_finder;
	CButton	m_hookit;
	CButton	m_Hideit;
	CButton	m_minimiizeit;
	CTreeCtrl	m_wndtree;
	CString	m_wname;
	CString	m_wclass;
	CString	m_wstyle;
	CString	m_nrof;
	int		m_x;
	int 	m_y;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSpyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	typedef struct wnddata
	{
		char	classNamme[32];
		char	wndNamme[32];
		DWORD	style;
		DWORD	exstyle;
		RECT	rt;
	}S_WNDDATA,*PS_WNDDATA;



	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSpyDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDestroy();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnEndlabeleditTree1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
	BOOL m_capture;
	CWnd*	m_pWindow;
	void	ScanWindows();
	void	AddITreetem(CWnd* pLast,int HTREEITEM=NULL);
	HTREEITEM AddITreetem(CWnd* pLast,HTREEITEM level);
	HTREEITEM	FillTree(CWnd* pLast,HTREEITEM level=NULL);
	CImageList	m_imgList;
	int			m_counts[32];
	

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPYDLG_H__0032EBC7_A139_11D1_8229_00600815B1D4__INCLUDED_)
