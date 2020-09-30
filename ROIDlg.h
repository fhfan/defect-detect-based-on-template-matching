
// ROIDlg.h : 头文件
//

#pragma once
#include "HalconCpp.h"
#include "afxwin.h"

using namespace HalconCpp;


// CROIDlg 对话框
class CROIDlg : public CDialogEx
{
// 构造
public:
	CROIDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_ROI_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	void CreateImageWindow();
	void InitConsoleWindow();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	double minareamin;
	double minareamax;
	double minareastep;
	double maxareamin;
	double maxareamax;
	double maxareastep;
	double absthresmin;
	double absthresmax;
	double absthresstep;
	double varthresmin;
	double varthresmax;
	double varthresstep;
	CComboBox combobox;
	afx_msg void OnCbnSelchangeCombo1();
};
