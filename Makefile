

all: linkedlist array


# arrays
array: 00_arrays/array.c
	clang -o array 00_arrays/array.c 

# linked list
linkedlist: 01_lists/linked_list.c
	clang -o linked_list 01_lists/linked_list.c 


# binary tree

# b-tree

# heap

# bit_slice_tree





clean:
	(@RM) array linked_list
