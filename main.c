#include <stdio.h>
#include <time.h>

int main() {
    FILE *fp;
    time_t start, end;
    double duration;

    printf("Starting session...\n");
    start = time(NULL);

    printf("Press ENTER to end session...");
    getchar(); getchar();

    end = time(NULL);
    duration = difftime(end, start);

    fp = fopen("sessions.txt", "a");
    if (!fp) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Session Duration: %.0f seconds\n", duration);
    fclose(fp);

    printf("Session lasted %.0f seconds.\n", duration);
    return 0;
}
