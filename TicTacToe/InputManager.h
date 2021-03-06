#pragma once

class InputManager
{
private:
	class myDebugger* debugger = nullptr;
	bool mouseState = false;

	class Sound* soundPop2 = nullptr;

	char charRestart = 'R';
	char charQuit = 'Q';

	const char xMarker = 'X';

public:
	InputManager();
	~InputManager();
	// returns if our mouse is triggered
	bool DidMouseTrigger();
	// user input functionality
	void update(class Entity* entity, class StateManager* statemanager, class Window* window);
	bool clickedOnEntity(class Entity* entity, class Window* window);
};