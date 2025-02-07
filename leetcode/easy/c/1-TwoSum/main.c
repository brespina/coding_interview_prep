#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    int value;
} Entry;

typedef struct {
    Entry* table;
    int size;
} Htable;

int hash(int key, int size);
int* twoSum(int* nums, int numsSize, int target, int* returnSize);
Htable* createHashTable(int size);
void insert(Htable* ht, int key, int value);
int search(Htable* ht, int key);

int hash(int key, int size) {
    return (key % size + size) % size;
}

Htable* createHashTable(int size) {
    Htable* ht = (Htable *)malloc(sizeof(Htable));
    ht->table = (Entry *)calloc(size, sizeof(Entry));  //malloc but initializes memory allocated to zero, wor
    ht->size = size;
    return ht;
}

void insert(Htable* ht, int key, int value) {
    int index = hash(key, ht->size);
    ht->table[index].key = key;
    ht->table[index].value = value;
}

int search(Htable* ht, int key) {
    int index = hash(key, ht->size);
    while(ht->table[index].key != 0 || ht->table[index].value != 0) {
        if(ht->table[index].key == key)
            return ht->table[index].value;
        index = (index + 1) % ht->size;
    }
    return -1;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    Htable* ht = createHashTable(numsSize * 2);
    int *result = (int *)malloc(2 * sizeof(int));

    for(int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int complementIndex = search(ht, complement);
        if(complementIndex != -1) {
            result[0] = complementIndex;
            result[1] = i;
            *returnSize = 2;
            free(ht->table);
            free(ht);
            return result;
        }
        insert(ht, nums[i], i);
    }

    *returnSize = 0;
    free(ht->table);
    free(ht);
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int *result = twoSum(nums, 4, target, &returnSize);
    printf("nums[]: {%d, %d, %d, %d}\n", nums[0], nums[1],nums[2],nums[3]);
    printf("target = %d\n", target);
    if (result) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result);
    }
    else {
        printf("No solution\n");
    }

    return 0;
}
