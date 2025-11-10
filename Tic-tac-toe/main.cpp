#include <iostream>
#include "windows.h"

using namespace std;

char menu[9]{'-', '-', '-', 
			'-', '-', '-', 
			'-', '-', '-', 
			};
char busy[9];
int play = 0;
int step;
int win, loos;

bool freely = false;
bool stepBot = false;
bool bot1;
bool bot1Old;



void bot() {

	srand(time(NULL));
	int b = rand() % 8;

	while (true) {

		if (!stepBot)
		{
			b = rand() % 8;
			if (menu[b] == '-')
			{
				menu[b] = 'O';
				stepBot = true;
			}
		}
		else
		{
			break;
		}
		
	}

}

void WinOrLoos() {

	//Выигрыш
//горизонтально
	if (menu[0] == 'X' && menu[1] == 'X' && menu[2] == 'X')
	{
		cout << "Вы выйграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		win++;
	}
	else if (menu[3] == 'X' && menu[4] == 'X' && menu[5] == 'X')
	{
		cout << "Вы выйграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		win++;
	}
	else if (menu[6] == 'X' && menu[7] == 'X' && menu[8] == 'X')
	{
		cout << "Вы выйграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		win++;
	}
	//вертикально
	else if (menu[0] == 'X' && menu[3] == 'X' && menu[6] == 'X')
	{
		cout << "Вы выйграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		win++;
	}
	else if (menu[1] == 'X' && menu[4] == 'X' && menu[7] == 'X')
	{
		cout << "Вы выйграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		win++;
	}
	else if (menu[2] == 'X' && menu[5] == 'X' && menu[8] == 'X')
	{
		cout << "Вы выйграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		win++;
	}
	//наискось
	else if (menu[0] == 'X' && menu[4] == 'X' && menu[8] == 'X')
	{
		cout << "Вы выйграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		win++;
	}
	else if (menu[2] == 'X' && menu[4] == 'X' && menu[6] == 'X')
	{
		cout << "Вы выйграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		win++;
	}


	//Проигрыш
	if (menu[0] == 'O' && menu[1] == 'O' && menu[2] == 'O')
	{
		cout << "Вы проиграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		loos++;
	}
	else if (menu[3] == 'O' && menu[4] == 'O' && menu[5] == 'O')
	{
		cout << "Вы проиграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		loos++;
	}
	else if (menu[6] == 'O' && menu[7] == 'O' && menu[8] == 'O')
	{
		cout << "Вы проиграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		loos++;
	}
	//вертикально
	else if (menu[0] == 'O' && menu[3] == 'O' && menu[6] == 'O')
	{
		cout << "Вы проиграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		loos++;
	}
	else if (menu[1] == 'O' && menu[4] == 'O' && menu[7] == 'O')
	{
		cout << "Вы проиграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		loos++;
	}
	else if (menu[2] == 'O' && menu[5] == 'O' && menu[8] == 'O')
	{
		cout << "Вы проиграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		loos++;
	}
	//наискось
	else if (menu[0] == 'O' && menu[4] == 'O' && menu[8] == 'O')
	{
		cout << "Вы проиграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		loos++;
	}
	else if (menu[2] == 'O' && menu[4] == 'O' && menu[6] == 'O')
	{
		cout << "Вы проиграли!\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
		loos++;
	}

	//Ничья
	if (busy[0] == 'P' && busy[1] == 'P' && busy[2] == 'P' && busy[3] == 'P' && busy[4] == 'P' && busy[5] == 'P' && busy[6] == 'P' && busy[7] == 'P' && busy[8] == 'P')
	{
		cout << "Ничья!\n\n";
		menu[0] = '-', menu[1] = '-', menu[2] = '-', menu[3] = '-', menu[4] = '-', menu[5] = '-', menu[6] = '-', menu[7] = '-', menu[8] = '-';
	}
}


int main() {
	setlocale(LC_ALL, "Ru");

	cout << "Хотите начать? \n1)Да \n2)Нет \nВаш ответ: ";
	cin >> play;
	bot1Old = true;

	switch (play) {
	case(1):

		while (true) {
			system("cls");
			WinOrLoos();
			cout << win << "/" << loos << endl;
				//Игра
			for (size_t i = 0; i <= 9; i++)
			{
				if (i == 3 || i == 6)
				{
					cout << endl << menu[i] << " ";
				}
				else {
					cout << menu[i] << " ";
				}

			}
			cout << "\nХодите: ";
			cin >> step;
				
			if (menu[step] == '-')
			{
				menu[step] = 'X';
			}
			
			bot(); stepBot = false;
			

			for (size_t i = 0; i <= 8; i++)
			{
				if (menu[i] == 'O' or menu[i] == 'X')
				{
					busy[i] = 'P';
				}
				else {
					busy[i] = '0';
				}
				
				
			}
		}


		break;
	case(2):
		return 0;
		break;
	default:
		break;
	}

}