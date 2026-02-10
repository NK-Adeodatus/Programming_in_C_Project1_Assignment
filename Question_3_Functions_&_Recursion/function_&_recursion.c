#include<stdio.h>

int calculate_sum(int arr[], int number_of_students);
int calculate_average(int grade_sum, int number_of_students);
int grades[] = {32, 45, 67, 88, 40};
int average;
int total_students;
int main() {
    total_students = sizeof(grades) / sizeof(grades[0]);
    average = calculate_average(calculate_sum(grades, total_students), total_students);
    printf("average is: %d\n", average);
    return 0;
}

int calculate_sum(int arr[], int number_of_students) {
    if(number_of_students == 0) 
        return 0;
    return arr[0] + calculate_sum(arr + 1, number_of_students - 1);
}
int calculate_average(int grade_sum, int number_of_students) {
    return grade_sum / number_of_students;
}