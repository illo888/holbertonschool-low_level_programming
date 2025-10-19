📌 Tasks Summary and What I Did
0. hash_table_create
Created a hash table

Allocated memory for the structure and its array.

Initialized all array elements to NULL.

Returned a pointer to the table or NULL if allocation failed.

1. hash_djb2
Implemented the djb2 hash function

Started with a base value of 5381.

For each character, updated the hash using hash * 33 + c.

Returned the final hash as an unsigned long int.

2. key_index
Calculated the index for a given key

Used hash_djb2 to generate the hash.

Applied hash % size to get the index.

Returned the position in the array where the key/value should be stored.

3. hash_table_set
Added or updated a key/value pair in the hash table

Found the correct index using key_index.

Duplicated the value string.

If a collision occurred, inserted the new node at the beginning of the list.

Returned 1 on success, 0 on failure.

4. hash_table_get
Retrieved a value by key

Located the index using key_index.

Searched the linked list at that index for the key.

Returned the value if found, or NULL if not.

5. hash_table_print
Printed the contents of the hash table

Traversed the array and printed each key/value pair.

Displayed them in the order they appear in the array.

Skipped printing if the table was NULL.

6. hash_table_delete
Deleted the entire hash table and freed memory

Freed all nodes in each linked list.

Freed the array and the main structure.

Verified no memory leaks using Valgrind.
