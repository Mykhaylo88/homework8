# include <stdio.h>
# include <stdlib.h>
#include <locale.h>
#include <time.h>


int main()
{
	setlocale(LC_ALL, "");


	int MAS[10] = {};
	srand(time(NULL));

	printf("������������ ������:\n");
	for (int i = 0; i < 10; ++i)
	{
		MAS[i] = rand();// � ������ �� ������ �������� �����
		printf("\t\t\t%i\n", MAS[i]);
	}


	printf("� �������� �������:\n");
	for (int i = 9; i > -1; --i)
	{
		printf("\t\t\t%i\n", MAS[i]);
	}
	system("pause");
	return 0;
}