include projectHobot.mk


all: robot

robot:  $(DEPSH) $(DEPSCPP) $(MAIN) 
	$(CC) $(DEPSH) $(DEPSCPP) $(MAIN) -o robot $(CFLAGS) 
	
clean:
	rm -rf *.o robot
	
#-----------------------------------------------------------------------
# Local dependencies
#-----------------------------------------------------------------------

