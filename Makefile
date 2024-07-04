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
    FixPath = $(subst /,\,$1)
    MKDIR_P = mkdir
else
    RM = rm -f
    FixPath = $1
    MKDIR_P = mkdir -p
endif

# Default make
all: $(TARGET)

# Build the DLL
$(TARGET): $(SOURCES)
	$(MKDIR_P) bin
	$(CXX) $(CXXFLAGS) -shared -o $@ $(SOURCES)

# Clean up build files
clean:
	$(RM) $(call FixPath,bin/*)

.PHONY: all clean
