
// MYH Player.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMYHPlayerApp: 
// �йش����ʵ�֣������ MYH Player.cpp
//

class CMYHPlayerApp : public CWinApp
{
public:
	CMYHPlayerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMYHPlayerApp theApp;