// MFCTestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCTest.h"
#include "MFCTestDlg.h"
#include <iostream.h>
#include <cstdlib>
#include <ctime>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About
int a[10][10]={0};

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCTestDlg dialog

CMFCTestDlg::CMFCTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMFCTestDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMFCTestDlg)
	m_a11 = 0;
	m_a12 = 0;
	m_a13 = 0;
	m_a14 = 0;
	m_a15 = 0;
	m_a16 = 0;
	m_a17 = 0;
	m_a18 = 0;
	m_a19 = 0;
	m_a21 = 0;
	m_a22 = 0;
	m_a23 = 0;
	m_a24 = 0;
	m_a26 = 0;
	m_a25 = 0;
	m_a27 = 0;
	m_a31 = 0;
	m_a29 = 0;
	m_a32 = 0;
	m_a28 = 0;
	m_a33 = 0;
	m_a34 = 0;
	m_a35 = 0;
	m_a39 = 0;
	m_a41 = 0;
	m_a44 = 0;
	m_a43 = 0;
	m_a42 = 0;
	m_a37 = 0;
	m_a36 = 0;
	m_a38 = 0;
	m_a48 = 0;
	m_a54 = 0;
	m_a51 = 0;
	m_a53 = 0;
	m_a47 = 0;
	m_a49 = 0;
	m_a45 = 0;
	m_a46 = 0;
	m_a52 = 0;
	m_a55 = 0;
	m_a59 = 0;
	m_a62 = 0;
	m_a65 = 0;
	m_a58 = 0;
	m_a63 = 0;
	m_a61 = 0;
	m_a57 = 0;
	m_a56 = 0;
	m_a64 = 0;
	m_a72 = 0;
	m_a75 = 0;
	m_a68 = 0;
	m_a71 = 0;
	m_a66 = 0;
	m_a67 = 0;
	m_a69 = 0;
	m_a73 = 0;
	m_a74 = 0;
	m_a76 = 0;
	m_a78 = 0;
	m_a81 = 0;
	m_a83 = 0;
	m_a85 = 0;
	m_a87 = 0;
	m_a79 = 0;
	m_a77 = 0;
	m_a82 = 0;
	m_a86 = 0;
	m_a84 = 0;
	m_a88 = 0;
	m_a94 = 0;
	m_a89 = 0;
	m_a91 = 0;
	m_a92 = 0;
	m_a93 = 0;
	m_a95 = 0;
	m_a96 = 0;
	m_a97 = 0;
	m_a98 = 0;
	m_a99 = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMFCTestDlg)
	DDX_Text(pDX, a11, m_a11);
	DDV_MinMaxInt(pDX, m_a11, 1, 9);
	DDX_Text(pDX, a12, m_a12);
	DDV_MinMaxInt(pDX, m_a12, 1, 9);
	DDX_Text(pDX, a13, m_a13);
	DDV_MinMaxInt(pDX, m_a13, 1, 9);
	DDX_Text(pDX, a14, m_a14);
	DDV_MinMaxInt(pDX, m_a14, 1, 9);
	DDX_Text(pDX, a15, m_a15);
	DDV_MinMaxInt(pDX, m_a15, 1, 9);
	DDX_Text(pDX, a16, m_a16);
	DDV_MinMaxInt(pDX, m_a16, 1, 9);
	DDX_Text(pDX, a17, m_a17);
	DDV_MinMaxInt(pDX, m_a17, 1, 9);
	DDX_Text(pDX, a18, m_a18);
	DDV_MinMaxInt(pDX, m_a18, 1, 9);
	DDX_Text(pDX, a19, m_a19);
	DDV_MinMaxInt(pDX, m_a19, 1, 9);
	DDX_Text(pDX, a21, m_a21);
	DDV_MinMaxInt(pDX, m_a21, 1, 9);
	DDX_Text(pDX, a22, m_a22);
	DDV_MinMaxInt(pDX, m_a22, 1, 9);
	DDX_Text(pDX, a23, m_a23);
	DDV_MinMaxInt(pDX, m_a23, 1, 9);
	DDX_Text(pDX, a24, m_a24);
	DDV_MinMaxInt(pDX, m_a24, 1, 9);
	DDX_Text(pDX, a26, m_a26);
	DDV_MinMaxInt(pDX, m_a26, 1, 9);
	DDX_Text(pDX, a25, m_a25);
	DDV_MinMaxInt(pDX, m_a25, 1, 9);
	DDX_Text(pDX, a27, m_a27);
	DDV_MinMaxInt(pDX, m_a27, 1, 9);
	DDX_Text(pDX, a31, m_a31);
	DDV_MinMaxInt(pDX, m_a31, 1, 9);
	DDX_Text(pDX, a29, m_a29);
	DDV_MinMaxInt(pDX, m_a29, 1, 9);
	DDX_Text(pDX, a32, m_a32);
	DDV_MinMaxInt(pDX, m_a32, 1, 9);
	DDX_Text(pDX, a28, m_a28);
	DDV_MinMaxInt(pDX, m_a28, 1, 9);
	DDX_Text(pDX, a33, m_a33);
	DDV_MinMaxInt(pDX, m_a33, 1, 9);
	DDX_Text(pDX, a34, m_a34);
	DDV_MinMaxInt(pDX, m_a34, 1, 9);
	DDX_Text(pDX, a35, m_a35);
	DDV_MinMaxInt(pDX, m_a35, 1, 9);
	DDX_Text(pDX, a39, m_a39);
	DDV_MinMaxInt(pDX, m_a39, 1, 9);
	DDX_Text(pDX, a41, m_a41);
	DDV_MinMaxInt(pDX, m_a41, 1, 9);
	DDX_Text(pDX, a44, m_a44);
	DDV_MinMaxInt(pDX, m_a44, 1, 9);
	DDX_Text(pDX, a43, m_a43);
	DDV_MinMaxInt(pDX, m_a43, 1, 9);
	DDX_Text(pDX, a42, m_a42);
	DDV_MinMaxInt(pDX, m_a42, 1, 9);
	DDX_Text(pDX, a37, m_a37);
	DDV_MinMaxInt(pDX, m_a37, 1, 9);
	DDX_Text(pDX, a36, m_a36);
	DDV_MinMaxInt(pDX, m_a36, 1, 9);
	DDX_Text(pDX, a38, m_a38);
	DDV_MinMaxInt(pDX, m_a38, 1, 9);
	DDX_Text(pDX, a48, m_a48);
	DDV_MinMaxInt(pDX, m_a48, 1, 9);
	DDX_Text(pDX, a54, m_a54);
	DDV_MinMaxInt(pDX, m_a54, 1, 9);
	DDX_Text(pDX, a51, m_a51);
	DDV_MinMaxInt(pDX, m_a51, 1, 9);
	DDX_Text(pDX, a53, m_a53);
	DDV_MinMaxInt(pDX, m_a53, 1, 9);
	DDX_Text(pDX, a47, m_a47);
	DDV_MinMaxInt(pDX, m_a47, 1, 9);
	DDX_Text(pDX, a49, m_a49);
	DDV_MinMaxInt(pDX, m_a49, 1, 9);
	DDX_Text(pDX, a45, m_a45);
	DDV_MinMaxInt(pDX, m_a45, 1, 9);
	DDX_Text(pDX, a46, m_a46);
	DDV_MinMaxInt(pDX, m_a46, 1, 9);
	DDX_Text(pDX, a52, m_a52);
	DDV_MinMaxInt(pDX, m_a52, 1, 9);
	DDX_Text(pDX, a55, m_a55);
	DDV_MinMaxInt(pDX, m_a55, 1, 9);
	DDX_Text(pDX, a59, m_a59);
	DDV_MinMaxInt(pDX, m_a59, 1, 9);
	DDX_Text(pDX, a62, m_a62);
	DDV_MinMaxInt(pDX, m_a62, 1, 9);
	DDX_Text(pDX, a65, m_a65);
	DDV_MinMaxInt(pDX, m_a65, 1, 9);
	DDX_Text(pDX, a58, m_a58);
	DDV_MinMaxInt(pDX, m_a58, 1, 9);
	DDX_Text(pDX, a63, m_a63);
	DDV_MinMaxInt(pDX, m_a63, 1, 9);
	DDX_Text(pDX, a61, m_a61);
	DDV_MinMaxInt(pDX, m_a61, 1, 9);
	DDX_Text(pDX, a57, m_a57);
	DDV_MinMaxInt(pDX, m_a57, 1, 9);
	DDX_Text(pDX, a56, m_a56);
	DDV_MinMaxInt(pDX, m_a56, 1, 9);
	DDX_Text(pDX, a64, m_a64);
	DDV_MinMaxInt(pDX, m_a64, 1, 9);
	DDX_Text(pDX, a72, m_a72);
	DDV_MinMaxInt(pDX, m_a72, 1, 9);
	DDX_Text(pDX, a75, m_a75);
	DDV_MinMaxInt(pDX, m_a75, 1, 9);
	DDX_Text(pDX, a68, m_a68);
	DDV_MinMaxInt(pDX, m_a68, 1, 9);
	DDX_Text(pDX, a71, m_a71);
	DDV_MinMaxInt(pDX, m_a71, 1, 9);
	DDX_Text(pDX, a66, m_a66);
	DDV_MinMaxInt(pDX, m_a66, 1, 9);
	DDX_Text(pDX, a67, m_a67);
	DDV_MinMaxInt(pDX, m_a67, 1, 9);
	DDX_Text(pDX, a69, m_a69);
	DDV_MinMaxInt(pDX, m_a69, 1, 9);
	DDX_Text(pDX, a73, m_a73);
	DDV_MinMaxInt(pDX, m_a73, 1, 9);
	DDX_Text(pDX, a74, m_a74);
	DDV_MinMaxInt(pDX, m_a74, 1, 9);
	DDX_Text(pDX, a76, m_a76);
	DDV_MinMaxInt(pDX, m_a76, 1, 9);
	DDX_Text(pDX, a78, m_a78);
	DDV_MinMaxInt(pDX, m_a78, 1, 9);
	DDX_Text(pDX, a81, m_a81);
	DDV_MinMaxInt(pDX, m_a81, 1, 9);
	DDX_Text(pDX, a83, m_a83);
	DDV_MinMaxInt(pDX, m_a83, 1, 9);
	DDX_Text(pDX, a85, m_a85);
	DDV_MinMaxInt(pDX, m_a85, 1, 9);
	DDX_Text(pDX, a87, m_a87);
	DDV_MinMaxInt(pDX, m_a87, 1, 9);
	DDX_Text(pDX, a79, m_a79);
	DDV_MinMaxInt(pDX, m_a79, 1, 9);
	DDX_Text(pDX, a77, m_a77);
	DDV_MinMaxInt(pDX, m_a77, 1, 9);
	DDX_Text(pDX, a82, m_a82);
	DDV_MinMaxInt(pDX, m_a82, 1, 9);
	DDX_Text(pDX, a86, m_a86);
	DDV_MinMaxInt(pDX, m_a86, 1, 9);
	DDX_Text(pDX, a84, m_a84);
	DDV_MinMaxInt(pDX, m_a84, 1, 9);
	DDX_Text(pDX, a88, m_a88);
	DDV_MinMaxInt(pDX, m_a88, 1, 9);
	DDX_Text(pDX, a94, m_a94);
	DDV_MinMaxInt(pDX, m_a94, 1, 9);
	DDX_Text(pDX, a89, m_a89);
	DDV_MinMaxInt(pDX, m_a89, 1, 9);
	DDX_Text(pDX, a91, m_a91);
	DDV_MinMaxInt(pDX, m_a91, 1, 9);
	DDX_Text(pDX, a92, m_a92);
	DDV_MinMaxInt(pDX, m_a92, 1, 9);
	DDX_Text(pDX, a93, m_a93);
	DDV_MinMaxInt(pDX, m_a93, 1, 9);
	DDX_Text(pDX, a95, m_a95);
	DDV_MinMaxInt(pDX, m_a95, 1, 9);
	DDX_Text(pDX, a96, m_a96);
	DDV_MinMaxInt(pDX, m_a96, 1, 9);
	DDX_Text(pDX, a97, m_a97);
	DDV_MinMaxInt(pDX, m_a97, 1, 9);
	DDX_Text(pDX, a98, m_a98);
	DDV_MinMaxInt(pDX, m_a98, 1, 9);
	DDX_Text(pDX, a99, m_a99);
	DDV_MinMaxInt(pDX, m_a99, 1, 9);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMFCTestDlg, CDialog)
	//{{AFX_MSG_MAP(CMFCTestDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(a11, OnChangea11)
	ON_BN_CLICKED(IDC_BUTTON1, OnExit)
	ON_BN_CLICKED(IDProduce, OnProduce)
	ON_BN_CLICKED(IDSolve, OnSolve)
	ON_EN_CHANGE(a12, OnChangea12)
	ON_EN_CHANGE(a13, OnChangea13)
	ON_EN_CHANGE(a14, OnChangea14)
	ON_EN_CHANGE(a15, OnChangea15)
	ON_EN_CHANGE(a16, OnChangea16)
	ON_EN_CHANGE(a17, OnChangea17)
	ON_EN_CHANGE(a18, OnChangea18)
	ON_EN_CHANGE(a19, OnChangea19)
	ON_EN_CHANGE(a21, OnChangea21)
	ON_EN_CHANGE(a22, OnChangea22)
	ON_EN_CHANGE(a23, OnChangea23)
	ON_EN_CHANGE(a24, OnChangea24)
	ON_EN_CHANGE(a25, OnChangea25)
	ON_EN_CHANGE(a26, OnChangea26)
	ON_EN_CHANGE(a27, OnChangea27)
	ON_EN_CHANGE(a28, OnChangea28)
	ON_EN_CHANGE(a29, OnChangea29)
	ON_EN_CHANGE(a31, OnChangea31)
	ON_EN_CHANGE(a32, OnChangea32)
	ON_EN_CHANGE(a33, OnChangea33)
	ON_EN_CHANGE(a34, OnChangea34)
	ON_EN_CHANGE(a36, OnChangea36)
	ON_EN_CHANGE(a35, OnChangea35)
	ON_EN_CHANGE(a37, OnChangea37)
	ON_EN_CHANGE(a38, OnChangea38)
	ON_EN_CHANGE(a39, OnChangea39)
	ON_EN_CHANGE(a41, OnChangea41)
	ON_EN_CHANGE(a42, OnChangea42)
	ON_EN_CHANGE(a43, OnChangea43)
	ON_EN_CHANGE(a44, OnChangea44)
	ON_EN_CHANGE(a45, OnChangea45)
	ON_EN_CHANGE(a46, OnChangea46)
	ON_EN_CHANGE(a47, OnChangea47)
	ON_EN_CHANGE(a48, OnChangea48)
	ON_EN_CHANGE(a49, OnChangea49)
	ON_EN_CHANGE(a51, OnChangea51)
	ON_EN_CHANGE(a52, OnChangea52)
	ON_EN_CHANGE(a53, OnChangea53)
	ON_EN_CHANGE(a54, OnChangea54)
	ON_EN_CHANGE(a55, OnChangea55)
	ON_EN_CHANGE(a56, OnChangea56)
	ON_EN_CHANGE(a57, OnChangea57)
	ON_EN_CHANGE(a58, OnChangea58)
	ON_EN_CHANGE(a59, OnChangea59)
	ON_EN_CHANGE(a61, OnChangea61)
	ON_EN_CHANGE(a62, OnChangea62)
	ON_EN_CHANGE(a63, OnChangea63)
	ON_EN_CHANGE(a64, OnChangea64)
	ON_EN_CHANGE(a65, OnChangea65)
	ON_EN_CHANGE(a66, OnChangea66)
	ON_EN_CHANGE(a67, OnChangea67)
	ON_EN_CHANGE(a68, OnChangea68)
	ON_EN_CHANGE(a69, OnChangea69)
	ON_EN_CHANGE(a71, OnChangea71)
	ON_EN_CHANGE(a72, OnChangea72)
	ON_EN_CHANGE(a73, OnChangea73)
	ON_EN_CHANGE(a74, OnChangea74)
	ON_EN_CHANGE(a75, OnChangea75)
	ON_EN_CHANGE(a76, OnChangea76)
	ON_EN_CHANGE(a77, OnChangea77)
	ON_EN_CHANGE(a78, OnChangea78)
	ON_EN_CHANGE(a79, OnChangea79)
	ON_EN_CHANGE(a81, OnChangea81)
	ON_EN_CHANGE(a91, OnChangea91)
	ON_EN_CHANGE(a82, OnChangea82)
	ON_EN_CHANGE(a92, OnChangea92)
	ON_EN_CHANGE(a83, OnChangea83)
	ON_EN_CHANGE(a93, OnChangea93)
	ON_EN_CHANGE(a84, OnChangea84)
	ON_EN_CHANGE(a94, OnChangea94)
	ON_EN_CHANGE(a85, OnChangea85)
	ON_EN_CHANGE(a95, OnChangea95)
	ON_EN_CHANGE(a86, OnChangea86)
	ON_EN_CHANGE(a96, OnChangea96)
	ON_EN_CHANGE(a87, OnChangea87)
	ON_EN_CHANGE(a97, OnChangea97)
	ON_EN_CHANGE(a88, OnChangea88)
	ON_EN_CHANGE(a98, OnChangea98)
	ON_EN_CHANGE(a89, OnChangea89)
	ON_EN_CHANGE(a99, OnChangea99)
	ON_BN_CLICKED(IDReset, OnReset)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCTestDlg message handlers

