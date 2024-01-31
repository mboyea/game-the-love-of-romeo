#include "TLoR.h"
TLoR::Game game;

int main() {
	if (game.StartGame() == 2) {
		std::cout << "\nGame failed...\n";
		std::cout << "Romeo woke up, finding himself lain back in the street where he fell asleep.\n";
		std::cout << "His sudden death from what appeared to be Juliet's ghost startled him..\n";
		std::cout << "\"Nevermind that,\" he thought, \"it was all a dream.\"\n\n";
		std::cout << "But even though it was just a dream, as romeo sat up, he felt a weary pit in his stomach.\n";
		std::cout << "Romeo saw then in the distance a messenger approaching...\n\n\n\n\n\n\n\n\n";
		std::cout << "-This game was a joint effort of Matthew Boyea and Tony Sangwin.\n";
		std::cout << "-The creation of Romeo and Juliet is by all means the intellectual property of William Shakespeare.\n";
	}
	else {
		std::cout << "Game won...\n";
		std::cout << "Romeo woke up, finding himself lain back in the street where he fell asleep.\n";
		std::cout << "Romeo sat in silence for a few moments before he began to cry at his dream.\n";
		std::cout << "Having to kill his newly wedded wife in his dreams wasn't what he envisioned for the morning.\n";
		std::cout << "\"It was all a dream..  It was all a dream..  It was all a dream,\" he repeated to himself, bawling.\n";
		std::cout << "But even though it was a dream, as Romeo sat up, he felt a weary pit in his stomach.\n";
		std::cout << "Romeo saw then in the distance a messenger approaching...\n\n\n\n\n\n\n\n\n\n";
		std::cout << "-This game was a joint effort of Matthew Boyea and Tony Sangwin.\n";
		std::cout << "-The creation of Romeo and Juliet is by all means the intellectual property of William Shakespeare.\n";
	}
	std::cin.ignore();
	return EXIT_SUCCESS;
}
