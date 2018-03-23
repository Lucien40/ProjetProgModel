CXX = g++
CC  = $(CXX)

CXXFLAGS = -std=c++11  # C++11, ou autre suivant vos préférences


#
CXXFLAGS += -pedantic -Wall       # pour les purs et durs
CXXFLAGS += -g                    # pour debugger
# CXXFLAGS += -pg                 # pour profiler
# LDFLAGS  += -pg                 # pour profiler
# CXXFLAGS += -O2                 # pour optimiser la vitesse

all: vecteurTest

vecteur.o: vecteur.cpp vecteur.h
vecteurTest.o: vecteurTest.cpp vecteur.h

vecteurTest: vecteurTest.o vecteur.o

run:
	vecteurTest
