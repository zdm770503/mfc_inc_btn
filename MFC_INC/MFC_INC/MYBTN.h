#pragma once


// MYBTN

class MYBTN : public CButton
{
	DECLARE_DYNAMIC(MYBTN)

public:
	MYBTN();
	virtual ~MYBTN();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};


