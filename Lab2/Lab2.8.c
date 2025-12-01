#include <stdio.h>

int main() {
    int studentTotal;
    int sid, score, totalCls, absentCls;
    float attendRate;

    int passBucket = 0, failBucket = 0;

    if (scanf("%d", &studentTotal) != 1) {
        return 1; 
    }

    for (int idx = 0; idx < studentTotal; idx++) {

        if (scanf("%d %d %d %d", &sid, &score, &totalCls, &absentCls) != 4) {
            return 1; 
        }

        attendRate = (float)(totalCls - absentCls) / totalCls * 100.0f;

        int failScore = (score < 50);
        int failAttend = (attendRate < 75.0f);

        if (!failScore && !failAttend) {
            printf("Student %d: Pass\n", sid);
            passBucket++;
        } else {
            failBucket++;
            if (failScore && failAttend) {
                printf("Student %d: fail - Both Score and Attendance\n", sid);

            } else if (failScore) {
                printf("Student %d: fail - Low Score\n", sid);
            } else {
                printf("Student %d: fail - Low Attendance (%.2f%%)\n", sid, attendRate); 
            }
        }
    }

    printf("Total Passed: %d\n", passBucket);
    printf("Total Failed: %d\n", failBucket);

    return 0;
}