
// MFC_INC.cpp : 응용 프로그램에 대한 클래스 동작을 정의합니다.
//

#include "stdafx.h"
#include "MFC_INC.h"
#include "MFC_INCDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_INCApp

BEGIN_MESSAGE_MAP(CMFC_INCApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMFC_INCApp 생성

CMFC_INCApp::CMFC_INCApp()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	// InitInstance에 모든 중요한 초기화 작업을 배치합니다.
}


// 유일한 CMFC_INCApp 개체입니다.

CMFC_INCApp theApp;


// CMFC_INCApp 초기화

BOOL CMFC_INCApp::InitInstance()
{
	CWinApp::InitInstance();

	CMFC_INCDlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();

	return FALSE;
}

