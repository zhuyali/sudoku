/*#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "CSudo.h"

using namespace std;

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
*/