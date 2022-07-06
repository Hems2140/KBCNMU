#include"iostream.h"
#include"conio.h"
class STACK_120
{
private:
	int *A, size,TOP;
public:
	STACK_120(int);
	void PUSH(int ele);
	int POP();
	void LIST_ALL();

};
void STACK_120::STACK_120(int par)
{
	TOP = 0;
	size = par;
	A = new int[size + 1];
}
void STACK_120::PUSH(int ele)
{
	if (TOP== size)
	{
		cout << "stack is full";
		return;
	}
	TOP= TOP+ 1;
	A[TOP] = ele;
}
int STACK_120::POP()
{
	if (TOP== 0)
	{
		cout << "stack is empty";
		return NULL;
	}
	     int ele = A[TOP];
		TOP= TOP- 1;
		return ele;

}
void STACK_120::LIST_ALL()
{
	if (TOP == 0)
	{
		cout <<"\n stack is empty" << endl;
	}
	else
	{
	       cout<<endl<<"\n element in stack";
		for (int i = TOP; i >=1; i--)
		{
		cout << A[i] << " ";
		}
	 }
}
void MENU()
{
	int opt,ele,size;
	cout<<"Enter the size of the stack:";
	cin>>size;
	STACK_120 obj(size);
	do
	{
		cout<<"\n 1.PUSH:";
		cout<<"\n 2.POP:";
		cout<<"\n 3.LIST ALL:";
		cout<<"\n 4.EXIT:";
		cout<<"\n Enter your choice:";
		cin>>opt;
		switch(opt)
		{
		case 1:
			cout <<"\n PUSH THE ELEMENT:";
			cin >> ele;
			obj.PUSH(ele);
			break;
		case 2:
			cout<<endl<<endl<<"is deleted";
			cin>>ele;
			obj.POP();
			break;
		case 3:
			obj.LIST_ALL();
			break;
		case 4:
			return;
		default:
			cout <<"\n Invalid option";
		}

	} while (1);

}
void  main()
{
	int ele;
	clrscr();
	MENU();
	getch();
}
