CC = g++

INC_DIR = ../inc
BIN_DIR = ../bin
OBJ_DIR = ../obj
SRC_DIR = .

CFLAGS = -Wall -pedantic -I $(INC_DIR) 
TARGET = $(BIN_DIR)/result.out
OBJS   = $(OBJ_DIR)/main.o \
		$(OBJ_DIR)/classPlane.o \
		$(OBJ_DIR)/classDeparture.o \
		$(OBJ_DIR)/classHour.o \
		$(OBJ_DIR)/classString.o \
		$(OBJ_DIR)/utils.o

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Pattern Rule
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@# '$<' = '$(SRC_DIR/%cpp)'
	@# '$@' = '$(OBJ_DIR)/%.o'
	@# '-MD' Generate dependency files
	$(CC) -c -MD $(CFLAGS) $< -o $@ 
	
-include $(OBJ_DIR)/*.d

.PHONY: clean run

clean: 
	@rm -r $(OBJ_DIR) $(BIN_DIR)
	@echo $(OBJ_DIR) and $(BIN_DIR) directories removed
	
run:
	$(TARGET)
