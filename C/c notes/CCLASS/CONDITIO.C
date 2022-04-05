/*

Conditional/Control Statements:

	These statements will control the execution of the code/program based on a condition.
	There are three types of condition control statements:
	1. Selection Statements
	2. Iteration/Looping Statements
	3. Jump Statements

1. Selection Statements:
	Here using these statements we can skip some/block of  statements executing sequentially.

	the selection can be done based on a condition,
	condition may have two possible values:
	true	---	any non zero value
	false	---	zero

	a. simple if
	b. nested if
	c. if-else
	d. nested if-else
	e. else-if ladder
	f. switch

	a.simple if
	-----------
	syntax:
		if( condition )
		{
		 ...True Statements...
		}
		this selection statement executed as if the condition is true
		than only the "True Statements" can be executed. other wise the statements will be skipped.
		Eg:
		if( a>b )
		{
		printf("a is greater value...");
		}
	b. nested if
	------------
	syntax:
		if( condition1 )
		{
	...True statements for condition1...
		if( condition2 )
		{
			...True statements for condition2...
		}
		if( condition3 )
		{
		...True Statements for Condition3...
		}
	:
:
:
	}
	c. if-else
	syntax:
		if( condition )
		{
		...true statements...
		}
		else
		{
		...false statements...
		}
		In this control statement if the condition is true then the	true statements will be executed otherwise the statements in the else block will be executed.

		Example:
			if( a>b )
			{
				printf("a is gretest...");
			}
			else
			{
				printf("b is gretest...");
			}
	d. nested if-else		syntax:
			if( condition 1 )
			{
				true statements for condition 1

				if( condition2 )
				{
					true statements for condition2
				}
				else
				{
					false statements for condition2
				}
			}
			else
			{
				false statements for condition 1
				if( condition3 )
				{
					true statements for condition 3
				}
				else
				{
					false statements for condition3
				}
			}
		this is the nested if-else where there are multiple number of
		conditions to check, if a condition1 is true then the true
		statements of the condition will be executed,again condition2
		will be checked then statements according to that will be
		executed.

e. else-if ladder:
	syntax:
	if( condition1 )
	{
	...true statements of condition1...
	}
	else if( condition2 )
	{
	...true statements of condition2...
	}
	else if( condition3 )
	{
	...true statements of condition3...
	}
	:
	:
	:
	else if (condition N)
	{
	...true statemetns of conditionN
	}
	else
	{
	...false statements of conditionN...
	}
	Here the condition1 will be checked first and if it is true, then the true statements of it will be executed, otherwise condition2 will be checked then if it is true the true statements of it will be executed, this process continued untill the last condition...

f. switch statement
	This statement is used to check the choice(it may be character or an integer), make the selection based on the case that we have declared.

	syntax:
	switch( choice )
	{
	case number1: statements1...
		    break;
	case number2: statemetns2...
		break;
	:
	:
	:
	default: statements...
		break;
	}
	Example:
	int ch=3;
	switch(ch)
	{
	case 1:	printf("you entered 1");					break;
	case 2: printf("you entered 2");
	break;
	case 3: printf("you entered 3");
	break;
	default: printf("you entered other than 1, 2, and 3...");
	break;
	}


2. Iteration/looping Statements:

	Iteration Statements are used to repeat the block of statements untill the condition gets false.

Iteration statements are of two types:
	i. precondition
		the iteration statements will check the condition before executing the block of statements.

	ii. postcondition
		the iteration statements will check the condition after executing the block of statements once.

	a. While
	b. do-while
	c. For

	a.While
		It is a pre conditional Iteration statement, where a condition will be checked first and then the repetition of the block of statements( should contain the termination condition)	continued untill the condition is false.

	Syntax:
	Initialization;
	while( condition )
	{
	statements to be executed;
	increment/decrement;
	}

	Example:
	 without using iteration statements
		int a=1;
		printf("%d",a);   1
		a = a+1;
		printf("%d",a);   2
		a = a+1;
		printf("%d",a);   3
		:
		:
		:
	with iteration statement

		int a=1;
		while( a<=10 )
		{
		printf("%d ",a);
		a = a+1;
		}

	b. do-while
		this looping statement is the post condition checking looping statement that executes the block of statements once before going to check the condition.

	syntax:
	do
	{
		block of statements;
	}while( condition );

	here the block of statements will be executed once before checking  condition, then if the condition is true the block of statements will be executed until it gets false.

	Eg:
		printf("Enter a character...(enter 'n' for end):");
		ch = getchar();
		do
		{
			printf("you entered : ");
			putc(ch);
			printf("Enter character...: ");
			ch = getchar();
		}while( ch != 'n');

	the above code will prints whatever character the user enters untill he enters character n.


	c. For Statement
		This is a pre-condition checking statement, where it has an Initializaiton , condition chekcing , and Increment/Decrement in a single statement.

	Syntax:
for( initialization; condition ; increment / decrement)
{
	block of statements;
}

	In the for statement we can initialize, and check the condition, and decrement or increment a single line.
	where the execution starts from initialization, then it checks the	condition, if it is true then executes the block of statements in the for loop, after that it executes the increment/decrement	statement provided in the for statement then it comes to check condition, the process repeats untill the coindition is false.

	Eg:
	for(a=1; a<=10; a++)
	{
		printf("%d",a);
	}


----->	Loops Inside another loops(nested Loops):
	Here we use nesting of loops to perform some operations.
	eg:
	while(Condition1)
	{
		while(condition2)
		{
		}
	}
	In the above example if the untill the condition1 is true the condition2 will be executed untill it is ture.


3. jump statements:
	These statements are used to skip the block of/ lines of code.
	a. break
	b. continue
	c. return
	d. goto

	a. break
		this statement is used in the block of statements to transfer 
	the control to the end of the block.
	syntax:
		break;
	Eg:
		for(i=0;i<10;i++)
		{
			if(i==5)
			 break;
			printf("%d",i);
		}
		0 1 2 3 4
	b. continue
		this statement is used in the loops to continue with the
	current iteration by skipping the statement after it.
	syntax:
		continue;
	Eg:
		for(i=0;i<10;i++)
		{
			if(i==5)
			 continue;
			printf("%d",i);
		}
		0 1 2 3 4 6 7 8 9
	c. return
		this statement is used in functions which indicates the
	returning of the function(any value/any expression).
	syntax:
		return (expression);
	Eg:
		return (3);
		return (a+5);
		return (a+8/9*r);
	d. goto
		this statement is used to make the control jump to the
	specified label.
	label: it is the name of the code set.
	syntax:
		label1:
			statements....;
			if(condition)
				goto label2;
		goto label1;
		label2:
			statements...;


*/

