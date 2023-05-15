// Data Stractures : Doubly Circular Linked List

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1);

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));

	newn->data = No;
	newn->next = NULL;
	newn->prev = NULL;

	if((*First == NULL) && (*Last == NULL))		// LL is empty
	{
		*First = newn;
		*Last = newn;
	}

	else  										// LL contains atleast one Node
	{
		newn->next = *First;
		(*First)->prev = newn;
		*First = newn;
	}

	(*First)->prev = *Last;
	(*Last)->next = *First;
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));

	newn->data = No;
	newn->next = NULL;
	newn->prev = NULL;

	if((*First == NULL) && (*Last == NULL))		// LL is empty
	{
		*First = newn;
		*Last = newn;
	}

	else  										// LL contains atleast one Node
	{
		(*Last)->next = newn;
		newn->prev = *Last;
		*Last = newn;
	}

	(*First)->prev = *Last;
	(*Last)->next = *First;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
	if((*First == NULL) && (*Last == NULL))			// LL is empty
	{
		printf("Linked list is empty...\n");
		return;
	}

	else if((*First) == (*Last))					// LL contains one Node
	{
		free(*First);

		*First = NULL;
		*Last = NULL;
	}

	else  											// LL contains more than one Node
	{
		*First = (*First)->next;
		free((*Last)->next);
		(*First)->prev = *Last;
		(*Last)->next = *First;
	}
}

void DeleteLast(PPNODE First, PPNODE Last)
{
	if((*First == NULL) && (*Last == NULL))			// LL is empty
	{
		printf("Linked list is empty...\n");
		return;
	}

	else if((*First) == (*Last))					// LL contains one Node
	{
		free(*First);

		*First = NULL;
		*Last = NULL;
	}

	else  											// LL contains more than one Node
	{
		*Last = (*Last)->prev;
		free((*First)->prev);
		(*First)->prev = *Last;
		(*Last)->next = *First;
	}
}

void InsertAtPos(PPNODE First, PPNODE Last, int No, int iPos)
{
	int NodeCnt = 0;
	PNODE newn = NULL;
	PNODE temp = NULL;
	int iCnt = 0;

	NodeCnt = Count(*First, *Last);
	
	if((iPos < 1) || (iPos > NodeCnt+1))		// Invalid Position
	{
		printf("Invalid position...\n");
		return;
	}

	if(iPos == 1)								// Position is First
	{
		InsertFirst(First, Last, No);
	}

	else if(iPos == NodeCnt+1)					// Position is Last
	{
		InsertLast(First, Last, No);	
	}

	else  										// Position is in Between
	{
		newn = (PNODE)malloc(sizeof(NODE));

		newn->data = No;
		newn->next = NULL;
		newn->prev = NULL;

		temp = *First;

		for(iCnt = 1; iCnt < iPos-1; iCnt++)
		{
			temp = temp->next;
		}

		newn->next = temp->next;
		temp->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;
	}
}

void DeleteAtPos(PPNODE First, PPNODE Last, int iPos)
{
	int NodeCnt = 0;
	PNODE temp = NULL;
	int iCnt = 0;

	NodeCnt = Count(*First, *Last);		// Invalid Position
	
	if((iPos < 1) || (iPos > NodeCnt))
	{
		printf("Invalid position...\n");
		return;
	}

	if(iPos == 1)						// Position is First
	{
		DeleteFirst(First, Last);
	}

	else if(iPos == NodeCnt)			// Position is Last
	{
		DeleteLast(First, Last);	
	}

	else  								// Position is in between
	{
		temp = *First;

		for(iCnt = 1; iCnt < (iPos-1); iCnt++)
		{
			temp = temp->next;
		}

		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
	}
}

void Display(PNODE First, PNODE Last)
{
	if((First == NULL) && (Last == NULL))		// LL is empty
	{
		return;
	}

	do
	{
		printf("| %d |=>",First->data);
		First = First->next;
	}while(First != Last->next);
	printf("\n");
}

int Count(PNODE First, PNODE Last)
{
	int iCnt = 0;

	if((First == NULL) && (Last == NULL))		// LL is empty
	{
		return iCnt;
	}

	do
	{
		iCnt++;
		First = First->next;
	}while(First != Last->next);
	
	return iCnt;
}

int main()
{
	PNODE Head = NULL;
	PNODE Tail = NULL;
	int iRet = 0;

	InsertFirst(&Head, &Tail, 51);
	InsertFirst(&Head, &Tail, 21);
	InsertFirst(&Head, &Tail, 11);

	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Total number of nodes in Linked List are : %d\n",iRet);

	InsertLast(&Head, &Tail, 101);
	InsertLast(&Head, &Tail, 111);
	InsertLast(&Head, &Tail, 121);

	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Total number of nodes in Linked List are : %d\n",iRet);

	DeleteFirst(&Head, &Tail);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Total number of nodes in Linked List are : %d\n",iRet);

	DeleteLast(&Head, &Tail);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Total number of nodes in Linked List are : %d\n",iRet);

	InsertAtPos(&Head, &Tail, 75, 3);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Total number of nodes in Linked List are : %d\n",iRet);

	DeleteAtPos(&Head, &Tail, 3);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Total number of nodes in Linked List are : %d\n",iRet);

	return 0;
}