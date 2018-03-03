CXX=g++
CC=$(CXX)
CXXFLAGS = -std=c++11 -pedantic -Wall # supprimer -ansi
CXXFLAGS += -O2
CXXFLAGS += -g

all: vecteurTest

vecteur.o: vecteur.cpp vecteur.h
vecteurTest.o: vecteurTest.cpp vecteur.h

vecteurTest: vecteurTest.o vecteur.o

run:
	vecteurTest
