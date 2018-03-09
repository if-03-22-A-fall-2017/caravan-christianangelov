/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "caravan.h"
#include <stdlib.h>
#include <stdio.h>
struct Node {
  PackAnimal data;
  struct Node* next;
};
struct CaravanImplementation
{
  struct Node* head;
  struct Node* tail;
  int len;
};
Caravan new_caravan()
{
 struct CaravanImplementation* list;
 list = (struct CaravanImplementation*)malloc(sizeof(struct CaravanImplementation));
 return list;
}

int get_length(Caravan caravan)
{
  return caravan -> len;
}

void delete_caravan(Caravan caravan)
{

}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if(caravan == 0)
  {
    caravan->head = (struct Node*)malloc(sizeof(struct Node));
    caravan->head->data = animal;
    caravan->len++;
  }
  else
  {
  
  }
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}
void optimize_load(Caravan caravan)
{

}
