#include <stdio.h>
struct student{
    char name[50];
    int marks;

};

int main()
{
    struct student *stu;
    int n;
    printf("enter the number of student : \n");
    scanf("%d",&n);
    stu=(struct student*)malloc(n * sizeof(struct student));
    for(int i=0;i<n;i++)
    {
        printf("enter student %d name : ",i+1);
        scanf("%s",stu[i].name);
        printf("enter the marks : ");
        scanf("%d",&stu[i].marks);

    }
    for(int i=0;i<n;i++)
    {
        printf("%s-%d \n",stu[i].name,stu[i].marks);
    }
    free(stu);
    return 0;
}
