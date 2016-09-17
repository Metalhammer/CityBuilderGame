#ifndef GAME_H
#define GAME_H

#include <stack>
#include <SFML/Graphics.hpp>
#include "texture_manager.h"
#include <map>
#include <string>
#include "tile.h"
#include "gui.h"



class GameState;

class Game
{
    private:

	void loadTextures();
	void loadTiles();
	void loadStylesheets();
	void loadFonts();

	public:

	const static int tileSize = 8;

    std::stack<GameState*> states;

	sf::RenderWindow window;
    TextureManager texmgr;
    sf::Sprite background;

	std::map<std::string, Tile> tileAtlas;
	std::map<std::string, GuiStyle> stylesheets;
	std::map<std::string, sf::Font> fonts;



    void pushState(GameState* state);
    void popState();
    void changeState(GameState* state);
    GameState* peekState();

    void gameLoop();

    Game();
    ~Game();
};

#endif /* GAME_H */