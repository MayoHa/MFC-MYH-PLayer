
// MYH PlayerDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MYH Player.h"
#include "MYH PlayerDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMYHPlayerDlg �Ի���



CMYHPlayerDlg::CMYHPlayerDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MYHPLAYER_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMYHPlayerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_OCX1, m_player);
	DDX_Control(pDX, IDC_FullScreen, m_fullScreen);
}

BEGIN_MESSAGE_MAP(CMYHPlayerDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_FindFiles, &CMYHPlayerDlg::OnBnClickedFindfiles)
	ON_EN_CHANGE(IDC_FileName, &CMYHPlayerDlg::OnEnChangeFilename)
	ON_BN_CLICKED(IDC_Exit, &CMYHPlayerDlg::OnBnClickedExit)
	ON_BN_CLICKED(IDC_About, &CMYHPlayerDlg::OnBnClickedAbout)
	ON_BN_CLICKED(IDC_FreshFile, &CMYHPlayerDlg::OnBnClickedFreshfile)
	ON_BN_CLICKED(IDC_FullScreen, &CMYHPlayerDlg::OnBnClickedFullscreen)
END_MESSAGE_MAP()


// CMYHPlayerDlg ��Ϣ�������

BOOL CMYHPlayerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CMYHPlayerDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMYHPlayerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMYHPlayerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMYHPlayerDlg::OnBnClickedFindfiles()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	char  szFileFilter[] = "Mp3  File(*.mp3)|*.mp3|"

		"Wma   File(*.wma)|*.wma|"

		"Video   File(*.dat)|*.dat|"

		"Wave   File(*.wav)|*.wav|"

		"AVI   File(*.avi)|*.avi|"

		"Movie   File(*.mov)|*.mov|"

		"Media   File(*.mmm)|*.mmm|"

		"Mid   File(*.mid;*,rmi)|*.mid;*.rmi|"

		"MPEG   File(*.mpeg)|*.mpeg|"

		"All   File(*.*)|*.*|| ";//�ļ����͹���

	CFileDialog  dlg(TRUE, NULL, NULL, OFN_HIDEREADONLY, szFileFilter);

	if (dlg.DoModal() == IDOK)

	{

		CString PathName = dlg.GetPathName();
		CString FileName = dlg.GetFileName();
		PathName.MakeUpper();
		SetDlgItemText(IDC_FileName, FileName);
		m_player.put_URL(PathName);
		GetDlgItem(IDC_FullScreen)->EnableWindow(true);



	}
}


void CMYHPlayerDlg::OnEnChangeFilename()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CMYHPlayerDlg::OnBnClickedExit()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialog::OnCancel();
}




void CMYHPlayerDlg::OnBnClickedAbout()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CAboutDlg dlg;
	dlg.DoModal();
}


void CMYHPlayerDlg::OnBnClickedFreshfile()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SetDlgItemText(IDC_FileName, NULL);
	m_player.put_URL(NULL);
	GetDlgItem(IDC_FullScreen)->EnableWindow(false);

}


void CMYHPlayerDlg::OnBnClickedFullscreen()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_player.put_fullScreen(true);
}
