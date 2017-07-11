// MFCTestDlg.h : header file
//

#if !defined(AFX_MFCTESTDLG_H__2A32E054_C93C_4B73_99FE_43D3199DECEB__INCLUDED_)
#define AFX_MFCTESTDLG_H__2A32E054_C93C_4B73_99FE_43D3199DECEB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFCTestDlg dialog

class Sudoku;

class CMFCTestDlg : public CDialog
{
// Construction
public:
	CMFCTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCTestDlg)
	enum { IDD = IDD_MFCTEST_DIALOG };
	int		m_a11;
	int		m_a12;
	int		m_a13;
	int		m_a14;
	int		m_a15;
	int		m_a16;
	int		m_a17;
	int		m_a18;
	int		m_a19;
	int		m_a21;
	int		m_a22;
	int		m_a23;
	int		m_a24;
	int		m_a26;
	int		m_a25;
	int		m_a27;
	int		m_a31;
	int		m_a29;
	int		m_a32;
	int		m_a28;
	int		m_a33;
	int		m_a34;
	int		m_a35;
	int		m_a39;
	int		m_a41;
	int		m_a44;
	int		m_a43;
	int		m_a42;
	int		m_a37;
	int		m_a36;
	int		m_a38;
	int		m_a48;
	int		m_a54;
	int		m_a51;
	int		m_a53;
	int		m_a47;
	int		m_a49;
	int		m_a45;
	int		m_a46;
	int		m_a52;
	int		m_a55;
	int		m_a59;
	int		m_a62;
	int		m_a65;
	int		m_a58;
	int		m_a63;
	int		m_a61;
	int		m_a57;
	int		m_a56;
	int		m_a64;
	int		m_a72;
	int		m_a75;
	int		m_a68;
	int		m_a71;
	int		m_a66;
	int		m_a67;
	int		m_a69;
	int		m_a73;
	int		m_a74;
	int		m_a76;
	int		m_a78;
	int		m_a81;
	int		m_a83;
	int		m_a85;
	int		m_a87;
	int		m_a79;
	int		m_a77;
	int		m_a82;
	int		m_a86;
	int		m_a84;
	int		m_a88;
	int		m_a94;
	int		m_a89;
	int		m_a91;
	int		m_a92;
	int		m_a93;
	int		m_a95;
	int		m_a96;
	int		m_a97;
	int		m_a98;
	int		m_a99;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCTestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMFCTestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnChangeEdit3();
	afx_msg void OnChange11();
	afx_msg void OnChangea11();
	afx_msg void OnExit();
	afx_msg void OnProduce();
	afx_msg void OnSolve();
	afx_msg void OnChangea12();
	afx_msg void OnChangea13();
	afx_msg void OnChangea14();
	afx_msg void OnChangea15();
	afx_msg void OnChangea16();
	afx_msg void OnChangea17();
	afx_msg void OnChangea18();
	afx_msg void OnChangea19();
	afx_msg void OnChangea21();
	afx_msg void OnChangea22();
	afx_msg void OnChangea23();
	afx_msg void OnChangea24();
	afx_msg void OnChangea25();
	afx_msg void OnChangea26();
	afx_msg void OnChangea27();
	afx_msg void OnChangea28();
	afx_msg void OnChangea29();
	afx_msg void OnChangea31();
	afx_msg void OnChangea32();
	afx_msg void OnChangea33();
	afx_msg void OnChangea34();
	afx_msg void OnChangea36();
	afx_msg void OnChangea35();
	afx_msg void OnChangea37();
	afx_msg void OnChangea38();
	afx_msg void OnChangea39();
	afx_msg void OnChangea41();
	afx_msg void OnChangea42();
	afx_msg void OnChangea43();
	afx_msg void OnChangea44();
	afx_msg void OnChangea45();
	afx_msg void OnChangea46();
	afx_msg void OnChangea47();
	afx_msg void OnChangea48();
	afx_msg void OnChangea49();
	afx_msg void OnChangea51();
	afx_msg void OnChangea52();
	afx_msg void OnChangea53();
	afx_msg void OnChangea54();
	afx_msg void OnChangea55();
	afx_msg void OnChangea56();
	afx_msg void OnChangea57();
	afx_msg void OnChangea58();
	afx_msg void OnChangea59();
	afx_msg void OnChangea61();
	afx_msg void OnChangea62();
	afx_msg void OnChangea63();
	afx_msg void OnChangea64();
	afx_msg void OnChangea65();
	afx_msg void OnChangea66();
	afx_msg void OnChangea67();
	afx_msg void OnChangea68();
	afx_msg void OnChangea69();
	afx_msg void OnChangea71();
	afx_msg void OnChangea72();
	afx_msg void OnChangea73();
	afx_msg void OnChangea74();
	afx_msg void OnChangea75();
	afx_msg void OnChangea76();
	afx_msg void OnChangea77();
	afx_msg void OnChangea78();
	afx_msg void OnChangea79();
	afx_msg void OnChangea81();
	afx_msg void OnChangea91();
	afx_msg void OnChangea82();
	afx_msg void OnChangea92();
	afx_msg void OnChangea83();
	afx_msg void OnChangea93();
	afx_msg void OnChangea84();
	afx_msg void OnChangea94();
	afx_msg void OnChangea85();
	afx_msg void OnChangea95();
	afx_msg void OnChangea86();
	afx_msg void OnChangea96();
	afx_msg void OnChangea87();
	afx_msg void OnChangea97();
	afx_msg void OnChangea88();
	afx_msg void OnChangea98();
	afx_msg void OnChangea89();
	afx_msg void OnChangea99();
	afx_msg void OnReset();
	//}}AFX_MSG

	void OnChange(int,int&);
	void updateValues(Sudoku sudokuP);
	DECLARE_MESSAGE_MAP()
};

class Sudoku
{
	public:
		int sudoku[10][10];
		int blank[10][10];
		int candidate[9];
		bool isGo;
		static int store[81];//用来存放循环变量的起始位置
		static int temp;//当遇到数独内本身存在的数时，判断向前回溯还是向后回溯的参数

	public:
		Sudoku();
		Sudoku(int sudoku[10][10]);
		void Blank();
		bool success(int i,int j,int num);
		void choice(int i,int j);
		void backstrace(int i,int j);
		void product();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCTESTDLG_H__2A32E054_C93C_4B73_99FE_43D3199DECEB__INCLUDED_)
