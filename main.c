#include"election.c"


int main(){
    int choice;
    do{
        printf("\n \n #_#_#_#_#_# WELCOME TO ELECTION / VOTING 2022 A.D #_#_#_#_#_#");
        printf("\n \n 1.admin .");
        printf("\n \n 2. User.");


        printf("\n \n Please Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice){
        case 1:
        adminPanel();
        break;
        case 2:
        studentPanel();
        break;
        default:
        printf("\n Error: Invalid Choice !!!");
        }

    } while (choice!=0);

getchar();
}
