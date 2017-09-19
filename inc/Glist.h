#ifndef _GLIST_
#define _GLIST_
#include <stdlib.h>

/*
Defining the basic integer linked-list datatype 
*/

struct int_item {

  /* item */
  int num;

  struct int_item* prv;
  struct int_item* nxt;
};

typedef struct int_item Gitem; 


/*
Defining the entire integer linked-list 
*/

struct int_list {

  int size;
  Gitem* first;
  Gitem* last;
};

/* alias name for int_list structure */ 
typedef struct int_list Glist;

/* init a Glist struct to zero*/
int Glist_init_zero(Glist* lst);

/* macros */
#define _GLIST(lst) Glist *lst = (Glist *) malloc( sizeof(Glist) );



/* adds an integer to the integer list
   on success return 0 else return the error code */

int Glist_add(Glist* lst, int num);

/* prints the components of the Glist struct */
int Glist_print(char *name, Glist* lst);

/* cleans up the entire memory dedicated to the list */ 
int Glist_clear(Glist *lst);

/* deletes specific item located at the indx'th location (zero-based)
   in the Glist */
int Glist_delete(Glist *lst, int indx);

#endif