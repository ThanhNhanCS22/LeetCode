
typedef struct {
    int key;
    int value;
    UT_hash_handle hh;
} HashMap;

int findHash(HashMap* map, int key) {
    HashMap* entry;
    HASH_FIND_INT(map, &key, entry);
    return entry ? entry->value : INT_MIN;
}

void addHash(HashMap** map, int key, int value) {
    HashMap* entry = malloc(sizeof(HashMap));
    entry->key = key;
    entry->value = value;
    HASH_ADD_INT(*map, key, entry);
}

void freeHashMap(HashMap* map) {
    HashMap *entry, *tmp;
    HASH_ITER(hh, map, entry, tmp) {
        HASH_DEL(map, entry);
        free(entry);
    }
}

int minSubarray(int* nums, int numsSize, int p) {
    HashMap* modMap = NULL;
    long long totalSum = 0;

    for(int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }
    
    int remainder = totalSum % p;
    if (!remainder) {
        return 0;
    }

    if (nums[0] % p == remainder) {
        return 1;
    }

    addHash(&modMap, nums[0] % p, -1);
    
    long long prefixSum = nums[0];
    int lenResult = numsSize;

    for (int i = 1; i < numsSize; i++) {
        prefixSum += nums[i];
        int targetMod = (prefixSum % p - remainder + p) % p;

        int modIdx = findHash(modMap, targetMod);
        if (modIdx == -1 && lenResult > i) {
            lenResult = i;
        } else if (modIdx != INT_MIN && lenResult > i - modIdx) {
            lenResult = i - modIdx;
        } else if (targetMod == 0 && lenResult > i + 1) {
            lenResult = i + 1;
        }

        addHash(&modMap, prefixSum % p, i);
    }

    freeHashMap(modMap);
    return lenResult == numsSize ? -1 : lenResult;
}