BOOL CMFCTestDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	for(int i=0;i<10;i++) {
		for(int j=0;j<10;j++)
			a[i][j]=0;
	}
	//设置编辑框取消默认值
	CString str = "";
	GetDlgItem(a11)->SetWindowText(str);
	GetDlgItem(a12)->SetWindowText(str);
	GetDlgItem(a13)->SetWindowText(str);
	GetDlgItem(a14)->SetWindowText(str);
	GetDlgItem(a15)->SetWindowText(str);
	GetDlgItem(a16)->SetWindowText(str);
	GetDlgItem(a17)->SetWindowText(str);
	GetDlgItem(a18)->SetWindowText(str);
	GetDlgItem(a19)->SetWindowText(str);
	GetDlgItem(a21)->SetWindowText(str);
	GetDlgItem(a22)->SetWindowText(str);
	GetDlgItem(a23)->SetWindowText(str);
	GetDlgItem(a24)->SetWindowText(str);
	GetDlgItem(a25)->SetWindowText(str);
	GetDlgItem(a26)->SetWindowText(str);
	GetDlgItem(a27)->SetWindowText(str);
	GetDlgItem(a28)->SetWindowText(str);
	GetDlgItem(a29)->SetWindowText(str);
	GetDlgItem(a31)->SetWindowText(str);
	GetDlgItem(a32)->SetWindowText(str);
	GetDlgItem(a33)->SetWindowText(str);
	GetDlgItem(a34)->SetWindowText(str);
	GetDlgItem(a35)->SetWindowText(str);
	GetDlgItem(a36)->SetWindowText(str);
	GetDlgItem(a37)->SetWindowText(str);
	GetDlgItem(a38)->SetWindowText(str);
	GetDlgItem(a39)->SetWindowText(str);
	GetDlgItem(a41)->SetWindowText(str);
	GetDlgItem(a42)->SetWindowText(str);
	GetDlgItem(a43)->SetWindowText(str);
	GetDlgItem(a44)->SetWindowText(str);
	GetDlgItem(a45)->SetWindowText(str);
	GetDlgItem(a46)->SetWindowText(str);
	GetDlgItem(a47)->SetWindowText(str);
	GetDlgItem(a48)->SetWindowText(str);
	GetDlgItem(a49)->SetWindowText(str);
	GetDlgItem(a41)->SetWindowText(str);
	GetDlgItem(a42)->SetWindowText(str);
	GetDlgItem(a43)->SetWindowText(str);
	GetDlgItem(a44)->SetWindowText(str);
	GetDlgItem(a45)->SetWindowText(str);
	GetDlgItem(a46)->SetWindowText(str);
	GetDlgItem(a47)->SetWindowText(str);
	GetDlgItem(a48)->SetWindowText(str);
	GetDlgItem(a49)->SetWindowText(str);
	GetDlgItem(a51)->SetWindowText(str);
	GetDlgItem(a52)->SetWindowText(str);
	GetDlgItem(a53)->SetWindowText(str);
	GetDlgItem(a54)->SetWindowText(str);
	GetDlgItem(a55)->SetWindowText(str);
	GetDlgItem(a56)->SetWindowText(str);
	GetDlgItem(a57)->SetWindowText(str);
	GetDlgItem(a58)->SetWindowText(str);
	GetDlgItem(a59)->SetWindowText(str);
	GetDlgItem(a61)->SetWindowText(str);
	GetDlgItem(a62)->SetWindowText(str);
	GetDlgItem(a63)->SetWindowText(str);
	GetDlgItem(a64)->SetWindowText(str);
	GetDlgItem(a65)->SetWindowText(str);
	GetDlgItem(a66)->SetWindowText(str);
	GetDlgItem(a67)->SetWindowText(str);
	GetDlgItem(a68)->SetWindowText(str);
	GetDlgItem(a69)->SetWindowText(str);
	GetDlgItem(a71)->SetWindowText(str);
	GetDlgItem(a72)->SetWindowText(str);
	GetDlgItem(a73)->SetWindowText(str);
	GetDlgItem(a74)->SetWindowText(str);
	GetDlgItem(a75)->SetWindowText(str);
	GetDlgItem(a76)->SetWindowText(str);
	GetDlgItem(a77)->SetWindowText(str);
	GetDlgItem(a78)->SetWindowText(str);
	GetDlgItem(a79)->SetWindowText(str);
	GetDlgItem(a81)->SetWindowText(str);
	GetDlgItem(a82)->SetWindowText(str);
	GetDlgItem(a83)->SetWindowText(str);
	GetDlgItem(a84)->SetWindowText(str);
	GetDlgItem(a85)->SetWindowText(str);
	GetDlgItem(a86)->SetWindowText(str);
	GetDlgItem(a87)->SetWindowText(str);
	GetDlgItem(a88)->SetWindowText(str);
	GetDlgItem(a89)->SetWindowText(str);
	GetDlgItem(a91)->SetWindowText(str);
	GetDlgItem(a92)->SetWindowText(str);
	GetDlgItem(a93)->SetWindowText(str);
	GetDlgItem(a94)->SetWindowText(str);
	GetDlgItem(a95)->SetWindowText(str);
	GetDlgItem(a96)->SetWindowText(str);
	GetDlgItem(a97)->SetWindowText(str);
	GetDlgItem(a98)->SetWindowText(str);
	GetDlgItem(a99)->SetWindowText(str);

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCTestDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCTestDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCTestDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

