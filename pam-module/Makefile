CC = g++
CFLAGS = -fPIC -Iinclude
LDFLAGS = -shared -lpam -L../crypto-core/build -lcrypto_core -lssl -lcrypto
SRC = src/pam_auth.cpp
TARGET = build/pam_cryptauth.so

all:
	$(CC) $(CFLAGS) $(SRC) $(LDFLAGS) -o $(TARGET)

clean:
	rm -f build/*
