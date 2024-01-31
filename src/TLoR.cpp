#include "TLoR.h"

int TLoR::Game::StartGame() {

	/* Load Textures */

	//Romeo
	sf::Texture tRomeo_Standing;
	if (!tRomeo_Standing.loadFromFile("assets/Romeo_Standing.png"))
		return EXIT_FAILURE;

	sf::Texture tRomeo_Walking_1;
	if (!tRomeo_Walking_1.loadFromFile("assets/Romeo_Walking_1.png"))
		return EXIT_FAILURE;

	sf::Texture tRomeo_Walking_2;
	if (!tRomeo_Walking_2.loadFromFile("assets/Romeo_Walking_2.png"))
		return EXIT_FAILURE;

	sf::Texture tRomeo_Walking_3;
	if (!tRomeo_Walking_3.loadFromFile("assets/Romeo_Walking_3.png"))
		return EXIT_FAILURE;

	sf::Texture tRomeo_Hiding_1;
	if (!tRomeo_Hiding_1.loadFromFile("assets/Romeo_Hiding_1.png"))
		return EXIT_FAILURE;
	sf::Texture* ptRomeo_Hiding_1 = &tRomeo_Hiding_1;

	sf::Texture tRomeo_Hiding_2;
	if (!tRomeo_Hiding_2.loadFromFile("assets/Romeo_Hiding_2.png"))
		return EXIT_FAILURE;
	sf::Texture* ptRomeo_Hiding_2 = &tRomeo_Hiding_2;

	sf::Texture tRomeo_Stabbing_1;
	if (!tRomeo_Stabbing_1.loadFromFile("assets/Romeo_Stabbing_1.png"))
		return EXIT_FAILURE;
	sf::Texture* ptRomeo_Stabbing_1 = &tRomeo_Stabbing_1;

	sf::Texture tRomeo_Stabbing_2;
	if (!tRomeo_Stabbing_2.loadFromFile("assets/Romeo_Stabbing_2.png"))
		return EXIT_FAILURE;
	sf::Texture* ptRomeo_Stabbing_2 = &tRomeo_Stabbing_2;

	sf::Texture tRomeo_Stabbing_3;
	if (!tRomeo_Stabbing_3.loadFromFile("assets/Romeo_Stabbing_3.png"))
		return EXIT_FAILURE;
	sf::Texture* ptRomeo_Stabbing_3 = &tRomeo_Stabbing_3;

	sf::Texture tRomeo_Stabbing_4;
	if (!tRomeo_Stabbing_4.loadFromFile("assets/Romeo_Stabbing_4.png"))
		return EXIT_FAILURE;
	sf::Texture* ptRomeo_Stabbing_4 = &tRomeo_Stabbing_4;

	//Juliet
	sf::Texture tJuliet_1;
	if (!tJuliet_1.loadFromFile("assets/Juliet_Ghost_1.png"))
		return EXIT_FAILURE;
	sf::Texture* ptJuliet_1 = &tJuliet_1;

	sf::Texture tJuliet_2;
	if (!tJuliet_2.loadFromFile("assets/Juliet_Ghost_2.png"))
		return EXIT_FAILURE;
	sf::Texture* ptJuliet_2 = &tJuliet_2;

	//Pause Screen
	sf::Texture tPause_Screen;
	if (!tPause_Screen.loadFromFile("assets/Pause_Screen.png"))
		return EXIT_FAILURE;
	sf::Texture* ptPause_Screen = &tPause_Screen;

	sf::Texture tTransparent;
	if (!tTransparent.loadFromFile("assets/Transparent.png"))
		return EXIT_FAILURE;
	sf::Texture* ptTransparent = &tTransparent;

	//Background
	sf::Texture tBackground;
	if (!tBackground.loadFromFile("assets/Background.png"))
		return EXIT_FAILURE;

	sf::Texture tFloor_Mask;
	if (!tFloor_Mask.loadFromFile("assets/Floor_Mask.png"))
		return EXIT_FAILURE;

	//User Interface
	sf::Texture tHeart;
	if (!tHeart.loadFromFile("assets/Heart.png"))
		return EXIT_FAILURE;
	sf::Texture* ptHeart = &tHeart;

	sf::Texture tHeart_Broken;
	if (!tHeart_Broken.loadFromFile("assets/Heart_Broken.png"))
		return EXIT_FAILURE;
	sf::Texture* ptHeart_Broken = &tHeart_Broken;

	//Dagger
	sf::Texture tDagger;
	if (!tDagger.loadFromFile("assets/Dagger.png"))
		return EXIT_FAILURE;

	/* Load Sprites */

	sf::Sprite sRomeo(tRomeo_Standing);
	sRomeo.setOrigin(sf::Vector2f(0.f, 32.f));
	sRomeo.setScale(sf::Vector2f(8.f, 8.f));
	sRomeo.setPosition(sf::Vector2f(128.f, 480.f));
	sf::FloatRect RomeoHitbox = sRomeo.getGlobalBounds();

	sf::Sprite sJuliet(tJuliet_1);
	sJuliet.setOrigin(sf::Vector2f(0.f, 25.f));
	sJuliet.setScale(sf::Vector2f(8.f, 8.f));
	sJuliet.setPosition(sf::Vector2f(2624.f, 456.f));
	sf::FloatRect JulietHitbox = sJuliet.getGlobalBounds();

	sf::Sprite sPause_Screen(tTransparent);
	sPause_Screen.setOrigin(sf::Vector2f(0.f, 0.f));
	sPause_Screen.setScale(sf::Vector2f(8.f, 8.f));
	sPause_Screen.setPosition(sf::Vector2f(0.f, 0.f));

	sf::Sprite sBackground(tBackground);
	sBackground.setOrigin(sf::Vector2f(0.f, 0.f));
	sBackground.setScale(sf::Vector2f(8.f, 8.f));
	sBackground.setPosition(sf::Vector2f(0.f, 0.f));

	sf::Sprite sFloor_Mask(tFloor_Mask);
	sFloor_Mask.setOrigin(sf::Vector2f(0.f, 4.f));
	sFloor_Mask.setScale(sf::Vector2f(8.f, 8.f));
	sFloor_Mask.setPosition(sf::Vector2f(0.f, 512.f));

	sf::Sprite sHeart1(tHeart);
	sHeart1.setOrigin(sf::Vector2f(0.f, 0.f));
	sHeart1.setScale(sf::Vector2f(6.f, 6.f));
	sHeart1.setPosition(sf::Vector2f(16.f, 16.f));

	sf::Sprite sHeart2(tHeart);
	sHeart2.setOrigin(sf::Vector2f(0.f, 0.f));
	sHeart2.setScale(sf::Vector2f(6.f, 6.f));
	sHeart2.setPosition(sf::Vector2f(64.f, 16.f));

	sf::Sprite sHeart3(tHeart);
	sHeart3.setOrigin(sf::Vector2f(0.f, 0.f));
	sHeart3.setScale(sf::Vector2f(6.f, 6.f));
	sHeart3.setPosition(sf::Vector2f(112.f, 16.f));

	sf::Sprite sDagger(tDagger);
	sDagger.setOrigin(sf::Vector2f(0.f, 0.f));
	sDagger.setScale(sf::Vector2f(8.f, 8.f));
	sDagger.setPosition(sf::Vector2f(2624.f, 456.f));


	/* Start Clocks*/

	sf::Clock RomeoClock;
	sf::Time timeRomeoElapsed = RomeoClock.getElapsedTime();

	sf::Clock JulietClock;
	sf::Time timeJulietElapsed = JulietClock.getElapsedTime();

	sf::Clock JulietAIClock;
	sf::Time timeJulietAIElapsed = JulietAIClock.getElapsedTime();

	sf::Clock CollisionClock;
	sf::Time timeCollisionElapsed = CollisionClock.getElapsedTime();

	/* Spawn the GameWindow */

	sf::RenderWindow GameWindow(sf::VideoMode(1024, 512), "The Love of Romeo");
	std::cout << "Romeo\'s health at " << PlayerHealth << " heart(s).\n\n";

	sf::View vViewport;
	vViewport.reset(sf::FloatRect(0, 0, 1024, 512));

	// Game Loop
	while (GameWindow.isOpen()) {

		/* Romeo Texture Reset */

		timeRomeoElapsed = RomeoClock.getElapsedTime();
		if ((timeRomeoElapsed.asSeconds() > 0.15f) && (sRomeo.getTexture() != ptRomeo_Hiding_1) && (sRomeo.getTexture() != ptRomeo_Hiding_2)) {
			sRomeo.setTexture(tRomeo_Standing, true);
		}

		/* Juliet Animation */

		timeJulietElapsed = JulietClock.getElapsedTime();
		if (timeJulietElapsed.asSeconds() > 0.2f) {
			JulietClock.restart();
			if (sJuliet.getTexture() == ptJuliet_1) {
				sJuliet.setTexture(tJuliet_2);
			}
			else if (sJuliet.getTexture() == ptJuliet_2) {
				sJuliet.setTexture(tJuliet_1);
			}
		}

		/* Juliet AI */

		timeJulietAIElapsed = JulietAIClock.getElapsedTime();
		if (timeJulietAIElapsed.asSeconds() > 0.08f) {
			JulietAIClock.restart();
			if (JulietMovementPhase == 1) {
				sJuliet.move(sf::Vector2f(-16.f, 0.f));
				if (sJuliet.getPosition().x <= ((sRomeo.getPosition().x) - 256.f)) JulietMovementPhase++;
			}
			else if (JulietMovementPhase == 2) {
				sJuliet.scale(sf::Vector2f(-1.f, 1.f));
				JulietMovementPhase++;
			}
			else if (JulietMovementPhase == 3) {
				sJuliet.move(sf::Vector2f(20.f, 0.f));
				if (sJuliet.getPosition().x >= ((sRomeo.getPosition().x) + 384.f)) JulietMovementPhase++;
			}
			else if (JulietMovementPhase == 4) {
				sJuliet.scale(sf::Vector2f(-1.f, 1.f));
				JulietMovementPhase = 1;
			}
		}

		/* Screen Scrolling */

		if ((sRomeo.getPosition().x >= (vViewport.getCenter().x - 256)) && (sRomeo.getPosition().x <= 2304)) {
			vViewport.move(sf::Vector2f(2.f, 0.f));
			sHeart1.move(sf::Vector2f(2.f, 0.f));
			sHeart2.move(sf::Vector2f(2.f, 0.f));
			sHeart3.move(sf::Vector2f(2.f, 0.f));
		}

		/* Romeo & Juliet Collision */

		JulietHitbox = sJuliet.getGlobalBounds();
		RomeoHitbox = sRomeo.getGlobalBounds();
		timeCollisionElapsed = CollisionClock.getElapsedTime();
		if ((RomeoHitbox.intersects(JulietHitbox)) && (timeCollisionElapsed.asSeconds() >= 2.f) && (JulietMovementPhase == 1) && (Hide != 2)) {
			CollisionClock.restart();
			PlayerHealth--;
			if (PlayerHealth == 2) {
				sHeart3.setTexture(tHeart_Broken);
			}
			else if (PlayerHealth == 1) {
				sHeart2.setTexture(tHeart_Broken);
			}
			else if (PlayerHealth == 0) {
				sHeart1.setTexture(tHeart_Broken);
				return 2;
			}
			std::cout << "Romeo\'s health at " << PlayerHealth << " heart(s).\n\n";
		}

		/* Wingame Animation */

		if (sRomeo.getPosition().x > 2552) {
			//TODO: Make ending animation w/ the dagger sprite & Romeo_Stabbing textures
			return EXIT_SUCCESS;
		}

		/* Event Handling */

		sf::Event event;
		while (GameWindow.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				GameWindow.close();
				return 2;
			}

			/* Key Input */

			else if (event.type == sf::Event::KeyPressed) {

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::P)) {
					sf::Sprite Array[2] = {sHeart1, sHeart2};
					std::cout << (sizeof(Array) / sizeof(Array[0]));
				}

				/* Romeo Actions */

				if (timeRomeoElapsed.asSeconds() > 0.08f) {
					RomeoClock.restart();

					/* Romeo Hiding */

					if (((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Space))) {
						if (Hide == 0) {
							Hide = 1;
							sRomeo.setTexture(tRomeo_Hiding_1, true);
						}
						else if (Hide == 1) {
							Hide = 2;
							sRomeo.setTexture(tRomeo_Hiding_2, true);
						}
						bRomeoHidden1ofTheLast2Checks = true;
					}

					else if (bRomeoHidden1ofTheLast2Checks == true) {
						if (Hide == 2) {
							Hide = 1;
							sRomeo.setTexture(tRomeo_Hiding_1, true);
						}
						else {
							Hide = 0;
							sRomeo.setTexture(tRomeo_Standing, true);
							bRomeoHidden1ofTheLast2Checks = false;
						}
					}

					/* Romeo Moving */

					else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
						if (sRomeo.getScale() == sf::Vector2f(8.f, 8.f)) {
							sRomeo.scale(sf::Vector2f(-1.f, 1.f));
							sRomeo.move(sf::Vector2f(96.f, 0.f));
						}
						sRomeo.move(-8.f, 0.f);
						if (Walk == 1) {
							Walk++;
							sRomeo.setTexture(tRomeo_Walking_1, true);
						}
						else if (Walk == 2) {
							Walk++;
							sRomeo.setTexture(tRomeo_Walking_2, true);
						}
						else if (Walk == 3) {
							Walk++;
							sRomeo.setTexture(tRomeo_Walking_3, true);
						}
						else if (Walk == 4) {
							Walk = 1;
							sRomeo.setTexture(tRomeo_Walking_2, true);
						}
					}
					else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
						if (sRomeo.getScale() == sf::Vector2f(-8.f, 8.f)) {
							sRomeo.scale(sf::Vector2f(-1.f, 1.f));
							sRomeo.move(sf::Vector2f(-96.f, 0.f));
						}
						sRomeo.move(8.f, 0.f);
						if (Walk == 1) {
							Walk++;
							sRomeo.setTexture(tRomeo_Walking_1, true);
						}
						else if (Walk == 2) {
							Walk++;
							sRomeo.setTexture(tRomeo_Walking_2, true);
						}
						else if (Walk == 3) {
							Walk++;
							sRomeo.setTexture(tRomeo_Walking_3, true);
						}
						else if (Walk == 4) {
							Walk = 1;
							sRomeo.setTexture(tRomeo_Walking_2, true);
						}
					}
				}

				/* Pause Screen */

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
					if (sPause_Screen.getTexture() == ptTransparent) {
						sPause_Screen.setTexture(tPause_Screen, true);
						bScreenPaused = true;
					}
					else if (sPause_Screen.getTexture() == ptPause_Screen) {
						sPause_Screen.setTexture(tTransparent, true);
						bScreenPaused = false;
					}
				}

				/* Insta-Win */

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)) {
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Tilde)) {
						return EXIT_SUCCESS;
					}
				}
			}
		}

		// Clear screen
		GameWindow.clear(sf::Color(239, 255, 255));

		// Set the view
		GameWindow.setView(vViewport);

		/* Draw Sprites */
		// GameWindow.draw(sBackground);
		GameWindow.draw(sFloor_Mask);
		GameWindow.draw(sDagger);
		GameWindow.draw(sRomeo);
		GameWindow.draw(sJuliet);
		GameWindow.draw(sPause_Screen);
		GameWindow.draw(sHeart1);
		GameWindow.draw(sHeart2);
		GameWindow.draw(sHeart3);

		// Update the window
		GameWindow.display();
	}
	return EXIT_SUCCESS;
}
