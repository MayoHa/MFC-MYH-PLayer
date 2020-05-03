
// MYH playerDlg.h : ͷ�ļ�
//

#pragma once
#include "CWMPPlayer4.h"
#include "afxwin.h"


// CMYHplayerDlg �Ի���
class CMYHplayerDlg : public CDialogEx
{
// ����
public:
	CMYHplayerDlg(CWnd* pParent = NULL);	// ��׼���캯��

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
	CWMPPlayer4 m_player;
	afx_msg void OnBnClickedFindfiles();
	afx_msg void OnBnClickedExit();
	afx_msg void OnBnClickedAbout();
	afx_msg void OnEnChangeFilename();
	CEdit m_fileName;

};
