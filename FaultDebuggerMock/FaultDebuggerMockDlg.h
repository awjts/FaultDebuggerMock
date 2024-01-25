#pragma once


class CFaultDebuggerMockDlg : public CDialog
{
public:
	CFaultDebuggerMockDlg(CWnd* pParent = nullptr);	// standard constructor

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FAULTDEBUGGERMOCK_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


protected:
	HICON m_hIcon;
	CEdit m_edit1;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
