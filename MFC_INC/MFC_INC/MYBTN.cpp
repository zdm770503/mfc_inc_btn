// MYBTN.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFC_INC.h"
#include "MYBTN.h"


// MYBTN
IMPLEMENT_DYNAMIC(MYBTN, CButton)

MYBTN::MYBTN()
{

}

MYBTN::~MYBTN()
{
}


BEGIN_MESSAGE_MAP(MYBTN, CButton)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_TIMER()
END_MESSAGE_MAP()



// MYBTN 메시지 처리기입니다.

void MYBTN::OnLButtonDown(UINT nFlags, CPoint point)
{
	SetTimer(1, 500, NULL);

	CButton::OnLButtonDown(nFlags, point);
}

void MYBTN::OnLButtonUp(UINT nFlags, CPoint point)
{
	KillTimer(1);
	KillTimer(2);

	CButton::OnLButtonUp(nFlags, point);
}


void MYBTN::OnTimer(UINT_PTR nIDEvent)
{
	if (nIDEvent == 1) {
		KillTimer(1);
		SetTimer(2, 100, NULL);
	}
	else if (nIDEvent == 2) {
		GetParent()->SendMessage(WM_COMMAND, MAKEWPARAM(GetDlgCtrlID(), 20000),(LPARAM)m_hWnd);
	}
	CButton::OnTimer(nIDEvent);
}
