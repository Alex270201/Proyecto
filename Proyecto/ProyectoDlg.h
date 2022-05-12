
// ProyectoDlg.h: archivo de encabezado
//

#pragma once


// Cuadro de diálogo de CProyectoDlg
class CProyectoDlg : public CDialogEx
{
// Construcción
public:
	CProyectoDlg(CWnd* pParent = nullptr);	// Constructor estándar

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROYECTO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementación
protected:
	HICON m_hIcon;

	// Funciones de asignación de mensajes generadas
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeComboboxex1();
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnBnClickedSplit1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	
};