int Sudoku::store[81]={0};
int Sudoku::temp=0;

//初始化数独和候选数字数组
Sudoku::Sudoku(int a[10][10])
{
	isGo=true;

	for(int j=0;j<9;j++)
	{
		candidate[j]=0;
	}
	
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			sudoku[i][j]=a[i][j];
		}
	}
}

Sudoku::Sudoku()
{
	for(int j=0;j<9;j++)
	{
		candidate[j]=0;
	}

	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			sudoku[i][j]=0;
		}
	}
}

//标志初始数独中的空白处
void Sudoku::Blank()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			if(sudoku[i][j]==0)
			{
				blank[i][j]=0;
			}
			else
			{
				blank[i][j]=1;
			}
		}
	}
}

//判断row行col列的位置上可以放置的数字
void Sudoku::choice(int row,int col)
{
	//判断该处是否是空白处
	if(blank[row][col]!=0)
	{
		return;
	}
	sudoku[row][col]=0;

	//将candidate初始化
	for(int z=0;z<9;z++)
	{
		candidate[z]=z+1;
	}

	//遍历第row行去掉重复的数字
	for(int j=1;j<=9;j++)
	{
		if(sudoku[row][j]!=0)
		{
			candidate[sudoku[row][j]-1]=0;
		}
	}

	//遍历第col列去掉重复的数字
	for(int i=1;i<=9;i++)
	{
		if(sudoku[i][col]!=0)
		{
			candidate[sudoku[i][col]-1]=0;
		}
	}

	//遍历3*3的方格去掉重复的数字
	for(int m=(row-1)/3*3+1;m<(row-1)/3*3+4;m++)
	{
		for(int n=(col-1)/3*3+1;n<(col-1)/3*3+4;n++)
		{
			if(sudoku[m][n]!=0)
			{
				candidate[sudoku[m][n]-1]=0;
			}
		}
	}

}

