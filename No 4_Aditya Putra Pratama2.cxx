  
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[])
{
	int i,j,x;
	int matA [2][2]= {4,8,2,10};
	int matB [2][2]= {-5,4,8,-12};
	int jumlah= 0;
	int hasil [10][10];
	
	cout<<"=============================="<<endl;
	cout<<"|     Array Multidimensi     |"<<endl;
	cout<<"=============================="<<endl;
	cout<<"\n";
	
	cout<<" Matriks A "<<endl;
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			cout<<" "<<matA[i][j]<<" ";
			cout<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	cout<<" Matriks B "<<endl;
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			cout<<" "<<matB[i][j]<<" ";
			cout<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			for (x=0;x<2;x++)
			{
				jumlah=jumlah+matA[i][x]*matB[x][j];
			}
			hasil[i][j]=jumlah;
			jumlah=0;
		}
	}
	cout<<" Hasil Perkalian Matriks A & B "<<endl;
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			cout<<" "<<hasil[i][j]<<" ";
			cout<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	system("Pause");
	return 0;
	getch();
}
