# Variables for the compiler and flags
CXX = clang++
CXXFLAGS = -std=c++23 -g

# Arquivo padrão caso você digite apenas 'make'
FILE ?= main.cpp

# O nome do executável será o mesmo nome do arquivo, mas sem a extensão .cpp
TARGET = $(basename $(FILE))

# Regra padrão para construir o executável
all: $(TARGET)

# Regra para compilar o arquivo passado por argumento
$(TARGET): $(FILE)
	$(CXX) $(CXXFLAGS) $(FILE) -o a.out

# Regra para limpar os arquivos gerados (aceita o mesmo argumento)
clean:
	rm -f $(TARGET)