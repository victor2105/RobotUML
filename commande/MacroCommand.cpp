
#include "MacroCommand.h"

MacroCommand::MacroCommand() {
	// TODO Auto-generated constructor stub

}

MacroCommand::~MacroCommand() {
	// TODO Auto-generated destructor stub
}

Commande * MacroCommand::contructeurVirtuel(Invocateur & i){
	string name;
	name = i.getString();
	return new MacroCommand(name, i);
}



void MacroCommand::execute(Robot & r){
	list < Commande > commands;
	Commande * command;

	do{
		command = in.getCommand();
		if(command){

		}
	}while(true);
}
