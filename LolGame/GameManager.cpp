#include "GameManager.h"
#include <Windows.h>
#include <iostream>
#include <cstdlib>

#include "Garen.h"
#include "LeBlanc.h"


using namespace std;

GameManager::GameManager()
{
	srand(time(0));
	isGameEnd = false;
	pChamp[0] = nullptr;
	pChamp[1] = nullptr;
}

GameManager::~GameManager()
{
	if (pChamp[0] != nullptr)
		delete pChamp[0];
	if (pChamp[1] != nullptr)
		delete pChamp[1];
}

void GameManager::StartGame()
{
	ShowTitle();
	InitializeChampion();
	while (isGameEnd == false)
	{
		Update();
		Sleep(500); // 0.5초 딜레이
		system("cls");
	}
	ShowEnd();
}

void GameManager::Update()
{
	int atackTurn = rand() % 2;
	int defTurn = 1 - atackTurn;

	if (pChamp[atackTurn]->Attack() == true)
	{
		pChamp[defTurn]->Defence();
		if (pChamp[defTurn]->isDie() == true)
		{
			isGameEnd = true;
			
		}
	}

}

void GameManager::ShowTitle()
{
	cout << " _        ___    _    \n";
	cout << "| |      / _ |  | |   \n";
	cout << "| |     | | | | | |   \n";
	cout << "| |     | | | | | |   \n";
	cout << "| |___  | |_| | | |___\n";
	cout << "|_____|  |___/  |_____|\n\n\n\n";
	cout << "엔터키를 누르시면 게임을 시작합니다!";
	cin.get();
	system("cls");
}

void GameManager::InitializeChampion()
{
	pChamp[0] = new Garen("가렌", 100, 50, 60, 70, 30, true);
	pChamp[1] = new LeBlanc("르블랑", 100, 50, 60, 70, 30, true);
}

void GameManager::SelectChampion()
{
}

void GameManager::ShowEnd()
{
	system("cls");
	std::cout << " _____  _   _   ____  \n";
	std::cout << "|  ___|| \\ | | |  _ \\ \n";
	std::cout << "| |__  |  \\| | | | | |\n";
	std::cout << "|  __| | . ` | | | | |\n";
	std::cout << "| |___ | |\\  | | |_| |\n";
	std::cout << "\\____/ \\_| \\_/ |____/ \n\n\n";
	cout << "엔터키를 누르시면 게임을 종료 합니다!";
	cin.get();
	system("cls");
}