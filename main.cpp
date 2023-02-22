#include <stdio.h>
#include <stdlib.h>
using namespace std;
main()
{
	int mas[100][100];
	int n,m;
	printf("Vvedite kolichestvo stolbtsov\n");
	scanf("%d",&n);
	printf("Vvedite kolichestvo strok\n");
	scanf("%d",&m);
	printf("Vvedite elementy massiva:\n");
	
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			mas[j][i]=rand()%10+(-2);
		}
	}
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			printf("%3i",mas[j][i]);
		}
		printf("\n\n");
	}
}
