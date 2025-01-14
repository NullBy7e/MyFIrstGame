#pragma once

#include "GameState.hpp"
#include "../map/MapEditor.hpp"

class LevelEditorGameState final : public GameState
{
public:
	explicit LevelEditorGameState(Window& window);
	~LevelEditorGameState();

	void handle_input() override;
	void update() override;
	void clear() override;
	void draw() override;

private:
	MapEditor mapEditor_;
};
