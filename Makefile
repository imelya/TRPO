#SHELL:=/bin/bash
CFLAGS = -g -Wall -O3 -std=c++11 -fexceptions -Wmaybe-uninitialized 
INCLUDE = -I ./includes
LIBS =
SRC_PATH = ./src/
SRC_FILES = *.cpp#$(SRC_PATH)/args.c $(SRC_PATH)/laba.c $(SRC_PATH)/main.c
OUT_PATH = ./bin/
OUT_FILE = LRs #main 
CC = g++

compile:
	$(CC) $(SRC_FILES) $(SRC_PATH)$(SRC_FILES) $(INCLUDE) $(CFLAGS) $(LIBS) -o $(OUT_PATH)$(OUT_FILE)
