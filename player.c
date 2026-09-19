typedef struct player 
{
	int jersey_no;
	char name[30];
	int run;
	int matches;
	int wickets;
}player;


void add(player arr[],int *count);
void search_by_jearsey(player arr[],int count);
void search_by_name(player arr[],int count);
void update_player(player arr[],int count);
void display_all_player(player arr[],int count);
void sort_by_run(player arr[],int count);
void sort_by_wickets(player arr[],int count);

int main()
{
	player arr[100];
	int count =0;
	int choice;
	
	 while(1)
	 {
	 	
	 	printf("\n\n................  Player mangement system  ................");
	 	
	 	printf("\n enter 1 to add player : ");
	 	printf("\n enter 2 to search player by jearsey no : ");
	 	printf("\n enter 3 to search player by name : ");
	 	printf("\n enter 4 to update player : ");
	 	printf("\n enter 5 to display all player : ");
	 	printf("\n enter 6 to sorting by run  : ");
	 	printf("\n enter 7 to sorting by wicket  : ");
	 	
	 	
	 	
	 	printf("\nenter your choice : ");
	 	scanf("%d",&choice);
	 	
	 	if(choice == 1)
	 	{
	 		add( arr,&count);
		 }
		 else if(choice == 2)
		 {
		 	 search_by_jearsey(arr, count);
		 }
		 else if(choice == 3)
		 {
		 	 search_by_name(arr,count);
		 }
		 else if(choice == 4)
		 {
		 	 update_player(arr,count);
		 }
		 else if(choice == 5)
		 {
		 display_all_player( arr,count);
		 }
		 
		 else if(choice == 6)
		 {
		  sort_by_run( arr, count);
		 }
		 else if(choice == 7)
		 {
		 	sort_by_wickets(arr,count);
		 }
	 	
	 }
	
}


void add(player arr[],int *count)
{
	printf("enter jersey no : \n");
	scanf("%d",&arr[*count].jersey_no);
	
	printf("enter player name :\n ");
	scanf("%s",arr[*count].name);
	
	printf("enter run :\n ");
	scanf("%d",&arr[*count].run);
	
	printf("enter match :\n ");
	scanf("%d",&arr[*count].matches);
	
	printf("enter wickets : \n");
	scanf("%d",&arr[*count].wickets);
	
(*count)++;
	
	
	
	printf("\nplayer added sucsefully");
	
}

void search_by_jearsey(player arr[],int count)
{
int jearsey;
int i;
int flag =0;

printf("entner jearsey no : ");
scanf("%d",&jearsey);

for(i=0;i<count;i++)
{
	if(arr[i].jersey_no == jearsey)
	{
		printf(" jersey no  : %d\n",arr[i].jersey_no);
		printf(" player name : %s\n ",arr[i].name);
		printf(" run%d: \n ",arr[i].run);
		printf(" match : %d\n ",arr[i].matches);
		printf(" wickets : %d \n",arr[i].wickets);
		flag =1;
		break;
		
	}
	
}
	if(flag == 0)
	{
		printf("pleyar not found");
	}	

}

void search_by_name(player arr[],int count)
{
int name [30];
int i;
int nav =0;

printf("entner name : ");
scanf("%s",&name);

for(i=0;i<count;i++)
{
	 if(strcmp(arr[i].name, name) == 0)
	{
		printf(" jersey no : %d \n",arr[i].jersey_no);
		printf(" player name : %s\n ",arr[i].name);
		printf(" run : %d\n ",arr[i].run);
		printf(" match : %d\n ",arr[i].matches);
		printf(" wickets : %d \n",arr[i].wickets);
		nav =1;
		break;
		
	}
	
}
	if(nav == 0)
	{
		printf("pleyar not found");
	}	

}

void update_player(player arr[],int count)
{
	int jersey;
	int i;
	int flag=0;
	
	printf("enter jearsey no to update player : \n");
	scanf("%d",&jersey);
	
	for(i=0; i<count; i++)
	{
		if(arr[i].jersey_no == jersey)
		{
			printf("enter new runs : ");
			scanf("%d",&arr[i].run);
			
			printf("enter new matches : ");
			scanf("%d",&arr[i].matches);
			
			printf("enter new Wickets : ");
			scanf("%d",&arr[i].wickets);
			 
			 flag =1;
			 break;
		}
	}
	if(flag ==1);
	{
		printf("player not found \n");
	}
	
	
}

void display_all_player(player arr[],int count)

{
	int i;
	
	if(count ==0)
	{
		printf("\no player vailable");
	}
	for(i = 0; i < count; i++)
    {
		printf("\n\n player %d",i +1);
		
		printf("\nJersey Number = %d", arr[i].jersey_no);
        printf("\nName = %s", arr[i].name);
        printf("\nRuns = %d", arr[i].run);
        printf("\nWickets = %d", arr[i].wickets);
        printf("\nMatches = %d", arr[i].matches);
	}
	
	
}

void sort_by_run(player arr[],int count)
{
	int i,j;
	player temp;
	int choice;
	
	printf("\n choice 1 for min to max ");
	printf("\n choice 2  for max to min  ");
	
	printf("choice : \n");
	scanf("%d",&choice);
	
	for(i=0;i<count -1;i++)
	{
	 for(j=0;j<count -1 -i;j++)
	 {
	 	if (choice == 1)
	 	{
	 		if (arr[j].run > arr[j].run)
	 		{
	 			temp = arr[j];
	 			arr[j] = arr[j + 1 ];
	 			arr[j + 1 ] = temp;
			 }
		 }
		 
		 else if (choice ==2)
		 {
		 	if (arr[j].run < arr[j].run)
	 		{
	 			temp = arr[j];
	 			arr[j] = arr[j + 1 ];
	 			arr[j + 1 ] = temp;
			 }
		 	
		 }
	 }
	 
	 
	}
	
	display_all_player( arr,count);
	
}
void sort_by_wickets(player arr[],int count)
{
	int i,j;
	player temp;
	int choice;
	
	printf("\n choice 1 for min to max ");
	printf("\n choice 2  for max to min  ");
	
	printf("choice : \n");
	scanf("%d",&choice);
	
	for(i=0;i<count -1;i++)
	{
	 for(j=0;j<count -1 -i;j++)
	 {
	 	if (choice == 1)
	 	{
	 		if (arr[j].wickets > arr[j].wickets)
	 		{
	 			temp = arr[j];
	 			arr[j] = arr[j + 1 ];
	 			arr[j + 1 ] = temp;
			 }
		 }
		 
		 else if (choice ==2)
		 {
		 	if (arr[j].wickets < arr[j].wickets)
	 		{
	 			temp = arr[j];
	 			arr[j] = arr[j + 1 ];
	 			arr[j + 1 ] = temp;
			 }
		 	
		 }
	 }
	 
	 
	}
	
	display_all_player( arr,count);
	
}




