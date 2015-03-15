#pragma once
#ifndef TicTactoe_H
#define TicTactoe_H

class TicTactoe
{
private:
	char board[8];

public:
	void restart();
	bool move(int, char);
	void print();
	char iswon(char);

	 TicTactoe();
	~TicTactoe();
};

#endif 
