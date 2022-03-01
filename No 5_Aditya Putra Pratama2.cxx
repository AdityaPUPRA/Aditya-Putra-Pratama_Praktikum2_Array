#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[])
{
	int i,j,transpose [2][2];
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
	
	cout<<" Hasil Transpose Matriks A "<<endl;
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			transpose[i][j]= matA[j][i];
			cout<<" "<<transpose[i][j]<<" ";
			cout<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	system("Pause");
	return 0;
	getch();
}
