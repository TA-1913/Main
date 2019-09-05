//
//  main.cpp
//  lab2
//
//  Created by Эдиссон on 9/4/19.
//  Copyright © 2019 Эдиссон. All rights reserved.
//

#include <iostream>
#include <math.h>

double first(double x,double y){
	return 	abs(x + y) * (tan(y) + exp(-x)) + sin(x) / sqrt(cos(y));
}

void second(double x, double y, double z){
	if ((x >= y) && ((y >= z))) {
		x *= 2;
		y *= 2;
		z *= 2;
	} else {
		x = abs(x);
		y = abs(y);
		z = abs(z);
	}
	std::cout << "Результат: " << x << ", "<< y << ", " << z << ".";
}

double third(int n){
	int result= 0;
	for (int i = 0; i < n; i++) {
		result += sqrt(result);
	}
	return result;
}

int main(int argc, const char * argv[]) {
    // Первое задание
	std::cout << "Введите 3 действительных числа: ";
	
	double x, y, z;
	std::cin >> x >> y >> z;
	
	std::cout << "\n Результат: " << first(x, y) << "\n";
	
	// Второе задание
	second(x,y,z);
	
	// Третье задание
	std::cout << "\n Введите количество итераций: ";
	
	int n;
	std::cin >> n;
	
	std::cout << "\n Результат: "  << third(n) << "\n";
	
    return 0;
}



