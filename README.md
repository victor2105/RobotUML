RobotUML
========

C++


###commande posible : 
- avancer x y (avec x et y la position)     
- tourner dir (avec dir : left, right...)    
- rencontrerPlot x (avec x la hauteur du plot)  
- evaluerPlot                   
- peser                     
- figer                   
- repartir                     
- saisir x (x le poid a saisir )          
- poser  

###How add new class
-  create two new files: nom_class.h and and nom_class.cpp
-  open the the files projectRobot.mk
-  add the name nom_class.h in the line DEPS_H, such as:
-  - DEPS_H = MySingleton.h nom_class.h
-  and add the name nom_class.cpp in the line DEPS_CPP, such as:
-  - DEPS_CPP = MySingleton.cpp nom_class.cpp


