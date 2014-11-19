#include <iostream>
#include "objets/Robot.h"


using namespace std;

int main(){

	string cmd, direction;
	Robot robot;
	int x, y;

	do{
		cout << "----------------------------------------------" << endl;
		cout << "Robot" << endl;
		cout << "Position : " << robot.position.getx() <<","<<robot.position.gety() << endl;
		cout << "Direction :" << robot.direction << endl;
		cout << "----------------------------------------------" << endl;

		cin >> cmd ;
		if(cmd == "avancer"){
			cin >> x >> y ;
			robot.avancer(x,y);
		}
		if(cmd == "tourner"){
			cin >> direction ;
			robot.tourner(direction);
		}
	}while(cmd != "exit");
	return 0;
}
