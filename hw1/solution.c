/*
 *
 * Author: Anton Kryukov
 * Time:   Wed 28 Feb 22:23:42 MSK 2018
 *
 * Implemented: linked list
 * Big-O of solution: 
 *   pop  -   O(1)
 *   push -   O(1)
 *   find -   O(n)
 *   delete - 0(n)
 * */

#include <stdio.h>
#include <stdlib.h>

#include "testing.h"

#define LIST_IMPL

int main(void) {
  structure_t* s = init_st(5);
  if (s == NULL) {
    return -1;
  }

  printf("Is empty: %d\n", is_st_empty(s));
  
  free(s);
  return 0;
}

structure_t *init_st(int size) {
  structure_t *s = (structure_t*) malloc(sizeof(structure_t));
  if (s == NULL) {
    printf("FAIL! YOU LOOSE!");
    return NULL;
  }
  s->head = NULL;
  return s;
}

void print_struct(structure_t* s) {
  node_t *current = s->head;
  unsigned long int n = 0;
  while (current) {
    if (n++) printf(", ");
    printf("%d", current->key);
    current = current->next;
  }
  if (n) printf("\n");
}

int is_st_empty(structure_t* s) {
  return (s->head == NULL) ? 1 : 0;
}

node_t* pop(structure_t* s) {
  if (is_st_empty(s)) {
    printf("list is empty!\n");
    return NULL;
  }

  node_t *top = s->head;
  s->head = top->next;

  printf("pop %d\n", top->key);
  return top;
}

void push(structure_t* s, node_t* e) {
  e->next = s->head;
  s->head = e;
  printf("push %d\n", e->key);
}

node_t* find(structure_t* s, int key) {
  node_t *current = s->head;
  while (current) {
    if (current->key == key) {
      printf("found %d\n", key);
      return current;
    }
    current = current->next;
  }
  printf("node not found!\n");
  return NULL;
}

node_t* delete(structure_t* s, int key) {
  node_t *current = s->head, **prev_ptr = &s->head;
  while (current) {
    if (current->key == key) {
      *prev_ptr = current->next;
      printf("deleted %d\n", key);
      return current;
    }
    prev_ptr = &current->next;
    current = current->next;
  }
  printf("node not found!\n");
  return NULL;
}
