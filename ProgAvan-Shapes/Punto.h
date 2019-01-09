#pragma once
class Punto
{
private:
	float x;
	float y;

public:
	~Punto();
	Punto();
	Punto(float x, float y);
	float getX();
	float getY();
	void setX(float x);
	void setY(float y);
};

