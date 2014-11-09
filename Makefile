include projectRobot.mk


all: robot

robot:  $(DEPS_H) $(DEPS_CPP) $(MAIN) 
	$(CC) $(DEPS_H) $(DEPS_CPP) $(MAIN) -o robot $(CFLAGS) 
	
clean:
	rm -rf *.o robot
	
#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------
