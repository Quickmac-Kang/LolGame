#pragma once

class Champion;
class GameManager
{
public:
	GameManager();
	~GameManager();

	bool isGameEnd;

	Champion* pChamp[2];

	void StartGame();
	void Update();
	
	void ShowTitle();
	void ShowEnd();
	void InitializeChampion();
	void SelectChampion();

};