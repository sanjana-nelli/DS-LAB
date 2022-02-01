#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};

struct node *head = NULL, *link, *cur, *temp, *temp1;

struct node* create(){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the value to be entered into the data of the node:\n ");
    for(int i = 0; i < n; i++){
        cur = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &cur->data);
        if(head == NULL){
            cur->link = cur;
            head = cur;
        }
        else{
            temp = head;
            while(temp->link != head){
                temp = temp->link;
                temp->link = cur;
                cur->link = head;
            }
        temp->link = cur;
        }
    }
    return head;
}

struct node* insert_begin(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    cur->link = head;
    while(temp->link != head){
        temp = temp->link;
    }
    temp->link = cur;
    cur->link = head;
    head = cur;
    return head;
}

struct node* insert_end(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    cur->link = head;
    while(temp->link != head){
        temp = temp->link;
    }
    temp->link = cur;
    cur->link = head;
    return head;
}

struct node* insert_pos(int pos, int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    temp = head;
    int c = 1;
    while(c < pos - 1){
        temp = temp->link;
        c++;
    }
    cur->link = temp->link;
    temp->link = cur;
    return head;
}

struct node* delete_begin(struct node* head){
    temp = head;
    head = temp->link;
    printf("deleted element %d\n", temp->data);
    free(temp);
    return head;
}

struct node* delete_end(struct node* head){
    temp = head;
    while(temp->link != head){
        temp = temp->link;
    }
    temp1 = head;
    head = temp1->link;
    printf("deleted element %d\n", temp1->data);
    free(temp1);
    return head;
}

struct node* delete_pos(struct node* head, int pos){
    int c = 1;
    temp = head;
    while(c < pos){
        temp1 = temp;
        temp = temp->link;
        c++;
    }
   temp1->link = temp->link;
    printf("deleted element %d\n",temp->data);
    free(temp);
    return head;
}

void display(struct node* head){
    temp = head;
    while(temp->link != head){
        printf("%d \n", (temp->data));
        temp = temp->link;
    }
}

int main(){
    int ch, ele, pos, key;

    while(1){
        printf("Enter your choice\n");
        printf("1: create\n2: insert_begin\n3: insert_end\n4: insert_pos\n5: delete_begin\n6: delete_end\n7: delete_pos\n8: display\n9: exit\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:head = create();
                break;
            case 2:printf("Enter the element to be inserted: ");
                scanf("%d", &ele);
                insert_begin(ele);
                break;
            case 3:printf("Enter the element to be inserted: ");
                scanf("%d", &ele);
                insert_end(ele);
                break;
            case 4:printf("Enter the element to be inserted: ");
                scanf("%d", &ele);
                printf("Enter the position: ");
                scanf("%d", &pos);
                insert_pos(pos , ele);
                break;
            case 5:head = delete_begin(head);
                break;
            case 6:head = delete_end(head);
                break;
            case 7:printf("Enter the position\n");
                scanf("%d", &pos);
                head = delete_pos(head, pos);
                break;
            case 8:display(head);
                break;
            case 9:exit(0);
        }
    }
}
