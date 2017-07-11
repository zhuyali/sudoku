/*#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "CSudo.h"

using namespace std;

int Sudoku::store[81]={0};
int Sudoku::temp=0;

//��ʼ�������ͺ�ѡ��������
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

//��־��ʼ�����еĿհ״�
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

//�ж�row��col�е�λ���Ͽ��Է��õ�����
void Sudoku::choice(int row,int col)
{
	//�жϸô��Ƿ��ǿհ״�
	if(blank[row][col]!=0)
	{
		return;
	}
	sudoku[row][col]=0;

	//��candidate��ʼ��
	for(int z=0;z<9;z++)
	{
		candidate[z]=z+1;
	}

	//������row��ȥ���ظ�������
	for(int j=1;j<=9;j++)
	{
		if(sudoku[row][j]!=0)
		{
			candidate[sudoku[row][j]-1]=0;
		}
	}

	//������col��ȥ���ظ�������
	for(int i=1;i<=9;i++)
	{
		if(sudoku[i][col]!=0)
		{
			candidate[sudoku[i][col]-1]=0;
		}
	}

	//����3*3�ķ���ȥ���ظ�������
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

//���û��ݷ��������
void Sudoku::backstrace(int row,int col)
{
	if(row==10)
	{
		isGo=false;
		return;
	}
 
	//�ж�row��col���Ƿ��ѱ����ϣ����ǣ�����ݡ�
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
		//�ж�row��col���Ƿ��к�ѡ���֡����У����ϡ���û�У�����
		choice(row,col);//�ж�����Щ��ѡ����
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

//�ж���row��col���Ƿ���Է���num
bool Sudoku::success(int row,int col,int num)
{
	//�ж�ͬһ���Ƿ��Ѵ�������num
	for(int i=1;i<=9;i++)
	{
		if(sudoku[row][i]==num)
			return false;
	}

	//�ж�ͬһ���Ƿ��Ѵ�������num
	for(int j=1;j<=9;j++)
	{
		if(sudoku[row][j]==num)
			return false;
	}

	//�ж�3*3�ķ������Ƿ��Ѵ�������num
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

//���û��ݷ���������
void Sudoku::product()
{
	//������������ĵ�һ��
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

	//���û��ݷ���������
	Blank();
	backstrace(2,1);
}
*/