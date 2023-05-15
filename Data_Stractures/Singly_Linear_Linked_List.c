// Data stracture -> Singly Linear Linked List

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));

	newn->data = No;	
	newn->next = NULL;

	if(*First == NULL)		// If linked list is empty
	{
		*First = newn; 
	}
	else					// If linked list contains at least one node
	{
		newn->next = *First;
		*First = newn;
	}
}

void InsertLast(PPNODE First, int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;

	newn->data = No;	
	newn->next = NULL;	

	if(*First == NULL)		// If LL is empty
	{
		*First = newn;
	}
	else  					// LL contains atleat one Node
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newn;
	}
}

void Display(PNODE First)
{
	printf("Elements from the linked list are :\n");
	
	while(First != NULL)
	{
		printf("| %d |->",First->data);
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

void DeleteFirst(PPNODE First)
{
	PNODE temp = *First;

	if((*First) == NULL)				// Empty LL 
	{
		return;
	}

	else if((*First)->next == NULL)		// One node in LL
	{
		free(*First);
		*First = NULL;
	}
	
	else 								// More than one node
	{
		(*First) = (*First) -> next;
		free(temp);	
	}
}

void DeleteLast(PPNODE First)
{
	PNODE temp = *First;

	if((*First) == NULL)				// Empty LL
	{
		return;
	}

	else if((*First)->next == NULL)		// one node in LL
	{
		free(*First);
		*First = NULL;
	}
	
	else 								// more than one node
	{
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;
		}
		
		free(temp->next);
		temp->next = NULL;
	}
}

void InsertAtPos(PPNODE First, int No, int iPos)
{
	int NodeCount = 0;
	NodeCount = Count(*First);
	PNODE newn = NULL;
	PNODE temp = NULL;
	int iCnt = 0;

	if((iPos < 1) || (iPos > (NodeCount + 1)))	// Invalid position
	{
		printf("Invalid Position\n");
		return;
	}

	if(iPos == 1)				// Position is one
	{
		InsertFirst(First, No);
	}

	else if(iPos == (NodeCount + 1))		// Position is last
	{
		InsertLast(First, No);
	}

	else  							// Position is in between
	{
		newn = (PNODE)malloc(sizeof(NODE));

		newn->data = No;
		newn->next = NULL;

		temp = *First;

		for(iCnt = 1; iCnt < (iPos-1); iCnt++)
		{
			temp = temp->next;
		}
		
		newn->next = temp->next;
		temp->next = newn;
	}
}

void DeleteAtPos(PPNODE First, int iPos)
{
	PNODE temp1 = NULL;
	PNODE temp2 = NULL;
	int NodeCnt = 0;
	int iCnt = 0;

	NodeCnt = Count(*First);

	if((iPos < 1) || (iPos > NodeCnt))		// Invalid position
	{
		printf("Invalid Position\n");
		return;
	}

	if(iPos == 1)						// Position is one
	{
		DeleteFirst(First);
	}

	else if(iPos == NodeCnt)			// Position is last
	{
		DeleteLast(First);
	}

	else 								// Position is in between
	{
		temp1 = *First;

		for(iCnt = 1; iCnt < (iPos-1); iCnt++)
		{
			temp1 = temp1->next;
		}

		temp2 = temp1->next;
		
		temp1->next = temp2->next;
		free(temp2);
	}
}

int main()
{
	PNODE Head = NULL;		
	int iRet = 0;

	InsertFirst(&Head,51);
	InsertFirst(&Head,21);
	InsertFirst(&Head,11);
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of Nodes is : %d\n",iRet);

	InsertLast(&Head, 101);
	InsertLast(&Head, 111);
	InsertLast(&Head, 121);
	Display(Head);

	iRet = Count(Head);
	printf("Number of Nodes is : %d\n",iRet);

	DeleteFirst(&Head);
	Display(Head);

	iRet = Count(Head);
	printf("Number of Nodes is : %d\n",iRet);

	DeleteLast(&Head);
	Display(Head);

	iRet = Count(Head);
	printf("Number of Nodes is : %d\n",iRet);

	InsertAtPos(&Head, 75, 3);
	InsertAtPos(&Head, 105, 5);
	Display(Head);

	iRet = Count(Head);
	printf("Number of Nodes is : %d\n",iRet);

	DeleteAtPos(&Head, 3);
	Display(Head);

	iRet = Count(Head);
	printf("Number of Nodes is : %d\n",iRet);

	DeleteAtPos(&Head, 4);
	Display(Head);

	iRet = Count(Head);
	printf("Number of Nodes is : %d\n",iRet);

	return 0;
}
