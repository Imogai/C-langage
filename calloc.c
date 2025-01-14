#include <stdio.h>
#include <stdlib.h>

int main() {
    int allocateSizeX = 0;
    int allocateSizeY = 0;
    int allocateSizeZ = 0;
    scanf("%d", &allocateSizeX);
    scanf("%d", &allocateSizeY);
    scanf("%d", &allocateSizeZ);
    int ***vec3 = (int ***)calloc(allocateSizeX, sizeof(int **));
    if(vec3 == NULL) {
        printf("error: can't allocate array.\n");
        return 1;
    }
    for(int i = 0; i < allocateSizeY; i++) {
        vec3[i] = (int **)calloc(allocateSizeY, sizeof(int *));
        if(vec3[i] == NULL) {
            printf("error: can't allocate array.\n");
            return 1;
        }
    }
    for(int i = 0; i < allocateSizeZ; i++) {

    }
}