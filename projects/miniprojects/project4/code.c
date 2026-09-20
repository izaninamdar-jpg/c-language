#include <stdio.h>

int main() {
    int subjects ;
    float marks, sum = 0.0, percentage;
printf("WELCOMEE TO   REPORT CARD\n");
printf("enter the number of subjects you have , bata kitna padha");
scanf("%d", &subjects);

    printf("Enter the marks obtained out of 100 for %d subjects:\n",subjects);

    for (int i = 1; i <= subjects; i++) {
        printf("Subject %d mark: ", i);
        scanf("%f", &marks);
        sum = sum + marks; 
    }

    percentage = (sum / (subjects * 100)) * 100;

    printf("\n--- Final Report Card ---\n");
    printf("Total Marks: %f \n", sum);
    printf("Percentage: %f\n", percentage);

    if (percentage >= 90) {
        printf("Final grade: A+ (chal party de ab)\n");
    } else if (percentage >= 80) {
        printf("Final grade: A (ha very good)\n");
    } else if (percentage >= 60) {
        printf("Final grade: B (good good well tried)\n");
    } else if (percentage >=40){
        printf("Final grade :C (bach gayaa cut pe pass hai)\n ");
    }
    else {
        printf("Final Grade: F (padhai karr re dalle)\n");
    }

    return 0;
}
