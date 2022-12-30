/*

*/

#include<stdio.h>
int main(void)
{
    int students, subjects, sum = 0;
    
    printf("Enter the numbers of students and subjects \n");
    scanf("%i%i", &students, &subjects);
    
    int marks[students][subjects];

    printf("Enter marks of PCM for each students one by one \n");
    
    float per[students];
    int avg[students];
    int highest[subjects];
    // Asking for input of students and subjects
    for(int i = 0; i < students; i++)
    {
        for(int j = 0; j < subjects; j++)
        {
            scanf("%i" &marks[i][j]);
            sum += marks[i][j];
        }
        per[i] = sum / 3.0;
        sum = 0;
    }
 

    return 0;
}