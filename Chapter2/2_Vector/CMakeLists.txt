cmake_minimum_required(VERSION 3.8)
project(2_Vector)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp vector_test.h Vector.h vector_bracket.h vector_assignment.h vector_constructor_by_copying.h vector_expand.h vector_shrink.h Vector_insert.h vector_remove.h vector_removeInterval.h Vector_disordered.h Vector_find.h Vector_search.h Vector_search_binary_C.h Vector_search_binary_A.h Vector_search_binary_B.h Vector_search_fibonaccian_B.h Vector_search_fibonaccian_A.h Vector_traverse.h Vector_unsort.h Vector_sort.h Vector_bubble.h vector_bubbleSort.h vector_selectionSort.h vector_merge.h vector_mergeSort.h vector_partition_B.h vector_partition_a.h vector_partition_a1.h vector_partition_b1.h vector_partition_c.h vector_quickSort.h vector_heapSort.h Vector_uniquify.h Vector_deduplicate.h permute.h Vector_implementatiom.h vector_increase.h vector_decrease.h vector_double.h vector_compare.h vector_expSearch.h Exercise_2_22_Saddleback.h vector_intpSearch.h)
add_executable(2_Vector ${SOURCE_FILES})