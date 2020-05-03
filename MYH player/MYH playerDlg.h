
// MYH PlayerDlg.h : 头文件
//

#pragma once
#include "CWMPPlayer4.h"
#include "afxwin.h"


// CMYHPlayerDlg 对话框
class CMYHPlayerDlg : public CDialogEx
{
// 构造
public:
	CMYHPlayerDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYHPLAYER_DIALOG };
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
	afx_msg void OnBnClickedFindfiles();
	CWMPPlayer4 m_player;
	afx_msg void OnEnChangeFilename();
	afx_msg void OnBnClickedExit();
	afx_msg void OnBnClickedAbout();
	afx_msg void OnBnClickedFreshfile();
	afx_msg void OnBnClickedFullscreen();
	CButton m_fullScreen;
};
