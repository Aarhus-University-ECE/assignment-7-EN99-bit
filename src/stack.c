#include "stack.h"
#include <assert.h>

void initialize(stack* s){
  //implement initialize here
  s->head = NULL;
}

void push(int x, stack* s){
    node *element = malloc(sizeof(node));
    element->next = s->head;
    element->data = x;
    s->head = element;
}

int pop(stack* s){
assert(s->head != NULL);
int Pop_Element = s->head->data;
s->head = s->head->next;
  return Pop_Element;
}

bool empty(stack* s)
{
  if (s->head = NULL)
    return true;
  else
    return false;
}

bool full(stack* s) {
    //Vi kan ikke adde data oven i en stack der har status som "full". Det ville give overflow fejl. 
    //Derfor bliver jeg nødt til at return false
  return false;
}
