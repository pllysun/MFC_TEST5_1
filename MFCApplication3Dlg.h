﻿
// MFCApplication3Dlg.h: 头文件
//

#pragma once


// CMFCApplication3Dlg 对话框
class CMFCApplication3Dlg : public CDialogEx
{
// 构造
public:
	void FillListBox(void);
	static int CALLBACK EnumFontProc(ENUMLOGFONTEX* lpelfe,NEWTEXTMETRICEX* lpntme,DWORD nFontType,LPARAM lParam);
	CMFCApplication3Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION3_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedCheckTt();
	BOOL m_bTrueType;
	CString m_strSpec;
	CString m_strSample;
	CListBox m_listFont;
	afx_msg void OnSelchangeList1();
	afx_msg void OnClickedButtonSpec();
};
