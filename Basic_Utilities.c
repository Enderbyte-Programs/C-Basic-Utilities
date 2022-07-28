#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* gethst(char* cmd, char* expl) {
    printf("d");
    size_t clg = strlen(cmd);
    printf("d");
    int cl = (int) clg;
    printf("d");
    int tsp = 20 - cl;
    printf("d");
    int i;
    for (i=0;i<tsp;i++) {
        strcat(cmd," ");
    }
    strcat(cmd,": ");
    strcat(cmd,expl);
    return cmd;

}

int interpret(char* command) {
    if (strcmp("exit",command)==0) {
        exit(0);
    } 
    else if (strcmp("help",command)==0 || strcmp("?",command)==0) {
        printf("help      : Prints this help menu\n");
        printf("exit      : Exits this program\n");
        printf("clrs      : Clears screen\n");
    }
    else if (strcmp("clrs",command)==0) {
        system("clear");
        system("cls");
    }
    else if (strcmp("",command)==0) {
        
    }
    else {
        return 1;
    }
}

char* command;
int main(int argc,char *argv[]) {
    printf("Welcome to Basic Utilities C Edition\n");
    printf("(c) 2022 Enderbyte Programs LLC | v0.0.0-alpha\n\n");
    while (0==0) {
        char command[100];
        printf("Basic Utilities>");
        fgets(command,100,stdin);
        command[strcspn(command, "\n")] = 0;
        if (interpret(command)==1) {
            printf("Command is not known.\n");
        }
        
    }
}