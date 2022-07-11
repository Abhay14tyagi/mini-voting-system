#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>

// define macroname charseq
// total no of the parties
#define total_no_of_parties
#define party_no_1 "A"
#define party_no_2 "B"
#define party_no_3 "C"
#define party_no_4 "D"

int vote_Count1 = 0,
    vote_Count2 = 0,
    vote_Count3 = 0,
    vote_Count4 = 0,
    invalid_votes = 0;

void castVote(){

    int choice;
    printf("\n \n <#> <#> <#> <#> Please chooose your Candidate <#> <#> <#> <#> \n \n");
    printf("\n 1. %s", party_no_1);
    printf("\n 2. %s", party_no_2);
    printf("\n 3. %s", party_no_3);
    printf("\n 4. %s", party_no_4);
    printf("\n 5. %s", "None of the above");

    printf("\n \n Input your choice ( 1 - 4 ) : ");
    scanf("%d", &choice);

    switch (choice){
        case 1:
        vote_Count1++;
        break;
        case 2:
        vote_Count2++;
        break;
        case 3:
        vote_Count3++;
        break;
        case 4:
        vote_Count4++;
        break;
        case 5:
        invalid_votes++;
        break;
        default:
        printf(" \n Error: Wrong Choice !! Please retry");
            // built in function for holding the screen.
            getchar();
    }
    printf(" \n Thanks for your vote !!");

}

void votesCount(){
    printf("\n \n #_#_#_#_# Voting Statics #_#_#_#_#");
    printf("\n %s - %d", party_no_1, vote_Count1);
    printf("\n %s - %d", party_no_2, vote_Count2);
    printf("\n %s - %d", party_no_3, vote_Count3);
    printf("\n %s - %d", party_no_4, vote_Count4);
    printf("\n %s - %d", "Spoiled Votes", invalid_votes);

}

void getLeadingCandiate(){
    printf("\n \n #_#_#_#_# Leading Candiate #_#_#_#_#");
    if(vote_Count1 > vote_Count2 && vote_Count1 > vote_Count3 && vote_Count1 > vote_Count4){
        printf("The Leading Candiate is %s", party_no_1);
    }else if(vote_Count2 > vote_Count1 && vote_Count2 > vote_Count3 && vote_Count2 > vote_Count4){
        printf("The Leading Candiate is %s", party_no_2);
    }else if(vote_Count3 > vote_Count2 && vote_Count3 > vote_Count1 && vote_Count3 > vote_Count4){
        printf("The Leading Candiate is %s", party_no_3);
    }else if(vote_Count4 > vote_Count2 && vote_Count4> vote_Count3 && vote_Count4 > vote_Count1){
        printf("The Leading Candiate is %s", party_no_4);
    }else {
        printf("+++++++++++++ Warning!!!!!!!!! No Win-Win Situation ++++++++++++++");
    }
}

    int studentPanel()
{

        castVote();

}
	int adminPanel()
	{
	    char username[15], password[7];

    printf("\nEnter username: ");
    scanf("%s",username);
    if((strcmp(username,"Admin"))!=0)
    {

     printf("invalid value");
        return 0;
        }
    else
    {
        printf("Enter Password: ");
        int i=0;
        for(i=0;i<5;i++)
        {
            password[i]=getch();
            printf("%c",'*');
        }
        password[i]='\0';
        if((strcmp(password,"admiN"))!=0)
                {

                  return 0;
                }
        else
           {



int input;

        printf("\n\nLOGGED IN SUCCESSFULLY (Press Enter)");

		while(1)
        {
            printf("\n1.votes count\n2.leading candidate");
			scanf(" %d",&input);
			switch(input)
            {
                case 1:
                      votesCount();
                    break;
                case 2:
                   getLeadingCandiate() ;
                    break;
                default:
                    printf("Invalid Option");
                    return 0;
        }
    }
    }
}
	}
