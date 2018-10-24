#include<stdio.h>
#include<stdlib.h>
typedef struct SChain
{
    int data;
    struct SChain *next;
} LinkList;
void CreateList1(LinkList *&L1,int a[],int n)
{
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    LinkList *s,*r;
    int i;
    L1=(LinkList*)malloc(sizeof(LinkList));
    r=L1;
    for(i=0; i<n; i++)
    {
        s=(LinkList*)malloc(sizeof(LinkList));
        s->data=a[i];
        r->next=s;
        r=s;
    }
    r->next =NULL;
}
void CreateList2(LinkList *&L2,int b[],int n)
{
    b[0] = 5;
    b[1] = 6;
    b[2] = 7;
    b[3] = 8;
    LinkList *s,*r;
    int i;
    L2=(LinkList*)malloc(sizeof(LinkList));
    r=L2;
    for(i=0; i<n; i++)
    {
        s=(LinkList*)malloc(sizeof(LinkList));
        s->data=b[i];
        r->next=s;
        r=s;
    }
    r->next =NULL;
}
void Print(LinkList L)
{
    LinkList p;
    p = L->Next;
    if (L->Next==NULL)
    {
        printf("NULL");
    }
    while(p)
    {
        printf("%d ", p->Data);
        p = p->Next;
    }


    int main()
    {
        LinkList L1, L2, L;

        LinkList Merge( LinkList L1, LinkList L2 );
        L = Merge(L1, L2);
        Print(L);
        Print(L1);
        print(L2);
        return 0;
    }
    LinkList Merge(LinkList L1,LinkList  L2 )
    {
        LinkList L, p1, p2, r ;
        p1 = L1->Next;
        p2 = L2->Next;
        L = (List)malloc(sizeof(struct Node));
        L->Next = NULL;
        r = L;
        while (p1 && p2)
        {
            if(p1->Data < p2->Data)
            {
                r->Next = p1;
                r = p1;
                p1 = p1->Next;
            }
            else
            {
                r->Next = p2;
                r = p2;
                p2 = p2->Next;
            }
        }
        if(p1)
            r->Next = p1;
        else
            r->Next = p2;
        L1->Next = NULL;
        L2->Next = NULL;
        return L;
    }
