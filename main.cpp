/* CSCI261 A10: Magic Item
*
* Description: Using classes to create our own "magic item"
*
* Author: Elizabeth (Liz) Boyle
* Section: E
*/

#include "MagicItem.h"
using namespace std;
/*
MagicSpell::MagicSpell() {
	_typeCow = false;
	_typeFace = false;
	_typeSparkles = false;
}
MagicSpell::MagicSpell(char selection) {
	if (selection == 'C') {
		_typeCow = true;
		_typeSparkles = false;
		_typeFace = false;
		MagicSpell::CastSpell();
	}
	else if (selection == 'S') {
		_typeSparkles = true;
		_typeCow = false;
		_typeFace = false;
		MagicSpell::CastSpell();
	}
	else if (selection == 'F') {
		_typeFace = true;
		_typeSparkles = false;
		_typeCow = false;
		MagicSpell::CastSpell();

	}
}

void MagicSpell::Introduction() {
	cout << "You find an old dusty book full of magic spells." << endl;
	cout << "Due to the book's decayed state (and that fact that you are only a newbie wizard), you can only read three spells that you can cast:  " << endl;
	cout << endl << "Page 89: Uaccam Uidetur" << endl;
	cout << "Page 1315: Levate Scintillula" << endl;
	cout << "Page 12: Faciem Risum" << endl;
	cout << endl << "You figure that there is no harm in trying any of these completely unknown spells, so which will you choose?" << endl;
}
char MagicSpell::MagicSelection() {
	Introduction();
	char selection;
	int choice = 0;
	do {
		cout << "Enter the Page Number Next to the Spell to Cast it: ";
		cin >> choice;
		if (choice == 89) {
			selection = 'C';
		}
		else if (choice == 1315) {
			selection = 'S';
		}
		else if (choice == 12) {
			selection = 'F';
		}
		else {
			cout << endl << "You could not read the spells on that page. Try Again." << endl;
		}
	} while (choice != 89 && choice != 1315 && choice != 12);

	return selection;
}
void MagicSpell::CastSpell() {
	if (_typeSparkles == true) {
		cout << ".    *    .    '   .'" << endl;
		cout << "  '     *   '  *" << endl;
		cout << ".    '     .        *" << endl;
		cout << "  *   .      .  '  '" << endl;
		cout << "'    *   .      *   ." << endl;
		cout << "   '        '    '   " << endl;
		cout << ". *     *    .   .  '" << endl;
		cout << "The room fills with sparkles in the air, casting flickering light around the room. What a beautiful sight! I hope none of them are actually sparks....since you are in a highly flamable library. " << endl;
	}
	else if (_typeFace == true) {
		cout << "              _____" << endl;
		cout << "           .-'     '-." << endl;
		cout << "         .'           `." << endl;
		cout << "        /   o      o    \\ " << endl;
		cout << "       :                 :" << endl;
		cout << "       |                 |" << endl;
		cout << "       :   \\        /    :" << endl;
		cout << "        \\   `.____.'    /" << endl;
		cout << "         `.           .'" << endl;
		cout << "           `-._____.-'" << endl;
		cout << endl << "Oh! A smiley face appeared... nothing wrong with that....except its just floating there...maybe it will go away...eventually...." << endl;
	}
	else if (_typeCow == true) {
		cout << "             (__)" << endl;
		cout << "             (oo)" << endl;
		cout << "      /-------\\/" << endl;
		cout << "     / |     ||" << endl;
		cout << "    *  ||----||" << endl;
		cout << "       ^^    ^^" << endl;
		cout << endl << "A cow appears before you. Now there's cow....just standing in the library. Seems like your problem now." << endl;
	}
}*/

int main() {
	bool playing = true;
	do {
		MagicSpell spell;
		spell = MagicSpell(spell.MagicSelection());
		cout << endl << "Would you like to try again? Enter 1 to continue and 0 to exit: ";
		cin >> playing;
	} while (playing == true);
	return 0;

}