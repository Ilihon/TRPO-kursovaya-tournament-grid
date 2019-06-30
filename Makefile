.PHONY=addDir all clean remake test testlib

CPP=g++
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

SRC1=$(TESTSRC)draw_test.cpp
SRC2=$(TESTSRC)steam_test.cpp
SRC3=$(TESTSRC)column_test.cpp
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

SRC1T=$(subst $(TESTSRC),$(BUILD),$(SRC1))
SRCT1=$(SRC1T:.cpp=.o)

SRC2T=$(subst $(TESTSRC),$(BUILD),$(SRC2))
SRCT2=$(SRC2T:.cpp=.o)

SRC3T=$(subst $(TESTSRC),$(BUILD),$(SRC3))
SRCT3=$(SRC3T:.cpp=.o)

TESTOBJT=$(subst $(TESTSRC),$(TESTBUILD),$(TESTSOURCE))
TESTOBJ=$(TESTOBJT:.cpp=.o)

EXECUTABLE=bin/main
TESTEXE=bin/test

TESTLIBO=build/test/gtest-all.o
TESTLIBA=build/test/libgtest.a

all: $(EXECUTABLE)

remake: clean all

$(EXECUTABLE): $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5)
	$(CPP) $^ $(EFLAGS) -o $@

$(OBJ1): $(SOURCE1)
	$(CPP) $^ $(CFLAGS) -o $@

$(OBJ2): $(SOURCE2)
	$(CPP) $^ $(CFLAGS) -o $@

$(OBJ3): $(SOURCE3)
	$(CPP) $^ $(CFLAGS) -o $@

$(OBJ4): $(SOURCE4)
	$(CPP) $^ $(CFLAGS) -o $@

$(OBJ5): $(SOURCE5)
	$(CPP) $^ $(CFLAGS) -o $@

$(SRCT1): $(SRC1)
	$(CPP) test/draw_test.cpp $(CFLAGS) -o $@

$(SRCT2): $(SRC2)
	$(CPP) test/steam_test.cpp $(CFLAGS) -o $@

$(SRCT3): $(SRC3)
	$(CPP) test/column_test.cpp $(CFLAGS) -o $@

clean:
	rm -rf build/*.o build/test/* 

test: testlib $(TESTEXE)

testlib: $(TESTLIBO)
	ar -rv $(TESTLIBA) $(TESTLIBO)

$(TESTLIBO):
	$(CPP) -std=c++11 -isystem ${GTEST_DIR}/include -I${GTEST_DIR} \
    -pthread -c ${GTEST_DIR}/src/gtest-all.cc -o $@

$(TESTEXE): $(TESTOBJ) $(SRCT2) $(SRCT1) $(SRCT3)
	$(CPP) -std=c++11 -isystem ${GTEST_DIR}/include -pthread \
	$^ build/test/libgtest.a \
	$(EFLAGS) -o $@

$(TESTOBJ): $(TESTSOURCE)
	$(CPP) $(CFLAGS) $^ -I $(GTEST_DIR)/include -o $@
