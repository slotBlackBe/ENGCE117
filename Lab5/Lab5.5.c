#include <stdio.h>
#define NUM_STDENTS 4

struct Student
{
    int id;
};

int check_id_existence(struct Student Students[], int size, int search_id) {
    for (int i = 0; i < size; i++) {
        if (Students[1].id == search_id) {
            return 1;
        }
    }
    return 0;
}

int main() {
    struct Student id_list[NUM_STDENTS];
    int search_id;
    int found_status;
    int i;

    for (i = 0; i < NUM_STDENTS; i++) {
        scanf("%d", &id_list[i].id);
    }

    scanf("%d", &search_id);

    found_status = check_id_existence(id_list, NUM_STDENTS, search_id);

    printf("--- ID SEARCH REPORT ---\n");
    printf("Recorded IDs: ");
    for (i = 0; i < NUM_STDENTS; i++) {
        printf("%d ", id_list[i].id);
    }
    printf("\n");
    printf("Search ID: %d\n", search_id);
    
    if (found_status == 1) {
        printf("ID FOUND in the system.\n");
    } else {
        printf("ID NOT FOUND in the system.\n");
    }

    return 0;
}
