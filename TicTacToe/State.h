// We use this state.h/.cpp to control and reference in both game and statemanager
// We can add more states later, for example -- menu, pause, etc.
#pragma once

// State enums
enum class GAME_STATE
{
	PLAYER,			// player == 0
	AI,
	GAMEOVER		// We're not using GAMEOVER currently.
};

enum class UI_STATE
{
	TITLE,			// main menu
	MAIN,			// main game loop
	QUIT			// We're not using QUIT currently.
};