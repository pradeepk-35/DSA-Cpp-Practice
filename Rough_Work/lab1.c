#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct book{
    int bookid;
    char title[30];
    char author[20];
    float price;
    char status[15];
};

struct book *b;
int n;

void create(){
    printf("Enter the number of book : ");
    scanf("%d",&n);
    b = (struct book*)malloc(n * sizeof(struct book));
    for(int i = 0; i < n; i++){
        printf("Enter the details of book %d\n", i + 1);
        printf("book id : \n");
        scanf("%d",&b[i].bookid);
        printf("title : \n");
        scanf(" %[^\n]",b[i].title);
        printf("Author : \n");
        scanf(" %[^\n]",b[i].author);
        printf("Price : \n");
        scanf("%f",&b[i].price);
        strcpy(b[i].status, "Available");
    }
    printf("Book records added successfully");
}

void dispaly(){
    if(n == 0){
        printf("No book records available");
        return;
    }
    printf("Book Records \n");
    for(int i = 0; i < n; i++){
        printf("Book Id : %d\n",b[i].bookid);
        printf("Title : %s\n",b[i].title);
        printf("Author : %s\n",b[i].author);
        printf("Price : %f\n",b[i].price);
        printf("status : %s\n",b[i].status);
    }
}

void search(){
    int id, found = 0;
    printf("Enter the book id : ");
    scanf("%d",&id);
    for(int i = 0; i < n; i++){
        if(b[i].bookid == id){
            printf("Book found\n");
            printf("Book Id : %d",b[i].bookid);
            printf("Title : %s",b[i].title);
            printf("Author : %s",b[i].author);
            printf("Price : %f",b[i].price);
            printf("status : %s",b[i].status);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("Book not found");
    }
}

void issuebook(){
    int id;
    printf("Enter the book id : ");
    scanf("%d",&id);
    for(int i = 0; i < n; i++){
        if(b[i].bookid == id){
            if(strcmp(b[i].status, "Available") == 0){
                strcpy(b[i].status, "issued");
                printf("book issued sucessfully");
            }
            else{
                printf("Book is already issued");
            }
            return;
        }
    }
    printf("Book not found");
}

void returnbook(){
    int id;
    printf("Enter the book id");
    scanf("%d",&id);
    for(int i = 0; i < n; i++){
        if(b[i].bookid == id){
            if(strcmp(b[i].status, "issued")==0){
                strcpy(b[i].status, "Available");
                printf("Book returned sucessfully");
            }
            else{
                printf("Book is already avialable : ");
            }
            return;

        }
    }
    printf("Book not found !!!");
}
int main(){
    int ch;
    while(1){
        printf("---Book details---\n");
        printf("1.Add book records\n");
        printf("2.Display all book records\n");
        printf("3.search book by book id\n");
        printf("4.Issue book\n");
        printf("5.Return book\n");
        printf("6.exit\n");
        scanf("%d",&ch);
        switch (ch){
            case 1 : create();
            break;
            case 2 : dispaly();
            break;
            case 3 : search();
            break;
            case 4 : issuebook();
            break;
            case 5 : returnbook();
            break;
            case 6 : free(b);
            printf("Exiting the program");
            exit(0);
            default : printf("Invalid choice\n");
           
        }
    }
    return 0;
}