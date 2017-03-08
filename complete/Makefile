# Make command to use for dependencies
MAKE=make
RM=rm
MKDIR=mkdir
CC=arm-none-eabi-gcc
CP=cp

OUTDIR=Debug
OUTDIR_BIN=bin
OUTFILE=$(OUTDIR)/ssammai
CFG_INC=-Iinclude
OBJ=\
	$(OUTDIR)/util.o \
	$(OUTDIR)/frame.o \
	$(OUTDIR)/graphics.o \
    $(OUTDIR)/main.o \
    $(OUTDIR)/s3c_uart.o \
    $(OUTDIR)/support.o \
    $(OUTDIR)/interrupt.o \
    $(OUTDIR)/lcd.o \
    $(OUTDIR)/player.o \
    $(OUTDIR)/bullet.o \
    $(OUTDIR)/item.o \
    $(OUTDIR)/enemy.o \
    $(OUTDIR)/game.o \

CFLAGS64=-DCONFIG_MANGO_64
COMPILE64=$(CC) -c -Wall -g -o "$(OUTDIR)/$(*F).o" $(CFG_INC) $(CFLAGS64) $<
LINK64=$(CC) -g -o "$(OUTFILE)" $(OBJ) -e main -Ttext=0x500F0000
COPY64=\
	$(CP) $(OUTFILE) $(OUTDIR_BIN)/

COMPILE=$(COMPILE64)
LINK=$(LINK64)
COPY=$(COPY64)

all: $(OUTFILE)

# Pattern rules
$(OUTDIR)/%.o : src/%.c
	$(COMPILE)

$(OUTFILE): $(OUTDIR)  $(OBJ)
	$(LINK)
	$(COPY)

$(OUTDIR):
	$(MKDIR) -p "$(OUTDIR)" ; \
	$(MKDIR) -p "$(OUTDIR_BIN)"


# Clean this project
clean:
	$(RM) -rf $(OUTDIR)

