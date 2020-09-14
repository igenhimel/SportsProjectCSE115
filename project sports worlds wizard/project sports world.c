#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
#include<math.h>

int main()
{
    char scorecard[20];
    int countr,r,r1,count,i,n,home;
    float score;
    char choice;
    char playername[20];

    system("cls");
    FILE *file;
    char name[20];


    file=fopen("project file.txt","w");

    if(file==NULL)
    {
        printf("file doesnt exist");
    }


    else
    {

main:

//MAINHOME SPORTS WORLD
        printf("\t\t\t\t\t\t   **SPORTS WORLD WIZARD**\n");
        printf("\t\t\t\t\t\tSports for All, All for Sports\n");
        printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        //printf("\t\t\t**SPORTS WORLD**\n");
        printf("\t\t\t\t::\t\t              \t\t\t\t::\n");
        printf("\t\t\t\t::\t\t\t WELCOME \t\t\t::\n");
        printf("\t\t\t\t::\t\t\t   to \t\t\t\t::\n");
        printf("\t\t\t\t::\t\t    SPORTS WORLD WIZARD \t\t::\n");
        printf("\t\t\t\t::\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@\t \t::\n");
        printf("\t\t\t\t::\t\t CRICKET! FOOTBALL! HOCKEY!  \t \t::\n") ;
        printf("\t\t\t\t::\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@\t \t::\n");
        printf("\t\t\t\t::\t\t > Press Y to REGISTRATION\t\t::\n");
        printf("\t\t\t\t::\t\t > press H for HELP\t\t\t::\n");
        printf("\t\t\t\t::\t\t > press A for About          \t\t:: \n");
        printf("\t\t\t\t::\t\t > press Q to QUIT            \t\t:: \n");
        printf("\t\t\t\t::\t\t           \t\t \t\t:: \n");
        printf("\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        fflush(stdin);
        choice=getch();

        fclose(file);
    }

    char name1[20],name2[20],email[20];
    char password[20],p[15],u[15];
    int a,b;
    if(choice=='Y' || choice=='y')
    {
//LOG IN PAGE
        system("cls");

        printf("\t\t\t\t\t\t**One Time Registration**\n\n");
        fflush(stdin);
        printf("\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\t\t\t\t\t\tusername or email:\n\t\t\t\t\t\t");
        scanf("%s",u);
        printf("\t\t\t\t\t\tEnter password:\n\t\t\t\t\t\t");
        scanf("%s",p);
        printf("\t\t\t\t\t\tConfirm password:\n\t\t\t\t\t\t");
        scanf("%s",password);

        do
        {
            if(strlen(password)!=4)
            {

            printf("\t\t\t\t\t\tPassword length must be 4 character!!!!!\n\n\t\t\t\t\t\t");

                printf("username or email:\n\t\t\t\t\t\t");
                fflush(stdin);
                scanf("%s",email);
                printf("\t\t\t\t\t\tEnter password:\n\t\t\t\t\t\t");
                scanf("%s",p);
                printf("\t\t\t\t\t\tConfirm password:\n\t\t\t\t\t\t");
                scanf("%s",password);
                continue;

            }
             if (b=strcmp(p,password))
            {
                printf("\t\t\t\t\t\tPassword Don't match!!!!!\n\n\t\t\t\t\t\t");

                printf("username or email:\n\t\t\t\t\t\t");
                fflush(stdin);
                scanf("%s",u);
                printf("\t\t\t\t\t\tEnter password:\n\t\t\t\t\t\t");
                scanf("%s",p);
                printf("\t\t\t\t\t\tConfirm password:\n\t\t\t\t\t\t");
                scanf("%s",password);
                continue;

            }

        }
        while(b=strcmp(p,password));
        printf("\t\t\t\t\t\tCorrect Username & password.\n\t\t\t\t\t\tWelcome %s \n\t\t\t\t\t\t\n",u);
        printf("\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::\n");
        fflush(stdin);
        printf("\t\t\t\t\t\tEnter 0 to continue\n\t\t\t\t\t\t");
        choice=getch();

home:
        if(choice=='0')
        {
            char data, i,data2;

            char team[20],select;
            int time,venue,date;

//HOME PAGE
            system("cls");
            printf("\n\n");
            printf("\t\t\t\t\t\t\t_____________________\n");
            printf("\t\t\t\t\t\t\t**A** Cricket\n");
            printf("\t\t\t\t\t\t\t_____________________\n");
            printf("\t\t\t\t\t\t\t**B** Football\n");
            printf("\t\t\t\t\t\t\t_____________________\n");
            printf("\t\t\t\t\t\t\t**C** Search Engine\n");
            printf("\t\t\t\t\t\t\t_____________________\n");
            printf("\n\n");
            printf("\t\t\t\t\t\t\tENTER YOUR CHOICE:>(EX. 'A' OR 'B' OR 'C')\n\n\t\t\t\t\t\tOR PRESS D FOR BACK MAIN MENU:>");
            fflush(stdin);
            data=getch();

            switch(data)
            {

mainhome2:
            case 'A':
            case 'a':
//CRICKET HOMEPAGE
                system("cls");
                printf(" <A> Scorecard\n");
                printf("********************\n");
                printf(" <B> Fixture\n");
                printf("********************\n");


                printf(" <C> Recent Match Update\n");
                printf("********************\n");
                printf (" <D> Ranking\n");
                printf("********************\n");
                printf (" <E> Stats\n") ;
                printf("********************\n");
                printf(" <F> Feature\n");
                printf("********************\n");
                printf(" <G> Records\n");
                printf("********************\n");

                printf("Enter Your Choice:EX.'A' OR 'B' OR 'C' : ");
                fflush(stdin);
                data2=getch();


                switch(data2)
                {
                case 'A':
                case 'a':
                    // CRICKET SCORECARD
scorecard:
                    system("cls");
                    printf("\t\t\t\t\t***SCORECARD***\n");
                    printf("\t\t\t\t\t___________________\n\n");
                    printf("\t\tIF YOU WANT TO CREAT A SCORECARD THEN TYPE YES>>");
                    fflush(stdin);
                    gets(scorecard);
                    if(strcmp(scorecard,"YES")==0 || strcmp(scorecard,"yes")==0)
                    {

                        int ii,n,j,jj;
                        char player_name[15][25];
                        char player_name1[15][25];
                        char player_name3[15][25];
                        char player_name4[15][25];
                        int runs1[20],runs2[20],runs3[20],runs4[20],bowls1[20],bowls2[20];
                        double strike_rate1[20],strike_rate2[20],over1[20],over2[20],BF1[20],ov1=0,ov2;
                        char team11[20],team22[20];
                        char toss[20];
                        int wicket1[20],wicket2[20],sum=0,sum1=0,sum2=0,wk1=0,wk2=0;
                        double economy_rate1[20],economy_rate2[20];
                        char bat[20];



                        FILE *f;
                        f=fopen("scorecard.txt","a+");


//team name
                        printf("\n\t\tENTER TEAM A VS TEAM B: \n\n\t\t");
                        fflush(stdin);
                        gets(team11);
                        printf("\t\tVS\n\t\t");
                        fflush(stdin);
                        gets(team22);
                        printf("\n\t\tTOSS:");
                        fflush(stdin);
                        gets(toss);
                        printf("\t\t%s WON THE TOSS\n",toss);
                        printf("\t\tBAT OR BOWL?");
                        gets(bat);
                        if(strcmp(bat,"BAT")==0 ||strcmp(bat,"bat")==0 )
                        {
                            printf("\t\tTEAM %s BATSMAN LIST :",toss);
                            scanf("%d",&n);
                        }
                        else
                        {
                            printf("\t\tOPPONENT TEAM BATSMAN LIST: ");
                            scanf("%d",&n);


                        }






//first innings batsman list
                        printf("\n1ST INNINGS: \n\n");
                        for(ii=1; ii<=n; ii++)
                        {
                            printf("BATSMAN %d: ",ii);
                            fflush(stdin);
                            gets(player_name[ii]);
                            printf("RUNS: ");
                            scanf("%d",&runs1[ii]);
                            printf("BALLS: ");
                            scanf("%d",&bowls1[ii]);
                            strike_rate1[ii]=(float)(100*runs1[ii])/bowls1[ii];
                            sum1 = sum1 + runs1[ii];

                        }
//first innings bowlers list
                        printf("\n");
                        printf("\t\tBOWLERS LIST:");
                        scanf("%d",&n);

                        for(ii=1; ii<=n; ii++)
                        {
                            printf("BOWLERS %d: ",ii);
                            fflush(stdin);
                            gets(player_name1[ii]);
                            printf("RUNS: ");
                            scanf("%d",&runs2[ii]);
                            printf("OVERS: ");
                            scanf("%lf",&over1[ii]);
                            printf("WICKET: ");
                            scanf("%d",&wicket1[ii]);
                            economy_rate1[ii]=runs2[ii]/over1[ii];
                            ov1=ov1+over1[ii];
                            wk1=wk1+wicket1[ii];


                        }
//2nd innings batsman list
                        printf("\n2ND INNINGS: \n\n");
                        printf("\t\tBATSMAN LIST:");
                        scanf("%d",&j);
                        for(jj=1; jj<=j; jj++)
                        {
                            printf("BATSMAN %d: ",jj);
                            fflush(stdin);
                            gets(player_name3[jj]);
                            printf("RUNS: ");
                            scanf("%d",&runs3[jj]);
                            printf("BALLS: ");
                            scanf("%d",&bowls2[jj]);
                            strike_rate2[jj]=(float)(100*runs3[jj])/bowls2[jj];
                            sum2 = sum2 + runs3[jj];

                        }
                        //2nd innings bowlers list
                        printf("\n");
                        printf("\t\tBOWLERS LIST:");
                        scanf("%d",&j);

                        for(jj=1; jj<=j; jj++)
                        {
                            printf("BOWLERS %d: ",jj);
                            fflush(stdin);
                            gets(player_name4[jj]);
                            printf("RUNS: ");
                            scanf("%d",&runs4[jj]);
                            printf("OVERS: ");
                            scanf("%lf",&over2[jj]);
                            printf("WICKET: ");
                            scanf("%d",&wicket2[jj]);
                            economy_rate2[jj]=runs4[jj]/over2[jj];
                            ov2=ov2+over2[jj];
                            wk2+=wicket2[jj];

                        }

//printing scorecard
                        system("cls");

                        fprintf(f,"\n1ST INNINGS: \n\n");
                        fprintf(f,"\n\t\t\t\tBATSMAN\t\t\tRUNS\t\t\tBALLS\t\tSR\n");
                        fprintf(f,"\t\t\t________________________________________________________________________________________________\n");
                        for(ii=1; ii<=n; ii++)

                        {
                            fprintf(f,"\t\t\t\t%s\t\t\t%d\t\t\t%d\t\t%.2lf\n",player_name[ii],runs1[ii],bowls1[ii],strike_rate1[ii]);
                            fprintf(f,"\t\t\t________________________________________________________________________________________________\n");
                        }
                        fprintf(f,"\n\n**BOWLING**\n");
                        fprintf(f,"\t\t\t\tBOWLERS\t\tRUNS\t\tOVER\t\tWICKET\t\tECO\n");
                        fprintf(f,"\t\t\t________________________________________________________________________________________________\n");
                        for(ii=1; ii<=n; ii++)
                        {
                            fprintf(f,"\t\t\t\t%s\t\t%d\t\t%.2lf\t\t%d\t\t%.2lf\n",player_name1[ii],runs2[ii],over1[ii],wicket1[ii],economy_rate1[ii]);
                            fprintf(f,"\t\t\t________________________________________________________________________________________________\n");
                        }

                        fprintf(f,"\n%s = %d/%d(%.2lfOVERS)\n",team11,sum1,wk1,ov1);

                        fprintf(f,"\n\n2nd INNINGS:");
                        fprintf(f,"\t\t\t\BATSMAN\t\t\tRUNS\t\t\tBALLS\t\tSR\n");
                        fprintf(f,"\t\t\t________________________________________________________________________________________________\n");
                        for(jj=1; jj<=j; jj++)
                        {
                            fprintf(f,"\t\t\t\t%s\t\t\t%d\t\t\t%d\t\t%.2lf\n",player_name3[jj],runs3[jj],bowls2[jj],strike_rate2[jj]);
                            fprintf(f,"\t\t\t________________________________________________________________________________________________\n");
                        }
                        fprintf(f,"\n\n**BOWLING**\n");
                        fprintf(f,"\t\t\t\tBOWLERS\t\tRUNS\t\tOVER\t\tWICKET\t\tECO\n");
                        fprintf(f,"\t\t\t________________________________________________________________________________________________\n");
                        for(jj=1; jj<=j; jj++)
                        {
                            fprintf(f,"\t\t\t\t%s\t\t%d\t\t%.2lf\t\t%d\t\t%.2lf\n",player_name4[jj],runs4[jj],over2[jj],wicket2[jj],economy_rate2[jj]);
                            fprintf(f,"\t\t\t________________________________________________________________________________________________\n");
                        }

                        fprintf(f,"\n%s = %d/%d(%.2lfOVERS)\n",team22,sum2,wk2,ov2);
                        wk2++;
                        //mstch result
                        if(sum1>sum2)
                        {
                            fprintf(f,"%s WON THIS MATCH",team11);
                        }
                        else
                        {
                            fprintf(f,"%s WON THIS MATCH\n\n",team22);
                        }

                        fclose(f);

                        f=fopen("scorecard.txt","r");

                        system("cls");

                        printf("\n1ST INNINGS: \n\n");
                        printf("\n\t\t\t\tBATSMAN\t\t\tRUNS\t\t\tBALLS\t\tSR\n");
                        printf("\t\t\t________________________________________________________________________________________________\n");
                        for(ii=1; ii<=n; ii++)

                        {
                            printf("\t\t\t\t%s\t\t\t%d\t\t\t%d\t\t%.2lf\n",player_name[ii],runs1[ii],bowls1[ii],strike_rate1[ii]);
                            printf("\t\t\t________________________________________________________________________________________________\n");
                        }
                        printf("\n\n**BOWLING**\n");
                        printf("\t\t\t\tBOWLERS\t\tRUNS\t\tOVER\t\tWICKET\t\tECO\n");
                        printf("\t\t\t________________________________________________________________________________________________\n");
                        for(ii=1; ii<=n; ii++)
                        {
                            printf("\t\t\t\t%s\t\t%d\t\t%.2lf\t\t%d\t\t%.2lf\n",player_name1[ii],runs2[ii],over1[ii],wicket1[ii],economy_rate1[ii]);
                            printf("\t\t\t________________________________________________________________________________________________\n");
                        }

                        printf("\n%s = %d/%d(%.2lfOVERS)\n",team11,sum1,wk1,ov1);

                        printf("\n\n2nd INNINGS:");
                        printf("\t\t\t\BATSMAN\t\t\tRUNS\t\t\tBALLS\t\tSR\n");
                        printf("\t\t\t________________________________________________________________________________________________\n");
                        for(jj=1; jj<=j; jj++)
                        {
                            printf("\t\t\t\t%s\t\t\t%d\t\t\t%d\t\t%.2lf\n",player_name3[jj],runs3[jj],bowls2[jj],strike_rate2[jj]);
                            printf("\t\t\t________________________________________________________________________________________________\n");
                        }
                        printf("\n\n**BOWLING**\n");
                        printf("\t\t\t\tBOWLERS\t\tRUNS\t\tOVER\t\tWICKET\t\tECO\n");
                        printf("\t\t\t________________________________________________________________________________________________\n");
                        for(jj=1; jj<=j; jj++)
                        {
                            printf("\t\t\t\t%s\t\t%d\t\t%.2lf\t\t%d\t\t%.2lf\n",player_name4[jj],runs4[jj],over2[jj],wicket2[jj],economy_rate2[jj]);
                            printf("\t\t\t________________________________________________________________________________________________\n");
                        }

                        printf("\n%s = %d/%d(%.2lfOVERS)\n",team22,sum2,wk2,ov2);
                        wk2++;
                        if(sum1>sum2)
                        {
                            printf("%s WON THIS MATCH",team11);
                        }
                        else
                        {
                            printf("%s WON THIS MATCH\n\n",team22);
                        }
                        fclose(f);


                    }
                    printf("\n\npress Q to back menu: ");
                    fflush(stdin);
                    data=getch();

                    if(data=='Q' || data=='q')
                    {
                        system("cls");
                        goto mainhome2;
                        break;

                    }
                    break;



home8:
                //cricket fixture

                case 'B':
                case 'b':
                    system("cls");
                    printf("\t\t***Fixture***\n");
                    printf("\t\t___________________\n");
                    printf("ENTER TEAM NAME: EX. KENYA: ");
                    fflush(stdin);
                    gets(team);

home3:
                    if (strcmp(team, "BANGLADESH") == 0 || strcmp(team, "bangladesh") == 0)
                    {
                        system("cls");
                        printf("A.Bangladesh Vs Westindies\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        printf("B.Bangladesh Vs Australia\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        printf("C.Bangladesh Vs Afghanistan\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        printf("Select Your Series Fixture>> EX. A OR B");
                        fflush(stdin);
                        select=getch();


                        {
                            if(select=='Q' || select=='q')
                            {
                                system("cls");
                                goto mainhome2;
                            }

                            switch(select)

                            {

                            case 'A':
                            case 'a':


                                system("cls");
                                FILE *fbangladesh1;
                                fbangladesh1 = fopen("fixture bangladesh vs westindies.txt","r");
                                char bang1[500];
                                while(!feof(fbangladesh1))
                                {
                                    fgets(bang1,500,fbangladesh1);
                                    printf("%s",bang1);
                                }
                                printf("\n Want to see Next Fixture? Press D & Press 'N' for Other Team  ");
                                fflush(stdin);
                                select=getch();
                                if(select=='D' || select=='d' )
                                {
                                    system("cls");
                                    goto home3;
                                }

                                else if(select=='N' || select=='n')
                                {
                                    system("cls");
                                    goto home8;
                                }


                                break;
                            case 'B':
                            case 'b':

                                system("cls");
                                FILE *fbangladesh2;
                                fbangladesh2 = fopen("fixture bangladesh vs AUSTRALIA.txt","r");
                                char bang2[500];
                                while(!feof(fbangladesh2))
                                {
                                    fgets(bang2,500,fbangladesh2);
                                    printf("%s",bang2);
                                }
                                fclose(fbangladesh2);
                                printf("\n Want to see Next Fixture? Press D & Press 'N' for Other Team  ");
                                fflush(stdin);
                                select=getch();
                                if(select=='D' || select=='d')
                                {
                                    system("cls");
                                    goto home3;
                                }

                                else if(select=='N' || select=='n')
                                {
                                    system("cls");
                                    goto home8;
                                }
                                break;
                                break;
                            case 'C':
                            case 'c':
                                system("cls");
                                FILE *fbangladesh3;
                                fbangladesh3 = fopen("fixture bangladesh vs Afghanistan.txt","r");
                                char bang3[500];
                                while(!feof(fbangladesh3))
                                {
                                    fgets(bang3,500,fbangladesh3);
                                    printf("%s",bang3);
                                }
                                fclose(fbangladesh3);
                                printf("\n Want to see Next Fixture? Press D & Press 'N' for Other Team  ");
                                fflush(stdin);
                                select=getch();
                                if(select=='D' || select=='d')
                                {
                                    system("cls");
                                    goto home3;
                                }

                                else if(select=='N' || select=='n')
                                {
                                    system("cls");
                                    goto home8;
                                }
                            }
                            printf("\n\nPress Q to back main menu: ");
                            fflush(stdin);
                            select=getch();
                            if(select=='Q' || select=='q')
                            {
                                system("cls");
                                goto mainhome2;

                            }

                        }
                    }

                    else if (strcmp(team, "AUSTRALIA") == 0 || strcmp(team, "australia") == 0)

                    {
                        system("cls");
                        printf("A.AUSTRALIA Vs PAKISTAN\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        printf("B.AUSTRALIA Vs ENGLAND\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        printf("Select Your Series Fixture>>");
                        fflush(stdin);
                        select=getch();



                        {
                            if(select=='Q' || select=='q')
                            {
                                system("cls");
                                goto mainhome2;
                            }

                            switch(select)

                            {

                            case 'A':
                            case 'a':
                                system("cls");
                                FILE *faus;
                                faus = fopen("fixture AUSTRALIA vs PAKISTAN.txt","r");
                                char aus[500];
                                while(!feof(faus))
                                {
                                    fgets(aus,500,faus);
                                    printf("%s",aus);
                                }
                                fclose(faus);
                                printf("\n Want to see Next Fixture? Press D & Press 'N' for Other Team  ");
                                fflush(stdin);
                                select=getch();
                                if(select=='D' || select=='d' )
                                {
                                    system("cls");
                                    goto home3;
                                }

                                else if(select=='N' || select=='n')
                                {
                                    system("cls");
                                    goto home8;
                                }

                                break;
                            case 'B':
                            case 'b':

                                system("cls");
                                FILE *faus2;
                                faus2 = fopen("fixture AUSTRALIA vs ENGLAND.txt","r");
                                char aus2[500];
                                while(!feof(faus2))
                                {
                                    fgets(aus2,500,faus2);
                                    printf("%s",aus2);
                                }
                                fclose(faus2);
                                printf("\n Want to see Next Fixture? Press D & Press 'N' for Other Team  ");
                                fflush(stdin);
                                select=getch();
                                if(select=='D' || select=='d')
                                {
                                    system("cls");
                                    goto home3;
                                }

                                else if(select=='N' || select=='n')
                                {
                                    system("cls");
                                    goto home8;
                                }



                            }
                            printf("\n\nPress Q to back main menu: ");
                            fflush(stdin);
                            select=getch();
                            if(select=='Q' || select=='q')
                            {
                                system("cls");
                                goto mainhome2;

                            }


                        }

                    }
                    else
                    {
                        printf("Team Not Found!!\n\n");
                        printf("Want To Search Again press 'Y'\n");
                        fflush(stdin);
                        select=getch();
                        if(select=='Y' || select=='y')
                        {
                            system("cls");
                            goto home8;
                        }
                        else
                        {
                              printf("\n\nPress Q to back main menu: ");
                            fflush(stdin);
                            select=getch();
                            if(select=='Q' || select=='q')
                            {
                                system("cls");
                                goto mainhome2;

                            }

                        }


                    }

                    break;
                case 'C':
                case 'c':
                    //recent match schedule
                    RECENTMATCH:
                    system("cls");
                    printf("\t\t\t\t\t\tRECENT MATCH UPDATE AND RESULT\n\n");
                    FILE *fpointer;
                    fpointer = fopen("scorecard.txt","r");
                    char recent_match[500];
                    while(!feof(fpointer))
                    {
                        fgets(recent_match,500,fpointer);
                        printf("%s",recent_match);

                    }
                    fclose(fpointer);
                    printf("\n\nPress Q to back main menu: ");
                    fflush(stdin);
                    select=getch();
                    if(select=='Q' || select=='q')
                    {
                        system("cls");
                        goto mainhome2;

                    }

                    break;
                    char search2[20],search3[20];
                    char batsman[20],bowler[20],allrounder[20],team[20],player[20];
                    int i;


                case 'D':
                case 'd':

home4:
                    //ranking list
                    if(strcmp(search2,"RANKING"))
                    {
                        system("cls");
                        printf("\t\t\t\t\tICC PLAYER AND TEAM RANKING\n");
                        printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                        printf(">>BATSMAN\n\n");
                        printf(">>BOWLER\n\n");
                        printf(">>ALL-ROUNDER\n\n");
                        printf(">>TEAM\n\n");
                        printf("Enter Your Choice> Ex: BATSMAN :\n\n");
                        fflush(stdin);
                        gets(search2);


                        if (strcmp(search2, "BATSMAN") == 0 || strcmp(search2, "batsman") == 0)
                        {
                            printf("1.ODI\t\t2.T20I\t\t3.TEST");
                            printf("\n\n Enter Choice > Ex. ODI : \n\n");
                            fflush(stdin);
                            gets(search2);

                            if(strcmp(search2,"ODI")==0 || strcmp(search2,"odi")==0)
                            {
                                system("cls");
                                FILE *fodiranking1;
                                fodiranking1 = fopen("BATSMAN ODI RANKING.txt","r");
                                char odiranking1[500];
                                while(!feof(fodiranking1))
                                {
                                    fgets(odiranking1,500,fodiranking1);
                                    printf("%s",odiranking1);
                                }
                                fclose(fodiranking1);


                                printf("\nwant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);


                            }



                            else if(strcmp(search2,"T20I")==0 || strcmp(search2,"t20i")==0)


                            {
                                system("cls");
                                FILE *ft20iranking1;
                                ft20iranking1 = fopen("BATSMAN T20I RANKING.txt","r");
                                char t20iranking1[500];
                                while(!feof(ft20iranking1))
                                {
                                    fgets(t20iranking1,500,ft20iranking1);
                                    printf("%s",t20iranking1);
                                }
                                fclose(ft20iranking1);
                                printf("\n\nwant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);
                            }
                            else if(strcmp(search2,"TEST")==0 || strcmp(search2,"test")==0)
                            {
                                system("cls");
                                FILE *ftestranking1;
                                ftestranking1 = fopen("BATSMAN TEST RANKING.txt","r");
                                char testranking1[500];
                                while(!feof(ftestranking1))
                                {
                                    fgets(testranking1,500,ftestranking1);
                                    printf("%s",testranking1);
                                }
                                fclose(ftestranking1);


                                printf("\n\nwant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);
                            }

                            if(strcmp(search2,"YES")==0 || strcmp(search2,"yes")==0)
                            {
                                system("cls");
                                goto home4;

                            }
                            else if(strcmp(search2,"SEARCH")==0 || strcmp(search2,"search")==0)
                            {
                                system("cls");
                                goto home5;
                            }
                            printf("\n\nPress Q to back main menu: ");
                            fflush(stdin);
                            select=getch();
                            if(select=='Q' || select=='q')
                            {
                                system("cls");
                                goto mainhome2;

                            }

                            break;

                        }
                        else if (strcmp(search2, "BOWLER") == 0 || strcmp(search2, "bowler") == 0)
                        {
                            printf("1.ODI\t\t2.T20I\t\t3.TEST");
                            printf("\n\n Enter Choice :Ex. TEST : \n\n");
                            fflush(stdin);
                            gets(search2);

                            if(strcmp(search2,"ODI")==0 || strcmp(search2,"odi")==0)
                            {
                                system("cls");
                                FILE *fodiranking2;
                                fodiranking2 = fopen("BOWLERS ODI RANKING.txt","r");
                                char odiranking2[500];
                                while(!feof(fodiranking2))
                                {
                                    fgets(odiranking2,500,fodiranking2);
                                    printf("%s",odiranking2);
                                }
                                fclose(fodiranking2);


                                printf("\nwant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);



                            }
                            else  if(strcmp(search2,"T20I")==0 || strcmp(search2,"t20i")==0)
                            {
                                FILE *ft20iranking2;
                                ft20iranking2 = fopen("BOWLERS T20I RANKING.txt","r");
                                char t20iranking2[500];
                                while(!feof(ft20iranking2))
                                {
                                    fgets(t20iranking2,500,ft20iranking2);
                                    printf("%s",t20iranking2);
                                }
                                fclose(ft20iranking2);

                                printf("\nwant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);




                            }
                            else if(strcmp(search2,"TEST")==0 || strcmp(search2,"test")==0)
                            {
                                system("cls");
                                FILE *ftestranking2;
                                ftestranking2 = fopen("BOWLERS TEST RANKING.txt","r");
                                char testranking2[500];
                                while(!feof(ftestranking2))
                                {
                                    fgets(testranking2,500,ftestranking2);
                                    printf("%s",testranking2);
                                }
                                fclose(ftestranking2);

                                printf("\nwant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);


                            }
                            if(strcmp(search2,"YES")==0 || strcmp(search2,"yes")==0)
                            {
                                system("cls");
                                goto home4;

                            }
                            else if(strcmp(search2,"SEARCH")==0 || strcmp(search2,"search")==0)
                            {
                                system("cls");
                                goto home5;
                            }
                            printf("\n\nPress Q to back main menu: ");
                            fflush(stdin);
                            select=getch();
                            if(select=='Q' || select=='q')
                            {
                                system("cls");
                                goto mainhome2;

                            }

                            break;

                        }
                        else if (strcmp(search2, "ALL-ROUNDER") == 0 || strcmp(search2, "all-rounder") == 0)
                        {

                            printf("1.ODI\t\t2.T20I\t\t3.TEST");
                            printf("\n\n Enter Choice :Ex. T2OI : \n\n");
                            fflush(stdin);
                            gets(search2);

                            if(strcmp(search2,"TEST")==0 || strcmp(search2,"test")==0)
                            {
                                system("cls");
                                FILE *ftestranking3;
                                ftestranking3 = fopen("ALL ROUNDER TEST RANKING.txt","r");
                                char testranking3[500];
                                while(!feof(ftestranking3))
                                {
                                    fgets(testranking3,500,ftestranking3);
                                    printf("%s",testranking3);
                                }
                                fclose(ftestranking3);


                                printf("\nwant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);


                            }
                            else if(strcmp(search2,"ODI")==0 || strcmp(search2,"odi")==0)
                            {
                                system("cls");
                                FILE *fodiranking3;
                                fodiranking3 = fopen("ALL ROUNDER ODI RANKING.txt","r");
                                char odiranking3[500];
                                while(!feof(fodiranking3))
                                {
                                    fgets(odiranking3,500,fodiranking3);
                                    printf("%s",odiranking3);
                                }
                                fclose(fodiranking3);


                                printf("\nwant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);


                            }
                            else if(strcmp(search2,"T20I")==0 || strcmp(search2,"t20i")==0)
                            {
                                system("cls");
                                FILE *ft20iranking3;
                                ft20iranking3 = fopen("ALL ROUNDER T20I RANKING.txt","r");
                                char t20iranking3[500];
                                while(!feof(ft20iranking3))
                                {
                                    fgets(t20iranking3,500,ft20iranking3);
                                    printf("%s",t20iranking3);
                                }
                                fclose(ft20iranking3);
                                printf("\nwant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);

                            }
                            if(strcmp(search2,"YES")==0 || strcmp(search2,"yes")==0)
                            {
                                system("cls");
                                goto home4;

                            }
                            else if(strcmp(search2,"SEARCH")==0 || strcmp(search2,"search")==0)
                            {
                                system("cls");
                                goto home5;
                            }
                            printf("\n\nPress Q to back main menu: ");
                            fflush(stdin);
                            select=getch();
                            if(select=='Q')
                            {
                                system("cls");
                                goto mainhome2;

                            }

                            break;



                        }
                        else if (strcmp(search2, "TEAM") == 0 || strcmp(search2, "team") == 0)
                        {

                            printf("1.ODI\t\t2.T20I\t\t3.TEST");
                            printf("\n\n Enter Choice : Ex. ODI : \n\n");
                            fflush(stdin);
                            gets(search2);
                            if(strcmp(search2,"TEST")==0 || strcmp(search2,"test")==0)
                            {

                                system("cls");
                                FILE *ftestranking4;
                                ftestranking4 = fopen("TEAM TEST RANKING.txt","r");
                                char testranking4[500];
                                printf("* The ratings are officially updated after each series rather than after each Test\n\n");

                                while(!feof(ftestranking4))
                                {
                                    fgets(testranking4,500,ftestranking4);
                                    printf("%s",testranking4);
                                }
                                fclose(ftestranking4);
                                printf("\n\nwant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);


                            }
                            else if(strcmp(search2,"ODI")==0 || strcmp(search2,"odi")==0)
                            {

                                system("cls");
                                FILE *fodiranking4;
                                fodiranking4 = fopen("TEAM ODI RANKING.txt","r");
                                char odiranking4[500];
                                printf("* The ratings are officially updated after each series rather than after each Test\n\n");
                                while(!feof(fodiranking4))
                                {
                                    fgets(odiranking4,500,fodiranking4);
                                    printf("%s",odiranking4);
                                }
                                fclose(fodiranking4);
                                printf("\n\nWant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);


                            }
                            else if(strcmp(search2,"T20I")==0 || strcmp(search2,"t20i")==0)
                            {
                                system("cls");
                                FILE *ft20iranking4;
                                ft20iranking4 = fopen("TEAM T20I RANKING.txt","r");
                                char t20iranking4[500];
                                printf("* The ratings are officially updated after each series rather than after each Test\n\n");
                                while(!feof(ft20iranking4))
                                {
                                    fgets(t20iranking4,500,ft20iranking4);
                                    printf("%s",t20iranking4);
                                }
                                fclose(ft20iranking4);


                                printf("\n\nWant to see more? Type <YES> or Want To searching Any player Type <SEARCH>");
                                fflush(stdin);
                                gets(search2);

                            }
                            if(strcmp(search2,"YES")==0 || strcmp(search2,"yes")==0)
                            {
                                system("cls");
                                goto home4;

                            }
                            else if(strcmp(search2,"SEARCH")==0 || strcmp(search2,"search")==0)
                            {
                                system("cls");
                                goto home5;

                            }
                        }
                        printf("\n\nPress Q to back main menu: ");
                        fflush(stdin);
                        select=getch();
                        if(select=='Q' || select=='q')
                        {
                            system("cls");
                            goto mainhome2;

                        }

                        break;
                    }
                    break;

                    char batsman1[20],bowler1[20],allrounder1[20],team1[20],player1[20];

home5:
                //players biodata & stats
                case 'E':
                case 'e':
                    system("cls");
                    printf("ENTER PLAYER FULL NAME IN BLOCK LETTER: EX. VIRAT KOHLI : \n");
                    fflush(stdin);
                    gets(batsman1);

                    if (strcmp(batsman1, "SHAKIB AL HASAN") == 0 || strcmp(batsman1, "shakib al hasan") == 0)
                    {
                        system("cls");
                        FILE *fplayer1;
                        fplayer1 = fopen("SHAKIB AL HASAN BIODATA.txt","r");
                        char player1[500];
                        while(!feof(fplayer1))
                        {
                            fgets(player1,500,fplayer1);
                            printf("%s",player1);
                        }
                        fclose(fplayer1);


                        printf("\n\nWant To See His Career Information?Type <PLAYER FULL NAME <space> INFO> \n");

                        gets(batsman1);
                        if (strcmp(batsman1, "SHAKIB AL HASAN INFO") == 0 || strcmp(batsman1, "shakib al hasan info") == 0)
                        {
                            system("cls");
                            FILE *fplayer2;
                            fplayer2 = fopen("SHAKIB AL HASAN INFO.txt","r");
                            char player2[500];
                            while(!feof(fplayer2))
                            {
                                fgets(player2,500,fplayer2);
                                printf("%s",player2);
                            }
                            fclose(fplayer2);

                        }
                    }
                    else    if (strcmp(batsman1, "TAMIM IQBAL") == 0 || strcmp(batsman1, "tamim iqbal") == 0)
                    {
                        system("cls");
                        FILE *fplayer3;
                        fplayer3 = fopen("tamim iqbal biodata.txt","r");
                        char player3[500];
                        while(!feof(fplayer3))
                        {
                            fgets(player3,500,fplayer3);
                            printf("%s",player3);
                        }
                        fclose(fplayer3);
                        printf("\n\nWant To See His Career Information?Type <PLAYER FULL NAME <space> INFO> \n");

                        gets(batsman1);
                        if (strcmp(batsman1, "TAMIM IQBAL INFO") == 0 || strcmp(batsman1, "tamim iqbal info") == 0)
                        {


                            system("cls");
                            FILE *fplayer4;
                            fplayer4 = fopen("tamim iqbal info.txt","r");
                            char player4[500];
                            while(!feof(fplayer4))
                            {
                                fgets(player4,500,fplayer4);
                                printf("%s",player4);
                            }
                            fclose(fplayer4);

                        }
                    }
                    else  if (strcmp(batsman1, "MASHRAFE MORTAZA") == 0 || strcmp(batsman1, "mashrafe mortaza") == 0)
                    {

                        system("cls");
                        FILE *fplayer5;
                        fplayer5 = fopen("MASHRAFE MORTAZA biodata.txt","r");
                        char player5[500];
                        while(!feof(fplayer5))
                        {
                            fgets(player5,500,fplayer5);
                            printf("%s",player5);
                        }
                        fclose(fplayer5);

                        printf("\n\nWant To See His Career Information?Type <PLAYER FULL NAME <space> INFO> \n");

                        gets(batsman1);
                        if (strcmp(batsman1, "MASHRAFE MORTAZA INFO") == 0 || strcmp(batsman1, "mashrafe mortaza info") == 0)
                        {
                            system("cls");
                            FILE *fplayer6;
                            fplayer6 = fopen("MASHRAFE MORTAZA info.txt","r");
                            char player6[500];
                            while(!feof(fplayer6))
                            {
                                fgets(player6,500,fplayer6);
                                printf("%s",player6);
                            }
                            fclose(fplayer6);


                        }

                    }
                    else    if (strcmp(batsman1, "VIRAT KOHLI") == 0 || strcmp(batsman1, "virat kohli") == 0)
                    {

                        system("cls");
                        FILE *fplayer7;
                        fplayer7 = fopen("virat kohli biodata.txt","r");
                        char player7[500];
                        while(!feof(fplayer7))
                        {
                            fgets(player7,500,fplayer7);
                            printf("%s",player7);
                        }
                        fclose(fplayer7);

                        printf("\n\nWant To See His Career Information?Type <PLAYER FULL NAME <space> INFO> \n");

                        gets(batsman1);
                        if (strcmp(batsman1, "virat kohli info") == 0 || strcmp(batsman1, "VIRAT KOHLI INFO") == 0)
                        {
                            system("cls");
                            FILE *fplayer8;
                            fplayer8 = fopen("VIRAT KOHLI info.txt","r");
                            char player8[500];
                            while(!feof(fplayer8))
                            {
                                fgets(player8,500,fplayer8);
                                printf("%s",player8);
                            }
                            fclose(fplayer8);


                        }





                    }
                    else  if (strcmp(batsman1, "mustafizur rahman") == 0 || strcmp(batsman1, "MUSTAFIZUR RAHMAN") == 0)
                    {
                        system("cls");
                        FILE *fplayer9;
                        fplayer9 = fopen("MUSTAFIZ biodata.txt","r");
                        char player9[500];
                        while(!feof(fplayer9))
                        {
                            fgets(player9,500,fplayer9);
                            printf("%s",player9);
                        }
                        fclose(fplayer9);

                        printf("\n\nWant To See His Career Information?Type <PLAYER FULL NAME <space> INFO> \n");

                        gets(batsman1);
                        if (strcmp(batsman1, "mustafizur rahman info") == 0 || strcmp(batsman1, "MUSTAFIZUR RAHMAN INFO") == 0)
                        {
                            system("cls");
                            FILE *fplayer10;
                            fplayer10 = fopen("MUSTAFIZ info.txt","r");
                            char player10[500];
                            while(!feof(fplayer10))
                            {
                                fgets(player10,500,fplayer10);
                                printf("%s",player10);
                            }
                            fclose(fplayer10);;
                        }
                    }
                    else
                    {
                        printf("Players Not found!!\n");
                        printf("Again TRY? press 'Y'");
                        select=getch();
                        if(select=='Y' || select=='y')
                        {
                            system("cls");
                            goto home5;
                        }
                    }

                    printf("\n\nPress Q to back main menu: ");
                    fflush(stdin);
                    select=getch();
                    if(select=='Q' || select=='q')
                    {
                        system("cls");
                        goto mainhome2;

                    }

                    break;
                    char f1[20],f2[20];
home6:
                case 'F':
                case 'f':
                    //features and calculation

                    system("cls");
                    printf("\n\n\t\t\t\t\t>>>Cricket statistics.\n");
                    printf("\t\t\t\t\t>>>Fantasy League Quiz.\n");
                    printf("What feature do you want to see now? Ex: FEATURE 1\n");
                    fflush(stdin);
                    gets(f1);
                    printf("\nOKK Sir!!! Loading....\n\n");

                    if(strcmp(f1,"FEATURE 1")==0 || strcmp(f1,"feature 1")==0)
                    {
criccalculator:
                        printf(">>>Batting statistics\n");
                        printf(">>>Bowling statistics\n\n");
                        printf("please choose your option right now: Ex. 1 : ");
                        gets(f1);
                        if(strcmp(f1,"1")==0)
                        {
                            printf(">>Batting average\n");
                            printf(">>Strike Rate\n");
                            printf(">>Run Rate\n");
                            gets(f1);

                            if(strcmp(f1,"1")==0)
                            {
home7:
                                system("cls");
                                char player1[20];
                                double total_runs,total_innings;
                                double average;
                                printf("\t\t\t\t\tBatting Average Calculator");
                                printf("\n\n\n\t\t\t\t\tEnter Player Name: ");
                                gets(player1);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tTotal number of runs  %s: ",player1);
                                scanf("%lf",&total_runs);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tTotal number of innings  %s:",player1);
                                fflush(stdin);
                                scanf("%lf",&total_innings);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                fflush(stdin);
                                average=total_runs/total_innings;
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("\n\t\t\t\t\tBatting Average of %s is %.2lf\n",player1,average);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

                                printf("\n\nwant to see more? press Yes otherwise press No for previous menu");
                                fflush(stdin);
                                gets(f1);
                                if(strcmp(f1,"YES")==0 || strcmp(f1,"yes")==0)
                                {
                                    system("cls");
                                    goto home7;
                                }
                                else if(strcmp(f1,"NO")==0 || strcmp(f1,"no")==0)
                                {
                                    system("cls");
                                    goto home6;

                                }

                            }

                            if(strcmp(f1,"2")==0)
                            {
home9:
                                system("cls");
                                char player2[20];
                                double runs_score,bowl_faced;
                                double strike_rate;
                                printf("\t\t\t\t\tSTRIKE RATE CALCULATOR");
                                printf("\n\n\n\t\t\t\t\tEnter Player Name: ");
                                gets(player2);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tNumber of runs scored %s in an innings: ",player2);
                                scanf("%lf",&runs_score);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tTotal Number of bowl %s was faced:",player2);
                                fflush(stdin);
                                scanf("%lf",&bowl_faced);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                fflush(stdin);
                                strike_rate=(100*runs_score)/bowl_faced;
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("\n\t\t\t\t\tStrike Rate of %s is %.2lf\n",player2,strike_rate);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

                                printf("\n\nwant to see more? press YES otherwise press NO for previous menu");
                                fflush(stdin);
                                gets(f1);
                                if(strcmp(f1,"YES")==0 || strcmp(f1,"yes")==0)
                                {
                                    system("cls");
                                    goto home9;
                                }
                                else if(strcmp(f1,"NO")==0 || strcmp(f1,"no")==0)
                                {
                                    system("cls");
                                    goto home6;
                                }

                            }
                            if(strcmp(f1,"3")==0)
                            {
home10:
                                system("cls");
                                char team1[20],team2[20];
                                double runs_total,over_total;
                                double run_rate;
                                printf("\t\t\t\t\tRUN RATE CALCULATOR");
                                printf("\n\n\n\t\t\t\t\tEnter Team Name(Batting side): ");
                                gets(team1);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\n\n\t\t\t\t\tEnter Team Name(Bowling side): ");
                                gets(team2);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tTotal Number of runs scored %s : ",team1);
                                scanf("%lf",&runs_total);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tOver(ODI/T20I):");
                                fflush(stdin);
                                scanf("%lf",&over_total);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                fflush(stdin);
                                run_rate=runs_total/over_total;
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("\n\t\t\t\t\tRequired run rate of %s is %.2lf\n",team2,run_rate);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\nwant to see more? press YES otherwise press NO for previous menu");
                                fflush(stdin);
                                gets(f1);
                                if(strcmp(f1,"YES")==0 || strcmp(f1,"yes")==0)
                                {
                                    system("cls");
                                    goto home10;
                                }
                                else if(strcmp(f1,"NO")==0 || strcmp(f1,"no")==0)
                                {
                                    system("cls");
                                    goto home6;

                                }

                            }

                        }
                        if(strcmp(f1,"2")==0)
                        {
                            printf(">>Bowling average\n");
                            printf(">>Strike Rate\n");
                            printf(">>Economy Rate\n");
                            gets(f1);
                            if(strcmp(f1,"1")==0)
                            {
home11:
                                system("cls");
                                char player3[20];
                                double total_runs_bowling,total_wicket;
                                double average_bowler;
                                printf("\t\t\t\t\tBowling Average Calculator");
                                printf("\n\n\n\t\t\t\t\tEnter Player Name: ");
                                gets(player3);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tTotal number of runs given by %s: ",player3);
                                scanf("%lf",&total_runs_bowling);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tTotal number of wicket taken by  %s:",player3);
                                fflush(stdin);
                                scanf("%lf",&total_wicket);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                fflush(stdin);
                                average_bowler=total_runs_bowling/total_wicket;
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("\n\t\t\t\t\tThe Average of %s is %.2lf\n",player3,average_bowler);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

                                printf("\n\nwant to see more? press Yes otherwise press No for previous menu");
                                fflush(stdin);
                                gets(f1);
                                if(strcmp(f1,"YES")==0 || strcmp(f1,"yes")==0)
                                {
                                    system("cls");
                                    goto home11;
                                }
                                else if(strcmp(f1,"NO")==0 || strcmp(f1,"no")==0)
                                {
                                    system("cls");
                                    goto home6;

                                }

                            }
                            if(strcmp(f1,"2")==0)
                            {
home12:
                                system("cls");
                                char player4[20];
                                double total_bowling,total_wicket_bowled;
                                double strike_bowler;
                                printf("\t\t\t\t\tBowling Strike Rate Count Calculator");
                                printf("\n\n\n\t\t\t\t\tEnter Player Name: ");
                                gets(player4);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tThe number of balls bowled by %s: ",player4);
                                scanf("%lf",&total_bowling);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tThe number of balls bowled per wicket taken by  %s:",player4);
                                fflush(stdin);
                                scanf("%lf",&total_wicket_bowled);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                fflush(stdin);
                                strike_bowler=total_bowling/total_wicket_bowled;
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("\n\t\t\t\t\tThe bowling strike rate of %s is %.2lf\n",player4,strike_bowler);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

                                printf("\n\nwant to see more? press YES otherwise press NO for previous menu");
                                fflush(stdin);
                                gets(f1);
                                if(strcmp(f1,"YES")==0 || strcmp(f1,"yes")==0)
                                {
                                    system("cls");
                                    goto home12;
                                }
                                else if(strcmp(f1,"NO")==0 || strcmp(f1,"no")==0)
                                {
                                    system("cls");
                                    goto home6;

                                }
                            }
                            if(strcmp(f1,"3")==0)
                            {

home13:
                                system("cls");
                                char player5[20];
                                double total_bowling_runs,total_bowled;
                                double ecorate_bowler;
                                printf("\t\t\t\t\tEconomy rate Count Calculator");
                                printf("\n\n\n\t\t\t\t\tEnter Player Name: ");
                                gets(player5);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tThe number of runs conceded per over by %s: ",player5);
                                scanf("%lf",& total_bowling_runs);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                                printf("\n\t\t\t\t\tThe number of Overs balls bowled by  %s:",player5);
                                fflush(stdin);
                                scanf("%lf",&total_bowled);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                fflush(stdin);
                                ecorate_bowler=total_bowling_runs/total_bowled;;
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("\n\t\t\t\t\tThe Economy rate of %s is %.2lf\n",player5,ecorate_bowler);
                                printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

                                printf("\n\nwant to see more? press YES otherwise press NO for previous menu");
                                fflush(stdin);
                                gets(f1);
                                if(strcmp(f1,"YES")==0 || strcmp(f1,"yes")==0)
                                {
                                    system("cls");
                                    goto home13;
                                }
                                else if(strcmp(f1,"NO")==0 || strcmp(f1,"no")==0)
                                {
                                    system("cls");
                                    goto home6;

                                }
                            }

                        }

                    }
                    //fantasy league quiz

                    else if(strcmp(f1,"FEATURE 2")==0 || strcmp(f1,"feature 2")==0)
                    {
                        char name[20];
                        char press;
QUIZ:
                        system("cls");
                        printf("\t\t\t\t\t<<<WELCOME TO FANTASY LEAGUE QUIZ>>>\n\n\n");
                        printf("QUIZ PART: 1.EASY\n");
                        printf("           2.HARD\n");
                        printf("           3.VIEW SCORE\n");
                        fflush(stdin);
                        select=getch();
                        switch(select)
                        {
                        case '1':

                            printf("ENTER YOUR NAME: \n");
                            gets(name);
                            system("cls");
                            printf("ARE YOU SURE WANT TO PLAY FANTASY LEAGUE QUIZ? PRESS 1");
                            fflush(stdin);
                            select=getch();
                            switch(select)
                            {
                            case '1':
                                system("cls");
                                printf("Q1.How many overs are there in each innings of a One Day International?\n");
                                printf("A.50\t\tB.75\nC.60\t\tD.25");
                                fflush(stdin);

                                select=getch();

                                int quiz=0;
                                if(select=='A' || select=='a')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUN");
                                    quiz=6;
                                    printf("\nyour score now %d",quiz);
                                    select=getch();


                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: 50 \n");

                                    printf("One Day International matches are also called Limited Overs Internationals. One Day Internationals are played between two teams.");
                                    getch();

                                }

                            case '2':

                                system("cls");
                                printf("Q2.In the One Day Internationals, a bowler can bowl a maximum of __________ overs.?\n");
                                printf("A.25\t\tB.10\nC.5\t\tD.UNLIMITED");
                                fflush(stdin);

                                select=getch();


                                if(select=='B' || select=='b')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz+=6;
                                    printf("\nyour score now %d ",quiz);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: 10 \n");
                                    printf("In Tests, a bowler may bowl unlimited overs, and in T20 a bowler may bowl a maximum of 4 overs.");
                                    getch();
                                }
                            case '3':
                                system("cls");
                                printf("Q3.Whom did Australia defeat to win the 50 over World Cup in 2007?\n");
                                printf("A.West Indies\t\tB.Srilanka\nC.India\t\t\tD.South Africa");
                                fflush(stdin);

                                select=getch();


                                if(select=='B' || select=='b')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz+=6;
                                    printf("\nyour score now %d ",quiz);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: Sri Lanka \n");
                                    printf("The start of play was delayed to rain. Due to the D/L method, Australia made 281/4 in 38 overs. However, again due to rain Sri Lanka made 215/8 in 36 overs..");
                                    getch();
                                }
                            case '4':
                                system("cls");
                                printf("Q4.Test cricket can be played over a period of up to how many days?\n");
                                printf("A.10\t\tB.4\nC.5\t\tD.6");
                                fflush(stdin);

                                select=getch();


                                if(select=='C' || select=='c')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz+=6;
                                    printf("\nyour score now %d ",quiz);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: 5 \n");
                                    printf("Test cricket is the longest form of cricket. Test cricket is played with white clothes and a red ball.");
                                    getch();
                                }
                            case '5':
                                system("cls");
                                printf("Q5. Don Bradman stastically being the greatest batman of all-time, had an batting test average of what?\n");
                                printf("A.96.25\t\tB.100.00\nC.91.25\t\t\tD.99.94");
                                fflush(stdin);

                                select=getch();


                                if(select=='D' || select=='d')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz+=6;
                                    printf("\nyour score now %d ",quiz);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: 99.94 \n");
                                    printf("Sir Donald George Bradman was born on 27 August 1908. He played for Australia.");
                                    getch();
                                }
                            case '6':
                                system("cls");
                                printf("Q6. Which of these is an 'extra' in cricket?\n");
                                printf("A.leg bye\t\tB. not counted\nC.front\t\t\tD.bowled over");
                                fflush(stdin);

                                select=getch();


                                if(select=='A' || select=='a')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz+=6;
                                    printf("\nyour score now %d ",quiz);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: Leg bye \n");
                                    printf("There are 4 extras in cricket as well as penalty runs. They include wide, no ball, bye, and leg bye.\nLeg bye is said when the ball hits the body of the batsman, provided the batsman is not out lbw (leg before wicket),\nthe batsman tried to avoid being it or tried to hit the ball.");
                                    getch();
                                }
                            case '7':
                                system("cls");
                                printf("Q7.How many umpires are there on the field during a cricket match?\n");
                                printf("A.3\t\tB.5\nC.2\t\t\tD.1");
                                fflush(stdin);

                                select=getch();


                                if(select=='C' || select=='c')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz+=6;
                                    printf("\nyour score now %d ",quiz);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: 2 \n");
                                    printf("Umpires are people who have the right to make decisions on the field. An umpire also keeps records and tells the completion of an over.");
                                    getch();
                                }
                            case '8':
                                system("cls");
                                printf("Q8.The laws of cricket are established by which England cricket club?\n");
                                printf("A. ICC\t\tB.Tasmania cricket club\nC.Marylebone Cricket club\t\t\tD.Sydney cricket club");
                                fflush(stdin);

                                select=getch();


                                if(select=='C' || select=='c')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz+=6;
                                    printf("\nyour score now %d ",quiz);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: Marylebone Cricket club \n");
                                    printf("The Marylebone Cricket Club was founded in 1787. It is based at Lords cricket ground.");
                                    getch();
                                }
                            case '9':
                                system("cls");
                                printf("Q9.How is a 'free hit' bowled in cricket?\n");
                                printf("A.If the bowler bowls away from the batsman\nB.If the bowler delivers a no ball by overstepping the crease, his next delivery is said to be a free hit\nC.If the batsman injures his legs\nD. If a batsman hits the wicket with his leg\n");
                                fflush(stdin);

                                select=getch();


                                if(select=='B' || select=='b')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz+=6;
                                    printf("\nyour score now %d ",quiz);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer:  If the bowler delivers a no ball by overstepping the crease, his next delivery is said to be a free hit \n");
                                    printf("Free hit rule is not applicable in Test matches. It is only applicable in ODI and T20.");

                                    getch();
                                }
                            case '10':
                                system("cls");
                                printf("Q10.What is the name of the major 50-over international tournament held every 4 years?\n");
                                printf("A.IPL\t\tB.Champions Trophy\nC.World Cup\t\t\tD.T20 CUP");
                                fflush(stdin);

                                select=getch();


                                if(select=='c' || select=='C')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz+=6;
                                    FILE *fquiz;
                                    fquiz=fopen("QUIZ SCORE EASY.txt","a+");
                                    fprintf(fquiz,"\n%s Total Score: %d/60 ",name,quiz);
                                    printf("\n%s Total Score: %d/60 ",name,quiz);
                                    fclose(fquiz);

                                    printf("ARE YOU READY TO PLAY QUIZ 2? PRESS Y ");
                                    fflush(stdin);

                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto QUIZ2;
                                    }

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: World Cup \n");
                                    printf("The first World Cup was hosted by England in 1975. West Indies won the cup.\n");
                                    FILE *fquiz;
                                    fquiz=fopen("QUIZ SCORE EASY.txt","a+");
                                    fprintf(fquiz,"\n%s Total Score: %d/60 ",name,quiz);
                                    printf("\n%s Total Score: %d/60 ",name,quiz);
                                    fclose(fquiz);
                                    printf("\n\nARE YOU READY TO PLAY QUIZ 2? PRESS Y ");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto QUIZ2;
                                    }
                                }



                            }
                            break;

                        case '2':
QUIZ2:
                            system("cls");
                            printf("ENTER YOUR NAME: \n");
                            gets(name);
                            system("cls");
                            printf("ARE YOU SURE WANT TO PLAY FANTASY LEAGUE QUIZ? PRESS 1");
                            fflush(stdin);
                            select=getch();
                            switch(select)
                            {
                            case '1':
                                system("cls");
                                printf("Q1.Which player scored the most centuries during the first seven World Cups?\n");
                                printf("A.Sachin Tendulkar\t\tB.Mark Waugh\nC.Sir Vivian RichardsMark\t\tD.Glenn Turner");
                                fflush(stdin);

                                select=getch();

                                int quiz1=0;
                                if(select=='B' || select=='b')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUN");
                                    quiz1=6;
                                    printf("\nyour score now %d",quiz1);
                                    select=getch();


                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: Mark Waugh \n");

                                    printf("Mark Waugh has 4 centuries from 3 WC campaigns. The others have 3 apiece.");
                                    getch();

                                }

                            case '2':

                                system("cls");
                                printf("Q2. Who won the first World Cup competition?\n");
                                printf("A.West Indies\t\tB.England\nC.South Africa\t\tD.Sri Lanka");
                                fflush(stdin);

                                select=getch();


                                if(select=='A' || select=='a')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz1+=6;
                                    printf("\nyour score now %d ",quiz1);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: West Indies \n");
                                    printf("West Indies beat Australia by 17 runs in the final, at Lord's on June 21, 1975.");
                                    getch();
                                }
                            case '3':
                                system("cls");
                                printf("Q3.When Javed Miandad first started playing Test Cricket, he was regarded as an all-rounder. What did he bowl?q\n");
                                printf("A. Right-Arm Off-spin\nB.Slow Left-Arm Chinaman\nC.Right-Arm Medium Pace\nD.Right-Arm Leg Break");
                                fflush(stdin);

                                select=getch();


                                if(select=='D' || select=='d')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz1+=6;
                                    printf("\nyour score now %d ",quiz1);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: Right-Arm Leg Break \n");
                                    printf("He was a reasonable leg-spinner, but sensibly stuck to batting as his forte.");
                                    getch();
                                }
                            case '4':
                                system("cls");
                                printf("Q4.Ricky Ponting is also known as what?\n");
                                printf("A.none of these\t\tB.rockster\nC.Punter\t\tD.ponts");
                                fflush(stdin);

                                select=getch();


                                if(select=='C' || select=='c')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz1+=6;
                                    printf("\nyour score now %d ",quiz1);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: Punter \n");
                                    printf("This is because of the fact that he likes a bet or two.");
                                    getch();
                                }
                            case '5':
                                system("cls");
                                printf("Q5.Who took the first ODI hat-trick?\n");
                                printf("A.Jalaluddin\t\tB.Dennis Lillee\nC.Wasim Akram\t\tD.Joel Garner4");
                                fflush(stdin);

                                select=getch();


                                if(select=='A' || select=='a')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz1+=6;
                                    printf("\nyour score now %d ",quiz1);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: Jalaluddin \n");
                                    printf("alaluddin dismissed, in successive deliveries: Rod Marsh, Bruce Yardley and Geoff Lawson on 20th September, 1982 at Hyderabad.");
                                    getch();
                                }
                            case '6':
                                system("cls");
                                printf("Q6. In what year was the first ODI played at Sharjah? \n");
                                printf("A.1987\t\tB.1989\nC.1992t\t\t\tD.1984");
                                fflush(stdin);

                                select=getch();


                                if(select=='D' || select=='d')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz1+=6;
                                    printf("\nyour score now %d ",quiz1);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: 1984 \n");
                                    printf("It was played between Pakistan and Sri Lanka on April 6, 1984.");
                                    getch();
                                }
                            case '7':
                                system("cls");
                                printf("Q7.Which two countries played the first tied ODI?\n");
                                printf("A.Pakistan and New Zealand\nB.England and Australia\nC.2Sri Lanka and India\nD.Australia and West Indies");
                                fflush(stdin);

                                select=getch();


                                if(select=='D' || select=='d')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz1+=6;
                                    printf("\nyour score now %d ",quiz1);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: Australia and West Indies \n");
                                    printf("West Indies made 5-222, and Australia replied with 9-222. ");
                                    getch();
                                }
                            case '8':
                                system("cls");
                                printf("Q8.Who was the first company to sponsor a ODI tournament?\n");
                                printf("A.Gillette\nB.Texaco\nC.Prudential\nD.Benson & Hedges");
                                fflush(stdin);

                                select=getch();


                                if(select=='C' || select=='c')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz1+=6;
                                    printf("\nyour score now %d ",quiz1);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: Prudential \n");
                                    printf("Prudential Insurance sponsored the very first ODI tournament ever held in England, in 1972");
                                    select=getch();
                                }
                            case '9':
                                system("cls");
                                printf("Q9. In 1997, Bangladesh won their first ICC trophy, beating Kenya to qualify for the World Cup(1999). Where was this tournament held?\n");
                                printf("A.India\nB.Malaysia\nC.Kenya\nD.Bangladesh\n");
                                fflush(stdin);

                                select=getch();


                                if(select=='B' || select=='b')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz1+=6;
                                    printf("\nyour score now %d ",quiz1);
                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer: Malaysia \n");
                                    printf("In the World Cup of 1999, Bangladesh won two of their matches - one against Scotland and the other against the strong Pakistani team.");

                                    getch();
                                }
                            case '10':
                                system("cls");
                                printf("Q10.When was Bangladesh made a test playing nation?\n");
                                printf("A.26th June, 2000\nB.16th July, 1998\nC.26th February, 2001\tD.16th August, 1999");
                                fflush(stdin);

                                select=getch();


                                if(select=='a' || select=='A')
                                {
                                    printf("\n\nCORRECT ANSWER!!! SIX RUNS");
                                    quiz1+=6;
                                    FILE *fquiz1;
                                    fquiz1=fopen("QUIZ SCORE HARD.txt","a+");
                                    fprintf(fquiz1,"\n%s Total Score: %d/60 ",name,quiz1);
                                    printf("\n%s Total Score: %d/60 ",name,quiz1);
                                    fclose(fquiz1);

                                    select=getch();

                                }
                                else
                                {

                                    printf("\n\nWrong!! Your Answer:26th June, 2000 \n");
                                    printf("They played their first test match against India at Dhaka; India won the match by 9 wickets.\n");
                                    FILE *fquiz1;
                                    fquiz1=fopen("QUIZ SCORE HARD.txt","a+");
                                    fprintf(fquiz1,"\n%s Total Score: %d/60 ",name,quiz1);
                                    printf("\n%s Total Score: %d/60 ",name,quiz1);
                                    fclose(fquiz1);
                                    getch();
                                }



                            }
                            break;
                        case '3':
                            system("cls");
                            printf("1.QUIZ EASY SCORE\n");
                            printf("2.QUIZ HARD SCORE\n");
                            select=getch();
                            switch(select)
                            {
                            case '1':
                                system("cls");
                                FILE *fquiz;
                                fquiz = fopen("QUIZ SCORE EASY.txt","r");
                                char scoreeasy[500];
                                while(!feof(fquiz))
                                {
                                    fgets(scoreeasy,500,fquiz);
                                    printf("%s",scoreeasy);

                                }
                                fclose(fquiz);
                                break;
                            case '2':
                                system("cls");
                                FILE *fquiz1;
                                fquiz1 = fopen("QUIZ SCORE HARD.txt","r");
                                char scoreeasy1[500];
                                while(!feof(fquiz1))
                                {
                                    fgets(scoreeasy1,500,fquiz1);
                                    printf("%s",scoreeasy1);

                                }
                                fclose(fquiz1);
                                break;
                            }



                        }


                    }


                    printf("\n\nPress Q to back main menu: ");
                    fflush(stdin);
                    select=getch();
                    if(select=='Q' || select=='q' )
                    {
                        system("cls");
                        goto mainhome2;

                    }
                    break;
                    char record;
                    char records[20];
                //cricket records books
                case 'G':
                case 'g':
                    RECORDS:
                    system("cls");
                    printf("\t\t\t<<<<SPORTS WORLD WIZARD----RECORDS BOOK>>>>\n");
                    printf("\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
                    printf("\t\t\tA. INTERNATIONAL CRICKET RECORDS\n");
                    printf("\t\t\tB. WORLD CUP RECORDS\n");
                    printf("\t\t\t ENTER YOUR CHOICE: Ex. A : \n\t\t\t");
                    fflush(stdin);
                    record=getch();
                    switch(record)
                    {
                    case 'A':
                    case 'a':
home14:
                        system("cls");
                        printf("##What DO You Want?\n");
                        printf("[Search Here]: Ex : RUN,WIN : ");
                        gets(records);


                        if(strcmp(records,"WIN")==0  || strcmp(records,"win")==0)
                        {
                            printf(">>>>>>>>A.GREATEST WIN RUNS\n");
                            printf(">>>>>>>>B.GREATEST WIN BALLS\n");
                            printf(">>>>>>>>C.HIGHEST RUN CHASING\n");
                            printf("Search Here: EX. GREATEST WIN RUNS : ");
                            gets(records);
                        }

                        if(strcmp(records,"GREATEST WIN RUNS")==0 || strcmp(records,"greatest win runs")==0)
                        {

                            FILE *frecords;
                            frecords = fopen("GREATEST WIN RUNS.txt","r");
                            char records[500];
                            while(!feof(frecords))
                            {
                                fgets(records,500,frecords);
                                printf("%s",records);
                            }
                            fclose(frecords);



                        }
                        if(strcmp(records,"GREATEST WIN BALLS")==0 || strcmp(records,"greatest win balla")==0)
                        {
                            FILE *frecords1;
                            frecords1 = fopen("GREATEST WIN BALLS.txt","r");
                            char records1[500];
                            while(!feof(frecords1))
                            {
                                fgets(records1,500,frecords1);
                                printf("%s",records1);
                            }
                            fclose(frecords1);
                        }
                        if(strcmp(records,"HIGHEST RUN CHASING")==0 || strcmp(records,"highest run chasing")==0)
                        {

                            FILE *frecords2;
                            frecords2 = fopen("HIGHEST RUN CHASING.txt","r");
                            char records2[500];
                            while(!feof(frecords2))
                            {
                                fgets(records2,500,frecords2);
                                printf("%s",records2);
                            }
                            fclose(frecords2);
                        }

                        else if(strcmp(records,"RUN")==0 || strcmp(records,"run")==0)
                        {

                            printf("MOST CAREER RUNS \n");
                            printf("HIGHEST INDIVIDUAL SCORES\n");
                             printf("Search Here: EX. MOST CAREER RUNS : ");
                            gets(records);
                        }



                        if(strcmp(records,"MOST CAREER RUNS" )==0 || strcmp(records,"most career run" )==0)

                        {
                            FILE *frecords3;
                            frecords3 = fopen("MOST CAREER RUNS.txt","r");
                            char records3[500];
                            while(!feof(frecords3))
                            {
                                fgets(records3,500,frecords3);
                                printf("%s",records3);
                            }
                            fclose(frecords3);
                        }
                        else if(strcmp(records,"HIGHEST INDIVIDUAL SCORES")==0 || strcmp(records,"highest individual scores")==0)
                        {
                            FILE *frecords4;
                            frecords4 = fopen("HIGHEST INDIVIDUAL SCORES.txt","r");
                            char records4[500];
                            while(!feof(frecords4))
                            {
                                fgets(records4,500,frecords4);
                                printf("%s",records4);
                            }
                            fclose(frecords4);
                        }

                        else if(strcmp(records,"BEST")==0 || strcmp(records,"best")==0)
                        {

                            printf("MOST CENTURY \n");
                            printf("FASTEST CENTURY\n");
                            printf("SEARCH HERE: EX. MOST CENTURY : ");
                            gets(records);
                        }


                        if(strcmp(records,"MOST CENTURY")==0 || strcmp(records,"most century")==0)
                        {
                            FILE *frecords5;
                            frecords5 = fopen("MOST CENTURY.txt","r");
                            char records5[500];
                            while(!feof(frecords5))
                            {
                                fgets(records5,500,frecords5);
                                printf("%s",records5);
                            }
                            fclose(frecords5);
                        }
                        if(strcmp(records,"FASTEST CENTURY")==0 || strcmp(records,"fastest century")==0)
                        {

                            FILE *frecords6;
                            frecords6 = fopen("FASTEST CENTURY.txt","r");
                            char records6[500];
                            while(!feof(frecords6))
                            {
                                fgets(records6,500,frecords6);
                                printf("%s",records6);
                            }
                            fclose(frecords6);
                        }



                        break;
                        char worldcup;
                    case 'B':
                    case 'b':
                        WORLDCUPRECORDS:
                        system("cls");
                        printf("\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                        printf("\t\t\t\t::::::::::::::::::WORLD CUP SECTION::::::::::::::::::\n");
                        printf("\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
                        printf("\t\t\t\t\tA. WORLD CUP HISTORY\n");
                        printf("\t\t\t\t\____________________________________\n");
                        printf("\t\t\t\t\tB. TOURNAMENT HISTORY\n");
                        printf("\t\t\t\t\____________________________________\n");
                        printf("\t\t\t\t\tC. AWARD\n");
                        printf("\t\t\t\t\____________________________________\n");
                        printf("\t\t\t\t\tD. TOURNAMENT RECORDS\n");
                        printf("\t\t\t\t\____________________________________\n");
                        printf("ENTER YOUR CHOICE: EX. A: ");
                        fflush(stdin);
                        worldcup=getch();
                        switch(worldcup)
                        {
                        case 'A':
                        case 'a':
                            system("cls");
                            printf("\t\t\t\t\t:>:ICC CRICKET WORLD CUP:<:\n");
                            printf("\t\t\t\t\t____________________________________\n");
                            FILE *frecords7;
                            frecords7 = fopen("CRICKET WORLD CUP.txt","r");
                            char records7[500];
                            while(!feof(frecords7))
                            {
                                fgets(records7,500,frecords7);
                                printf("%s",records7);
                            }
                            fclose(records7);


                            break;
                            char year[20];
                            char yes[20];
                        case 'B':
                        case 'b':
home15:
                            system("cls");
                            printf("\t\t\t\t\t:>:TOURNAMENT HISTORY:<:\n");
                            printf("\t\t\t\t\t____________________________________\n");
                            printf("SEARCH TOURNAMENT YEAR: ");
                            fflush(stdin);
                            gets(year);
                            if(strcmp(year,"1975")==0)
                            {
                                printf("\t\tOfficial Host: ENGLAND\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tFinal Venue : London\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tWinner: WEST INDIES(291/8) 60 OVERS\n");
                                printf("\t\t______________________________________\n");
                                printf("\t\tResult: West Indies Won by 17 runs\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tRunners UP: AUSTRALIA(274)all out 58.4 OVERS\n");
                                printf("\t\t_____________________________________\n\n");
                                printf("N.B IF YOU WANT TO SEE SCORECARD IN THIS MATCH TYPE YES OTHERWISE TYPE NO : ");
                                fflush(stdin);
                                gets(yes);
                                if(strcmp(yes,"YES")==0 || strcmp(yes,"yes")==0)
                                {
                                    printf("\t\t\t\tSCORECARD SUMMARY\n\n");
                                    printf("\t\tWest Indies 291/8(60 overs)\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tRB KANHAI    55(105) || GJ Gilmour 5/48(12)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tCH Lloyd     102(85) || JR Thomson 2/44(12)\n");
                                    printf("\t\t________________________________________________________\n\n");

                                    printf("\t\tAUSTRALIA 274(58.4 OVERS)\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tIM Chappell    62(93) || KD Boyce 4/50(12)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tA Turner    40(54) || CH Lloyd 1/38(12)\n");
                                    printf("\t\t________________________________________________________\n\n");
                                    printf("West Indies won by 17 runs\n");
                                    printf("Player of the MATCH: Clive Lloyd\n");


                                }
                                if(strcmp(yes,"NO")==0 || strcmp(yes,"no")==0)
                                {
                                    system("cls");
                                    goto home15;

                                }

                            }
                            else if(strcmp(year,"1979")==0)
                            {
                                printf("\t\tOfficial Host: ENGLAND\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tFinal Venue : London\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tWinner: WEST INDIES(286/9) 60 OVERS\n");
                                printf("\t\t______________________________________\n");
                                printf("\t\tResult: West Indies Won by 92 runs\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tRunners UP: ENGLAND(194) All out 51 OVERS\n");
                                printf("\t\t_____________________________________\n\n");
                                printf("N.B IF YOU WANT TO SEE SCORECARD IN THIS MATCH TYPE YES OTHERWISE TYPE NO : ");
                                fflush(stdin);
                                gets(yes);
                                if(strcmp(yes,"YES")==0 || strcmp(yes,"yes")==0)
                                {
                                    printf("\t\t\t\tSCORECARD SUMMARY\n\n");
                                    printf("\t\tWest Indies 286/9(60 overs)\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tCL King   86(66) ||IT Botham 2/44(12)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tIVA Richards*  138(157) || PH Edmonds 2/40(12)\n");
                                    printf("\t\t________________________________________________________\n\n");

                                    printf("\t\tAUSTRALIA 194(51 OVERS)\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tG Boycott    57(105) || CEH Croft 3/42(10)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tJM Brearley    64(130) || J Garner 5/38(11)\n");
                                    printf("\t\t________________________________________________________\n\n");
                                    printf("West Indies won by 92 runs\n");
                                    printf("Player of the MATCH: Sir Viv Richards\n");


                                }
                                if(strcmp(yes,"NO")==0 || strcmp(yes,"no")==0)
                                {
                                    system("cls");
                                    goto home15;

                                }

                            }
                            else if(strcmp(year,"1983")==0)
                            {
                                printf("\t\tOfficial Host: ENGLAND\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tFinal Venue : London\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tWinner: INDIA(183)ALL OUT (54.4) OVERS\n");
                                printf("\t\t______________________________________\n");
                                printf("\t\tResult: INDIA Won by 43 runs\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tRunners UP: WEST INDIES(140) All out 52 OVERS\n");
                                printf("\t\t_____________________________________\n\n");
                                printf("N.B IF YOU WANT TO SEE SCORECARD IN THIS MATCH TYPE YES OTHERWISE TYPE NO : ");
                                fflush(stdin);
                                gets(yes);
                                if(strcmp(yes,"YES")==0 || strcmp(yes,"yes")==0)
                                {
                                    printf("\t\t\t\tSCORECARD SUMMARY\n\n");
                                    printf("\t\tINDIA 183(54.4 OVERS)\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tSM Patil   27(29) ||MD Marshall 2/24(11)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tK Srikkanth  38(57) || AME Roberts 3/32(10)\n");
                                    printf("\t\t________________________________________________________\n\n");

                                    printf("\t\tWEST INDIES 140(52 OVERS)\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tPJL Dujon    25(73) || M Amarnath 3/12(7)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tIVA Richards    33(28) || S Madan Lal 3/31(12)\n");
                                    printf("\t\t________________________________________________________\n\n");
                                    printf("West Indies won by 43 runs\n");
                                    printf("Player of the MATCH: Mohinder Amarnath\n");


                                }
                                if(strcmp(yes,"NO")==0 || strcmp(yes,"no")==0)
                                {
                                    system("cls");
                                    goto home15;

                                }

                            }
                            else if(strcmp(year,"2007")==0)
                            {
                                printf("\t\tOfficial Host: WEST INDIES\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tFinal Venue : Bridgetown\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tWinner: AUSTRALIA(281/4)ALL OUT (38) OVERS\n");
                                printf("\t\t______________________________________\n");
                                printf("\t\tResult: AUSTRALIA Won by 53 runs\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tRunners UP: SRILANKA(215/8) 36 OVERS\n");
                                printf("\t\t_____________________________________\n\n");
                                printf("N.B IF YOU WANT TO SEE SCORECARD IN THIS MATCH TYPE YES OTHERWISE TYPE NO : ");
                                fflush(stdin);
                                gets(yes);
                                if(strcmp(yes,"YES")==0 || strcmp(yes,"yes")==0)
                                {
                                    printf("\t\t\t\tSCORECARD SUMMARY\n\n");
                                    printf("\t\tAUSTRALIA 281/4(38 OVERS)\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tAC Gilchrist   149(104) ||CRD Fernando 1/74(8)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tML Hayden  38(55) || SL Malinga 2/49(8)\n");
                                    printf("\t\t________________________________________________________\n\n");

                                    printf("\t\tSRI LANKA 215/8(36 OVERS))\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tST Jayasuriya    63(67) || MJ Clarke 2/33(5)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tKC Sangakkara    54(52) || A Symonds 1/6(2)\n");
                                    printf("\t\t________________________________________________________\n\n");
                                    printf("AUSTRALIA won by 53 runs(D\L)METHOD \n");
                                    printf("Player of the MATCH: Adam Gilchrist\n");


                                }
                                if(strcmp(yes,"NO")==0 || strcmp(yes,"no")==0)
                                {
                                    system("cls");
                                    goto home15;

                                }

                            }
                            else if(strcmp(year,"2011")==0)
                            {
                                printf("\t\tOfficial Host: INDIA||SRILANKA||BANGLADESH\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tFinal Venue : MUMBAI\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tWinner: INDIA(277/4) (48.2) OVERS\n");
                                printf("\t\t______________________________________\n");
                                printf("\t\tResult: INDIA Won by 6 WICKETS\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tRunners UP: SRILANKA(274/6) 50 OVERS\n");
                                printf("\t\t_____________________________________\n\n");
                                printf("N.B IF YOU WANT TO SEE SCORECARD IN THIS MATCH TYPE YES OTHERWISE TYPE NO : ");
                                fflush(stdin);
                                gets(yes);
                                if(strcmp(yes,"YES")==0 || strcmp(yes,"yes")==0)
                                {
                                    printf("\t\t\t\tSCORECARD SUMMARY\n\n");
                                    printf("\t\tSRI LANKA 274/6(50 OVERS))\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tDPMD Jayawardene*   103(88) ||Z Khan 2/60(10)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tKC Sangakkara  48(67) || Yuvraj Singh 2/49(10)\n");
                                    printf("\t\t________________________________________________________\n\n");

                                    printf("\t\tINDIA 277/4(48.2 OVERS)\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tMS Dhoni*    91(79) || TM Dilshan 1/27(5)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tG Gambhir    97(122) || SL Malinga 2/42(9)\n");
                                    printf("\t\t________________________________________________________\n\n");
                                    printf("INDIA Won by 6 WICKETS \n");
                                    printf("Player of the MATCH: MS Dhoni\n");


                                }
                                if(strcmp(yes,"NO")==0 || strcmp(yes,"no")==0)
                                {
                                    system("cls");
                                    goto home15;

                                }

                            }
                            else if(strcmp(year,"2007")==0)
                            {
                                printf("\t\tOfficial Host: WEST INDIES\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tFinal Venue : Bridgetown\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tWinner: AUSTRALIA(281/4)ALL OUT (38) OVERS\n");
                                printf("\t\t______________________________________\n");
                                printf("\t\tResult: AUSTRALIA Won by 53 runs\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tRunners UP: SRILANKA(215/8) 36 OVERS\n");
                                printf("\t\t_____________________________________\n\n");
                                printf("N.B IF YOU WANT TO SEE SCORECARD IN THIS MATCH TYPE YES OTHERWISE TYPE NO : ");
                                fflush(stdin);
                                gets(yes);
                                if(strcmp(yes,"YES")==0 || strcmp(yes,"yes")==0)
                                {
                                    printf("\t\t\t\tSCORECARD SUMMARY\n\n");
                                    printf("\t\tAUSTRALIA 281/4(38 OVERS)\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tAC Gilchrist   149(104) ||CRD Fernando 1/74(8)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tML Hayden  38(55) || SL Malinga 2/49(8)\n");
                                    printf("\t\t________________________________________________________\n\n");

                                    printf("\t\tSRI LANKA 215/8(36 OVERS))\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tST Jayasuriya    63(67) || MJ Clarke 2/33(5)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tKC Sangakkara    54(52) || A Symonds 1/6(2)\n");
                                    printf("\t\t________________________________________________________\n\n");
                                    printf("AUSTRALIA won by 53 runs(D\L)METHOD \n");
                                    printf("Player of the MATCH: Adam Gilchrist\n");


                                }
                                if(strcmp(yes,"NO")==0 || strcmp(yes,"no")==0)
                                {
                                    system("cls");
                                    goto home15;

                                }

                            }
                            else if(strcmp(year,"2015")==0)
                            {
                                printf("\t\tOfficial Host: AUSTRALIA||NEWZEALAND\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tFinal Venue : MELBOURNE\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tWinner: AUSTRALIA(186/3) (33.1) OVERS\n");
                                printf("\t\t______________________________________\n");
                                printf("\t\tResult: AUSTRALIA Won by 7 WICKETS\n");
                                printf("\t\t_____________________________________\n");
                                printf("\t\tRunners UP: NEWZEALAND(183)ALL OUT 45 OVERS\n");
                                printf("\t\t_____________________________________\n\n");
                                printf("N.B IF YOU WANT TO SEE SCORECARD IN THIS MATCH TYPE YES OTHERWISE TYPE NO : ");
                                fflush(stdin);
                                gets(yes);
                                if(strcmp(yes,"YES")==0 || strcmp(yes,"yes")==0)
                                {
                                    printf("\t\t\t\tSCORECARD SUMMARY\n\n");
                                    printf("\t\tNEW ZEALAND 183(45 OVERS)\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tLRPL Taylor  40(72) ||MG Johnson 3/30(9)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tGD Elliott  83(82) || JP Faulkner 3/36(9)\n");
                                    printf("\t\t________________________________________________________\n\n");

                                    printf("\t\tAUSTRALIA 186/3(33.1 OVERS)\n\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tMJ Clarke    74(72) || TA Boult 1/40(10)\n");
                                    printf("\t\t________________________________________________________\n");
                                    printf("\t\tSPD Smith*    56(71) || MJ Henry 2/46(9.1)\n");
                                    printf("\t\t________________________________________________________\n\n");
                                    printf("AUSTRALIA Won by 7 WICKETS \n");
                                    printf("Player of the MATCH: James Faulkner\n");


                                }
                                if(strcmp(yes,"NO")==0 || strcmp(yes,"no")==0)
                                {
                                    system("cls");
                                    goto home15;

                                }

                            }
                            else
                            {
                                printf("Not Found!!!!\n");
                                printf("Want to Search AGAIN? TYPE YES::");
                                fflush(stdin);
                                gets(yes);
                                if(strcmp(yes,"YES")==0 || strcmp(yes,"yes")==0)
                                {
                                    system("cls");
                                    goto home15;
                                }

                            }
                            break;

                        case 'C':
                        case 'c':
                            system("cls");
                            FILE *frecords8;
                            frecords8 = fopen("award.txt","r");
                            char records8[500];
                            while(!feof(frecords8))
                            {
                                fgets(records8,500,frecords8);
                                printf("%s",records8);
                            }
                            fclose(frecords8);

                            break;

                            char records;

                        case 'D':
                        case 'd':

                            printf("A. BATTING RECORDS\n");
                            printf("B. BOWLING RECORDS\n");
                            records=getch();
                            switch(records)
                            {
                            case 'A':
                            case 'a':
                                printf("##Most Runs: Sachin Tendulkar(india)-2278(1992-2011)\n\n");
                                printf("##Highest average: (min. 20 inns.) AB de Villiers(south africa)-63.52 (2007-2015)\n\n");
                                printf("##Highest score: Martin Guptill v  West Indies	237* (2015)\n\n");
                                printf("##Highest partnership	: Chris Gayle & Marlon Samuels\n");
                                printf("\t\t\t(2nd wicket) v  Zimbabwe	372 (2015)\n\n");
                                printf("##Most runs in a tournament: Sachin Tendulkar- 673-(2003)\n\n");
                                printf("##Most hundreds: Sachin Tendulkar	(6) (1992-2011)\n\n");
                                break;
                            case 'B':
                            case 'b':
                                printf("##Most wickets: Glenn McGrath(Australia )	71 (1996-2007\n\n)");
                                printf("##Lowest average: (min. 1000 balls bowled)	 Glenn McGrath(Australia)	18.19 (1996-2007\n\n)");
                                printf("##Best strike rate: (min. 1000 balls bowled)	Lasith Malinga(Sri Lanka )	23.8 (2007-2015)\n\n");
                                printf("##Best economy rate (min. 1000 balls bowled)	Andy Roberts(West Indies)	3.24 (1975-1983)\n\n");
                                printf("##Best bowling figures	Australia Glenn McGrath v  Namibia	7/15 (2003)\n\n");
                                break;

                            }
                        }

                    }


                    printf("\n\nPress Q to back main menu: ");
                    fflush(stdin);
                    select=getch();
                    if(select=='Q'|| select=='q')
                    {
                        system("cls");
                        goto mainhome2;

                    }

                    break;


                default:

                    printf("\n\nPress 0 to back main menu: ");
                    fflush(stdin);
                    choice=getch();
                    if(choice=='0')
                    {
                        system("cls");
                        goto home;

                    }

                    break;


                }
            }
            //football home page
            char football;
            char name[20];
            char goals[10];
            char assist[10];
            char year[10];
            char country[20];
            switch(data)
            {
            case 'B':
            case 'b':
                FOOTBALL:
                system("cls");
                printf("1. WORLD CUP\n");
                printf("2. GOAL MATHEMATICS\n");
                printf("3. PLAYER COMAPARISON\n");
                printf("4. CLUB MANAGEMENT\n");
                fflush(stdin);
                football=getch();
                switch(football)

                {
                case '1':
                    footballrecords:
                    system("cls");
                    printf("1. Players Records Book\n");
                    printf("2. World Cup 2018 Fixture\n");
                    printf("3. Champions List\n");
                    printf("Enter Choice: Ex. 1 :");
                    fflush(stdin);
                    football=getch();
                    switch(football)
                    {
playersrecords:
                    case '1':
                        system("cls");
                        printf("LEGENDS of TIME\n");
                        printf("Type LEGEND to Enter the Relm of Legend's History:");
                        fflush(stdin);
                        gets(year);



                        if(strcmp(year,"LEGEND")==0 || strcmp(year,"legend")==0)
                        {
                            printf("A. 1978\n");
                            printf("B. 1982\n");
                            printf("C. 1986\n");
                            printf("D. 1990\n");
                            printf("E. 1994\n");
                            printf("F. 1998\n");
                            printf("G. 2002\n");
                            printf("H. 2006\n");
                            printf("I. 2010\n");
                            printf("J. 2014\n");
                            printf("Select Your Time:\n");
                            fflush(stdin);
                            select=getch();

                            switch(select)
                            {
                            case 'A':
                            case 'a':
                                printf("1. Top Goal Scorer\n");
                                printf("2. Indisciplined Players\n ");
                                printf("Select Your Catagory:\n");
                                fflush(stdin);
                                select=getch();
                                switch(select)
                                {
                                case '1' :
                                    system("cls");
                                    FILE *fworldcup;
                                    fworldcup = fopen("1978 top goal scoreer.txt","r");
                                    char worldcup[500];
                                    while(!feof(fworldcup))
                                    {
                                        fgets(worldcup,500,fworldcup);
                                        printf("%s",worldcup);
                                    }
                                    fclose(fworldcup);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '2':
                                    system("cls");
                                    FILE *fworldcup1;
                                    fworldcup1 = fopen("1978 indisciplined player.txt","r");
                                    char worldcup1[500];
                                    while(!feof(fworldcup1))
                                    {
                                        fgets(worldcup1,500,fworldcup1);
                                        printf("%s",worldcup1);
                                    }
                                    fclose(fworldcup1);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;






                                }
                            case 'B':
                            case 'b':
                                printf("1. Top Goal Scorer\n");
                                printf("2. Indisciplined Players\n ");
                                printf("Select Your Catagory:\n");
                                fflush(stdin);
                                select=getch();
                                switch(select)
                                {
                                case '2':
                                    system("cls");
                                    FILE *fworldcup2;
                                    fworldcup2 = fopen("1982 indisciplined player.txt","r");
                                    char worldcup2[500];
                                    while(!feof(fworldcup2))
                                    {
                                        fgets(worldcup2,500,fworldcup2);
                                        printf("%s",worldcup2);
                                    }
                                    fclose(fworldcup2);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '1':
                                    system("cls");
                                    FILE *fworldcup3;
                                    fworldcup3 = fopen("1982 top scorere.txt","r");
                                    char worldcup3[500];
                                    while(!feof(fworldcup3))
                                    {
                                        fgets(worldcup3,500,fworldcup3);
                                        printf("%s",worldcup3);
                                    }
                                    fclose(fworldcup3);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;




                                }
                            case 'C':
                            case 'c':
                                printf("1. Top Goal Scorer\n");
                                printf("2. Indisciplined Players\n ");
                                printf("Select Your Catagory:\n");
                                fflush(stdin);
                                select=getch();
                                switch(select)
                                {
                                case '1':
                                    system("cls");
                                    FILE *fworldcup4;
                                    fworldcup4 = fopen("1986 top scorere.txt","r");
                                    char worldcup4[500];
                                    while(!feof(fworldcup4))
                                    {
                                        fgets(worldcup4,500,fworldcup4);
                                        printf("%s",worldcup4);
                                    }
                                    fclose(fworldcup4);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '2':
                                    system("cls");
                                    FILE *fworldcup5;
                                    fworldcup5 = fopen("1986 indisciplined.txt","r");
                                    char worldcup5[500];
                                    while(!feof(fworldcup5))
                                    {
                                        fgets(worldcup5,500,fworldcup5);
                                        printf("%s",worldcup5);
                                    }
                                    fclose(fworldcup5);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                }
                            case 'D':
                            case 'd':
                                printf("1. Top Goal Scorer\n");
                                printf("2. Indisciplined Players\n ");
                                printf("Select Your Catagory:\n");
                                fflush(stdin);
                                select=getch();
                                switch(select)
                                {
                                case '1':
                                    system("cls");
                                    FILE *fworldcup6;
                                    fworldcup6 = fopen("1990 TOP SCORER.txt","r");
                                    char worldcup6[500];
                                    while(!feof(fworldcup6))
                                    {
                                        fgets(worldcup6,500,fworldcup6);
                                        printf("%s",worldcup6);
                                    }
                                    fclose(fworldcup6);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '2':
                                    system("cls");
                                    FILE *fworldcup7;
                                    fworldcup7 = fopen("1990 indisciplined.txt","r");
                                    char worldcup7[500];
                                    while(!feof(fworldcup7))
                                    {
                                        fgets(worldcup7,500,fworldcup7);
                                        printf("%s",worldcup6);
                                    }
                                    fclose(fworldcup7);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;


                                }
                            case 'E':
                            case 'e':
                                printf("1. Top Goal Scorer\n");
                                printf("2. Indisciplined Players\n ");
                                printf("Select Your Catagory:\n");
                                fflush(stdin);
                                select=getch();
                                switch(select)
                                {
                                case '1':
                                    system("cls");
                                    FILE *fworldcup8;
                                    fworldcup8 = fopen("1994 TOP SCORER.txt","r");
                                    char worldcup8[500];
                                    while(!feof(fworldcup8))
                                    {
                                        fgets(worldcup8,500,fworldcup8);
                                        printf("%s",worldcup8);
                                    }
                                    fclose(fworldcup8);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '2':
                                    system("cls");
                                    FILE *fworldcup9;
                                    fworldcup9 = fopen("1994 indisciplined.txt","r");
                                    char worldcup9[500];
                                    while(!feof(fworldcup9))
                                    {
                                        fgets(worldcup9,500,fworldcup9);
                                        printf("%s",worldcup9);
                                    }
                                    fclose(fworldcup9);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;



                                }

                            case 'F':
                            case 'f':
                                printf("1. Top Goal Scorer\n");
                                printf("2. Indisciplined Players\n ");
                                printf("Select Your Catagory:\n");
                                fflush(stdin);
                                select=getch();
                                switch(select)
                                {
                                case '1':
                                    system("cls");
                                    FILE *fworldcup10;
                                    fworldcup10 = fopen("1998 TOP SCORER.txt","r");
                                    char worldcup10[500];
                                    while(!feof(fworldcup10))
                                    {
                                        fgets(worldcup10,500,fworldcup10);
                                        printf("%s",worldcup10);
                                    }
                                    fclose(fworldcup10);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '2':
                                    system("cls");
                                    FILE *fworldcup11;
                                    fworldcup11 = fopen("1998 indisciplined.txt","r");
                                    char worldcup11[500];
                                    while(!feof(fworldcup11))
                                    {
                                        fgets(worldcup11,500,fworldcup11);
                                        printf("%s",worldcup11);
                                    }
                                    fclose(fworldcup11);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;





                                }

                            case 'G':
                            case 'g':
                                printf("1. Top Goal Scorer\n");
                                printf("2. Indisciplined Players\n ");
                                printf("3. Top Assit Players\n");
                                printf("Select Your Catagory:\n");
                                fflush(stdin);
                                select=getch();
                                switch(select)
                                {
                                case '1':
                                    system("cls");
                                    FILE *fworldcup12;
                                    fworldcup12 = fopen("2002 TOP SCORER.txt","r");
                                    char worldcup12[500];
                                    while(!feof(fworldcup12))
                                    {
                                        fgets(worldcup12,500,fworldcup12);
                                        printf("%s",worldcup12);
                                    }
                                    fclose(fworldcup12);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '2':
                                    system("cls");
                                    FILE *fworldcup13;
                                    fworldcup13 = fopen("2002 indisciplined.txt","r");
                                    char worldcup13[500];
                                    while(!feof(fworldcup13))
                                    {
                                        fgets(worldcup13,500,fworldcup13);
                                        printf("%s",worldcup13);
                                    }
                                    fclose(fworldcup13);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '3':
                                    system("cls");
                                    FILE *fworldcup14;
                                    fworldcup14 = fopen("2002 top assister.txt","r");
                                    char worldcup14[500];
                                    while(!feof(fworldcup14))
                                    {
                                        fgets(worldcup14,500,fworldcup14);
                                        printf("%s",worldcup14);
                                    }
                                    fclose(fworldcup14);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;




                                }
                            case 'H':
                            case 'h':
                                printf("1. Top Goal Scorer\n");
                                printf("2. Indisciplined Players\n ");
                                printf("3. Top Assist Players\n");
                                printf("Select Your Catagory:\n");
                                fflush(stdin);
                                select=getch();
                                switch(select)
                                {
                                case '1':
                                    system("cls");
                                    FILE *fworldcup15;
                                    fworldcup15 = fopen("2006 TOP SCORER.txt","r");
                                    char worldcup15[500];
                                    while(!feof(fworldcup15))
                                    {
                                        fgets(worldcup15,500,fworldcup15);
                                        printf("%s",worldcup15);
                                    }
                                    fclose(fworldcup15);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '2':
                                    system("cls");
                                    FILE *fworldcup16;
                                    fworldcup16 = fopen("2006 indisciplined.txt","r");
                                    char worldcup16[500];
                                    while(!feof(fworldcup16))
                                    {
                                        fgets(worldcup16,500,fworldcup16);
                                        printf("%s",worldcup16);
                                    }
                                    fclose(fworldcup16);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '3':
                                    system("cls");
                                    FILE *fworldcup17;
                                    fworldcup17 = fopen("2006 top assister.txt","r");
                                    char worldcup17[500];
                                    while(!feof(fworldcup17))
                                    {
                                        fgets(worldcup17,500,fworldcup17);
                                        printf("%s",worldcup17);
                                    }
                                    fclose(fworldcup17);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;





                                }
                            case 'I':
                            case 'i':
                                printf("1. Top Goal Scorer\n");
                                printf("2. Top Assit Players\n");
                                printf("Select Your Catagory:\n");
                                fflush(stdin);
                                select=getch();
                                switch(select)
                                {

                                case '1':
                                    system("cls");
                                    FILE *fworldcup18;
                                    fworldcup18 = fopen("2010 TOP SCORER.txt","r");
                                    char worldcup18[500];
                                    while(!feof(fworldcup18))
                                    {
                                        fgets(worldcup18,500,fworldcup18);
                                        printf("%s",worldcup18);
                                    }
                                    fclose(fworldcup18);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;

                                case '2':
                                    system("cls");
                                    FILE *fworldcup19;
                                    fworldcup19 = fopen("2010 top assister.txt","r");
                                    char worldcup19[500];
                                    while(!feof(fworldcup19))
                                    {
                                        fgets(worldcup19,500,fworldcup19);
                                        printf("%s",worldcup19);
                                    }
                                    fclose(fworldcup19);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;




                                }
                            case 'J':
                            case 'j':
                                printf("1. Top Goal Scorer\n");
                                printf("2. Indisciplined Players\n ");
                                printf("3. Top Assit Players\n");
                                printf("Select Your Catagory:\n");
                                fflush(stdin);
                                select=getch();
                                switch(select)
                                {
                                case '1':
                                    system("cls");
                                    FILE *fworldcup20;
                                    fworldcup20 = fopen("2014 TOP SCORER.txt","r");
                                    char worldcup20[500];
                                    while(!feof(fworldcup20))
                                    {
                                        fgets(worldcup20,500,fworldcup20);
                                        printf("%s",worldcup20);
                                    }
                                    fclose(fworldcup20);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '2':
                                    system("cls");
                                    FILE *fworldcup21;
                                    fworldcup21 = fopen("2014 indisciplined.txt","r");
                                    char worldcup21[500];
                                    while(!feof(fworldcup21))
                                    {
                                        fgets(worldcup21,500,fworldcup21);
                                        printf("%s",worldcup21);
                                    }
                                    fclose(fworldcup21);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;
                                case '3':
                                    system("cls");
                                    FILE *fworldcup22;
                                    fworldcup22 = fopen("2014 top assister.txt","r");
                                    char worldcup22[500];
                                    while(!feof(fworldcup22))
                                    {
                                        fgets(worldcup22,500,fworldcup22);
                                        printf("%s",worldcup22);
                                    }
                                    fclose(fworldcup22);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto playersrecords;

                                    }
                                    break;



                                }


                            }

                        }
                        break;
                        char Group[20];
                    case '2':
FIFA:
                        printf("                                  FIFA WORLD CUP 2018 RUSSIA\n");

                        printf("A. GROUP A\n");
                        printf("B. GROUP B\n");
                        printf("C. GROUP C\n");
                        printf("D. GROUP D\n");
                        printf("E. GROUP E\n");
                        printf("F. GROUP F\n");
                        printf("G. GROUP G\n");
                        printf("H. GROUP H\n");
                        printf("Select your Group:\n");
                        fflush(stdin);
                        select=getch();
                        switch(select)
                        {
                        case 'A':
                        case 'a':
                            system("cls");
                            FILE *ffixture;
                            ffixture = fopen("GROUP A.txt","r");
                            char fixture[500];
                            while(!feof(ffixture))
                            {
                                fgets(fixture,500,ffixture);
                                printf("%s",fixture);
                            }
                            fclose(ffixture);
                            printf("\n\nwant to see more? press 'Y'\n");
                            fflush(stdin);
                            select=getch();
                            if(select=='Y' || select=='y')
                            {
                                system("cls");
                                goto FIFA;

                            }
                            break;
                        case 'B':
                        case 'b':
                            system("cls");
                            FILE *ffixture1;
                            ffixture1 = fopen("GROUP B.txt","r");
                            char fixture1[500];
                            while(!feof(ffixture1))
                            {
                                fgets(fixture1,500,ffixture1);
                                printf("%s",fixture1);
                            }
                            fclose(ffixture1);
                            printf("\n\nwant to see more? press 'Y'\n");
                            fflush(stdin);
                            select=getch();
                            if(select=='Y' || select=='y')
                            {
                                system("cls");
                                goto FIFA;

                            }
                            break;
                        case 'C':
                        case 'c':
                            system("cls");
                            FILE *ffixture2;
                            ffixture2 = fopen("GROUP C.txt","r");
                            char fixture2[500];
                            while(!feof(ffixture2))
                            {
                                fgets(fixture2,500,ffixture2);
                                printf("%s",fixture2);
                            }
                            fclose(ffixture2);
                            printf("\n\nwant to see more? press 'Y'\n");
                            fflush(stdin);
                            select=getch();
                            if(select=='Y' || select=='y')
                            {
                                system("cls");
                                goto FIFA;

                            }
                            break;
                        case 'D':
                        case 'd':
                            system("cls");
                            FILE *ffixture3;
                            ffixture3 = fopen("GROUP D.txt","r");
                            char fixture3[500];
                            while(!feof(ffixture3))
                            {
                                fgets(fixture3,500,ffixture3);
                                printf("%s",fixture3);
                            }
                            fclose(ffixture3);
                            printf("\n\nwant to see more? press 'Y'\n");
                            fflush(stdin);
                            select=getch();
                            if(select=='Y' || select=='y')
                            {
                                system("cls");
                                goto FIFA;

                            }
                            break;
                        case 'E':
                        case 'e':
                            system("cls");
                            FILE *ffixture4;
                            ffixture4 = fopen("GROUP E.txt","r");
                            char fixture4[500];
                            while(!feof(ffixture4))
                            {
                                fgets(fixture4,500,ffixture4);
                                printf("%s",fixture4);
                            }
                            fclose(ffixture4);
                            printf("\n\nwant to see more? press 'Y'\n");
                            fflush(stdin);
                            select=getch();
                            if(select=='Y' || select=='y')
                            {
                                system("cls");
                                goto FIFA;

                            }
                            break;
                        case 'F':
                        case 'f':
                            system("cls");
                            FILE *ffixture5;
                            ffixture5 = fopen("GROUP F.txt","r");
                            char fixture5[500];
                            while(!feof(ffixture5))
                            {
                                fgets(fixture5,500,ffixture5);
                                printf("%s",fixture5);
                            }
                            fclose(ffixture4);
                            printf("\n\nwant to see more? press 'Y'\n");
                            fflush(stdin);
                            select=getch();
                            if(select=='Y' || select=='y')
                            {
                                system("cls");
                                goto FIFA;

                            }
                            break;
                        case 'G':
                        case 'g':
                            system("cls");
                            FILE *ffixture6;
                            ffixture6 = fopen("GROUP G.txt","r");
                            char fixture6[500];
                            while(!feof(ffixture5))
                            {
                                fgets(fixture6,500,ffixture6);
                                printf("%s",fixture6);
                            }
                            fclose(ffixture6);
                            printf("\n\nwant to see more? press 'Y'\n");
                            fflush(stdin);
                            select=getch();
                            if(select=='Y' || select=='y')
                            {
                                system("cls");
                                goto FIFA;

                            }
                            break;
                        case 'H':
                        case 'h':
                            system("cls");
                            FILE *ffixture7;
                            ffixture7 = fopen("GROUP H.txt","r");
                            char fixture7[500];
                            while(!feof(ffixture7))
                            {
                                fgets(fixture7,500,ffixture7);
                                printf("%s",fixture7);
                            }
                            fclose(ffixture7);
                            printf("\n\nwant to see more? press 'Y'\n");
                            fflush(stdin);
                            select=getch();
                            if(select=='Y' || select=='y')
                            {
                                system("cls");
                                goto FIFA;

                            }
                            break;
                        }
                        break;
                    case '3':
                        system("cls");
                        printf("**CHAMPIONS LIST**");
                        printf("Champions of Time\n");
                        printf("Type Champion to Enter the Relm of Champion's History:");
                        gets(team);
CHAMP:
                        if(strcmp(team,"champion")==0 || strcmp(team,"CHAMPION")==0)
                        {
                            printf("A. Brazil\n");
                            printf("B. Argentina\n");
                            printf("C. Germany\n");
                            printf("D. Italy\n");
                            printf("E. Uruguay\n");
                            printf("F. England\n");
                            printf("G. France\n");
                            printf("H. Spain\n");
                            printf("Select Your Champion:\n");
                            fflush(stdin);
                            select=getch();
                            switch(select)
                            {
                            case 'A':
                            case 'a':
                                printf("Won 5 Cups For the Nation\n");
                                printf("Year    Venue                                Captain\n");
                                printf("1958    Råsunda Stadium                 Hilderaldo Bellini\n");
                                printf("1962    Estadio Nacional                Mauro Ramos\n");
                                printf("1970    Estadio Azteca                  Carlos Alberto Torres\n");
                                printf("1994    Rose Bowl                       Carlos Caetano BledornVerri\n");
                                printf("2002    International Stadium Yokohama  Marcos Evangelista de Moraes\n");
                                printf("\n\nwant to see more? press 'Y'\n");
                                fflush(stdin);
                                select=getch();
                                if(select=='Y' || select=='y')
                                {
                                    system("cls");
                                    goto CHAMP;

                                }
                                break;


                            case 'B':
                            case 'b':
                                printf("Won 2 Cups For the Nation\n");
                                printf("Year    Venue                                Captain\n");
                                printf("1978    Estadio Monumental                 Daniel Alberto Passarell\n");
                                printf("1986    Estadio Azteca               Diego Maradona\n");
                                printf("\n\nwant to see more? press 'Y'\n");
                                fflush(stdin);
                                select=getch();
                                if(select=='Y' || select=='y')
                                {
                                    system("cls");
                                    goto CHAMP;

                                }
                                break;


                            case 'C':
                            case 'c':
                                printf("Won 4 Cups For the Nation\n");
                                printf("Year    Venue                              Captain\n");
                                printf("1954    Wankdorf Stadium                 Fritz Walter");
                                printf("1974    Olympiastadion                Franz Beckenbauer\n");
                                printf("1990    Stadio Olimpico                 Lothar Herbert Matthäus\n");
                                printf("2014    Estádio do Maracanã                       Hilderaldo Bellini\n");
                                printf("\n\nwant to see more? press 'Y'\n");
                                fflush(stdin);
                                select=getch();
                                if(select=='Y' || select=='y')
                                {
                                    system("cls");
                                    goto CHAMP;

                                }
                                break;


                            case 'D':
                            case 'd':
                                printf("Won 4 Cups For the Nation\n");
                                printf("Year    Venue    Captain\n");
                                printf("1934    Stadio Nazionale PNF    Giuseppe “Peppino” Meazza\n");
                                printf("1938    Stade Olympique de Colombes               Giuseppe “Peppino” Meazza\n");
                                printf("1982    Santiago Bernabéu                  Dino Zoff\n");
                                printf("2006    Olympiastadion                       Fabio Cannavaro\n");
                                printf("\n\nwant to see more? press 'Y'\n");
                                fflush(stdin);
                                select=getch();
                                if(select=='Y' || select=='y')
                                {
                                    system("cls");
                                    goto CHAMP;

                                }
                                break;


                            case 'E':
                            case 'e':
                                printf("Won 2 Cups For the Nation\n");
                                printf("Year    Venue    Captain\n");
                                printf("1930    Estadio Centenario    José Nasazzi\n");
                                printf("1950    Estádio do Maracanã                Obdulio Varela\n");
                                printf("\n\nwant to see more? press 'Y'\n");
                                fflush(stdin);
                                select=getch();
                                if(select=='Y' || select=='y')
                                {
                                    system("cls");
                                    goto CHAMP;

                                }
                                break;


                            case 'F':
                            case 'f':
                                printf("Won 1 Cups For the Nation\n");
                                printf("Year    Venue    Captain\n");
                                printf("1966    Wembley Stadium    Bobby Moore\n");
                                printf("\n\nwant to see more? press 'Y'\n");
                                fflush(stdin);
                                select=getch();
                                if(select=='Y' || select=='y')
                                {
                                    system("cls");
                                    goto CHAMP;

                                }
                                break;


                            case 'G':
                            case 'g':
                                printf("Won 1 Cups For the Nation\n");
                                printf("Year    Venue    Captain\n");
                                printf("1998    Stade de France    Didier Claude Deschamps\n");
                                printf("\n\nwant to see more? press 'Y'\n");
                                fflush(stdin);
                                select=getch();
                                if(select=='Y' || select=='y')
                                {
                                    system("cls");
                                    goto CHAMP;

                                }
                                break;


                            case 'H':
                            case 'h':
                                printf("Won 1 Cups For the Nation\n");
                                printf("Year    Venue    Captain\n");
                                printf("2010    Soccer City    Iker Casillas\n");
                                printf("\n\nwant to see more? press 'Y'\n");
                                fflush(stdin);
                                select=getch();
                                if(select=='Y' || select=='y')
                                {
                                    system("cls");
                                    goto CHAMP;

                                }
                                break;



                            }
                        }

                    }
                     printf("\n\nPress Q to back main menu: ");
                    fflush(stdin);
                    select=getch();
                    if(select=='Q'|| select=='q')
                    {
                        system("cls");
                        goto FOOTBALL;

                    }
                    break;
                case '3':
                    system("cls");
                    FILE *fp, *ft;
                    char another, choice;

                    struct std
                    {
                        char name[40];
                        char Goal[40];
                        char Rating[40];
                        char Assist[40];
                        char tackle[40];
                        char foul[40];
                        char block[40];
                        char clear[40];
                        char interception[40];


                    };

                    struct std s;

                    char pname[40];

                    long int recsize;

                    fp = fopen("plyr.txt","rb+");
                    if(fp == NULL)
                    {
                        fp = fopen("plyr.txt","wb+");
                        if(fp == NULL)
                        {
                            printf("Cannot open file");
                            exit(1);
                        }
                    }

                    recsize = sizeof(s);

                    while(1)
                    {
                        system("cls");

                        printf("1. Add Player: \n");

                        printf("\n2. Show Records: \n");

                        printf("\n3. Modify Records: \n");

                        printf("\n4. Player Comparision: \n");

                        printf("\n5. Delete Records: \n");

                        printf("\n6. Exit\n");

                        printf("\nYour Choice: \n");
                        fflush(stdin);
                        choice  = getche();
                        switch(choice)
                        {
                        case '1':
                            system("cls");
                            fseek(fp,0,SEEK_END);

                            another = 'y';
                            another = 'Y';
                            while(another == 'y' || another=='Y')
                            {
                                printf("\n Enter name: ");
                                fflush(stdin);
                                gets(s.name);
                                printf("\n position: ");
                                fflush(stdin);
                                gets(s.Rating);
                                printf("\n Goal Scored: ");
                                fflush(stdin);
                                gets(s.Goal);
                                printf("\n Assists : ");
                                fflush(stdin);
                                gets(s.Assist);
                                printf("\n interception: ");
                                fflush(stdin);
                                gets(s.interception);

                                printf("\n Tackle: ");
                                fflush(stdin);
                                gets(s.tackle);
                                printf("\n Foul : ");
                                fflush(stdin);
                                gets(s.foul);
                                 printf("\n Block: ");
                                 fflush(stdin);
                                gets(s.block);
                                printf("\n Clear : ");
                                fflush(stdin);
                                gets(s.clear);


                                fwrite(&s,recsize,1,fp);

                                printf("\nAdd another record(y/n) ");
                                fflush(stdin);
                                another = getche();
                            }
                            break;
                        case '2':
                            system("cls");
                            rewind(fp);
                            while(fread(&s,recsize,1,fp)==1)
                            {
                                printf("\nPlayer Name:%s\nPosition:%s\nGoal Scored:%s\nAssist:%s\ninterception: %s\nTackle:%s\nFoul:%s\nBlock:%s\nClear%s\n\n",s.name,s.Rating,s.Goal,s.Assist,s.interception,s.tackle,s.foul,s.block,s.clear);
                            }
                            getch();
                            break;

                        case '3':
                            system("cls");
                            another = 'y';
                            another='Y';
                            while(another == 'y' || another=='Y')
                            {
                                printf("Enter the Player name to modify: ");
                                scanf("%s", pname);
                                rewind(fp);
                                while(fread(&s,recsize,1,fp)==1)
                                {
                                    if(strcmp(s.name,pname) != 0)
                                    {
                                        printf("\n Enter name: ");
                                        fflush(stdin);
                                gets(s.name);
                                printf("\n position: ");
                                fflush(stdin);
                                gets(s.Rating);
                                printf("\n Goal Scored: ");
                                fflush(stdin);
                                gets(s.Goal);
                                printf("\n Assists : ");
                                fflush(stdin);
                                gets(s.Assist);
                                printf("\n interception: ");
                                fflush(stdin);
                                gets(s.interception);
                                printf("\n Tackle: ");
                                fflush(stdin);
                                gets(s.tackle);
                                printf("\n Foul : ");
                                fflush(stdin);
                                gets(s.foul);
                                 printf("\n Block: ");
                                 fflush(stdin);
                                gets(s.block);
                                printf("\n Clear : ");
                                fflush(stdin);
                                gets(s.clear);
                                        fseek(fp,-recsize,SEEK_CUR);
                                        fwrite(&s,recsize,1,fp);
                                        break;
                                    }
                                    else
                                    {

                                        printf("Player Not Found.");
                                    }
                                }
                                printf("\nModify another record(y/n)");
                                fflush(stdin);
                                another = getche();
                            }
                            break;
                        case '5':
                            system("cls");
                            another = 'y';
                            another='Y';
                            while(another == 'y' || another=='Y')
                            {
                                printf("\nEnter name of the Player to delete: ");
                                fflush(stdin);
                                gets(pname);
                                ft = fopen("Tplyr.txt","wb+");
                                rewind(fp);
                                while(fread(&s,recsize,1,fp) == 1)
                                {
                                    if(strcmp(s.name,pname)!=0)
                                    {
                                        fwrite(&s,recsize,1,ft);
                                    }
                                }
                                fclose(fp);
                                fclose(ft);
                                remove("plyr.txt");
                                rename("Tplyr.txt","plyr.txt");
                                fp = fopen("plyr.txt", "rb+");
                                printf("Delete another record(y/n)");
                                fflush(stdin);
                                another = getche();
                            }
                            break;
                            case '4':
                            system("cls");
                            another = 'y';
                            another='Y';
                            while(another == 'y'|| another=='Y')
                            {
                                printf("\nEnter the Player name to Search: ");
                                fflush(stdin);
                                gets(pname);
                                rewind(fp);
                                while(fread(&s,recsize,1,fp)==1)
                                {
                                    if(strcmp(s.name,pname)==0)
                                    {
                                        if(strcmp(s.Rating,"Winger")==0 || strcmp(s.Rating,"Midfielder")==0)
                                        {
                                            printf("\nPlayer Name:%s\nPosition:%s\nGoal Scored:%s\nAssist:%s\n\n",s.name,s.Rating,s.Goal,s.Assist);
                                        }
                                        else if(strcmp(s.Rating,"Defence")==0)
                                        {
                                          printf("\nPlayer Name: %s\nPosition: %s\ninterception: %s\nTackle: %s\nFoul: %s\nBlock: %s\nClear: %s\n\n",s.name,s.Rating,s.tackle,s.foul,s.block);
                                        }
                                       else if(strcmp(s.Rating,"Goalkeeper")==0)
                                        {
                                           printf("\nPlayer Name:%s\nPosition:%s\nClear:%s\n\n",s.name,s.Rating,s.clear);
                                           break;


                                        }




                                    }


                               }
                                printf("\nSearch another Player To compare with Him(y/n)");
                                fflush(stdin);
                                another = getche();
                            }

                            break;
                        case '6':
                           printf("\n\n\n\npress Q to back menu: ");
                            fflush(stdin);
                            data=getch();

                            if(data=='Q' || data=='q')
                            {
                                system("cls");
                                goto FOOTBALL;

                            }
                        }
                    }
                    return 0;
                    break;
                case '4':
                    club:
                    system("cls");
                    printf("1. TRANSFER & LOAN\n\n");
                    printf("2. STADIUM");
                    select=getch();
                    switch(select)
                    {
                    case '2':
                        system("cls");
                            FILE *fp, *ft;
    char another, choice;

    struct std
    {
        char club[40];
        char home[40];
        char stadium[40];
        char capacity[40];
        char surface[20];
        char fsize[20];
    };

    struct std s;

    char cname[40];

    long int recsize;

    fp = fopen("stdm.txt","rb+");
    if(fp == NULL)
    {
        fp = fopen("stdm.txt","wb+");
        if(fp == NULL)
        {
            printf("Cannot open file");
            exit(1);
        }
    }

    recsize = sizeof(s);

    while(1)
    {
        system("cls");

        printf("1. Add Club Details: \n");

        printf("\n2. Show Details: \n");

        printf("\n3. Search Club\n");

        printf("\n4. Exit");

        printf("\nYour Choice: \n");
        fflush(stdin);
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END);

            another = 'y';
            another='Y';
            while(another == 'y' || another=='Y')
            {
                printf("\n Enter Club name: ");
                fflush(stdin);
                gets(s.club);
                printf("\n Home City: ");
                fflush(stdin);
                gets(s.home);
                printf("\n Stadium Name: ");
                fflush(stdin);
                gets(s.stadium);
                printf("\n Audience Capacity: ");
                fflush(stdin);
                gets(s.capacity);
                printf("\n Surface of the field:");
                fflush(stdin);
                gets(s.surface);
                printf("\n Field Size:");
                fflush(stdin);
                gets(s.fsize);


                fwrite(&s,recsize,1,fp);

                printf("\nAdd another detail(y/n) ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp);
            while(fread(&s,recsize,1,fp)==1)
            {
                printf("\nClub Name: %s\n",s.club);
                       printf("Home: %s\n",s.home);
                       printf("Stadium: %s\n",s.stadium);
                       printf("Capacity: %s\n",s.capacity);
                       printf("Field surface: %s\n",s.surface);
                       printf("Field size: %s\n\n",s.fsize);
            }
            getch();
            break;


        case '4':

                          printf("\n\n\n\npress Q to back menu: ");
                            fflush(stdin);
                            data=getch();

                            if(data=='Q' || data=='q')
                            {
                                system("cls");
                                goto FOOTBALL;

                            }
                            break;
        case '3':
                system("cls");
                            another = 'y';
                            another='Y';
                            while(another == 'y' || another=='Y')
                            {
                                printf("\nEnter Club: ");
                                fflush(stdin);
                                gets(pname);
                                rewind(fp);
                                while(fread(&s,recsize,1,fp)==1)
                                {
                                    if(strcmp(s.club,pname)==0)
                                    {
                                        printf("\nClub Name: %s\n",s.club);
                       printf("Home: %s\n",s.home);
                       printf("Stadium: %s\n",s.stadium);
                       printf("Capacity: %s\n",s.capacity);
                       printf("Field surface: %s\n",s.surface);
                       printf("Field size: %s\n\n",s.fsize);
                                        break;

                                    }


                               }
                                printf("\nSearch another club?(y/n)");
                                fflush(stdin);
                                another = getche();
                            }

                            break;
        }
    }
    break;
    char club1[20];
    char player[20];
    char club2[20];
    char  again;
        case '1':
            system("cls");
            printf("PLAYER DETAILS ON THE CLUB\n");
               printf("\nTYPE CLUB:");
             gets(club1);

         if(strcmp(club1,"CLUB")==0 || strcmp(club1,"club")==0)
    {
    transfer:
        printf("A. LA LIGA\n");
        printf("B. PRIMIER LEAGUGE\n");
        printf("C. BUNDESLIGA\n");
        printf("D. SERIA A\n");
        printf("E. LIGUE 1\n");
        printf("SELECT YOUR LEAGUE:\n");
        fflush(stdin);
        select=getch();
        switch(select)
        {
             case 'A':
        case 'a':
            printf("A. BARCELONA\n");
            printf("B. REAL MADRID\n");
            printf("C. ATLETICO MADRID\n");
            printf("SELECT YOUR TEAM:\n");
            fflush(stdin);
            again=getch();
            switch(again)
            {
                 case 'A':
                case 'a':
                    system("cls");
                                    FILE *ftransfer;
                                    ftransfer = fopen("Barcelona.txt","r");
                                    char transfer[500];
                                    while(!feof(ftransfer))
                                    {
                                        fgets(transfer,500,ftransfer);
                                        printf("%s",transfer);
                                    }
                                    fclose(ftransfer);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;
                                      case 'B':
                case 'b':
                    system("cls");
                                    FILE *ftransfer1;
                                    ftransfer1 = fopen("REAL MADRID.txt","r");
                                    char transfer1[500];
                                    while(!feof(ftransfer1))
                                    {
                                        fgets(transfer1,500,ftransfer1);
                                        printf("%s",transfer1);
                                    }
                                    fclose(ftransfer1);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;
                                       case 'C':
                case 'c':
                    system("cls");
                                    FILE *ftransfer2;
                                    ftransfer2 = fopen("ATLETICO MADRID.txt","r");
                                    char transfer2[500];
                                    while(!feof(ftransfer2))
                                    {
                                        fgets(transfer2,500,ftransfer2);
                                        printf("%s",transfer2);
                                    }
                                    fclose(ftransfer2);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;



            }
            break;
              case 'B':
            case 'b':
            printf("A. ARSENAL\n");
            printf("B. MANCHESTER UNITED\n");
            printf("C. CHELSEA\n");
            printf("D. MANCHESTER CITY\n");
            printf("SELECT YOUR TEAM:\n");
            fflush(stdin);
            again=getch();
            switch(again)
            {
                 case 'A':
                case 'a':
                    system("cls");
                                    FILE *ftransfer3;
                                    ftransfer3 = fopen("ARSENAL.txt","r");
                                    char transfer3[500];
                                    while(!feof(ftransfer3))
                                    {
                                        fgets(transfer3,500,ftransfer3);
                                        printf("%s",transfer3);
                                    }
                                    fclose(ftransfer3);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;
                                      case 'B':
                case 'b':
                    system("cls");
                                    FILE *ftransfer4;
                                    ftransfer4 = fopen("MANCHESTER UNITED.txt","r");
                                    char transfer4[500];
                                    while(!feof(ftransfer4))
                                    {
                                        fgets(transfer4,500,ftransfer4);
                                        printf("%s",transfer4);
                                    }
                                    fclose(ftransfer4);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;
                                       case 'C':
                case 'c':
                    system("cls");
                                    FILE *ftransfer5;
                                    ftransfer5 = fopen("CHELSEA.txt","r");
                                    char transfer5[500];
                                    while(!feof(ftransfer5))
                                    {
                                        fgets(transfer5,500,ftransfer5);
                                        printf("%s",transfer5);
                                    }
                                    fclose(ftransfer5);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;
                                        case 'D':
                case 'd':
                    system("cls");
                                    FILE *ftransfer6;
                                    ftransfer6 = fopen("MANCHESTER CITY.txt","r");
                                    char transfer6[500];
                                    while(!feof(ftransfer6))
                                    {
                                        fgets(transfer6,500,ftransfer6);
                                        printf("%s",transfer6);
                                    }
                                    fclose(ftransfer6);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;



            }
            break;
             case 'C':
        case 'c':
            printf("A. Borussia Dortmund\n");
            printf("B. FC Bayern Munich\n");
            printf("SELECT YOUR TEAM:\n");
            fflush(stdin);
            again=getch();
            switch(again)
            {
                  case 'A':
                case 'a':
                    system("cls");
                                    FILE *ftransfer7;
                                    ftransfer7 = fopen("Borussia Dortmund.txt","r");
                                    char transfer7[500];
                                    while(!feof(ftransfer7))
                                    {
                                        fgets(transfer7,500,ftransfer7);
                                        printf("%s",transfer7);
                                    }
                                    fclose(ftransfer7);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;
                                      case 'B':
                case 'b':
                    system("cls");
                                    FILE *ftransfer8;
                                    ftransfer8 = fopen("FC Bayern Munich.txt","r");
                                    char transfer8[500];
                                    while(!feof(ftransfer8))
                                    {
                                        fgets(transfer8,500,ftransfer8);
                                        printf("%s",transfer8);
                                    }
                                    fclose(ftransfer8);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;


            }
            break;
            case 'D':
        case 'd':
            printf("A. JUVENTUS\n");
            printf("B. NAPOLI\n");
            fflush(stdin);
            again=getch();
            switch(again)
            {
                 case 'A':
                case 'a':
                    system("cls");
                                    FILE *ftransfer9;
                                    ftransfer9 = fopen("JUVENTUS.txt","r");
                                    char transfer9[500];
                                    while(!feof(ftransfer9))
                                    {
                                        fgets(transfer9,500,ftransfer9);
                                        printf("%s",transfer9);
                                    }
                                    fclose(ftransfer9);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;
                                      case 'B':
                case 'b':
                    system("cls");
                                    FILE *ftransfer10;
                                    ftransfer10 = fopen("NAPOLI.txt","r");
                                    char transfer10[500];
                                    while(!feof(ftransfer10))
                                    {
                                        fgets(transfer10,500,ftransfer10);
                                        printf("%s",transfer10);
                                    }
                                    fclose(ftransfer10);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;





            }
            break;
             break;
            case 'E':
            case 'e':
                system("cls");
                printf(" PARIS SAINT GERMAN \n");

                                    FILE *ftransfer11;
                                    ftransfer11 = fopen("PARIS SAINT GERMAN.txt","r");
                                    char transfer11[500];
                                    while(!feof(ftransfer11))
                                    {
                                        fgets(transfer11,500,ftransfer11);
                                        printf("%s",transfer11);
                                    }
                                    fclose(ftransfer11);
                                    printf("\n\nwant to see more? press 'Y'\n");
                                    fflush(stdin);
                                    select=getch();
                                    if(select=='Y' || select=='y')
                                    {
                                        system("cls");
                                        goto transfer;

                                    }
                                    break;







        }



    }
            printf("\n\n\n\npress Q to back menu: ");
                            fflush(stdin);
                            data=getch();

                            if(data=='Q' || data=='q')
                            {
                                system("cls");
                                goto FOOTBALL;

                            }


                    }
                      printf("\n\n\n\npress Q to back menu: ");
                            fflush(stdin);
                            data=getch();

                            if(data=='Q' || data=='q')
                            {
                                system("cls");
                                goto FOOTBALL;

                            }

            break;
        case '2':
             system("cls");
           double x, ret, val,a,v,t,p,m,f,sa;
#define PI 3.14159265

   printf("Enter Velocity of Ball(m/s) : \n");
   scanf("%lf",&v);
   printf("Time to Enter the ball(sec) : \n");
   scanf("%lf",&t);
   a=v/t;
   printf("Acceleration of Ball= %.2lf(m/s)\n\n",a);
   printf("Enter Mass of Ball(kg): ");
   scanf("%lf",&m);
   f=m*a;
   printf("\nPlayers Force=%.2lf N\n\n",f);
   printf("Enter the power of player(Watt): ");
   scanf("%lf",&p);
   printf("\nEnter Linear Distance from the Goal Post(m): ");
   scanf("%lf",&sa);
   x=(p*t)/(f*sa);

   printf("\n\nThe Angel from the player to creat Goal %.2lf degrees\n", acos(x)*180/PI);
            printf("\n\n\n\npress Q to back menu: ");
                            fflush(stdin);
                            data=getch();

                            if(data=='Q' || data=='q')
                            {
                                system("cls");
                                goto FOOTBALL;

                            }
            break;

                }
                printf("\n\n\n\npress 0 to back MAIN MENU: ");
                fflush(stdin);
                data=getch();

             if(data=='0' || data=='0')
                {
                    system("cls");
                    goto home;

                }

            }

            char engine[20];
            char engine2;
            switch(data)
            {
//serach engine:
search:
            case 'C':
            case 'c':
                system("cls");
                printf("                                     WELCOME TO SPORTS WORLD WIZARD SEARCH ENGINE");
                printf("\n\n                                               [SEARCH HERE]:");
                fflush(stdin);
                gets(engine);
                if(strcmp(engine,"CRICKET")==0 || strcmp(engine,"cricket")==0)
                {
                    system("cls");
                    goto mainhome2;
                }
                else if(strcmp(engine,"C")==0 || strcmp(engine,"c")==0)
                {
                    printf("Did you Search Cricket? or search cricket statistic? or Club Management?\n\nif Cricket press '1' If crickrt stastistic press '2' or press '3' for club management\n\nother  wise press any key to back search menu\n");
                    engine2=getch();
                    if(engine2=='1')
                    {
                        system("cls");
                        goto mainhome2;

                    }
                    else if(engine2=='2')
                    {
                        system("cls");
                        goto criccalculator;

                    }
                     else if(engine2=='3')
                    {
                        system("cls");
                        goto club;

                    }

                    else
                    {
                        system("cls");
                        goto search;
                    }



                }

                else if(strcmp(engine,"CRIC")==0 || strcmp(engine,"cric")==0)
                {
                    printf("Did you Search Cricket? or search cricket statistic? \n\nif Cricket press '1' If crickrt stastistic press '2'\n\nother  wise press any key to back search menu\n");
                    engine2=getch();
                    if(engine2=='1')
                    {
                        system("cls");
                        goto mainhome2;

                    }
                    else if(engine2=='2')
                    {
                        system("cls");
                        goto criccalculator;

                    }
                    else
                    {
                        system("cls");
                        goto search;
                    }



                }
                else if(strcmp(engine,"SCORECARD")==0 || strcmp(engine,"scorecard")==0)
                {
                    system("cls");
                    goto scorecard;

                }
                else if(strcmp(engine,"S")==0 || strcmp(engine,"s")==0)
                {
                    printf("Did you Search scorecard? or search stats? \n\nif <scorecard> press '1' If <stats> press '2'\n\notherwise press any key to back search menu\n");
                    engine2=getch();
                    if(engine2=='1')
                    {
                        system("cls");
                        goto scorecard;
                    }
                    else if(engine2=='2')
                    {
                        system("cls");
                        goto home5;

                    }
                    else
                    {
                        system("cls");
                        goto search;
                    }




                }
                else if(strcmp(engine,"SCORE")==0 || strcmp(engine,"score")==0)
                {
                    printf("Did you Search scorecard?\n\nif <scorecard> press 'Y'\n\notherwise press any key to back search menu\n");
                    engine2=getch();
                    if(engine2=='Y' || engine2=='y')
                    {
                        system("cls");
                        goto scorecard;
                    }
                    else
                    {
                        system("cls");
                        goto search;
                    }
                }
                else if(strcmp(engine,"STATS")==0 || strcmp(engine,"stats")==0)
                {
                    system("cls");
                    goto home5;
                }
                else if(strcmp(engine,"PLAYER")==0 || strcmp(engine,"player")==0 )
                {
                    printf("Did you search 1.Player records Football\n2.Players biodata cricket? press 1 OR 2 otherwise press any key to back search menu\n");
                    engine2=getch();
                     if(engine2=='1'|| engine2=='1')
                     {
                          system("cls");
                        goto playersrecords;

                     }
                     else if(engine2=='2'|| engine2=='2')
                     {
                         system("cls");
                         goto home5;

                     }
                      else
                    {
                        system("cls");
                        goto search;
                    }
                }
                  else if(strcmp(engine,"P")==0 || strcmp(engine,"p")==0 )
                  {
                      printf("Did you search 1.Player records Football\n2.Players biodata cricket? press 1 OR 2 otherwise press any key to back search menu\n");
                    engine2=getch();
                     if(engine2=='1'|| engine2=='1')
                     {
                          system("cls");
                        goto playersrecords;

                     }
                     else if(engine2=='2'|| engine2=='2')
                     {
                         system("cls");
                         goto home5;

                     }
                      else
                    {
                        system("cls");
                        goto search;
                    }


                  }
                  else if(strcmp(engine,"R")==0 || strcmp(engine,"r")==0 )
                  {
                        printf("Did you search 1.RECENT MATCH RESULTT\n2.RANKING\n3.RECORDS FOOTBALL\n 4.RECORDS CRICKET?\n press 1 OR 2 OR 3 otherwise press any key to back search menu\n");
                    engine2=getch();
                     if(engine2=='1'|| engine2=='1')
                     {
                          system("cls");
                        goto RECENTMATCH;

                     }
                     else if(engine2=='2'|| engine2=='2')
                     {
                         system("cls");
                         goto home4;

                     }
                      else if(engine2=='3'|| engine2=='3')
                    {
                        system("cls");
                        goto playersrecords;
                    }
                      else if(engine2=='4'|| engine2=='4')
                    {
                        system("cls");
                        goto RECORDS;
                    }
                      else
                    {
                        system("cls");
                        goto search;
                    }




                  }
                  else if(strcmp(engine,"match")==0 || strcmp(engine,"MATCH")==0 )
                  {

printf("Did you search 1.RECENT MATCH RESULTT\n2.OR CRICKET MATCH FIXTURE 3.WORLD CUP 18 FIXTURE?\n press 1 OR 2 OR 3 otherwise press any key to back search menu\n");
engine2=getch();
                      if(engine2=='1'|| engine2=='1')
                     {
                          system("cls");
                        goto RECENTMATCH;

                     }
                     else if(engine2=='2'|| engine2=='2')
                     {
                         system("cls");
                         goto home8;

                     }
                      else if(engine2=='3'|| engine2=='3')
                    {
                        system("cls");
                        goto FIFA;
                    }
                      else
                    {
                        system("cls");
                        goto search;
                    }


                  }
                  else if(strcmp(engine,"FIXTURE")==0 || strcmp(engine,"fixture")==0 )
                  {
                      printf("Did you search 1.CRICKET MATCH FIXTURE 2.WORLD CUP 18 FIXTURE?\n press 1 OR 2 otherwise press any key to back search menu\n");
engine2=getch();

                     if(engine2=='1'|| engine2=='1')
                     {
                         system("cls");
                         goto home8;

                     }
                      else if(engine2=='2'|| engine2=='2')
                    {
                        system("cls");
                        goto FIFA;
                    }
                      else
                    {
                        system("cls");
                        goto search;
                    }

                  }
                  else if(strcmp(engine,"RANKING")==0 || strcmp(engine,"ranking")==0 )
                  {
                      system("cls");
                      goto home4;
                  }
                  else if(strcmp(engine,"BIODATA")==0 || strcmp(engine,"biodata")==0 )
                          {
                              printf("Did you search Cricketers Biodata? press y otherwise press any key to back menu");
                                engine2=getch();

                     if(engine2=='Y'|| engine2=='y')
                     {
                         system("cls");
                         goto home5;

                     }
                     else
                    {
                        system("cls");
                        goto search;
                    }


                          }
                           else if(strcmp(engine,"QUIZ")==0 || strcmp(engine,"quiz")==0 )
                          {
                              printf("Did you search FANTASY QUIZ? press y otherwise press any key to back menu");
                                engine2=getch();

                     if(engine2=='Y'|| engine2=='y')
                     {
                         system("cls");
                         goto QUIZ;

                     }
                     else
                    {
                        system("cls");
                        goto search;
                    }


                          }
                            else if(strcmp(engine,"Q")==0 || strcmp(engine,"q")==0 )
                          {
                              printf("Did you search FANTASY QUIZ? press y otherwise press any key to back menu");
                                engine2=getch();

                     if(engine2=='Y'|| engine2=='y')
                     {
                         system("cls");
                         goto QUIZ;

                     }
                     else
                    {
                        system("cls");
                        goto search;
                    }


                          }
                           else if(strcmp(engine,"B")==0 || strcmp(engine,"b")==0 )
                          {
                              printf("Did you search Cricketers Biodata\n or Batsman & Bowlers ranking? press 1 0R 2 otherwise press any key to back menu");
                                engine2=getch();

                     if(engine2=='1'|| engine2=='1')
                     {
                         system("cls");
                         goto home5;

                     }
                     if(engine2=='2'|| engine2=='2')
                     {
                         system("cls");
                         goto home4;

                     }
                     else
                    {
                        system("cls");
                        goto search;
                    }


                          }
                            else if(strcmp(engine,"RECORDS")==0 || strcmp(engine,"records")==0 )
                            {

                                   printf("Did you search 1.INTERNATIONAL CRICKET RECORDS 2.WORLD CUP CRICKET RECORDS\n3.FOOTBALL RECORDS?\n press 1 OR 2 OR 3 otherwise press any key to back search menu\n");
engine2=getch();

                     if(engine2=='1'|| engine2=='1')
                     {
                         system("cls");
                         goto home14;

                     }
                      else if(engine2=='2'|| engine2=='2')
                    {
                        system("cls");
                        goto WORLDCUPRECORDS;
                    }
                    else if(engine2=='3'|| engine2=='3')
                    {
                        system("cls");
                        goto footballrecords;
                    }
                      else
                    {
                        system("cls");
                        goto search;
                    }

                            }
                             else if(strcmp(engine,"FOOTBALL")==0 || strcmp(engine,"football")==0 )
                             {
                                 system("cls");
                                 goto FOOTBALL;
                             }
                              else if(strcmp(engine,"F")==0 || strcmp(engine,"f")==0 )
                              {
                                  printf("Did you search 1.FOOTBALL\n 2.FIXTURE CRICKET 3.WORLD CUP FIXTURE 18 4.FANTASY QUIZ? press 1 0R 2 OR 3 OR 4 otherwise press any key to back menu");
                                engine2=getch();

                     if(engine2=='1'|| engine2=='1')
                     {
                         system("cls");
                         goto FOOTBALL;

                     }
                     else if(engine2=='2'|| engine2=='2')
                     {
                         system("cls");
                         goto home8;

                     }
                       else if(engine2=='3'|| engine2=='3')
                     {
                         system("cls");
                         goto FIFA;

                     }
                       else if(engine2=='4'|| engine2=='4')
                     {
                         system("cls");
                         goto QUIZ;

                     }
                     else
                    {
                        system("cls");
                        goto search;
                    }
                              }
                               else if(strcmp(engine,"CLUB")==0 || strcmp(engine,"club")==0 )
                               {
                                    printf("Did you search CLUB MANAGEMENT? Press Y otherwise press any key to back menu");
                                engine2=getch();

                     if(engine2=='y'|| engine2=='Y')
                     {
                         system("cls");
                         goto club;

                     }
                     else
                    {
                        system("cls");
                        goto search;
                    }

                               }
                                else if(strcmp(engine,"WORLD")==0 || strcmp(engine,"world")==0 )
                               {
                                    printf("Did you search WORLD CUP CRICKE OR FOOTBALLT? Press 1 for crickrt press 2 for football otherwise press any key to back menu");
                                engine2=getch();

                     if(engine2=='1')
                     {
                         system("cls");
                         goto WORLDCUPRECORDS;

                     }
                      else if(engine2=='2')
                     {
                         system("cls");
                         goto footballrecords;

                     }
                       else
                    {
                        system("cls");
                        goto search;
                    }

                               }
                                  else if(strcmp(engine,"W")==0 || strcmp(engine,"w")==0 )
                               {
                                    printf("Did you search WORLD CUP CRICKE OR FOOTBALLT? Press 1 for crickrt press 2 for football otherwise press any key to back menu");
                                engine2=getch();

                     if(engine2=='1')
                     {
                         system("cls");
                         goto WORLDCUPRECORDS;

                     }
                      else if(engine2=='2')
                     {
                         system("cls");
                         goto footballrecords;

                     }
                       else
                    {
                        system("cls");
                        goto search;
                    }

                               }


                          else
                          {
                              printf("NO RESULT FOUND!!!!TRY AGAIN PRESS Y\n");
                              select=getch();
                              if(select=='y' || select=='Y')
                              {
                                  system("cls");
                        goto search;
                              }

                          }


                printf("\n\nPress 0 to back main menu: ");
                fflush(stdin);
                choice=getch();
                if(choice=='0')
                {
                    system("cls");
                    goto home;

                }
            }
            switch (data)
            {
            case 'D':
            case 'd':
                system("cls");
                goto main;

            }

        }

    }
    //help page

    if(choice=='H' || choice=='h')
    {

        system("cls");
        FILE *fhelp;
                                    fhelp = fopen("Help.txt","r");
                                    char help[500];
                                    while(!feof(fhelp))
                                    {
                                        fgets(help,500,fhelp);
                                        printf("%s",help);
                                    }
                                    fclose(fhelp);

        printf("\n\nPress D to back main menu: ");
                fflush(stdin);
                choice=getch();
                if(choice=='D' || choice=='d')
                {
                    system("cls");
                    goto main;

                }

    }

//about page
    if(choice=='A' || choice=='a')
    {
        system("cls");
        printf("\n\tSPORTS WORLDS WIZARD\n");
        printf("\tVersion 1.1\n\n");
        printf("\tDeveloper: \n");
        printf("\t1. MD. HABIB AL HASAN\n\tID:1812664642\n\tDepartment:ECE\n\tMajor:CSE\n\n");
         printf("\t2. ISRAK ENTISAR\n\tID:1811480642\n\tDepartment:ECE\n\tMajor:CSE\n\n");
          printf("\t3.Sheikh Asiful Islam\n\tID:1812250042\n\tDepartment:ECE\n\tMajor:CSE\n\n");
          printf("\t                               @@ NORTH SOUTH UNIVERSITY @@");

printf("\n\nPress D to back main menu: ");
                fflush(stdin);
                choice=getch();
                if(choice=='D' || choice=='d')
                {
                    system("cls");
                    goto main;

                }



    }
    if(choice=='Q' || choice=='q')
    {
        printf("\n\n\n                                                   <> THANK YOU <>");
    }
}
