#ifndef hc_h
#define hc_h
#include "priority_queue.h"
#include "linked_list.h"
#include "main.h"

struct color{
	int cost;
	linked_list_t *vertex_list;
	int color;
};

typedef struct color color_t;

color_t *new_color(int id);

priority_queue_t *preprocessing(graph_t *g);

int is_not_adj(graph_t *g, vertex_t *v, linked_list_t *vertex_list);

priority_queue_t *HC(graph_t *g);

int print_out(priority_queue_t *list);
#endif