#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class shape
{
private:
	string name;
	float flache;

public:
	shape()
	{
		name = "";
		flache = 0;
	}

	//getter
	string getName() const
	{
		return name;
	}

	//setter
	void setName(string s)
	{
		this->name = s;
	}

	//getter
	float getFlache() const
	{
		return flache;
	}

	//setter
	void setFlache(float f)
	{
		this->flache = f;
	}
};

class Teilung
{
public:
	float y;
	Teilung(float el) : y(el) {}
	float operator() (shape* s) const {
		s->setFlache(s->getFlache()/y);
		return s->getFlache();
	}
};

class Multiply
{
public:
	float y;
	Multiply(float el) : y(el) {}
	float operator() (shape* s) const {
		s->setFlache(s->getFlache() * y);
		return s->getFlache();
	}
};

class str
{
public:
	void operator() (shape* s) const {
		cout << s->getName() << " " << s->getFlache() << " !\n";
	}
};