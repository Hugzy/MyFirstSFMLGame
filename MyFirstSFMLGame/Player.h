#pragma once
class Player
{
public:
	Player();
	
	//Getters
	const int &getX();
	const int &getY();

	//Setters
	void setX(int &x);
	int setY(int &y);


	~Player();
private:
	int x;
	int y;
};

