#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double a, b, c, d;
	cout << "Введите координаты первой точки (a b) :";
	cin >> a >> b;
	
	cout << "Введите координаты второй точки (c d) :";
	cin >> c >> d;
	
	double distance = sqrt(pow(c - a, 2) + pow(d - b, 2));
	
	cout << "Расстояние между точками (" << a << ", " << b << ") и (" << c << ", " << d <<") = " << distance << endl;
    
    return 0;
}
