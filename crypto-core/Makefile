CC = g++
CFLAGS = -Iinclude
LDFLAGS = -lssl -lcrypto
SRC = src/crypto_utils.cpp
TARGET = build/libcrypto_core.a

all:
	$(CC) $(CFLAGS) -c $(SRC) -o build/crypto_utils.o
	ar rcs $(TARGET) build/crypto_utils.o

clean:
	rm -f build/*
