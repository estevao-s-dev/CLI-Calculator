# Makefile to compile and build the calculator.
# In terminal run: 'make'.

# Compiler and Flags
CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -g

# Folders
SRCDIR = src
LIBDIR = src/libs
OBJDIR = obj
BINDIR = bin

# Fix quirks with some C libraries
LIBS = -lm
# Find all source files
SOURCES = $(wildcard $(SRCDIR)/*.c) $(wildcard $(LIBDIR)/*.c) 
# Convert the list of .c files into a list of .o files in the obj folder
# This takes src/main.c -> obj/main.o
OBJECTS = $(patsubst %.c, $(OBJDIR)/%.o, $(notdir $(SOURCES)))

# The final name of your program
TARGET = $(BINDIR)/calculator

build:
		
	mkdir -p $(BINDIR) $(OBJDIR)	
# The main rule (Link everything)
	$(TARGET): $(OBJECTS) | $(BINDIR)
		$(CC) $(OBJECTS) -o $(TARGET) $(LIBS)
		
# Rule to compile .c files into .o files
# This handles files in src/
	$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
		$(CC) $(CFLAGS) -c $< -o $@
		
# This handles files in src/libs/
	$(OBJDIR)/%.o: $(LIBDIR)/%.c | $(OBJDIR)
		$(CC) $(CFLAGS) -c $< -o $@
		
		
	@echo "---------------------------------"
	@echo "Compilation/Build Successfull!"
	@echo "Executable is in bin/calculator"
	@echo "---------------------------------"
		
# Clean utility
clean:
	rm -rf $(OBJDIR) $(BINDIR)
	@echo "Bin and Obj directories removed."

.PHONY: clean
