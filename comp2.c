#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_PRODUCTIONS 10
#define MAX_SYMBOLS 10

struct Production {
    char lhs;
    char rhs[MAX_SYMBOLS];
};

struct Grammar {
    int numProductions;
    struct Production productions[MAX_PRODUCTIONS];
};

bool isAmbiguous(struct Grammar *grammar, char *input, int start, int end, char nonTerminal) {
	int i;
    if (start == end) {
        for (i = 0; i < grammar->numProductions; i++) {
            if (grammar->productions[i].lhs == nonTerminal && grammar->productions[i].rhs[0] == 'e') {
                return true;
            }
        }
        return false;
    }
	int j;
    for (i = 0; i < grammar->numProductions; i++) {
        if (grammar->productions[i].lhs == nonTerminal) {
            for (j = 0; grammar->productions[i].rhs[j] != '\0'; j++) {
                if (grammar->productions[i].rhs[j] >= 'A' && grammar->productions[i].rhs[j] <= 'Z') {
                    if (isAmbiguous(grammar, input, start, start + j - 1, grammar->productions[i].rhs[j]) &&
                        isAmbiguous(grammar, input, start + j, end, nonTerminal)) {
                        return true;
                    }
                } else if (grammar->productions[i].rhs[j] != input[start + j]) {
                    break;
                }
            }
        }
    }

    return false;
}

int main() {
    struct Grammar grammar = {
        4,
        {
            {'E', "E+E"},
            {'E', "E*E"},
            {'E', "(E)"},
            {'E', "id"}
        }
    };

    char input[100];
    printf("Enter the input string: ");
    scanf("%s", input);

    if (isAmbiguous(&grammar, input, 0, strlen(input) - 1, grammar.productions[0].lhs)) {
        printf("The input string is ambiguous.\n");
    } else {
        printf("The input string is not ambiguous.\n");

    }

    return 0;
}