//利用回溯法求解数独
void Sudoku::backstrace(int row,int col)
{
	if(row==10)
	{
		isGo=false;
		return;
	}
 
	//判断row行col列是否已被填上，若是，则回溯。
	if(blank[row][col]!=0)
	{
		if(temp==0)
		{
			if(col==1)
				backstrace(row-1,9);
	    	else
			    backstrace(row,col-1);
		}
		else
		{
			if(col==9)
				backstrace(row+1,1);
	    	else
				backstrace(row,col+1);
		}
	}
    temp=0;
	if(blank[row][col]==0)
	{
		//判断row行col列是否有候选数字。若有，填上。若没有，回溯
		choice(row,col);//判断有哪些候选数字
	    for(int k=store[(row-1)*9+col-1];k<9;k++)
		{
		    if(candidate[k]!=0)
			{
				sudoku[row][col]=candidate[k];
				store[(row-1)*9+col-1]=k+1;
				temp++;
				if(col==9)
				{
					backstrace(row+1,1);
					if(isGo==false)
						return;
				}
				else
				{
					backstrace(row,col+1);
					if(isGo==false)
						return;
				}
			}
		}
				
		if(temp==0)
		{
			for(int k=(row-1)*9+col-1;k<81;k++)
				store[k]=0;
			sudoku[row][col]=0;
			if(col==1)
				backstrace(row-1,9);
	    	else
				backstrace(row,col-1);
		}
	}
}

