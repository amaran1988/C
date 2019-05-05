
# The main file
MAIN = soda.c

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
	$(CC) $(OFLAG) $(PROG) $(MAIN) $(FLINKS)
	@echo ""

clean:
	@echo "-----------------------------------------"
	@echo "Cleaned the output file $(PROG)"
	@echo "-----------------------------------------"
	rm -rf $(PROG)
