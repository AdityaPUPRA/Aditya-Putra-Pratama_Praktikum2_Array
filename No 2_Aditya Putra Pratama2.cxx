#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[])
{
	int i,j;
	int matA [2][2]= {4,8,2,10};
	int matB [2][2]= {-5,4,8,-12};
	
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
	cout<<" Hasil Pengurangan Matriks A & B "<<endl;
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			cout<<" "<<matA[i][j]-matB[i][j]<<" ";
			cout<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	system("Pause");
	return 0;
	getch();
}
