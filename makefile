CXX                  := g++
CC                   :=$(CXX)
LD                   :=$(CXX)
CXXFLAGS              = -std=c++11 -pedantic -Wall # supprimer -ansi
CXXFLAGS             += -O2 -I $(INC_DIR)
CXXFLAGS             += -g
#CXXFLAGS             += -Wextra -Wwrite-strings -Wno-parentheses
#ccdCXXFLAGS             += -Wpedantic -Warray-bounds -Weffc++`
LDFLAGS              := $(CXXFLAGS)

EXECTEST             := OscillateurTest
# VecteurTest
INC_DIR              := inc
SRC_DIR              := src
OBJ_DIR              := tmp
EXE_DIR              := bin

SRCS                 := $(wildcard $(SRC_DIR)/*.cpp)
OBJS                 := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
HEAD                 := $(SRCS:$(SRC_DIR)/%.cpp=$(INC_DIR)/%.h)

