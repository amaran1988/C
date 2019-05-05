
# The main file
MAIN = goda.c

#Compiler 
CC = gcc

# Dummy variable to include flags later
FLINKS = 

# Compiler and output flags
CFLAG = -std=c99
OFLAG = -o

# The final output variable
PROG = result

# Make all target
all: $(PROG)

$(PROG): $(MAIN)
	@echo "-----------------------------------------"
	@echo "Compiling the $(MAIN) file"
	@echo "-----------------------------------------"
	$(CC) $(CFLAG) $(MAIN) $(OFLAG) $(PROG) $(FLINKS)
	@echo ""

clean:
	@echo "-----------------------------------------"
	@echo "Cleaned the output file $(PROG)"
	@echo "-----------------------------------------"
	rm -rf $(PROG)
