CC := g++

TARGET := Ex9
#VecteurTest

#OscillateurTest

SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin
INC_DIR := inc
TST_DIR := tst

SRC_EXT := cpp

SOURCES := $(wildcard $(SRC_DIR)/*.$(SRC_EXT))
OBJECTS := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SOURCES:.$(SRC_EXT)=.o))
CFLAGS := -std=c++11 -g -Wall
# LIB :=

$(TARGET): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(TST_DIR)/$(TARGET).$(SRC_EXT) -I $(INC_DIR) $(OBJECTS) $(LIB) -o $(BIN_DIR)/$(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.$(SRC_EXT)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c -o $@ $<

clean:
	$(RM) -r $(OBJ_DIR) $(BIN_DIR)

.PHONY: clean
