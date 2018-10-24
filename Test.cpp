#include<stdio.h>
#include<stdlib.h>


typedef struct Node
{
    int data;
    struct Node *next;
} LinkList;


void CreateList(LinkList *&L, int arrays[], int len)
{
    LinkList *s,*r;
    L = (LinkList*)malloc(sizeof(LinkList));
    r = L;
    for(int i = 0; i < len; ++i)
    {
        s = (LinkList*)malloc(sizeof(LinkList));
        s->data = arrays[i];
        r->next=s;
        r=s;
    }
    r->next =NULL;
}


void print(LinkList* L)
{
    LinkList* p;
    p = L->next;
    if (L->next==NULL)
    {
        return ;
    }
    while(p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

LinkList* Merge(LinkList* L1,LinkList* L2)
{
    LinkList *L, *p1, *p2, *r;
    p1 = L1->next;
    p2 = L2->next;
    L = (LinkList*)malloc(sizeof(struct Node));
    L->next = NULL;
    r = L;
    while (p1 && p2)
    {
        if(p1->data < p2->data)
        {
            Node* node = (Node*)malloc(sizeof(struct Node));
            node->data = p1->data;
            node->next = NULL;
            r->next = node;
            r = node;
            p1 = p1->next;
        }
        else
        {
            Node* node = (Node*)malloc(sizeof(struct Node));
            node->data = p2->data;
            r->next = node;
            r = node;
            p2 = p2->next;
        }
    }
//    print(L1);
    while(p1){
        Node* node = (Node*)malloc(sizeof(struct Node));
        node->data = p1->data;
        r->next = node;
        r = node;
        p1 = p1->next;
    }
//    print(L1);
    while(p2){
        Node* node = (Node*)malloc(sizeof(struct Node));
        node->data = p2->data;
        r->next = node;
        r = node;
        p2 = p2->next;
    }
    r->next = NULL;

//    print(L1);
//    L1->next = NULL;
//    L2->next = NULL;
    return L;
}


int main()
{
    LinkList *L1, *L2, *L;
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};

    CreateList(L1, a, 4);
    CreateList(L2, b, 4);
//    print(L1);


    L = Merge(L1, L2);
//    print(L1);
    print(L);
    print(L1);
    print(L2);
    return 0;
}
