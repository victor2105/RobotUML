/*
 * MacroCommand.h
 */

#ifndef COMMANDE_MACROCOMMAND_H_
#define COMMANDE_MACROCOMMAND_H_

#include "Commande.h"
#include <map>
#include <list>

using namespace std;

class MacroCommand: public Commande {
public:
	string name;
	Invocateur * in;
	static map < string, list < Commande* > > macroCommands;
	MacroCommand();
	MacroCommand(string name, Invocateur *i):name(name), in(i){}
	virtual ~MacroCommand();
	void execute(Robot * r);
	void desexecute(){

	}

	Commande * constructeurVirtuel(Invocateur * i);

};

#endif /* COMMANDE_MACROCOMMAND_H_ */
