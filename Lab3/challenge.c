#include <stdio.h>

int main() {
    char grade_physics, grade_calculus, grade_compro;
    float grade_num_physics,grade_num_calculus, grade_num_compro;
    int calculus_score;
    int physics_score;
    int compro_score;

    printf("Calculus score: ");
    scanf("%d", &calculus_score);
    if (calculus_score >= 80) {
        grade_calculus = 'A';
        grade_num_calculus = 4.0;
    } else if (calculus_score >= 70) {
        grade_calculus = 'B';
        grade_num_calculus = 3.0;
    } else if (calculus_score >= 60) {
        grade_calculus = 'C';
        grade_num_calculus = 2.0;
    } else if (calculus_score >= 50) {
        grade_calculus = 'D';
        grade_num_calculus = 1.0;
    } else {
        grade_calculus = 'F';
        grade_num_calculus = 0.0;
    }

    printf("Physics score: ");
    scanf("%d", &physics_score);
    if (physics_score >= 80) {
        grade_physics = 'A';
        grade_num_physics = 4.0;
    } else if (physics_score >= 70) {
        grade_physics = 'B';
        grade_num_physics = 3.0;
    } else if (physics_score >= 60) {
        grade_physics = 'C';
        grade_num_physics = 2.0;
    } else if (physics_score >= 50) {
        grade_physics = 'D';
        grade_num_physics = 1.0;
    } else {
        grade_physics = 'F';
        grade_num_physics = 0.0;
    }

    printf("compro score: ");
    scanf("%d", &compro_score);
    if (compro_score >= 80) {
        grade_compro = 'A';
        grade_num_compro = 4.0;
    } else if (compro_score >= 70) {
        grade_compro = 'B';
        grade_num_compro = 3.0;
    } else if (compro_score >= 60) {
        grade_compro = 'C';
        grade_num_compro = 2.0;
    } else if (compro_score >= 50) {
        grade_compro = 'D';
        grade_num_compro = 1.0;
    } else {
        grade_compro = 'F';
        grade_num_compro = 0.0;
    }

    float average = (grade_num_compro+grade_num_calculus+grade_num_physics)/3;

    printf("Subject\tScore\tGrade\tGrade\n");
    printf("--------------------------------------\n");
    printf("Cal\t%d\t%c\t%.1f\n", calculus_score, grade_calculus, grade_num_calculus);
    printf("Physics\t%d\t%c\t%.1f\n", physics_score, grade_physics, grade_num_physics);
    printf("compro\t%d\t%c\t%.1f\n", compro_score, grade_compro, grade_num_compro);
    printf("GPA: %.1f\n", average);

    return 0;
}