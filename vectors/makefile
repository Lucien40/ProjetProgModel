CXX=g++
CC=$(CXX)
CXXFLAGS = -std=c++11 -pedantic -Wall # supprimer -ansi
CXXFLAGS += -O2
CXXFLAGS += -g

all: VecteurTest

Vecteur.o: Vecteur.cpp Vecteur.h
VecteurTest.o: VecteurTest.cpp Vecteur.h

VecteurTest: VecteurTest.o Vecteur.o

run:
	VecteurTest
