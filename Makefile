# Compiler settings - Can change to gcc, clang, etc.
CXX := g++
# Compiler flags, e.g., CXXFLAGS += -std=c++11 for C++11 support
CXXFLAGS += -Iinclude -Wall -g -fPIC

PROGRAM := robsim_algo

# Define .cpp and .h source files
SOURCES := $(wildcard src/*.cpp) $(wildcard include/*.h) $(wildcard include/rsim_drivers/*.h)

# Define the output DLL
TARGET := bin/$(PROGRAM).dll

# Platform-specific modifications
ifeq ($(OS),Windows_NT)
    RM = del /Q
    RMDIR = rmdir /S /Q
    FixPath = $(subst /,\,$1)
    MKDIR_P = mkdir
else
    RM = rm -f
    RMDIR = rm -rf
    FixPath = $1
    MKDIR_P = mkdir -p
endif

# Default make
all: clean setup $(TARGET)

# Build the DLL
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -shared -o $@ $(SOURCES)

# Clean up build files
clean:
	$(RMDIR) bin

# Setup build directory
setup:
	$(MKDIR_P) bin

.PHONY: all clean setup