//判断在row行col列是否可以放入num
bool Sudoku::success(int row,int col,int num)
{
	//判断同一行是否已存在数字num
	for(int i=1;i<=9;i++)
	{
		if(sudoku[row][i]==num)
			return false;
	}

	//判断同一列是否已存在数字num
	for(int j=1;j<=9;j++)
	{
		if(sudoku[row][j]==num)
			return false;
	}

	//判断3*3的方格内是否已存在数字num
	for(int m=(row-1)/3*3+1;m<(row-1)/3*3+4;m++)
	{
		for(int n=(col-1)/3*3+1;n<(col-1)/3*3+4;n++)
		{
			if(sudoku[m][n]==num)
				return false;
		}
	}

	return true;
}

//利用回溯法生成数独
void Sudoku::product()
{
	//随机生成数独的第一行
	srand(time(NULL));
    int i,j,t;

    for(i=1;i<10;i++){
		t=rand()%9+1;
		for(j=1;j<i;j++)
			if(sudoku[1][j]==t)
			{
				i--;
                break;
			}
       sudoku[1][j]=t;
	}

	//利用回溯法生成数独
	Blank();
	backstrace(2,1);
}

void CMFCTestDlg::OnProduce() 
{
	// TODO: Add your control notification handler code here
	Sudoku sudokuP;
	sudokuP.product();
	//UpdateData();
	updateValues(sudokuP);
	/*for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
			a[i][j]=0;
	}*/
}

