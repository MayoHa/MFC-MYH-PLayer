
// MYH PlayerDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MYH Player.h"
#include "MYH PlayerDlg.h"
#include "afxdialogex.h"
#include <vector>
#include <iostream>


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace std;

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// CMYHPlayerDlg 对话框



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
	DDX_Control(pDX, IDC_SLIDER1, m_slider);
	DDX_Control(pDX, IDC_LIST1, m_list);
}

BEGIN_MESSAGE_MAP(CMYHPlayerDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_FindFiles, &CMYHPlayerDlg::OnBnClickedFindfiles)
	//ON_EN_CHANGE(IDC_FileName, &CMYHPlayerDlg::OnEnChangeFilename)
	ON_BN_CLICKED(IDC_Exit, &CMYHPlayerDlg::OnBnClickedExit)
	ON_BN_CLICKED(IDC_About, &CMYHPlayerDlg::OnBnClickedAbout)
	ON_BN_CLICKED(IDC_FreshFile, &CMYHPlayerDlg::OnBnClickedFreshfile)
	ON_BN_CLICKED(IDC_FullScreen, &CMYHPlayerDlg::OnBnClickedFullscreen)
	ON_BN_CLICKED(IDC_BUTTON1, &CMYHPlayerDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_Stop, &CMYHPlayerDlg::OnBnClickedStop)
	//ON_NOTIFY(NM_CUSTOMDRAW, IDC_PROGRESS1, &CMYHPlayerDlg::OnNMCustomdrawProgress1)
	ON_BN_CLICKED(IDC_Quick, &CMYHPlayerDlg::OnBnClickedQuick)
	ON_BN_CLICKED(IDC_Normal, &CMYHPlayerDlg::OnBnClickedNormal)
	ON_BN_CLICKED(IDC_Reverse, &CMYHPlayerDlg::OnBnClickedReverse)
	//ON_WM_DROPFILES()
	//ON_NOTIFY(TVN_SELCHANGED, IDC_TREE1, &CMYHPlayerDlg::OnTvnSelchangedTree1)
	//ON_EN_CHANGE(IDC_FileName4, &CMYHPlayerDlg::OnEnChangeFilename4)
	ON_BN_CLICKED(IDC_Mute, &CMYHPlayerDlg::OnBnClickedMute)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER1, &CMYHPlayerDlg::OnNMCustomdrawSlider1)

	ON_STN_CLICKED(IDC_FileName, &CMYHPlayerDlg::OnStnClickedFilename)
	ON_LBN_SELCHANGE(IDC_LIST1, &CMYHPlayerDlg::OnLbnSelchangeList1)
END_MESSAGE_MAP()


// CMYHPlayerDlg 消息处理程序

BOOL CMYHPlayerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	//获取控制设置状态
	m_controller = static_cast<CWMPControls>(m_player.get_controls());
	m_setting = m_player.get_settings();
	
	m_slider.SetRange(0,100);
	m_slider.SetTicFreq(1);
	m_slider.SetPos(50);
	m_setting.put_volume(m_slider.GetPos());
	//m_player.put_uiMode("Mini");
	



	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMYHPlayerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMYHPlayerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

//加载
//void Load(bool isEnabled) {
//	GetDlgItem(IDC_FullScreen)->EnableWindow(isEnabled);
//	GetDlgItem(IDC_BUTTON1)->EnableWindow(isEnabled);
//	GetDlgItem(IDC_Stop)->EnableWindow(isEnabled);
//	GetDlgItem(IDC_Quick)->EnableWindow(isEnabled);
//	GetDlgItem(IDC_Normal)->EnableWindow(isEnabled);
//	GetDlgItem(IDC_Reverse)->EnableWindow(isEnabled);
//}
//浏览文件
int counter=0;
//vector arrayList(100);
vector<CString> arrayList;

int CheckRepetition(CString FileName,int counter) {
	int index = -1;
	if (!counter) {
		arrayList.push_back(FileName);
		return -1;
	}

	for (int i = 0; i < arrayList.size(); i++) {
		if (arrayList[i] == FileName) {
			index = i;
			break;
		}
	}

	if (index == -1) {
		arrayList.push_back(FileName);
	}
	return index;
}

CString MakeListName(CString FileName,int counter) {
	CString inListName;
	char buff[164];
	sprintf(buff, "%03d""      ""%s", counter + 1, FileName);
	inListName = buff;
	return inListName;
}

