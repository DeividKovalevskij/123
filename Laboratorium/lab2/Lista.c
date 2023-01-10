//Deivid Kovalevskij. Student

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tab_size 100

typedef struct Item {
  float value;
  struct Item *next;
  }it;

int find(float value, it *head);

int locate(float value, it *head);

int retrieve(it *item, it *head);

void insert(it **head, float value, int pos); //200OK

void remove_by_index(it **head,int pos); //200OK

int size(it *head); //200OK

it findMax(it *head);

it findMin(it *head);

void printList(it *head); //200OK

int isEmpty(it *head); //200OK

void next(it **item,float value); //200OK

void previous(it **head, float value); //200OK

void makeNull(it *head); //200OK

void main(void) {
  it *head;
  head = (it *)malloc(sizeof(it));
  head=NULL;
  
  {
    next(&head,rand()%100)
      
      srand(time(NULL));
      
    for (int i = 0; i < 3; i++)
    {
      

    {
      next(&head,rand()%100);
      previous(&head,rand()%100);
      insert(&head,rand()%100,rand()%size(head));
    }
      return;
    }

    // Funkcii


    void remove_by_index(it **head,int pos){
        it *current = *head;
        it *tmp;
        int i=0;
        while (current->next != NULL && i<pos-1) {
                    current=current->next;
            i++;    
        }
        tmp = current->next;
        current->next = tmp->next;
        free(tmp);
    }

    void insert(it **head, float value, int pos){
        if(pos==0){
            next(head, value);
        } 
        else{
            if(pos==size(*head)) previous(head, value);
            else
            {
                it *current=*head;
                    it *tmp;

                int i=0;
                while (current->next != NULL && i<pos-1) {
                        current = current->next;
                    i++;
                }

                tmp=current->next;
                current->next=(it *)malloc(sizeof(it));
                current->next->value=value;
                current->next->next=tmp;
            }
        }
    }

    int isEmpty(it *head){
        if(head==NULL){
            return 1;
        }
        return 0;
    }
    
    void makeNull(it *head){
        it *ptr1,*ptr2;
        if (!head->next) return;
        
        ptr1 = head->next;

        while (ptr1) {
        ptr2 = ptr1;
        ptr1 = ptr1->next;
        free(ptr2);
        }
        head->next = 0;
    }

    void printList(it *head){
        printf("\n");
        if(head==NULL) printf("List is empty");
        else
        {
            it *current=head;
                do {
                printf("%i", current->value);
                printf("\n");
                current = current->next;
                }while (current != NULL);
    
        }
    }

    int size(it *head){
        int counter=0;
        if(head==NULL) return counter;
        else
        {
            it *current=head;
                do {
                counter++;
                current = current->next;
                }while (current != NULL);
        }
        return counter;
    }

    void next(it **head,float value){
        it *current;
        current=(it *)malloc(sizeof(it));
    
        current->value=value;
        current->next=(*head);
        *head=current;
    }

    void previous(it **head,float value){
        if(*head==NULL)
        {
        *head = (it *)malloc(sizeof(it));
           (*head)->value = value;
             (*head)->next = NULL;
        }else
        {
        it *current=*head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = (it *)malloc(sizeof(it));
            current->next->value = value;
            current->next->next = NULL;
        }
    }

    int find(float value, it *head) {
        it *current = head;

        while (current != NULL) {
            if (current->value == value) {
                prinf("ta wartosc jest w liscie")
                return 1;
            }
            current = current->next;
        }
        prinf("tei wartosc niema w liscie")
        return 0;
    }  

    int locate(float value, it *head){
        it *current = head;
        int index = 0;
        if(find(value, head)==1){
            while (current != NULL) {
                if (current->value == value) {
                    return index;
                }
                current = current->next;
                index++;
            }
        }
    }

    int findMax(it **head) {
        it *current;
        current = *head;
        int max = current->value;

        while (current != NULL) {
            if (current->value > max) {
                max = current->value;
            }
            current = current->next;
        }
        return max;
    }

    int findMin(it **head) {
        it *current;
        current = *head;
        int min = current->value;
        while (current != NULL) {
            if (current->value < max) {
                min = current->value;
            }
            current = current->next;
        }
        return min;
    }

    int retrieve(it *item, it *head){
        
    }
