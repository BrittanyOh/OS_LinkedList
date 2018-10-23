#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"


int main() {
    // Creating new list and adding new elements
    printf("****TEST: CREATING NEW LIST/ADDING ELEMENTS***\n\n");
    list* test;
    test = create_list();

    printf("EXPECTED OUTPUT:\nBrittany\nSamson\nConnor\nCiara\n\n");
    add_to_list(test, "Brittany");
    add_to_list(test, "Samson");
    add_to_list(test, "Connor");
    add_to_list(test, "Ciara");

    printf("ACTUAL OUTPUT:\n");
    print_list(test);
    printf("\n~ End of test. ~\n\n");


    // Removing elements from list
    printf("****TEST: REMOVING ELEMENTS FROM LIST***\n\n");
    printf("1. EXPECTED REMOVAL: 'Brittany'\n");
    printf("\nList:\n");
    char* deleted_str;
    deleted_str = remove_from_list(test);
    print_list(test);
    printf("\nACTUAL REMOVAL: %s\n\n", deleted_str);

    printf("\n2. EXPECTED REMOVAL: 'Samson'\n");
    printf("\nList:\n");
    deleted_str = remove_from_list(test);
    print_list(test);
    printf("\nACTUAL REMOVAL: %s\n\n", deleted_str);

    printf("\n3.EXPECTED REMOVAL: 'Connor'\n");
    printf("\nList:\n");
    deleted_str = remove_from_list(test);
    print_list(test);
    printf("\nACTUAL REMOVAL: %s\n\n", deleted_str);

    printf("\n~ End of test. ~\n\n");


    // Testing flush function
    printf("****TEST: FLUSH LIST***\n\n");
    flush_list(test);
    if ((test->head == NULL) && (test->tail == NULL)) {
        printf("List sucessfully flushed.\n\n");
    }else{
      printf("Flush failed\n\n");
    }
    printf("~ End of test. ~\n\n");


  // Deallocation
  printf("****TEST: FREE LIST***\n\n");
  printf("Memory deallocation can not be checked although all memory allocated for list should be freed.\n\n");
  free_list(test);

  printf("~ End of test. ~\n\n");

    return 0;

}
