#include<stdio.h>
#include<stdlib.h>
typedef struct tasks
{
    int taskid;
    char description[30];
    char status[20];
}tasks;

void addtask(tasks * tsk , int *size )
{   int n;
    printf("Enter number of tasks : ");
    scanf("%d", &n);

    for(int i = *size; i < *size + n ; i++)
    {
        printf("Enter task id : \n ");
        scanf("%d" , &tsk[i].taskid);
        printf("Enter task description : \n ");
        scanf(" %[^\n]" , tsk[i].description);
        printf("Enter task status : \n");
        scanf("%s" , tsk[i].status);
    }
    *size = *size + n;
}

void updateTask(tasks * tsk , int size)
{
    int id;
    int found = 0;
    printf("Enter task id to update : ");
    scanf("%d" , &id);
    for(int i = 0 ; i < size ; i++)
    {
        if(tsk[i].taskid == id)
        {   
            found = 1;
            printf("Enter new task description : ");
            scanf(" %[^\n]" , tsk[i].description);
            printf("Enter new task status : ");
            scanf("%s" , tsk[i].status);
            printf("Task updated successfully!\n");
            break;
        }
    }
    if(!found)
    {
        printf("Task with ID %d not found.\n", id);
    }
}

void displaytask(tasks * tsk , int size)
{   if(size == 0)
    {
        printf("No tasks to display.\n");
        return;
    }
    for(int i = 0 ; i < size ; i++)
    {
        printf("Task ID : %d\n" , tsk[i].taskid);
        printf("Task Description : %s\n" , tsk[i].description);
        printf("Task Status : %s\n" , tsk[i].status);
    }
}

void main()
{
    int size = 0;
    int exit = 0;
    tasks tsk[100];
    while(exit == 0)
    {
        int choice;
        printf("1. Add a new task\n");
        printf("2. Update a task\n");
        printf("3. View all tasks\n");
        printf("4. Exit\n");
        printf("Enter your choice : \n ");
        scanf("%d" , &choice);
        switch(choice)
        {
            case 1:
                addtask(tsk , &size);
                break;
            case 2:
               updateTask(tsk , size);
                break;
            case 3:
                displaytask(tsk, size);
                break;
            case 4:
                exit = 1;
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
}
}