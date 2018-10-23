#include "list.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//CREATE NODE
node* create_node(char* item) {
    node* nn = malloc(sizeof(node));
    int node_len = strlen(item);
    char* new_str = malloc(node_len + 1);
    strncpy(new_str, item, node_len);
    nn->data = new_str;
    nn->next = NULL;
    return nn;
}

//CREATE LIST
list* create_list() {
    list* lst = malloc(sizeof(list));
    lst->head = NULL;
    lst->tail = NULL;
    return lst;
}

//ADD TO LIST
int add_to_list(list* ll, char* item) {
    node* curr = ll->head;
    node* nn = create_node(item);
    if (ll->head == NULL) { //If list is empty, add new node to begining of list
        ll->head = nn;
        ll->tail = nn;
        return 0;
    }
    else {  // else add to end of list
        node* temp = malloc(sizeof(node));
        temp = ll->tail;
        temp->next =  nn;
        ll->tail = nn;
        return 0;
    }
    return 1;
}

//REMOVE FROM LIST
char* remove_from_list(list* ll) {
    node* temp = malloc(sizeof(node));
    temp = ll->head;
    char* delete = malloc(sizeof(temp->data));

    if (ll->head == ll->tail) { //single element in list
        delete = temp->data;
        free(ll->tail);
        ll->head = NULL;
        ll->tail = NULL;
    }
    else { //else delete first element and move head to next element
        delete = temp->data;
        ll->head = temp->next;
        free(temp);
    }
    return delete;
}

//PRINT LIST
void print_list(list *ll){
    node *curr = malloc(sizeof(node));
    curr = ll -> head;
    while (curr != NULL){
        printf("%s \n", curr->data);
        curr = curr->next;
    }
    return;
}

//FLUSH LIST
void flush_list(list* ll){
    node *curr = malloc(sizeof(node));
    curr = ll -> head;
    node *next = malloc(sizeof(node));
    while (curr != NULL ){ //loop through list till each node is freed
        next = curr -> next;
        free(curr);
        curr = next;
    }
    free(next);
    free(ll);
    ll = create_list();
    return;
}

//FREE LIST
void free_list(list *ll){
    node *curr = malloc(sizeof(node));
    curr = ll -> head;
    node *next = malloc(sizeof(node));
    while (curr != NULL ){ //loop through list till all data is freed
        next = curr -> next;
        free(curr->data);
        free(curr);
        curr = next;
    }
    free(next);
    free(ll);
    free(curr);
    return;

}
