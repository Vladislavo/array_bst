#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "array_bst.h"


void array_bst_init(array_bst_t *bst) {
	bst->root = NULL;
	bst->size = 0;
}

void array_bst_is_emtpy(array_bst_t *bst) {
	return bst->size == 0;
}

uint32_t array_bst_size(array_bst_t *bst) {
	return bst->size;
}

uint16_t array_bst_hight(array_bst_t *bst);

uint8_t array_bst_insert(array_bst_t *bst, void *key, void *value);

void *array_bst_search(array_bst_t *bst, void *key);

void array_bst_set_cmp_func(int8_t(*compare)(const void *, const void *));

void array_bst_delete(array_bst_t *bst, void *key);

uint8_t array_bst_is_elem(array_bst_t *bst, void *key);

void *array_bst_minim(array_bst_t *bst);

void *array_bst_maxim(array_bst_t *bst);

void array_bst_delete_minim(array_bst_t *bst);

void array_bst_delete_maxim(array_bst_t *bst);

void array_bst_print(array_bst_t *bst);

void array_bst_destroy(array_bst_t *bst);

