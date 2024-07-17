# Makefile to automate build process by Mohamed Fathalla Ahmed
#target/outoutfile: dependency list files
#<TAB>command e.g. gcc.ext app.c -o app.o
# $< --> dependancy ---- $@ --> target
#Variables
CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-I .
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ= $(AS:.s=.o)
all: learn-in-depth.bin
	@echo ""======= Build is finally done =======! 

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@ 2> startup_logmessages

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

learn-in-depth.elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T Linker_script.ld $(OBJ) startup.o -o $@

learn-in-depth.bin: learn-in-depth.elf
	$(CC)objcopy.exe -O binary $<  $@

clean:
	rm -rf *.elf *.bin

clean_all:
	rm -rf *.elf *.bin *.o
	@echo "Clean all output files"