/* CSCI261 A10: Magic Item
*
* Description: Using classes to create our own "magic item"
*
* Author: Elizabeth (Liz) Boyle
* Section: E
*/


#pragma once
#include <iostream>
#include <string>

using namespace std;

class MagicSpell {
private:
	bool _typeSparkles;
	bool _typeFace;
	bool _typeCow;
	void Introduction();
	void CastSpell();
public:
	MagicSpell();
	MagicSpell(char selection);
	char MagicSelection();
	};