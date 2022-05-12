#pragma once
#include "afxdialogex.h"


// Cuadro de diálogo de C4btns

class C4btns : public CDialog
{
	DECLARE_DYNAMIC(C4btns)

public:
	C4btns(CWnd* pParent = nullptr);   // Constructor estándar
	virtual ~C4btns();

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
};
