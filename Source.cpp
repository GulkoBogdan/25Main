#include <math.h>

#include <cstdlib>
#include <iostream>



using namespace std;






class ladya {
public: int ver;
public: int gor;
	  int main()

	  {
		  //1
		  float x1, x2, x3, y1, y2, y3;

		  cout << "Input point 1" << endl;

		  cin >> x1;

		  cin >> y1;

		  cout << "Input point 2" << endl;

		  cin >> x2;

		  cin >> y2;

		  cout << "Input point 3" << endl;

		  cin >> x3;

		  cin >> y3;

		  float ax = x1 - x2, ay = y1 - y2, bx = x2 - x3, by = y2 - y3, cx = x3 - x1, cy = y3 - y1;

		  float a = sqrt(ax * ax + ay * ay);

		  float b = sqrt(bx * bx + by * by);

		  float c = sqrt(cx * cx + cy * cy);

		  float S, P, p;

		  P = a + b + c;

		  p = P / 2;

		  S = sqrt(p * (p - a) * (p - b) * (p - c));

		  cout << "S: " << S << " P: " << P << endl;

		  system("PAUSE");

		  //2



		  setlocale(LC_ALL, "RUS");
		  int x1, x2, y1, y2;
		  cout << "Введите 1 координату 1 клетки шахматной доски: \n";
		  cin >> x1;
		  cout << "Введите 2 координату 1 клетки шахматной доски: \n";
		  cin >> y1;
		  cout << "Введите 1 координату 2 клетки шахматной доски: \n";
		  cin >> x2;
		  cout << "Введите 2 координату 2 клетки шахматной доски: \n";
		  cin >> y2;
		  if ((x1 + x2 + y1 + y2) % 2) {
			  cout << "Данные поля имеют одинаковый цвет\n";
		  }
		  else {
			  cout << "Данные поля не имеют одинаковый цвет\n";
		  }

		  //3
		  int x13, x2, x3, x4, x5;
		  cout << "Введите трехзначное число";
		  cin >> x1;
		  x2 = x13 % 10;

		  x3 = x13 % 10;
		  x4 = x13 / 100;
		  x5 = x13 % 100 / 10;
		  if (x3 + x4 == x13) {
			  cout << "Interesting ";
		  }
		  else {
			  cout << " not Interesting ";
		  }

		  return 0;
	  }