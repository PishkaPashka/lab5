/*Волегжанин Павел, на 5. Вариант 6. Выислить силу притяжения между телами.*/
#include "pch.h"
#include "stdio.h"
#include <clocale>

float check();

int main()
{
	setlocale(LC_ALL, "Rus");
	float massa1 = 0;
	float massa2 = 0;
	float sila = 0;
	float rasst = 0;
	double const post = 0.0000000000667384;

	printf("Введите массу и второго тела в килограммах и расстояние между ними в метрах:\n");
	scanf_s("%f %f %f", &massa1, &massa2, &rasst);
	printf("Введите массу первого тела:");
	massa1 = check();
	printf("Введите массу второго тела:");
	massa2 = check();
	printf("Расстояние между ними в метрах:");
	rasst = check();
	sila = (post * massa1 * massa2) / (rasst*rasst);
	printf("Сила притяжения между телами= %.10f\n", sila);
	getchar();

	return 0;
}

float check()
{
	float check;
		if (!((check > 0))
		{
			do
			{
				printf("Введите корректные значения(только положительные числа):\n");
				scanf_s("%f", &check);
				while (getchar() != '\n');
			} while (!(check > 0));
		}
	return check;
}