void CMFCTestDlg::updateValues(Sudoku sudokuP)
{
	m_a11=sudokuP.sudoku[1][1];
	m_a12=sudokuP.sudoku[1][2];
	m_a13=sudokuP.sudoku[1][3];
	m_a14=sudokuP.sudoku[1][4];
	m_a15=sudokuP.sudoku[1][5];
	m_a16=sudokuP.sudoku[1][6];
	m_a17=sudokuP.sudoku[1][7];
	m_a18=sudokuP.sudoku[1][8];
	m_a19=sudokuP.sudoku[1][9];
	m_a21=sudokuP.sudoku[2][1];
	m_a22=sudokuP.sudoku[2][2];
	m_a23=sudokuP.sudoku[2][3];
	m_a24=sudokuP.sudoku[2][4];
	m_a25=sudokuP.sudoku[2][5];
	m_a26=sudokuP.sudoku[2][6];
	m_a27=sudokuP.sudoku[2][7];
	m_a28=sudokuP.sudoku[2][8];
	m_a29=sudokuP.sudoku[2][9];
	m_a31=sudokuP.sudoku[3][1];
	m_a32=sudokuP.sudoku[3][2];
	m_a33=sudokuP.sudoku[3][3];
	m_a34=sudokuP.sudoku[3][4];
	m_a35=sudokuP.sudoku[3][5];
	m_a36=sudokuP.sudoku[3][6];
	m_a37=sudokuP.sudoku[3][7];
	m_a38=sudokuP.sudoku[3][8];
	m_a39=sudokuP.sudoku[3][9];
	m_a41=sudokuP.sudoku[4][1];
	m_a42=sudokuP.sudoku[4][2];
	m_a43=sudokuP.sudoku[4][3];
	m_a44=sudokuP.sudoku[4][4];
	m_a45=sudokuP.sudoku[4][5];
	m_a46=sudokuP.sudoku[4][6];
	m_a47=sudokuP.sudoku[4][7];
	m_a48=sudokuP.sudoku[4][8];
	m_a49=sudokuP.sudoku[4][9];
	m_a51=sudokuP.sudoku[5][1];
	m_a52=sudokuP.sudoku[5][2];
	m_a53=sudokuP.sudoku[5][3];
	m_a54=sudokuP.sudoku[5][4];
	m_a55=sudokuP.sudoku[5][5];
	m_a56=sudokuP.sudoku[5][6];
	m_a57=sudokuP.sudoku[5][7];
	m_a58=sudokuP.sudoku[5][8];
	m_a59=sudokuP.sudoku[5][9];
	m_a61=sudokuP.sudoku[6][1];
	m_a62=sudokuP.sudoku[6][2];
	m_a63=sudokuP.sudoku[6][3];
	m_a64=sudokuP.sudoku[6][4];
	m_a65=sudokuP.sudoku[6][5];
	m_a66=sudokuP.sudoku[6][6];
	m_a67=sudokuP.sudoku[6][7];
	m_a68=sudokuP.sudoku[6][8];
	m_a69=sudokuP.sudoku[6][9];
	m_a71=sudokuP.sudoku[7][1];
	m_a72=sudokuP.sudoku[7][2];
	m_a73=sudokuP.sudoku[7][3];
	m_a74=sudokuP.sudoku[7][4];
	m_a75=sudokuP.sudoku[7][5];
	m_a76=sudokuP.sudoku[7][6];
	m_a77=sudokuP.sudoku[7][7];
	m_a78=sudokuP.sudoku[7][8];
	m_a79=sudokuP.sudoku[7][9];
	m_a81=sudokuP.sudoku[8][1];
	m_a82=sudokuP.sudoku[8][2];
	m_a83=sudokuP.sudoku[8][3];
	m_a84=sudokuP.sudoku[8][4];
	m_a85=sudokuP.sudoku[8][5];
	m_a86=sudokuP.sudoku[8][6];
	m_a87=sudokuP.sudoku[8][7];
	m_a88=sudokuP.sudoku[8][8];
	m_a89=sudokuP.sudoku[8][9];
	m_a91=sudokuP.sudoku[9][1];
	m_a92=sudokuP.sudoku[9][2];
	m_a93=sudokuP.sudoku[9][3];
	m_a94=sudokuP.sudoku[9][4];
	m_a95=sudokuP.sudoku[9][5];
	m_a96=sudokuP.sudoku[9][6];
	m_a97=sudokuP.sudoku[9][7];
	m_a98=sudokuP.sudoku[9][8];
	m_a99=sudokuP.sudoku[9][9];
	UpdateData(false);
}

void CMFCTestDlg::OnExit() 
{
	// TODO: Add your control notification handler code here
	exit(0);
}

void CMFCTestDlg::OnChange(int id, int &relative)
{
	CString strTemp;
	CWnd::GetDlgItem(id)->GetWindowText(strTemp);
	relative=atoi(strTemp);
}

void CMFCTestDlg::OnSolve() 
{
	// TODO: Add your control notification handler code here
	Sudoku sudoku(a);
	sudoku.Blank();
	sudoku.backstrace(1,1);
	updateValues(sudoku);
}

