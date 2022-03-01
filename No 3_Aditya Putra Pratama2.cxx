#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
	int i,j;
	int matA [2][2]= {4,8,2,10};
	int eks;
	float c;
	
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
	
	c=5;

	cout<<" Hasil Pengurangan Matriks A Eksponen 5 "<<endl;
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			cout<<" "<<pow(matA[i][j],c)<<" ";
			cout<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	system("Pause");
	return 0;
	getch();
}
