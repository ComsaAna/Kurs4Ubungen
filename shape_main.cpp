#include <iostream>
#include "shape.cpp"
#include <vector>
#include <algorithm>

using namespace std;

template <typename F>
void apply(std::vector <shape*> vec, F f) {
	//aplica toate functiile
}


int main()
{
	vector<int> A = { 6, 4, 2, 1, 4 ,15};
	shape a = shape("Dreieck", 2.0);
	shape* a1 = &a;
	shape b = shape("Rechteck", 4.0);
	shape* b1 = &b;
	shape c = shape("Quadrat", 6.0);
	shape* c1 = &c;
	shape d = shape("Rhombus", 8.0);
	shape* d1 = &d;
	shape e = shape("Parallelogramm", 10.0);
	shape* e1 = &e;
	shape e = shape("Trapez", 12.0);
	shape* e1 = &e;
	std::vector <shape*> B = { a1, b1, c1, d1, e1 };

	apply(B, Multiply(10));
	apply(B, str());
	apply(B, Teilung(10));
	apply(B, str());
}