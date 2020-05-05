
// MYH PlayerDlg.h : ͷ�ļ�
//

#pragma once
#include "CWMPPlayer4.h"
#include "CWMPControls.h"
#include "CWMPSettings.h"
#include "CWMPMedia3.h"
#include "afxwin.h"
#include "afxcmn.h"

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
	CWMPControls m_controller;
	CWMPSettings m_setting;
	CWMPMedia3 m_media;
	
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedStop();
	afx_msg void OnNMCustomdrawProgress1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedQuick();
	afx_msg void OnBnClickedNormal();
	afx_msg void OnBnClickedReverse();
	afx_msg void OnDropFiles(HDROP hDropInfo);
	afx_msg void OnTvnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeFilename4();
	afx_msg void OnBnClickedMute();
	afx_msg void OnNMCustomdrawSlider1(NMHDR *pNMHDR, LRESULT *pResult);
	CSliderCtrl m_slider;
	afx_msg void OnEnChangeFileauthor();
	afx_msg void OnEnChangeFilesize();
	afx_msg void OnEnChangeFiletime();
	afx_msg void OnEnChangeFiledisc();
};
