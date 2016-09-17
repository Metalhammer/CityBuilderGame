
#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "TileLoader.h"
#include "StaticTiledMap.h"
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/View.hpp>
#include <SFML/Graphics/Vertex.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include "game.h"
#include "game_state_start.h"
 
/*class GrassMap : public TileLoader
    {
    public:
        GrassMap(void)
        {
            //For game allow user to select map size - change values based on their selection
			m_mapdata.MapX=600;
            m_mapdata.MapY=600;
            m_mapdata.TextureName="grass.tga";//a simple 32x32 seamless image of brick 
        }
        virtual void AppendTile(int gx,int gy,sf::VertexArray& garr)
        {
            sf::Vertex ver;
            ver.position=sf::Vector2f(gx*32.f,gy*32.f);
            ver.texCoords=sf::Vector2f(0.f,0.f);
            garr.append(ver);

            ver.position=sf::Vector2f(gx*32.f+32.f,gy*32.f);
            ver.texCoords=sf::Vector2f(32.f,0.f);
            garr.append(ver);

            ver.position=sf::Vector2f(gx*32.f+32.f,gy*32.f+32.f);
            ver.texCoords=sf::Vector2f(32.f,32.f);
            garr.append(ver);

            ver.position=sf::Vector2f(gx*32.f,gy*32.f+32.f);
            ver.texCoords=sf::Vector2f(0.f,32.f);
            garr.append(ver);
        }
    };

//sf::VideoMode desktop = sf::VideoMode().getDesktopMode();
//sf::RenderWindow window(desktop, "SFML works!", sf::Style::None);

int main()
    {   
        sf::RenderWindow app(sf::VideoMode(600,600),"Tilemap Example");
        app.setVerticalSyncEnabled(true);
		//app.setFramerateLimit(60);
		app.setMouseCursorVisible(true);
        sf::View cam=app.getDefaultView();

        StaticTiledMap testmap;
        GrassMap floor;
        testmap.LoadFrom(&floor);
        while(app.isOpen())
        {
            sf::Event eve;
            while(app.pollEvent(eve))
                if(eve.type==sf::Event::Closed)
                    app.close();

            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
                cam.zoom(1.05f);

            if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
                cam.move(0.f,-10.f);

            if(sf::Keyboard::isKeyPressed(sf::Keyboard::E))
                cam.zoom(0.95f);

            if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                cam.move(-10.f,0.f);

            if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                cam.move(0.f,10.f);

            if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                cam.move(10.f,0.f);

            app.setView(cam);
            app.clear();
            app.draw(testmap);
            app.display();
        }
		return 0;
    }*/

int main()
{
    Game game;

	game.pushState(new GameStateStart(&game));
    game.gameLoop();

    return 0;
}

