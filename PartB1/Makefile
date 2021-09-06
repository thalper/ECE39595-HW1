# Automatic variables are built-in variables that allow us to get some 
# information.  A complete list of these can be found at 
# https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html
OBJS = HW1.o 
CC = g++
INCLUDE = Automobile.cpp 
LIBS = -lm
CFLAGS = -Wall -g
EXECUTABLE = mypgm
COMMANDLINE = 

.RECIPEPREFIX := :

prefix : $(OBJS)
:  $(CC) $(OPTIONS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)
:  ./$(EXECUTABLE)


.PHONY : run
run : $(EXECUTABLE)
: @echo ./$(EXECUTABLE) $(COMMANDLINE)
: ./$(EXECUTABLE) $(COMMANDLINE)

cleanmake : clean mypgm

mypgm : build 

build :  $(OBJS)
:  $(CC) $(OPTIONS) -o $(EXECUTABLE) $(OBJS) $(INCLUDE) $(LIBS)
:  ./$(EXECUTABLE)

%.o : %.c 
:  echo "the target is " $@ 
:  $(CC) $(OPTIONS) -c $@ $(INCLUDE) $(LIBS)

clean :
: rm mypgm ${OBJS}