void CMFCTestDlg::OnChangea11() 
{
	OnChange(a11,m_a11);
	a[1][1]=m_a11;
	//CString temp;
	//temp.Format("%d",a[1][1]);
	//m_test=temp;
}
void CMFCTestDlg::OnChangea12() 
{
	OnChange(a12,m_a12);
	a[1][2]=m_a12;
}
void CMFCTestDlg::OnChangea13() 
{
	OnChange(a13,m_a13);
	a[1][3]=m_a13;
}
void CMFCTestDlg::OnChangea14() 
{
	OnChange(a14,m_a14);
	a[1][4]=m_a14;
}
void CMFCTestDlg::OnChangea15() 
{
	OnChange(a15,m_a15);
	a[1][5]=m_a15;
}
void CMFCTestDlg::OnChangea16() 
{
	OnChange(a16,m_a16);
	a[1][6]=m_a16;
}
void CMFCTestDlg::OnChangea17() 
{
	OnChange(a17,m_a17);
	a[1][7]=m_a17;
}
void CMFCTestDlg::OnChangea18() 
{
	OnChange(a18,m_a18);
	a[1][8]=m_a18;
}
void CMFCTestDlg::OnChangea19() 
{
	OnChange(a19,m_a19);
	a[1][9]=m_a19;
}

void CMFCTestDlg::OnChangea21() 
{
	OnChange(a21,m_a21);
	a[2][1]=m_a21;
}
void CMFCTestDlg::OnChangea22() 
{
	OnChange(a22,m_a22);
	a[2][2]=m_a22;
}
void CMFCTestDlg::OnChangea23() 
{
	OnChange(a23,m_a23);
	a[2][3]=m_a23;
}
void CMFCTestDlg::OnChangea24() 
{
	OnChange(a24,m_a24);
	a[2][4]=m_a24;
}
void CMFCTestDlg::OnChangea25() 
{
	OnChange(a25,m_a25);
	a[2][5]=m_a25;
}
void CMFCTestDlg::OnChangea26() 
{
	OnChange(a26,m_a26);
	a[2][6]=m_a26;
}
void CMFCTestDlg::OnChangea27() 
{
	OnChange(a27,m_a27);
	a[2][7]=m_a27;
}
void CMFCTestDlg::OnChangea28() 
{
	OnChange(a28,m_a28);
	a[2][8]=m_a28;
}
void CMFCTestDlg::OnChangea29() 
{
	OnChange(a29,m_a29);
	a[2][9]=m_a29;
}

void CMFCTestDlg::OnChangea31() 
{
	OnChange(a31,m_a31);
	a[3][1]=m_a31;
}
void CMFCTestDlg::OnChangea32() 
{
	OnChange(a32,m_a32);
	a[3][2]=m_a32;
}
void CMFCTestDlg::OnChangea33() 
{
	OnChange(a33,m_a33);
	a[3][3]=m_a33;
}
void CMFCTestDlg::OnChangea34() 
{
	OnChange(a34,m_a34);
	a[3][4]=m_a34;
}
void CMFCTestDlg::OnChangea35() 
{
	OnChange(a35,m_a35);
	a[3][5]=m_a35;
}
void CMFCTestDlg::OnChangea36() 
{
	OnChange(a36,m_a36);
	a[3][6]=m_a36;
}
void CMFCTestDlg::OnChangea37() 
{
	OnChange(a37,m_a37);
	a[3][7]=m_a37;
}
void CMFCTestDlg::OnChangea38() 
{
	OnChange(a38,m_a38);
	a[3][8]=m_a38;
}
void CMFCTestDlg::OnChangea39() 
{
	OnChange(a39,m_a39);
	a[3][9]=m_a39;
}

void CMFCTestDlg::OnChangea41() 
{
	OnChange(a41,m_a41);
	a[4][1]=m_a41;
}
void CMFCTestDlg::OnChangea42() 
{
	OnChange(a42,m_a42);
	a[4][2]=m_a42;
}
void CMFCTestDlg::OnChangea43() 
{
	OnChange(a43,m_a43);
	a[4][3]=m_a43;
}
void CMFCTestDlg::OnChangea44() 
{
	OnChange(a44,m_a44);
	a[4][4]=m_a44;
}
void CMFCTestDlg::OnChangea45() 
{
	OnChange(a45,m_a45);
	a[4][5]=m_a45;
}
void CMFCTestDlg::OnChangea46() 
{
	OnChange(a46,m_a46);
	a[4][6]=m_a46;
}
void CMFCTestDlg::OnChangea47() 
{
	OnChange(a47,m_a47);
	a[4][7]=m_a47;
}
void CMFCTestDlg::OnChangea48() 
{
	OnChange(a48,m_a48);
	a[4][8]=m_a48;
}
void CMFCTestDlg::OnChangea49() 
{
	OnChange(a49,m_a49);
	a[4][9]=m_a49;
}

