#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>

namespace TLoR {
	class Game {
	public:
		int StartGame();
	private:
		int PlayerHealth = 3;
		int PlayerStamina = 100;
		int Walk = 1;
		int Hide = 0;
		int JulietMovementPhase = 1;
		bool bRomeoHidden1ofTheLast2Checks = false;
		bool bScreenPaused = false;
		bool bDamageFinished = false;
	};
}
