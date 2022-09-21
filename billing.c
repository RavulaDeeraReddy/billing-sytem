#include<stdio.h>

 main()
{ 
int i,j,k,l,m,n,o,p,q,r,noitems,index,quantity,g_quantity,d_quantity,s_quantity,c_quantity,m_quantity,k_quantity,p_quantity,sa_quantity,eg_quantity,cu_quantity;
float t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,total=0,tax,finalb;
 printf("item index    item name      price\n");
 printf("----------    ---------      -----\n");
 printf("1             good day       10.00\n");
 printf("2             dairy milk     40.00\n");
 printf("3             samosa         10.00\n");
 printf("4             choco bar      20.00\n");
 printf("5             milk bar       18.00\n");
 printf("6             kitkat         30.00\n");
 printf("7             pizza          90.00\n");
 printf("8             sand witch     74.00\n");
 printf("9             egg puff       12.00\n");
 printf("10            curry puff     10.00\n");
 
 printf("enter number of items\n");
  scanf("%d",&noitems);
 
  while(noitems>0)
{
 printf("enter the item index\n");
 scanf("%d",&index);
 switch(index)
 {
  case 1:printf("quantity of good day\n");
         scanf("%d",&g_quantity);
         //price=10.00;
         t1=g_quantity*10.00;
        printf("price is %f\n",t1);
        i=index;
         total+=t1;
         break;
  case 2:printf("quantity of dairy milk\n");
         scanf("%d",&d_quantity);
         t2=d_quantity*40;
       printf("price is %f\n",t2);
        j=index;
        total+=t2;
       break;
  case 3:printf("quantity of samosa\n");
        scanf("%d",&s_quantity);
        t3=s_quantity*10;
        printf("price is %f\n",t3);
       k=index;
       total+=t3;
        break;
  case 4:printf("quantity of choco bar\n");
         scanf("%d",&c_quantity);
         t4=c_quantity*20;
        printf("price is %f\n",t4);
        l=index;
         total+=t4;
       
        break;
  case 5:printf("quantity of milky bar\n");
         scanf("%d",&m_quantity);
         t5=m_quantity*18;
        printf("price is %f\n",t5);
       m=index;
        total+=t5;
        break;
   case 6:printf("quantity of kitkat\n");
         scanf("%d",&k_quantity);
         t6=k_quantity*30;
        printf("price is %f\n",t6);
        n=index;
        total+=t6;
        break;
   case 7:printf("quantity of pizza\n");
         scanf("%d",&p_quantity);
         t7=p_quantity*90;
         printf("price is %f\n",t7);
        o=index;
        total+=t7;
         break;
   case 8:printf("quantity of sand witch\n");
         scanf("%d",&sa_quantity);
         t8=sa_quantity*74;
         printf("price is %f\n",t8);
        p=index;
        total+=t8;
       break;
    case 9:printf("quantity of egg puff\n");
        scanf("%d",&eg_quantity);
        t9=eg_quantity*12;
        printf("price is %f\n",t9);
        q=index;
        total+=t9;
       break;
    case 10:printf("quantity of curry puff\n");
        scanf("%d",&cu_quantity);
        t10=cu_quantity*10; 
       printf("price is %f\n",t10);
       r=index;
        total+=t10;
       break;
    default:printf("invalid iteam"); 
  }
  
noitems--;
}
    tax=(total*18)/100;
    finalb=total+tax;
  printf("             purchase bill              \n");
  printf("             -------------              \n");
  printf("item name     quantity    price    total\n");
  printf("---------     --------    ------   -----\n");
  if(i==1)
  printf("good day         %d        10.00    %0.2f\n",g_quantity,t1);
  if(j==2)
  printf("dairy milk       %d        40.00    %0.2f\n",d_quantity,t2);
  if(k==3)
  printf("samosa           %d        10.00    %0.2f\n",s_quantity,t3);
  if(l==4)
  printf("choco bar        %d        20.00    %0.2f\n",c_quantity,t4);
  if(m==5)
  printf("milky bar        %d        18.00    %0.2f\n",m_quantity,t5);
  if(n==6)
  printf("kikat            %d        30.00    %0.2f\n",k_quantity,t6);
  if(o==7)
  printf("pizza            %d        90.00    %0.2f\n",p_quantity,t7);
  if(p==8)
  printf("sand witch       %d        74.00    %0.2f\n",sa_quantity,t8);
  if(q==9)
  printf("egg puff         %d        12.00    %0.2f\n",eg_quantity,t9);
  if(r==10)
  printf("curry puff       %d        10.00    %0.2f\n",cu_quantity,t10);
  printf("                          Total    %0.2f\n",total);
  printf("                        Tax @18%%   %0.2f\n",tax);
  printf("                     Final Bill    %0.2f\n",finalb);
  printf("             thank you! visit again\n");
}