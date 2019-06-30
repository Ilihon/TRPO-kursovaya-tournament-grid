.PHONY=addDir all clean remake test testlib

CC=g++
CFLAGS=-Wall -c -I SFML/include -std=c++11
EFLAGS=-L SFML/lib -lsfml-system -lsfml-window -lsfml-graphics

SRC=src/
BUILD=build/
TESTSRC=test/
TESTBUILD=$(BUILD)test/
GTEST_DIR = thirdparty/googletest

SOURCE1=$(SRC)main.cpp
SOURCE2=$(SRC)menu.cpp
SOURCE3=$(SRC)draw.cpp
SOURCE4=$(SRC)steam.cpp
SOURCE5=$(SRC)column.cpp

TESTSOURCE=$(TESTSRC)test.cpp

OBJ1T=$(subst $(SRC),$(BUILD),$(SOURCE1))
OBJ1=$(OBJ1T:.cpp=.o)

OBJ2T=$(subst $(SRC),$(BUILD),$(SOURCE2))
OBJ2=$(OBJ2T:.cpp=.o)

OBJ3T=$(subst $(SRC),$(BUILD),$(SOURCE3))
OBJ3=$(OBJ3T:.cpp=.o)

OBJ4T=$(subst $(SRC),$(BUILD),$(SOURCE4))
OBJ4=$(OBJ4T:.cpp=.o)

OBJ5T=$(subst $(SRC),$(BUILD),$(SOURCE5))
OBJ5=$(OBJ5T:.cpp=.o)

TESTOBJT=$(subst $(TESTSRC),$(TESTBUILD),$(TESTSOURCE))
TESTOBJ=$(TESTOBJT:.cpp=.o)

EXECUTABLE=bin/main
TESTEXE=bin/test

TESTLIBO=build/test/gtest-all.o
TESTLIBA=build/test/libgtest.a

all: $(EXECUTABLE)

remake: clean all

$(EXECUTABLE): $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5) 
	$(CC) $^ $(EFLAGS) -o $@

$(OBJ1): $(SOURCE1)
	$(CC) $^ $(CFLAGS) -o $@

$(OBJ2): $(SOURCE2)
	$(CC) $^ $(CFLAGS) -o $@

$(OBJ3): $(SOURCE3)
	$(CC) $^ $(CFLAGS) -o $@

$(OBJ4): $(SOURCE4)
	$(CC) $^ $(CFLAGS) -o $@

$(OBJ5): $(SOURCE5)
	$(CC) $^ $(CFLAGS) -o $@


clean:
	rm -rf build/*.o build/test/* 

test: testlib $(TESTEXE)

testlib: $(TESTLIBO)
	ar -rv $(TESTLIBA) $(TESTLIBO)

$(TESTLIBO):
	$(CC) -std=c++11 -isystem ${GTEST_DIR}/include -I${GTEST_DIR} \
    -pthread -c ${GTEST_DIR}/src/gtest-all.cc -o $@

$(TESTEXE): $(TESTOBJ) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5) 
	$(CC) -std=c++11 -isystem ${GTEST_DIR}/include -pthread \
	$^ build/test/libgtest.a \
	$(EFLAGS) -o $@

$(TESTOBJ): $(TESTSOURCE)
	$(CC) $(CFLAGS) $^ -I $(GTEST_DIR)/include -o $@
