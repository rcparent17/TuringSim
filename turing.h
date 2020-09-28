#define MAX_TAPE_SIZE 100
#define MAX_NODES 50
#define MAX_TRANSITIONS 100
#define START_POS (MAX_TAPE_SIZE / 2) - 1
#define EMPTY_CHAR '.'

struct TM_Transition{
	char destination;
	char read;
	char write;
	char instruction;
};

struct TM_Node{
	char identifier;
	struct TM_Transition transitions[MAX_TRANSITIONS];
};

struct TuringMachine{
	char tape[MAX_TAPE_SIZE];
	int headPos;
	struct TM_Node nodes[MAX_NODES];
};
