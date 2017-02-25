#include<stdio.h>
#include<stdlib.h>
#define N_SIZE 20

struct employee{
    char name[N_SIZE];
    int age;
    float wage;
};
void menu();
void input();
void output();

int main()
{
    int i;
    menu();
    scanf("%d", &i);
    while(i!=3)
    {
        switch(i)
        {
            case 1: input();
                    break;
            case 2: output();
                    break;
            case 3: exit(0);
        }
        menu();
        scanf("%d", &i);
    }
    return 0;
}

void menu()
{
    printf("-------职工信息输入--------\n");
    printf("-------1.输入信息----------\n");
    printf("-------2.输出信息----------\n");
    printf("-------3.离开--------------\n");
}

void input()
{
    int i;
    FILE *fp;
    struct employee person[3];
    if((fp=fopen("test.txt", "w"))==NULL){
        printf("error!");
        exit(0);
    }
    for(i = 0; i < 3; i ++)
    {
        printf("请输入第%d个职工的信息：", i+1);
        fscanf(stdin, "%s", person[i].name);
        fscanf(stdin, "%d", &person[i].age);
        fscanf(stdin, "%f", &person[i].wage);

    }
    fprintf(fp, "name\tage\twage\n");
    for(i = 0; i < 3; i ++)
    {
        fprintf(fp, "%s\t", person[i].name);
        fprintf(fp, "%d\t", person[i].age);
        fprintf(fp, "%.2f\t", person[i].wage);
        fprintf(fp, "\n");
    }
    fclose(fp);
}

void output()
{
    FILE *fp;
    char ch;
    if((fp=fopen("test.txt", "r"))==NULL)
    {
        printf("the file can't be opened");
        exit(0);
    }
    ch = fgetc(fp);//先取出第一个字节
    while(ch != EOF)//检查是否是将文件的指针移动到了文件的尾部
    {
        while(ch != '\n')//换行
        {
            fprintf(stdout, "%c", ch);
            ch = fgetc(fp);
        }
        fprintf(stdout, "\n");
        ch = fgetc(fp);
    }
}

