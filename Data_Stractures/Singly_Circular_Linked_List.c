/* 
	Datastractures : Singly Circular Linked List
*/

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1);

struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));

	newn->data = no;
	newn->next = NULL;

	if((*First == NULL) && (*Last) == NULL)		// Empty linked list
	{
		*First = *Last = newn;  			
	
		(*Last)->next = *First;
	}
	else									// LL contains atleast one node
	{
		newn->next = *First;
		*First = newn;
		(*Last)->next = newn;
	}	
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));

	newn->data = no;
	newn->next = NULL;

	if((*First == NULL) && (*Last) == NULL)	// Empty linked list
	{
		*First = *Last = newn;  			
	
		(*Last)->next = *First;
	}
	else									// LL contains atleast one node
	{
		(*Last)->next = newn;
		*Last = newn;
		(*Last)->next = *First;
	}
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
	PNODE temp = *First;

	if((*First == NULL) && (*Last == NULL))		// LL is empty
	{
		return;
	}

	else if((*First) == (*Last))				// LL contains one Node 
	{
		free(*First);
		*First = NULL;
		*Last = NULL;
	}
	else  										// LL contains more than Node
	{
		*First = (*First)->next;	
		free(temp);
		(*Last)->next = *First;
	}
}

void DeleteLast(PPNODE First, PPNODE Last)
{
	PNODE temp = *First;

	if((*First == NULL) && (*Last == NULL))		// LL is empty
	{
		return;
	}

	else if((*First) == (*Last))				// LL contains one Node
	{
		free(*First);
		*First = NULL;
		*Last = NULL;
	}
	else  										// LL contains more than One Node
	{
		while(temp->next->next != *First)
		{
			temp = temp->next;
		}
		
		free(temp->next);		

		(*Last) = temp;

		temp->next = *First;
	}	
}

void InsertAtPos(PPNODE First, PPNODE Last, int No, int iPos)
{
	int iNodeCnt = 0;
	iNodeCnt = Count(*First,*Last);
	
	PNODE newn = NULL;
	PNODE temp = *First;
	int iCnt = 0;

	if((iPos < 1) || (iPos > iNodeCnt+1))		// Invalid position
	{
		printf("Invalid Position\n");
		return;
	}

	if(iPos == 1)								// Position is First
	{
		InsertFirst(First, Last, No);
	}
	else if(iPos == (iNodeCnt+1))				// Position is Last
	{
		InsertLast(First,Last,No);
	}
	else  										// Position is in between
	{
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = No;
		newn->next = NULL;

		for(iCnt = 1; iCnt < (iPos-1); iCnt++)
		{
			temp = temp->next;
		}

		newn->next = temp->next;
		temp->next = newn;
	}
}

void DeleteAtPos(PPNODE First, PPNODE Last, int iPos)
{
	int iNodeCnt = Count(*First,*Last);
	int iCnt = 0;
	PNODE temp1 = *First;
	PNODE temp2 = NULL;

	if((iPos < 1) || (iPos > iNodeCnt))			// Invalid Position
	{
		printf("Invalid Position\n");	
		return;
	}

	if(iPos == 1)								// Position is First
	{
		DeleteFirst(First, Last);
	}
	else if(iPos == (iNodeCnt))					// Position is Last
	{
		DeleteLast(First,Last);
	}
	else  										// Position is in between
	{
		for(iCnt = 1; iCnt < (iPos-1); iCnt++)
		{
			temp1 = temp1->next;
		}

		temp2 = temp1->next;

		temp1->next = temp2->next;
		free(temp2);
	}
}

void Display(PNODE First, PNODE Last)
{
	printf("Elements of Linked List are : \n");

	do
	{
		printf("| %d |->",First->data);
		First = First->next;
	}while(First != Last->next);
	printf("\n");
}

int Count(PNODE First, PNODE Last)
{
	int iCount = 0;

	do
	{
		iCount++;
		First = First->next;
	}while(First != Last->next);

	return iCount;
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
	printf("Total nodes in Linked list are : %d\n",iRet);

	InsertLast(&Head, &Tail, 101);
	InsertLast(&Head, &Tail, 111);
	InsertLast(&Head, &Tail, 121);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Total nodes in Linked list are : %d\n",iRet);

	DeleteFirst(&Head, &Tail);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Total nodes in Linked list are : %d\n",iRet);

	DeleteLast(&Head, &Tail);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Total nodes in Linked list are : %d\n",iRet);

	InsertAtPos(&Head, &Tail, 75, 3);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Total nodes in Linked list are : %d\n",iRet);

	DeleteAtPos(&Head, &Tail, 3);
	Display(Head,Tail);
	iRet = Count(Head,Tail);
	printf("Total nodes in Linked list are : %d\n",iRet);
	
	return 0;
}