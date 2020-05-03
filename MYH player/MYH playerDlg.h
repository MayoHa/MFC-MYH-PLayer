
// MYH PlayerDlg.h : ͷ�ļ�
//

#pragma once
#include "CWMPPlayer4.h"
#include "afxwin.h"


// CMYHPlayerDlg �Ի���
class CMYHPlayerDlg : public CDialogEx
{
// ����
public:
	CMYHPlayerDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYHPLAYER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