void CMYHPlayerDlg::OnBnClickedFindfiles()
{
	// TODO: 在此添加控件通知处理程序代码
	char  szFileFilter[] = "All   File(*.*)|*.*|| "
		"Mp3  File(*.mp3)|*.mp3|"

		"Mp4   File(*.mp4)|*.mp4|"

		"Wma   File(*.wma)|*.wma|"

		"Video   File(*.dat)|*.dat|"

		"Wave   File(*.wav)|*.wav|"

		"AVI   File(*.avi)|*.avi|"

		"Movie   File(*.mov)|*.mov|"

		"Media   File(*.mmm)|*.mmm|"

		"Mid   File(*.mid;*,rmi)|*.mid;*.rmi|"

		"MPEG   File(*.mpeg)|*.mpeg|"

		;//文件类型过滤

	CFileDialog  dlg(TRUE, NULL, NULL, OFN_HIDEREADONLY, szFileFilter);
	
	if (dlg.DoModal() == IDOK)

	{
	
		CString PathName = dlg.GetPathName();
		PathName.MakeUpper();
		m_player.put_URL(PathName);


		CString FileName = dlg.GetFileName();

		int myIndex = CheckRepetition(FileName,counter);

		if (myIndex == -1) {
			m_list.InsertString(counter,MakeListName(FileName,counter));
			m_list.SelectString(counter,MakeListName(FileName,counter));
			counter++;
		}
		else
		{
			m_list.SelectString(myIndex, MakeListName(FileName, myIndex));
		}

		//CString yy;
		//yy.Format("%d", myIndex);
		//
		
		SetDlgItemText(IDC_FileName, FileName);
		SetDlgItemText(IDC_BUTTON1, "暂停");
		

		GetDlgItem(IDC_FullScreen)->EnableWindow(true);
		GetDlgItem(IDC_BUTTON1)->EnableWindow(true);
		GetDlgItem(IDC_Stop)->EnableWindow(true);
		GetDlgItem(IDC_Quick)->EnableWindow(true);
		GetDlgItem(IDC_Normal)->EnableWindow(true);
		GetDlgItem(IDC_Reverse)->EnableWindow(false);



	}
}

//显示文件名


//退出软件
void CMYHPlayerDlg::OnBnClickedExit()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnCancel();
}



//关于
void CMYHPlayerDlg::OnBnClickedAbout()
{
	// TODO: 在此添加控件通知处理程序代码
	CAboutDlg dlg;
	dlg.DoModal();
}


//清空列表
void CMYHPlayerDlg::OnBnClickedFreshfile()
{
	// TODO: 在此添加控件通知处理程序代码
	SetDlgItemText(IDC_FileName, NULL);
	m_player.put_URL(NULL);
	GetDlgItem(IDC_FullScreen)->EnableWindow(false);
	GetDlgItem(IDC_BUTTON1)->EnableWindow(false);
	GetDlgItem(IDC_Stop)->EnableWindow(false);
	GetDlgItem(IDC_Quick)->EnableWindow(false);
	GetDlgItem(IDC_Normal)->EnableWindow(false);
	GetDlgItem(IDC_Reverse)->EnableWindow(false);
	SetDlgItemText(IDC_BUTTON1, "播放");
	m_list.ResetContent();
	counter = 0;
}

//全屏播放
void CMYHPlayerDlg::OnBnClickedFullscreen()
{
	// TODO: 在此添加控件通知处理程序代码
	m_player.put_fullScreen(true);
}

//int mtimer = 0;
//播放暂停
void CMYHPlayerDlg::OnBnClickedButton1()
{
	//mtimer++;
	// TODO: 在此添加控件通知处理程序代码
	CString strButton;
	GetDlgItemText(IDC_BUTTON1, strButton);



	if (!strButton.Compare("播放")) {
		m_controller.play();
		SetDlgItemText(IDC_BUTTON1, "暂停");
	}
	else {
		m_controller.pause();
		SetDlgItemText(IDC_Quick, "快进");
		SetDlgItemText(IDC_BUTTON1, "播放");
	}

	
}



//停止播放
void CMYHPlayerDlg::OnBnClickedStop()
{
	// TODO: 在此添加控件通知处理程序代码
	m_controller.stop();
	SetDlgItemText(IDC_BUTTON1, "播放");
	SetDlgItemText(IDC_Quick, "快进");

	
}






void CMYHPlayerDlg::OnBnClickedQuick()
{
	// TODO: 在此添加控件通知处理程序代码
	m_controller.fastForward();
	SetDlgItemText(IDC_Quick, ">>");
}


void CMYHPlayerDlg::OnBnClickedNormal()
{
	// TODO: 在此添加控件通知处理程序代码
	m_controller.play();
	SetDlgItemText(IDC_Quick, "快进");
	SetDlgItemText(IDC_Reverse, "快退");
}




void CMYHPlayerDlg::OnBnClickedReverse()
{
	// TODO: 在此添加控件通知处理程序代码
	m_controller.fastReverse();
	SetDlgItemText(IDC_Reverse, "<<");
}

//拖拽功能



void CMYHPlayerDlg::OnEnChangeFilename4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


//音量控制
void CMYHPlayerDlg::OnBnClickedMute()
{
	// TODO: 在此添加控件通知处理程序代码
	if (m_setting.get_mute()) {
		((CButton *)GetDlgItem(IDC_Mute))->SetCheck(FALSE);
		
		m_setting.put_mute(false);
	}
	else {
		((CButton *)GetDlgItem(IDC_Mute))->SetCheck(TRUE);
		m_setting.put_mute(true);
	}
	if (!m_slider.GetPos()) {
		((CButton *)GetDlgItem(IDC_Mute))->SetCheck(TRUE);
	}
}




void CMYHPlayerDlg::OnNMCustomdrawSlider1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: 在此添加控件通知处理程序代码
	m_setting.put_volume(m_slider.GetPos());
	if (!m_slider.GetPos()) {
		((CButton *)GetDlgItem(IDC_Mute))->SetCheck(TRUE);
	}
	else {
		((CButton *)GetDlgItem(IDC_Mute))->SetCheck(FALSE);
	}
	*pResult = 0;
}



void CMYHPlayerDlg::OnStnClickedFilename()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CMYHPlayerDlg::OnLbnSelchangeList1()
{
	// TODO: 在此添加控件通知处理程序代码
	//m_list.
}
