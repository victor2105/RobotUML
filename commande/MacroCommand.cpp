#include "MacroCommand.h"

MacroCommand::MacroCommand() {
	// TODO Auto-generated constructor stub
}

MacroCommand::~MacroCommand() {
	// TODO Auto-generated destructor stub
}

Commande * MacroCommand::constructeurVirtuel(Invocateur * i) {
	string name;
	name = i->getString();
	return new MacroCommand(name, i);
}

void MacroCommand::execute(Robot * r) {
	list<Commande *> commands;
	Commande * command;
	string namec = in->getCommand();
	try {

		while (namec != "EndMacro") {
			command = Commande::mapCmd[namec];
			commands.push_back(command);
			namec = in->getCommand();
		}
	} catch (Commande::CommandeNotFound) {

	}

}
