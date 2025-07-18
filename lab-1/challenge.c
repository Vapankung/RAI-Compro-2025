#include <stdio.h>

int main(){
    printf("+----------------+--------+--------+\n");
    printf("|%-16s|%8s|%8s|\n", " Name","Score1 ","Score2 ");
    printf("+----------------+--------+--------+\n");
    printf("|%-16s|%7d |%7d |\n", " Alice",85,90);
    printf("|%-16s|%7d |%7d |\n", " Bob",78,82);
    printf("|%-16s|%7d |%7d |\n", " Charlie",92,88);
    printf("+----------------+--------+--------+\n");
    return 0;
}
