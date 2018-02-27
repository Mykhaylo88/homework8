# include <stdio.h>
# include <stdlib.h>
#include <locale.h>
#include <time.h>


int main()
{
	setlocale(LC_ALL, "");


	int MAS[10] = {};
	srand(time(NULL));

	printf("Оригинальный массив:\n");
	for (int i = 0; i < 10; ++i)
	{
		MAS[i] = rand();// В задаче не указан диапазон чисел
		printf("\t\t\t%i\n", MAS[i]);
	}


	printf("В обратном порядке:\n");
	for (int i = 9; i > -1; --i)
	{
		printf("\t\t\t%i\n", MAS[i]);
	}
	system("pause");
	return 0;
}