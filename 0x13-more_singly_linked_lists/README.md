
![Linkedlist](https://www.codeproject.com/KB/tips/5264286/giphy.gif)


# Singly Linked List

A singly linked list is a data structure that consists of a sequence of elements called nodes. Each node contains two parts: the data (value) and a reference (link) to the next node in the sequence. The last node's link points to NULL, indicating the end of the list.

## Features

- Insertion: Add new elements to the list at the beginning, end, or at a specific position.
- Deletion: Remove elements from the list based on their value or position.
- Traversal: Visit each element in the list to perform operations or display its contents.
- Searching: Find elements in the list based on their value.
- Length: Calculate the number of nodes in the list.
- Empty Check: Verify if the list is empty or contains elements.

## Implementation Details

The implementation of the singly linked list is done in the following way:

- The `node` structure defines each element (node) of the list.
- The `list` structure maintains a pointer to the first node, commonly called the head of the list.
- Each node contains a data element and a link (pointer) to the next node.
- Various functions are provided to perform operations on the linked list, like insert, delete, search, and display.

## Usage

To use the singly linked list in your project, follow these steps:

1. Copy the `list.h` and `list.c` files into your project directory.
2. Include the `list.h` header file in your source files that need to work with the linked list.
3. Compile your project, ensuring to link the `list.c` file along with your other source files.

## Example

Here's an example demonstrating the basic usage of the singly linked list:

```c
#include <stdio.h>
#include "list.h"

int main() {
    // Create an empty list
    List* myList = create_list();

    // Insert elements into the list
    insert_front(myList, 10);
    insert_back(myList, 20);
    insert_at(myList, 15, 1); // Inserts 15 at index 1 (between 10 and 20)

    // Print the contents of the list
    printf("List: ");
    display_list(myList); // Output: List: 10 -> 15 -> 20

    // Search for an element
    int searchValue = 20;
    if (search_list(myList, searchValue)) {
        printf("%d found in the list.\n", searchValue);
    } else {
        printf("%d not found in the list.\n", searchValue);
    }

    // Delete an element
    int deleteValue = 15;
    if (delete_list(myList, deleteValue)) {
        printf("Deleted %d from the list.\n", deleteValue);
    } else {
        printf("%d not found in the list.\n", deleteValue);
    }

    // Destroy the list to free memory
    destroy_list(myList);

    return 0;
}

```
