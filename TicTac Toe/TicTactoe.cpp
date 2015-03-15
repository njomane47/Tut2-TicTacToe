#ifndef TicTactoe_H
#define TicTactoe_H
#include"TicTactoe"
#include<iostream>
#include<windows.h>

using namespace std;
TicTactoe::TicTactoe()
{
	void TicTactoe::restart()
	{
		system("cls");
		char board[8] = { { '1', '2', '3' }, { '4', '5', '6' }, { '7', '8', '9' } };

		cout << board[] << endl;
	}


	bool tictactoe::move(int pos, char player)
	{
		if (board[pos] != 'X' || "O")
			boerd[pos] = player;
		return true;
		else
			return false;
	}


	void tictactoe::print()
	{
		cout << board[0] << cout << board[1] << board[2] << endl;
		cout << board[3] << cout << board[4] << board[5] << endl;
		cout << board[6] << cout << board[7] << board[8] << endl;
	}

	char tictactoe::iswon(char player)
	{
		char status;
		if (board[0] == board[1] && board[0] == board[2])
			status = player;
		else if (board[0] == board[4] && board[0] == board[8])
			status = player;
		else if (board[0] == board[3] && board[0] == board[6])
			status = player;
		else if (board[6] == board[7] && board[6] == board[8])
			status = player;
		else if (board[1] == board[4] && board[1] == board[7])
			status = player;
		else if (board[2] == board[5] && board[2] == board[8])
			status = player;
		else if (board[3] == board[4] && board[3] == board[5])
			status = player;
		else if (board[2] == board[4] && board[2] == board[6])
			status = player;

		else
			for (int x = 0; x <= 8; x++)
			{
				if (board[x] != 'X' || board[x] != 'O')
					status = 'D';	
			}
		return status;
	}
}
#endif