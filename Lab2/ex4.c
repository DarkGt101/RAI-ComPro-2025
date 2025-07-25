#include <stdio.h>

int main(){

    char name[50];
    char studentID[10];
    float program_score;
    float physics_score;
    float calculus_score;
    float GPA;


    printf("Enter your Name: ");
    scanf("%[^\n]", name);
    printf("Enter your student ID: ");
    scanf("%s", studentID);
    printf("Enter your Programming score: ");
    scanf("%f", &program_score);
    printf("Enter your Physics score: ");
    scanf("%f", &physics_score);
    printf("Enter your Calculus score: ");
    scanf("%f", &calculus_score);

    GPA = (program_score+physics_score+calculus_score)/3;
    printf("Hi %s(%s)! Your GPA is %.2f\n", name, studentID,GPA );

    return 0;
}