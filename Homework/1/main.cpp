#include <iostream>
#include <random>
#include <windows.h> //для нормального отображения русских символов
#include "area.h"
#include "area_mod.h"

int main(void)
{
	system("chcp 65001"); // С императа штука для отображения русских символов вместо кракозябр
	
	int a{}, b{};
	std::cout << "Введите значение аргумента a: ";
	std::cin >> a;
	std::cout << "Введите значение аргумента b: ";
	std::cin >> b;

	// Не рандом
	std::cout << "Один аргумент: " << area_Of_Rectangle(a) << std::endl;
	std::cout << "Два аргумента: " << area_Of_Rectangle(a, b) << std::endl;
	
	// Кусок с рандомом
	std::cout << "Модифицированный один аргумент: " << modified_Area_Of_Rectangle(a) << std::endl;
	std::cout << "Модифицированные два аргумента: " << modified_Area_Of_Rectangle(a, b) << std::endl;
	return 0;
}

