#include "area_mod.h"

int modified_Area_Of_Rectangle(int a)
{
	std::random_device rd;								// аппаратный генератор
	std::mt19937 gen(rd());								// используем генератор "Вихрь Мерсена"
	std::uniform_int_distribution<> dist(1, 6);			// возврат int в диапазоне равновероятных значений
	std::uniform_int_distribution<> perc50(0, 1);		// возврат int в диапазоне равновероятных значений

	
	if (perc50(gen))
	{
		return a * a;
	}
	return a * a + dist(gen);
}

int modified_Area_Of_Rectangle(int a, int b)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(1, 6);
	std::uniform_int_distribution<> perc50(0, 1);

	if (perc50(gen))
	{
		return a * b;
	}
	return (a * b) + dist(gen);
}