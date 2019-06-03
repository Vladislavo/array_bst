#ifndef __ARRAY_BST__H__
#define __ARRAY_BST__H__

#include <stdint.h>

#define ARRAY_BST_MAX_SIZE		(256)

typedef struct {
	array_bst_node_t 	*root;
	uint32_t			size;
} array_bst_t;

typedef struct {
	void 				*key;
	void 				*value;
} array_bst_node_t;

/* Alocate space and initialize variables */
void array_bst_init(array_bst_t *bst);

void array_bst_is_emtpy(array_bst_t *bst);

uint32_t array_bst_size(array_bst_t *bst);

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

#endif /* __ARRAY_BST__H__ */
