#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define bool int

struct sNode {
    char data;
    struct sNode* next;
};

void push(struct sNode** top_ref, int new_data);
void reverse(char exp[]);
int pop(struct sNode** top_ref);

bool is_matching_pair(char character_1, char character_2)
{
    if (character_1 == '(' && character_2 == ')') {
        return 1;
    } else {
        return 0;
    }
}

bool are_brackets_balanced(char exp[])
{
    int i = 0;
    struct sNode* parenthesis_stack = NULL;

    while (exp[i]) {
        if (exp[i] == '(') {
            push(&parenthesis_stack, exp[i]);
        }
        else if (exp[i] == ')') {
            if (parenthesis_stack == NULL) {
                return 0;
            }
            else if (!is_matching_pair(pop(&parenthesis_stack), exp[i])) {
                return 0;
            }
        }
        i++;
    }

    if (parenthesis_stack == NULL) {
        return 1;
    } else {
        return 0;
    }
}

void reverse(char exp[])
{
    struct sNode* alpha_stack = NULL;
    int a = 0;

    while (exp[a]) {
        if (exp[a] != '(' && exp[a] != ')' && exp[a] != ' ') {
            push(&alpha_stack, exp[a]);
        }
        a++;
    }

    while (alpha_stack != NULL) {
        printf("%c, ", pop(&alpha_stack));
    }
}

int main()
{
    char exp[100];
    printf("\nInput = ");
    scanf("%s", exp);
    char e[100];
    strcpy(e, exp);

    if (are_brackets_balanced(exp)) {
        printf("Output = Balanced\n");
        reverse(e);
    } else {
        printf("Output = Unbalanced\n");
    }

    return 0;
}

void push(struct sNode** top_ref, int new_data)
{
    struct sNode* new_node = (struct sNode*)malloc(sizeof(struct sNode));

    if (new_node == NULL) {
        printf("Stack Overflow\n");
        getchar();
        exit(0);
    }

    new_node -> data = new_data;
    new_node -> next = (*top_ref);
    (*top_ref) = new_node;
}

int pop(struct sNode** top_ref)
{
    char res;
    struct sNode* top;

    if (*top_ref == NULL) {
        printf("Stack Overflow\n");
        getchar();
        exit(0);
    }
    else {
        top = *top_ref;
        res = top -> data;
        *top_ref = top -> next;
        free(top);
        return res;
    }
}