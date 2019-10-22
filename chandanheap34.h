#ifndef _INCLUDED_HEAP_
#define _INCLUDED_HEAP_

#include <stdint.h>
#define HEAP_MAX_SIZE 32

#define TAKEOFF 0
#define LANDING 1


typedef struct event event;

struct event
{
	uint32_t plane_no;
	uint32_t timestamp;
	uint32_t t;
	uint32_t l;
	uint32_t source_id;
	uint32_t destination_id;
}

typedef struct _heap_ Heap;

struct  _heap_
{
	uint32_t	size;
	int32_t		data[HEAP_MAX_SIZE]	;
};

//Heap 		heap_new(int32_t data[], uint32_t len);
//Heap*		heap_sort(Heap *heap);
//Heap*		heap_insert(Heap *heap, int32_t key);
Heap*		heap_test(Heap *heap);
int32_t		heap_get_max(Heap *heap);
int32_t		heap_extract_max(Heap *heap);
//uint32_t	heap_size(Heap *heap);

#endif


# sir, for 2nd question 

we have to find the value which is greater than 1150, by using heap_get_max and heap_extract_max function 
if it is greater than 1150 it will how the value of plane takeoff and landing.
