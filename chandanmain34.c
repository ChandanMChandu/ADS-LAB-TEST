#include <stdint.h>
#include <assert.h>
#include "heap.h"

void test_sort( int32_t data[], uint32_t len) 
{
	uint32_t idx;
	for (idx = 1; idx <= len; ++idx) {
		assert (data[idx] <= data[idx+1]);		
	}
}

void test_heap()
{
	int32_t data[] = { 1010,1020,1050,1060,1070,1080,1090,1150,1200,1310,1320};
	int32_t status[] = {t,l,l,t,t,t,l,t,l,t}
	Heap heap = heap_new(data, 10);	
	//heap_insert(&heap, 47);
	//heap_test(&heap);
	assert(heap_get_max(&heap) == 1150);
	assert(heap_extract_max(&heap) == 1150);
	//heap_test(&heap);
	//assert(heap_size(&heap) == 10);

	//heap_sort(&heap);
	test_sort(heap.data, 10);


	Event** evnt = create_random_flights();
	Heap heap = heap_new(evnt, 5);
	assert(heap_get_max(&heap)->timestamp == 0);
	assert(heap_extract_max(&heap)->timestamp == 0);
// heap_insert(&heap, 47);
// assert(heap_size(&heap) == 11);
// heap_test(&heap);
// assert(heap_get_min(&heap) == 7);
// assert(heap_extract_min(&heap) == 7);
// heap_test(&heap);
// assert(heap_size(&heap) == 10);
// heap_sort(&heap);
// test_sort(heap.data, 10);

}



int main()
{
	test_heap();
	return 0;
}