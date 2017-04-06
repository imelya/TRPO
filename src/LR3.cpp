/*Создать базовый класс, содержащий три закрытых элемента, которые образуют пространственную фигуру.
Создать производные классы: усеченная пирамида с ромбическим основанием, прямая призма с квадратным основанием, шаровой слой.
Для каждой из фигур предусмотреть вывод ее названия и вычисление объема.
Случайным образом выбрать фигуру и с помощью оператора typeid определить ее тип.*/
#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <typeinfo>
#include "main.h"

class area {
	double dim1, dim2;
	public:
	void setdim(double d1, double d2) {
		dim1 = d1;
		dim2 = d2;
	}
	void getdim(double &d1, double &d2) {
		d1 = dim1;
		d2 = dim2;
	}
  virtual void my_name() {
	  std::cout << "I am an area\n"; 
  }
  virtual double getarea() {
	  return 1;
  }
};

class prisma: public area {
	double h;
  	public:
   	void set_h(double h1) {
		h = h1;
	}
	double getarea() {
		double d1, d2, so;
		getdim(d1, d2);
		so = d1* d2;
        return so*h;
	}
	virtual void my_name() {
		std::cout << "prisma" << std::endl;
	}
};

class sloi: public area	{
	double h;
  	public:
   	void set_h(double h1) {
		h = h1;
	}
	double getarea() {
		const double pi = 3.14159; 
		double d1, d2;
		getdim(d1, d2);
        return ((pi*h)/6)+(((pi*(d1*d1+d2*d2))/2)/2);
	}
	virtual void my_name() {
		std::cout << "sloi\n";
	}
};

class pyramid: public area	{
	double h;
  	public:
   	void set_h(double h1) {
		h = h1;
	}
	double getarea() {
		double d1, d2, sn, sv;
		getdim(d1, d2);
		sn = (d1* d2)/2;
		sv = ((d1/3)* (d2/3))/2;
        return (h/3)*(sv+sn+(sqrt(sv*sn)));
	}
	virtual void my_name() {
		std::cout << "pyramid" << std::endl;
	}
};
area *generator() {
	switch (rand() % 3) {
		case 0: return new pyramid;
				break;
		case 1: return new sloi;
				break;
		case 2: return new prisma;
				break;
	}
	return NULL;
}	
int info_type () {
	//int i;
	area *p;
	//for (i=0; i < 3; i++) {
		p = generator();
		std::cout << typeid(*p).name() << "\n";
		p->getarea();
	//}
	return 0;
}

area *GetObj();

int LR3() {
	area *Ptr;
	pyramid *cPtr;
	prisma *ccPtr;
	sloi *cccPtr;
	double d1, d2, h;
	for (int i = 0; i < 4; i++) {
		Ptr = GetObj();
		cPtr = dynamic_cast<pyramid *>(Ptr);
		ccPtr = dynamic_cast<prisma *>(Ptr);
		cccPtr = dynamic_cast<sloi *>(Ptr);
		Ptr->my_name();
	    if (Ptr != NULL) {
			std::cout << "Input d1 and d2\n";
			std::cin >> d1 >> d2;
			Ptr->setdim(d1, d2);
				if (cPtr != NULL) {
				std::cout << "Input h\n";
				std::cin >> h;
				cPtr->set_h(h);
				}
					if (ccPtr != NULL) {
					std::cout << "input h\n";
					std::cin >> h;
					ccPtr->set_h(h);
					}
						if (cccPtr != NULL) {
							std::cout << "input h\n";
							std::cin >> h;
							cccPtr->set_h(h);
						}
			std::cout << "Square of figure = " << Ptr->getarea() << std::endl;
		}
	}
	info_type();
	main();
	return 0;
}
/*area *GetObj();

int main() {
	area *Ptr;
	pyramid *cPtr;
	double d1, d2, h;
	for (int i = 0; i < 4; i++) {
		Ptr = GetObj();
		cPtr = dynamic_cast<pyramid *>(Ptr);
		Ptr->my_name();
	    if (Ptr != NULL) {
			cout << "Input d1 and d2";
			cin >> d1 >> d2;
			Ptr->setdim(d1, d2);
				if (cPtr != NULL){
				cout << "Input h";
				cin >> h;
				cPtr->set_h(h);
				}
			cout << "Square of figure = " << Ptr->getarea() << endl;
		}
	}
	return 0;
}
*/

area *GetObj() {
	area *p = nullptr;
	time_t t;
	srand((int)time (&t));
	switch (rand() % 3) {
		case 0: p = new pyramid;
			break;
		case 1: p = new sloi;
			break;
		case 2: p = new prisma;
			break;
	}
	return p;
}
