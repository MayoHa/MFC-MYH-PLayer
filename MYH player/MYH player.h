
// MYH player.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMYHplayerApp: 
// �йش����ʵ�֣������ MYH player.cpp
//

class CMYHplayerApp : public CWinApp
{
public:
	CMYHplayerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMYHplayerApp theApp;