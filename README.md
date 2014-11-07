RobotUML
========

C++

###How add new class
-  create two new files: nom_class.h and and nom_class.cpp
-  open the the files projectRobot.mk
-  add the name nom_class.h in the file DEPS_H, such as:
-  - DEPS_H = MySingleton.h nom_class.h
-  and add the name nom_class.cpp in the file DEPS_CPP, such as:
-  - DEPS_CPP = MySingleton.cpp nom_class.cpp
