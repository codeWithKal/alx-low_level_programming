#ifndef LISTS_H
#define LISTS_H
/**
 * struct mynode - a structure defined for creating custom nodes
 * @len: numerica data of a node
 * @str: a string data of a node
 * @next: a pinter to the next node
 */

typedef struct mynode
{
	int len;
	char *str;
	struct mynode *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