void CMFCTestDlg::OnChangea51() 
{
	OnChange(a51,m_a51);
	a[5][1]=m_a51;
}
void CMFCTestDlg::OnChangea52() 
{
	OnChange(a52,m_a52);
	a[5][2]=m_a52;
}
void CMFCTestDlg::OnChangea53() 
{
	OnChange(a53,m_a53);
	a[5][3]=m_a53;
}
void CMFCTestDlg::OnChangea54() 
{
	OnChange(a54,m_a54);
	a[5][4]=m_a54;
}
void CMFCTestDlg::OnChangea55() 
{
	OnChange(a55,m_a55);
	a[5][5]=m_a55;
}
void CMFCTestDlg::OnChangea56() 
{
	OnChange(a56,m_a56);
	a[5][6]=m_a56;
}
void CMFCTestDlg::OnChangea57() 
{
	OnChange(a57,m_a57);
	a[5][7]=m_a57;
}
void CMFCTestDlg::OnChangea58() 
{
	OnChange(a58,m_a58);
	a[5][8]=m_a58;
}
void CMFCTestDlg::OnChangea59() 
{
	OnChange(a59,m_a59);
	a[5][9]=m_a59;
}

void CMFCTestDlg::OnChangea61() 
{
	OnChange(a61,m_a61);
	a[6][1]=m_a61;
}
void CMFCTestDlg::OnChangea62() 
{
	OnChange(a62,m_a62);
	a[6][2]=m_a62;
}
void CMFCTestDlg::OnChangea63() 
{
	OnChange(a63,m_a63);
	a[6][3]=m_a63;
}
void CMFCTestDlg::OnChangea64() 
{
	OnChange(a64,m_a64);
	a[6][4]=m_a64;
}
void CMFCTestDlg::OnChangea65() 
{
	OnChange(a65,m_a65);
	a[6][5]=m_a65;
}
void CMFCTestDlg::OnChangea66() 
{
	OnChange(a66,m_a66);
	a[6][6]=m_a66;
}
void CMFCTestDlg::OnChangea67() 
{
	OnChange(a67,m_a67);
	a[6][7]=m_a67;
}
void CMFCTestDlg::OnChangea68() 
{
	OnChange(a68,m_a18);
	a[6][8]=m_a68;
}
void CMFCTestDlg::OnChangea69() 
{
	OnChange(a69,m_a69);
	a[6][9]=m_a69;
}

void CMFCTestDlg::OnChangea71() 
{
	OnChange(a71,m_a71);
	a[7][1]=m_a71;
}
void CMFCTestDlg::OnChangea72() 
{
	OnChange(a72,m_a72);
	a[7][2]=m_a72;
}
void CMFCTestDlg::OnChangea73() 
{
	OnChange(a73,m_a73);
	a[7][3]=m_a73;
}
void CMFCTestDlg::OnChangea74() 
{
	OnChange(a74,m_a74);
	a[7][4]=m_a74;
}
void CMFCTestDlg::OnChangea75() 
{
	OnChange(a75,m_a75);
	a[7][5]=m_a75;
}
void CMFCTestDlg::OnChangea76() 
{
	OnChange(a76,m_a76);
	a[7][6]=m_a76;
}
void CMFCTestDlg::OnChangea77() 
{
	OnChange(a77,m_a77);
	a[7][7]=m_a77;
}
void CMFCTestDlg::OnChangea78() 
{
	OnChange(a78,m_a78);
	a[7][8]=m_a78;
}
void CMFCTestDlg::OnChangea79() 
{
	OnChange(a79,m_a79);
	a[7][9]=m_a79;
}

void CMFCTestDlg::OnChangea81() 
{
	OnChange(a81,m_a81);
	a[8][1]=m_a81;
}
void CMFCTestDlg::OnChangea82() 
{
	OnChange(a82,m_a82);
	a[8][2]=m_a82;
}
void CMFCTestDlg::OnChangea83() 
{
	OnChange(a83,m_a83);
	a[8][3]=m_a83;
}
void CMFCTestDlg::OnChangea84() 
{
	OnChange(a84,m_a84);
	a[8][4]=m_a84;
}
void CMFCTestDlg::OnChangea85() 
{
	OnChange(a85,m_a85);
	a[8][5]=m_a85;
}
void CMFCTestDlg::OnChangea86() 
{
	OnChange(a86,m_a86);
	a[8][6]=m_a86;
}
void CMFCTestDlg::OnChangea87() 
{
	OnChange(a87,m_a87);
	a[8][7]=m_a87;
}
void CMFCTestDlg::OnChangea88() 
{
	OnChange(a88,m_a88);
	a[8][8]=m_a88;
}
void CMFCTestDlg::OnChangea89() 
{
	OnChange(a89,m_a89);
	a[8][9]=m_a89;
}

void CMFCTestDlg::OnChangea91() 
{
	OnChange(a91,m_a91);
	a[9][1]=m_a91;
}
void CMFCTestDlg::OnChangea92() 
{
	OnChange(a92,m_a92);
	a[9][2]=m_a92;
}
void CMFCTestDlg::OnChangea93() 
{
	OnChange(a93,m_a93);
	a[9][3]=m_a93;
}
void CMFCTestDlg::OnChangea94() 
{
	OnChange(a94,m_a94);
	a[9][4]=m_a94;
}
void CMFCTestDlg::OnChangea95() 
{
	OnChange(a95,m_a95);
	a[9][5]=m_a95;
}
void CMFCTestDlg::OnChangea96() 
{
	OnChange(a96,m_a96);
	a[9][6]=m_a96;
}
void CMFCTestDlg::OnChangea97() 
{
	OnChange(a97,m_a97);
	a[9][7]=m_a97;
}
void CMFCTestDlg::OnChangea98() 
{
	OnChange(a98,m_a98);
	a[9][8]=m_a98;
}
void CMFCTestDlg::OnChangea99() 
{
	OnChange(a99,m_a99);
	a[9][9]=m_a99;
}

void CMFCTestDlg::OnReset() 
{
	// TODO: Add your control notification handler code here
	OnInitDialog();
}
