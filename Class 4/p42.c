#include<stdio.h>
void printfExamHead();
int main(){
printExamHeader();
printf("Candidate Name : Rahim Ahmed\n");
printf("Seat Number : CS-204\n");
printExamHeader();
return 0;
}

void printExamHeader(){
    printf("===================================");
    printf(" CSE-101 MIDTERM EXAM ADMIT SLIP \n");
    printf("===================================");
}