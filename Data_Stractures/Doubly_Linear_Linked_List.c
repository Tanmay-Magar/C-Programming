// Datastractures -> Doubly Linear Linked List

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1);

struct node 	
{
	int data;
	struct node *next;
	struct node **prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));

	newn->data = No;
	newn->next = NULL;
	newn->prev = NULL; 

	if(*First == NULL)		// LL is empty
	{
		*First = newn;
	}

	else 					// LL contains atleast one Node
	{
		newn->next = *First;
		(*First)->prev = newn;		
		*First = newn;
	}
}

void InsertLast(PPNODE First, int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;

	newn->data = No;
	newn->next = NULL;
	newn->prev = NULL; 		

	if(*First == NULL)		// LL is empty
	{
		*First = newn;
	}

	else  					// LL contains atleast one Node
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newn;
		newn->prev = temp;		
	}
}

void DeleteFirst(PPNODE First)
{
	if(*First == NULL)		// LL is empty
	{
		return;
	}

	else if((*First)->next == NULL)		// LL contains one node
	{
		free(*First);
		*First = NULL;
	}

	else	// LL contains more than one node
	{
		(*First) = (*First)->next;

		free((*First)->prev);			

		(*First)->prev = NULL;		
	}
}

void DeleteLast(PPNODE First)
{
	PNODE temp = NULL;

	if(*First == NULL)		// LL is empty
	{
		return;
	}

	else if((*First)->next == NULL)		// LL contains one node
	{
		free(*First);
		*First = NULL;	
	}

	else	// LL contains more than one node
	{
		temp = *First;

		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}

		free(temp->next);
		temp->next = NULL;
	}
}

void InsertAtPos(PPNODE First, int No, int iPos)
{
	int NodeCnt = 0;
	PNODE newn = NULL;
	int iCnt = 0;
	PNODE temp = NULL;

	NodeCnt = Count(*First);

	if(iPos < 1 || iPos > NodeCnt + 1)		// Invalid position 	
	{
		return;
	}

	if(iPos == 1)					// if Position is First
	{
		InsertFirst(First,No);
	}
	
	else if(iPos == NodeCnt + 1)		// if Position is Last
	{
		InsertLast(First,No);
	}

	else  							// in between position
	{
		temp = *First;

		newn = (PNODE)malloc(sizeof(NODE));

		newn->data = No;
		newn->next = NULL;
		newn->prev = NULL;			

		for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
		{
			temp = temp->next;
		}

		newn->next = temp->next;
		temp->next->prev = newn;	
		temp->next = newn;
		newn->prev = temp;			
	}
}

void DeleteAtPos(PPNODE First, int iPos)
{
	int NodeCnt = 0;
	int iCnt = 0;
	PNODE temp1 = NULL;
	PNODE temp2 = NULL;

	NodeCnt = Count(*First);

	if(iPos < 1 || iPos > NodeCnt)		// Invalid position
	{
		return;
	}

	if(iPos == 1)					// if Position is First
	{
		DeleteFirst(First);
	}

	else if(iPos == NodeCnt)		// if Position is Last
	{
		DeleteLast(First);
	}

	else  							// in between position
	{
		temp1 = *First;

		for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
		{
			temp1 = temp1->next;
		}

		temp2 = temp1->next;

		temp1->next = temp2->next;
		temp2->next->prev = temp1;
		free(temp2);
	}
}

void Display(PNODE First)
{
	printf("Elements in the linked list are : \n");

	printf("NULL <=>");
	while(First != NULL)
	{
		printf("| %d |<=>",First->data);
		First = First->next;
	}
	printf("NULL\n");
}

int Count(PNODE First)
{
	int iCnt = 0;

	while(First != NULL)
	{
		iCnt++;
		First = First->next;
	}

	return iCnt;
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertFirst(&Head,51);
	Display(Head);

	InsertFirst(&Head,21);
	Display(Head);

	InsertFirst(&Head,11);
	Display(Head);

	InsertLast(&Head,101);
	Display(Head);

	InsertLast(&Head,111);
	Display(Head);

	InsertLast(&Head,121);
	Display(Head);

	iRet = Count(Head);
	printf("Number of elements are : %d\n",iRet);

	DeleteFirst(&Head);
	DeleteLast(&Head);

	Display(Head);
	iRet = Count(Head);
	printf("Number of elements are : %d\n",iRet);

	InsertAtPos(&Head,75,3);
	Display(Head);
	iRet = Count(Head);
	printf("Number of elements are : %d\n",iRet);

	DeleteAtPos(&Head,3);
	Display(Head);
	iRet = Count(Head);
	printf("Number of elements are : %d\n",iRet);
	return 0;
}