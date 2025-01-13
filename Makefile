CC = gcc
SRC_DIR = src
BUILD_DIR = build
DEBUG_DIR = $(BUILD_DIR)/debug
CFLAGS = -O2 -Wall -Wextra -pedantic -std=c99
INCLUDE_FLAGS = -I/opt/homebrew/include
DEBUG_FLAGS = -g -DDEBUG
NO_WARN_FLAGS = -O2 -std=c99
LIBRARY_FLAGS = -L/opt/homebrew/lib -lSDL2 -lSDL2_ttf
OUTPUT = gbe

SRCS = $(wildcard $(SRC_DIR)/*.c)

build:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(SRCS) -o $(BUILD_DIR)/$(OUTPUT) $(INCLUDE_FLAGS) $(LIBRARY_FLAGS)

debug:
	@mkdir -p $(DEBUG_DIR)
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) $(SRCS) -o $(DEBUG_DIR)/$(OUTPUT) $(INCLUDE_FLAGS) $(LIBRARY_FLAGS)

no_warn:
	@mkdir -p $(BUILD_DIR)
	$(CC) $(NO_WARN_FLAGS) $(SRCS) -o $(BUILD_DIR)/$(OUTPUT) $(INCLUDE_FLAGS) $(LIBRARY_FLAGS)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: build debug no_warn clean 
