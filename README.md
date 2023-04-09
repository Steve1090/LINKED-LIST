# LINKED-LIST
This repository contains the codes related to Linked Lists. 

EXPERIMENT-1 (LINKEDLIST)

a. Start the program.

b. Declare a structure named node containing data and pointer to the next node.

c. Declare a pointer to the starting node and initialize it to NULL.

d. Declare a function to add a node at the end of the linked list.

e. Inside the add_end function, declare two pointers of the structure node, newnode, and temp.

f. Allocate memory dynamically for newnode using malloc() function and set its data to the parameter passed to the function.

g. Set newnode's next pointer to NULL.

h. If the start pointer is NULL, set it to newnode.

i. If start pointer is not NULL, traverse through the linked list until the last node and set its next pointer to newnode.

j. Declare a function to display the linked list.

k.Inside the display function, declare a pointer of the structure node, temp and set it to start.

l. Traverse through the linked list until the last node and print its data, self address, and next address.

m. End the program.
