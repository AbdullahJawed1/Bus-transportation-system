#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
struct student
{
	char name[25];
	char id[8];
	
};

int main()
{
	system ("color f0");
	FILE *fp;
	struct student s;
	int y,b,c,i,p;
	char ch;
	
	
	
// THE ADMINISTRATOR PINCODE IS 7860


	
	printf("\n\n1.Administrator\n2.student\nPlease select your identity: ");
	scanf("%d",&i);
	
	while( i>2 || i<1)
	{
		printf("\nInvalid Entry!!");
		printf("\n\n1.Administrator\n2.student\nPlease select your identity: ");
	    scanf("%d",&i);
		
	}
	
	
	if(i==1)
	{
		printf("\n\nPlease enter your four digit PINCODE :");
		scanf("%d",&p);
		
		
		while(p!=7860)
		{
			printf("\n\nAccess Denied!!\n\nPlease try again.\n\n");
			printf("\n\nPlease enter your four digit PINCODE :");
			scanf("%d",&p);
			
		if (p==7860)
			break;
		}
		
		if (p==7860)
		{
			printf("\nsuccessfull login\n\n");
			

	    printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("                                                                                          STUDENT'S BUS DATA\n");
		printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

		
		
		
		fp = fopen("bus transportation.txt","r");
		
		if(fp== NULL)
	{
		printf("\n unable to open");
		exit(1);
	}
	while ((ch=getc(fp)) != EOF)
	putch(ch);
	fclose(fp);
	}
    }
	else 
	{
	
	
	fp = fopen("bus transportation.txt","a");
	
	if(fp== NULL)
	{
		printf("\n unable to open");
		exit(1);
	}
	
	do
	{
		
	char b1[1000]={"\nbus 1\t\t Contact no: 03433071421 \n\nN4 bakery\t\t6:35\nfalcon\t\t6:40\nphase 1\t\t6:42\naskari 5\t\t6:50\nphase 2\t\t6:55\nx-20\t\t7:00\ncantt bazar\t\t7:05\njinnah garden\t\t7:10\nsecurity printing\t\t7:15"};
    char b2[1000]={"\nbus 2\t\t Contact no: 03105070121 \n\nfariya chowke\t\t6:45\nkneez fatima\t\t6:50\nmadras chowke\t\t6:55\nG3 stop\t\t7:00\nsuchal goath\t\t7:05\nchapal\t\t7:06\nal azhar\t\t7:12\nkiran\t\t7:16\nsafoora\t\t7:20"};
    char b3[1000]={"\nbus 3\t\t Contact no: 03112936236 \n\nsindh baloch\t\t6:30\nmunawar chowrangi\t\t6:35\nkamran chowrangi\t\t6:40\nrado center\t\t6:42\ndarul sehat\t\t6:43\nrabia city\t\t6:45\npahalwan goath\t\t6:45"};
    char b4[1000]={"\nbus 4\t\t Contact no: 03002081375 \n\nmaymar more\t\t6:30\nal asif\t\t6:45\nabaas town\t\t6:50\nparadise bakery\t\t6:52\nmaskan\t\t6:55\ndisco bakery\t\t6:56\ngulshan rim jhim\t\t7:00\nalladin\t\t7:02\nlasania\t\t7:05"};
    char b5[1000]={"\nbus 5\t\t Contact no: 03232493696 \n\n4K stop\t\t6:30\n2 minute\t\t6:32\npower house\t\t6:37\nsaleem center\t\t6:39\nup-more\t\t6:42\nnagan(dalhi hall)\t\t6:45\nshadman 2-1\t\t6:48\nsakhi hassan\t\t6:50\npeoples chowrangi\t\t6:54\ngulberg\t\t6:55\nUBL sports(KIHD)\t\t7:00"};
    char b6[1000]={"\nbus 6\t\t Contact no: 03003670589 \n\najmair nagri\t\t6:30\nbombay bakery\t\t6:31\noxford school\t\t6:32\nbara dari\t\t6:33\nbabul islam\t\t6:35\ndisco more\t\t6:37\nanda more\t\t6:40\nqalandri chowke\t\t6:42\nwater pump caltex\t\t6:50\nancholi\t\t6:52\nsuhrab goath\t\t6:54"};
    char b7[1000]={"\nbus 7\t\t Contact no: 03048220075 \n\ndonisal\t\t6:30\nlandikotal\t\t6:35\ntahir villas\t\t6:40\nshadab masjid\t\t6:42\nnaseer abad\t\t6:45"};
    char b8[1000]={"\nbus 8\t\t Contact no: 03070083186 \n\nMasjid Usman G\t\t6:35\nmochi gali\t\t6:37\nshipowner\t\t6:40\n5 star\t\t6:45\nfarooq-e-azam\t\t6:45\nmateen food\t\t6:47\ndental college\t\t6:50\nniaz manzil\t\t6:51\ngreen house\t\t6:52"};
    char b9[1000]={"\nbus 9\t\t Contact no: 03171058856 \n\nanda more\t\t6:45\nred house\t\t6:47\nal habib\t\t6:49\ncafe 2days\t\t6:50\nnamak bank\t\t6:55\nshafeeq more\t\t6:57\nal noor\t\t7:00\nedhi center\t\t7:02"};
    char b10[1000]={"\nbus 10\t\t Contact no: 03243418041 \n\nbara board\t\t6:30\ngolimar chowrangi\t\t6:35\npetrol pump\t\t6:40\n4 # Liaquatabad\t\t6:42\n10 lalu khait\t\t6:45\nbaloch hotel\t\t6:48\nhassan square\t\t6:50\nmumtaz manzil\t\t6:52\nbaitul mukarram\t\t6:55\nurdu science\t\t6:57\nlal flate\t\t7:00"};
    char b11[1000]={"\nbus 11\t\t Contact no: 03110299803 \n\nranchor line\t\t6:40\nshoe market\t\t6:42\ngarden\t\t6:45\nsoldier bazar # 1\t\t6:48\nsoldier bazar # 4\t\t6:49\ngurumandaer\t\t6:52\njail road\t\t6:55\nchandni chowke\t\t7:00\nbahria university\t\t7:05\ngulshan-e-jamal\t\t7:08"};
	char b12[1000]={"\nbus 12\t\t Contact no: 03202530019 \n\ncivil hospital\t\t6:30\njubil area\t\t6:32\ngull plaza\t\t6:35\nmob.market\t\t6:39\n7day\t\t6:40\nchapri cinema\t\t6:40\nkudadad colony\t\t6:45\nnorani kabab\t\t6:46\nkhalid bin walid road\t\t6:58\nsharafabad\t\t6:52\nbahadurabad\t\t6:54\nagha khan chowk\t\t6:56"};
	char b13[1000]={"\nbus 13\t\t Contact no: 03132887078 \n\ngarden\t\t6:40\nali bhai\t\t6:42\nalbaila\t\t6:45\njamat khana\t\t6:46\nfatimeet\t\t6:47\nzahid nehari\t\t6:54\nlaberty\t\t6:55\nhill park\t\t7:00"};
	char b14[1000]={"\nbus 14\t\t Contact no: 03002956056 \n\ntower\t\t6:30\ntyre company\t\t6:35\nboat basin\t\t6:40\n3 talwar\t\t6:45\nrace course\t\t6:45\ncantt station\t\t6:50\naskari III\t\t6:52\nkala pull(nmc)\t\t6:57\nakhter colony\t\t7:02\ndeffance view\t\t7:05\niqra\t\t7:07\npaf chapter\t\t7:10"};
	char b15[1000]={"\nbus 15\t\t Contact no: 03002567756 \n\nziauddin\t\t6:27\nbilawal house\t\t6:28\nzamzama\t\t6:32\ngizri\t\t6:35\npunjab chowrangi\t\t6:37\nphase 4\t\t6:38\nhino chowrangi\t\t6:40\ncrossing\t\t6:50\nnasir jump\t\t6:55\nkorangi\t\t6:57\nlandhi\t\t7:00"};
	char b16[1000]={"\nbus 16\t\t Contact no: 03363704936 \n\nhijrat colony\t\t6:40\nbilawal house\t\t6:42\nhyper star\t\t6:50\nsaba avenue\t\t7:02\nshahbaz\t\t7:05\nkh.bukhari\t\t7:08\naxect stop\t\t7:10\nhino bridge\t\t7:12\nsinger chowrangi\t\t7:25"};
	char b17[1000]={"\nbus 17\t\t Contact no: 03222808926 \n\nteen hati\t\t6:25\ndak khana\t\t6:30\nkarimabad\t\t6:35\nayesha manzil\t\t6:37\nbhai jan chowk\t\t6:39\nmukka choke\t\t6:42\ngulshan e shameem\t\t6:43\n13D\t\t6:48\ngulshan moti mahal\t\t6:50"};
	char b18[1000]={"\nbus 18\t\t Contact no: 03132693179 \n\nabassi hospital\t\t6:25\nkhilafat chowke\t\t6:25\nboard office\t\t6:42\nKDA supper market\t\t6:45\nziauddin\t\t6:47\nusman memorial\t\t6:52\nmashriq center\t\t7:00"};
	char b19[1000]={"\nbus 19\t\t Contact no: 03217013755 \n\ngulshan hadeed ph2\t\t7:00\ngulshan hadeed ph1\t\t7:05\nsteel town gate\t\t7:15\nrazzq abad\t\t7:20"};
	char b20[1000]={"\nbus 20\t\t Contact no: 03122068035 \n\ncomander cng\t\t6:30\njohar complex\t\t6:35\ngate 2 malir cantt\t\t6:40\nkazimabad\t\t6:45\nmodel more\t\t6:50\nbaraf khana\t\t7:00\nmalir 15\t\t7:10"};
	char b21[1000]={"\nbus 21\t\t Contact no: 03212618936 \n\nfreshko\t\t6:30\nurdu bazar\t\t6:35\nregal\t\t6:36\nsarawan\t\t6:40\nlucky star\t\t6:41\nregent plaza\t\t6:45\nFTC\t\t6:48\nnursary\t\t6:50\nlal kothi\t\t6:52\nzubaida hospital\t\t7:00\npaf base faisal\t\t7:15\ndrigh road\t\t7:15"};
	char b22[1000]={"\nbus 22\t\t Contact no: 03162889603 \n\nayesha manzil\t\t6:40\ngulshan\t\t6:50\naskari 4\t\t7:00\ncod\t\t7:01"};	
	char b23[1000]={"\nbus 23\t\t Contact no: 03152698839 \n\norangi town # 5\t\t6:30\nabdullah college\t\t6:32\nasghar ali shah\t\t6:36\nkatti pahari\t\t6:38\nhydari\t\t6:45\ndolmin\t\t6:46"};	
	char b24[1000]={"\nbus 24\t\t Contact no: 03000248247 \n\nlala zar nipa\t\t6:35\nsafari park\t\t6:40\nsamama\t\t6:43\ncontinental\t\t6:45\nkesc\t\t6:46\njohar chorangi\t\t6:48\nperfume chowke\t\t6:50\nhill top\t\t6:52\njohar more\t\t6:55\ncolony gate\t\t7:05\nmalir hult\t\t7:10"};
	char b25[1000]={"\nbus 25\t\t Contact no: 03122937461 \n\nkamran chorangi\t\t6:30 \nK.U\t\t6:40\nmosamiyat\t\t6:45\ndow university\t\t6:50\nsadi town\t\t6:55\nfalcon road\t\t6:57\ntank chowke\t\t7:00\nsecurity printing\t\t7:45"};

	
	printf("\n");
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                                                                                       BUS TRANSPORTATION SYSTEM\n");
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
	
	printf("\nWelcome to the BUS TRANSPORTATION SYSTEM, We will help you find your bus :)\n");

    printf("\n 1.freshman\n 2.sophomore\n 3.junior\n 4.senior\nplease enter your year by entering its serial number :");
	scanf("%d",&y);
	
	while( y>4 || y<1)
	{
		printf("\ninvalid entry!!");
		printf("\n\n 1.freshman\n 2.sophomore\n 3.junior\n 4.senior\nplease enter your year by entering its serial number :");
	    scanf("%d",&y);
	}
	
	
	printf("\nPlease enter your roll number :");
	scanf("%s",&s.id);
	
    printf("\nPlease enter your name :");
	scanf("%s",&s.name);
	
	
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
	
	printf("\n1.Orangi town\n2.New Karachi\n3.Buffer zone\n4.North nazimabad\n5.Gulberg town\n6.Federal b area\n7.Nazimabad\n8.SITE area\n9.Lyari\n10.Mazar-e-Quaid");
	printf("\n11.Bahadurabad\n12.Pechs society\n13.Karachi cantonment\n14.Gulshan-e-iqbal\n15.Gulistan-e-johar\n16.Shahr-e-faisal\n17.Airport\n18.Malir cant");
	printf("\n19.Landi\n20.Korangi\n21.Defence\n22.Clifton\n23.Shah faisal town\n24.Gulshan-e-maymar\n25.Gulshan-e-hadeed\n");
	
	printf("\nPlease enter your location's serial number: ");
	scanf("%d",&b);
	
	while(b<1 || b>25)
	{
		printf("\nInvalid entry!!\n");
		printf("\nplease enter your location's serial number: ");
	    scanf("%d",&b);	
	
		if(b<1 ||b>25)
			break;
	}
	
	
	switch (b)
	{
	    case 1:
			printf("\nThese buses passes through your location with it's following routes'",puts(b23));
			break;
			
		case 2:
			printf("\nThese buses passes through your location with it's following routes'",puts(b5),puts(b6));
			break;
			
		case 3:
			printf("\nThese buses passes through your location with it's following routes'",puts(b8));
			break;
			
		case 4:
			printf("\nThese buses passes through your location with it's following routes'",puts(b7),puts(b8),puts(b18),puts(b23));
			break;
			
		case 5:
			printf("\nThese buses passes through your location with it's following routes'",puts(b5),puts(b6),puts(b9),puts(b17));
			break;	
				
		case 6:
			printf("\nThese buses passes through your location with it's following routes'",puts(b22),puts(b17));
			break;
			
		case 7:
			printf("\nThese buses passes through your location with it's following routes'",puts(b18));
			break;
			
		case 8:
			printf("\nThese buses passes through your location with it's following routes'",puts(b10));
			break;
			
		case 9:
			printf("\nThese buses passes through your location with it's following routes'",puts(b16),puts(b17));
			break;
			
		case 10:
			printf("\nthese buses passes through your location with it's following routes'",puts(b12));
			break;

		case 11:
			printf("\nThese buses passes through your location with it's following routes'",puts(b12));
			break;

		case 12:
			printf("\nthese buses passes through your location with it's following routes'",puts(b12));
			break;

		case 13:
			printf("\nthese buses passes through your location with it's following routes'",puts(b14));
			break;			
			
		case 14:
			printf("\nthese buses passes through your location with it's following routes",puts(b4));
			break;
			
		case 15:
			printf("\nthese buses passes through your location with it's following routes",puts(b24));
			break;

		case 16:
			printf("\nthese buses passes through your location with it's following routes'",puts(b21),puts(b14));
			break;

		case 17:
			printf("\nthese buses passes through your location with it's following routes'",puts(b20));
			break;

		case 18:
			printf("\nthese buses passes through your location with it's following routes'",puts(b20));
			break;

		case 19:
			printf("\nthese buses passes through your location with it's following routes'",puts(b15));
			break;

		case 20:
			printf("\nthese buses passes through your location with it's following routes'",puts(b15));
			break;

		case 21:
			printf("\nthese buses passes through your location with it's following routes",puts(b15),puts(b16));
			break;

		case 22:
			printf("\nthese buses passes through your location with it's following routes'",puts(b14));
			break;

		case 23:
			printf("\nthese buses passes through your location with it's following routes'",puts(b24));
			break;

		case 24:
			printf("\nthese buses passes through your location with it's following routes'",puts(b4));
			break;

		case 25:
			printf("\nthese buses passes through your location with it's following routes'",puts(b19));
			break;
		
	}
	
	
	
	printf("please make a selection of a bus :");
	scanf("%d",&c);

	printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
	
	if(y==1)
	{
		printf("\nDear freshman your seat has been reserved in bus %d for a day by the name of %s and ID %s.\nPlease pay RS 22000 at the accounts office to book it.",c,s.name,s.id);
		fprintf(fp,"\n\nfreshman\nID :%s\nname :%s\nseat reserved in bus no.:%d",s.id,s.name,c);
	}
	else if(y==2)
	{
	   	printf("\nDear sophomore your seat has been reserved in bus %d for a day by the name of %s and ID %s.\nPlease pay RS 22000 at the accounts office to book it.",c,s.name,s.id);
		   fprintf(fp,"\n\nsophomore\nID :%s\nname :%s\nseat reserved in bus no.:%d",s.id,s.name,c);	
	}
	else if(y==3)
	{
		printf("\nDear junior your seat has been reserved in bus %d for a day by the name of %s and ID %s.\nPlease pay RS 22000 at the accounts office to book it.",c,s.name,s.id);
		fprintf(fp,"\n\njunior\nID :%s\nname :%s\nseat reserved in bus no.:%d",s.id,s.name,c);
	}

	else if(y==4)
	{
	  	printf("\nDear senior your seat has been reserved in bus %d for a day by the name of %s and ID %s.\nPlease pay RS 22000 at the accounts office to book it.",c,s.name,s.id);
	  	fprintf(fp,"\n\nsenior\nID :%s\nname :%s\nseat reserved in bus no.:%d",s.id,s.name,c);
	}
	
	
	printf("\n\nDo you want to continue?\nWrite n for no and y for yes : ");
	scanf(" %c",&ch);
	
	
	
} while (ch !='n');
	
	fclose(fp);
	
return 0;

}

}


