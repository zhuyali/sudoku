/*#if !defined(AFX_MFCTESTDLG_H__2A32E054_C93C_4B73_99FE_43D3199DECEB__INCLUDED_)
#define AFX_MFCTESTDLG_H__2A32E054_C93C_4B73_99FE_43D3199DECEB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Sudoku
{
	private:
		int sudoku[10][10];
		int blank[10][10];
		int candidate[9];
		bool isGo;
		static int store[81];//�������ѭ����������ʼλ��
		static int temp;//�����������ڱ�����ڵ���ʱ���ж���ǰ���ݻ��������ݵĲ���

	public:
		Sudoku();
		Sudoku(int sudoku[10][10]);
		void Blank();
		bool success(int i,int j,int num);
		void choice(int i,int j);
		void backstrace(int i,int j);
		void product();
};

#endif // !defined(AFX_MFCTESTDLG_H__2A32E054_C93C_4B73_99FE_43D3199DECEB__INCLUDED_)*/