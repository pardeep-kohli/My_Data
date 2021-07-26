#include<stdio.h>
void main()
{
 char p[15],name[12];
 char s1[15],s2[15];
 char p1[15],p2[15],p3[15];
 char k1[15],k2[15],k3[15],k4[15];
 char j1[15],j2[15],j3[15],j4[15],j5[15];
 char h1[15],h2[15],h3[15],h4[15],h5[15],h6[15];
 char g1[15],g2[15],g3[15],g4[15],g5[15],g6[15],g7[15];
 char d1[15],d2[15],d3[15],d4[15],d5[15],d6[15],d7[15],d8[15];
 int m,total1,user ,Rol_NO,class,total2,total3,total4,total5,total6,total7;
 int o1,o2,u1,u2,u3,t1,t2,t3,t4,n1,n2,n3,n4,n5,c1,c2,c3,c4,c5,c6,b1,b2,b3,b4,b5,b6,b7,z1,z2,z3,z4,z5,z6,z7,z8;
 float per,per1,per2,per3,per4,per5,per6,per7;
        

         printf("\n Enter Your Name:");
         scanf("%s",name);
         printf("\n Hello! Mr./Miss:%s\n",name);
         printf("\n Please Enter Your Enrollment No.:");
         scanf("%d",&Rol_NO);
         printf("\n In Which Class do you study ?:");
         scanf("%d",&class);   //203 

         printf("\n How many subjects You have ? : ");
         scanf("%d",&user);
         if(user==2){
         printf("\n Enter your first Subject name with Marks:");
         scanf("%s",&s1);
         scanf("%d",&o1);
      
         printf("\n Enter your second Subject name with Marks:");
         scanf("%s",&s2);
         scanf("%d",&o2);
         
         printf("Your subject and marks are:%s %d , %s %d",s1,o1,s2,o2);
         total1=(o1+o2);
         per1=(total1/2);
         

 printf("\n Your Total Marks are : %d Out of 200",total1);
 printf("\n You Gained           : %.1f Percentage",per1);
     per1>=90            ? printf("\n *A+++++*              Grade With Honour"):
     per1<90&&per1>=80   ? printf("\n *A+++*                Grade With Excellent"):
     per1<80&&per1>=70   ? printf("\n *A++*                 Grade With Best"):
     per1<70&&per1>=60   ? printf("\n *A+*                  Grade With Good"):
     per1<60&&per1>=50   ? printf("\n *B*                   Grade ,You have to need hard work"):
     per1<50&&per1>=30   ? printf("\n *C*                   Grade ,So Poor Condition "):
     per1<30             ? printf("\n       Fail,Try to Next Year:"):
                           printf("\n     This is Invalid");}
    
  
         if (user==1){
          printf("\n Enter your subjects Name with Marks:");
          scanf("%s",&p);
          scanf("%d",&m);
      printf("\n Your sunject and Marks is  :%s %d",p,m);
          per=(m/1);
      printf("\n You Gained                 : %.1f Percentage",per);
     per>=90            ? printf("\n *A+++++*             Grade With Honour"):
     per<90&&per>=80    ? printf("\n *A+++*               Grade With Excellent"):
     per<80&&per>=70    ? printf("\n *A++*                Grade With Best"):
     per<70&&per>=60    ? printf("\n *A+*                 Grade With Good"):
     per<60&&per>=50    ? printf("\n *B*                  Grade ,You have to need hard work"):
     per<50&&per>=30    ? printf("\n *C*                  Grade ,So Poor Condition "):
     per<30             ? printf("\n    Fail,Try to Next Year:"):
                           printf("\n This is Invalid");}
        if(user==3){
          printf("\n Enter your First subject Name with Marks:");
          scanf("%s",&p1);
          scanf("%d",&u1);
          printf("\n Enter your Second subject Name with Marks:");
          scanf("%s",&p2);
          scanf("%d",&u2);
          printf("\n Enter your Third Subject Name with Marks:");
          scanf("%s",&p3);
          scanf("%d",&u3);
          printf("\n Your Sunject and Marks are:%s %d  %s %d  %s %d",p1,u1,p2,u2,p3,u3);
           total2=(u1+u2+u3);
          per2=(total2/3);
   printf("\n Your Total Marks are     : %d Out of 300",total2);
   printf("\n You Gained               : %.1f Percentage",per2);
     per2>=90            ? printf("\n *A+++++*              Grade With Honour"):
     per2<90&&per2>=80    ? printf("\n *A+++*               Grade With Excellent"):
     per2<80&&per2>=70    ? printf("\n *A++*                Grade With Best"):
     per2<70&&per2>=60    ? printf("\n *A+*                 Grade With Good"):
     per2<60&&per2>=50    ? printf("\n *B*                  Grade ,You have to need hard work"):
     per2<50&&per2>=30    ? printf("\n *C*                  Grade ,So Poor Condition "):
     per2<30             ? printf("\nFail,Try to Next Year:"):
                           printf("\n This is Invalid");}
       if(user==4){
         printf("\n Enter your First subjects Name With Marks:");
          scanf("%s",&k1);
          scanf("%d",&t1);
          printf("\n Enter Your Second Subject Name with Marks:");
          scanf("%s",&k2);
          scanf("%d",&t2);
          printf("\n Enter your Third Subject Name with Marks:");
          scanf("%s",&k3);
          scanf("%d",&t3);
          printf("\n Enter your Fourth Subject Name with Marks:");
          scanf("%s",&k4);
          scanf("%d",&t4);
          printf("\n Your Subject and Marks are:%s %d  %s %d  %s %d  %s %d",k1,t1,k2,t2,k3,t3,k4,t4);
          total3=(t1+t2+t3+t4);
          per3=(total3/4);
        printf("\n Your Total Marks are        : %d Out of 400",total3); 
        printf("\n You Gained                  : %.1f Percentage",per3);
        per3>=90          ? printf("\n *A+++++*             Grade With Honour"):
     per3<90&&per3>=80   ? printf("\n *A+++*                Grade With Excellent"):
     per3<80&&per3>=70   ? printf("\n *A++*                 Grade With Best"):
     per3<70&&per3>=60   ? printf("\n *A+*                  Grade With Good"):
     per3<60&&per3>=50   ? printf("\n *B*                   Grade ,You have to need hard work"):
     per3<50&&per3>=30   ? printf("\n *C*                   Grade ,So Poor Condition "):
     per3<30             ? printf("\n      Fail,Try to Next Year:"):
                           printf("\n     This is Invalid");}
    

       
       if (user==5){
         printf("\n Enter your first Subject name with Marks:");
         scanf("%s",&j1);
         scanf("%d",&n1);
         printf("\n Enter your second Subject name with Marks:");
         scanf("%s",&j2);
         scanf("%d",&n2);
         printf("\n Enter your Third Subject name with Marks:");
         scanf("%s",&j3);
         scanf("%d",&n3);
         printf("\n Enter your Fourth Subject name with Marks:");
         scanf("%s",&j4);
         scanf("%d",&n4);
         printf("\n Enter your Fifth Subject name with  Marks:");
         scanf("%s",&j5);
         scanf("%d",&n5);
 printf("\n Your subject and Marks are:%s %d  %s %d  %s %d  %s %d  %s %d",j1,n1,j2,n2,j3,n3,j4,n4,j5,n5);
          total4=(n1+n2+n2+n4+n5);
         per4=(total4/5);
         

 printf("\n Your Total Marks are      : %d Out of 500",total4);
 printf("\n You Gained                : %.1f Percentage",per4);
  per4>=90              ? printf("\n *A+++++*                  Grade With Honour"):
     per4<90&&per4>=80   ? printf("\n *A+++*                   Grade With Excellent"):
     per4<80&&per4>=70   ? printf("\n *A++*                    Grade With Best"):
     per4<70&&per4>=60   ? printf("\n *A+*                     Grade With Good"):
     per4<60&&per4>=50   ? printf("\n *B*                      Grade ,You have to need hard work"):
     per4<50&&per4>=30   ? printf("\n *C*                      Grade ,So Poor Condition "):
     per4<30             ? printf("\n       Fail,Try to Next Year:"):
                           printf("\n This is Invalid");}
    
   
      if(user==6){
        printf("\n Enter your first Subject name with Marks:");
         scanf("%s",&h1);
         scanf("%d",&c1);
         printf("\n Enter your second Subject name with Marks:");
         scanf("%s",&h2);
         scanf("%d",&c2);
         printf("\n Enter your Third Subject name with Marks:");
         scanf("%s",&h3);
         scanf("%d",&c3);
         printf("\n Enter your Fourth Subject name with Marks:");
         scanf("%s",&h4);
         scanf("%d",&c4);
         printf("\n Enter your Fifth Subject name with  Marks:");
         scanf("%s",&h5);
         scanf("%d",&c5);
         printf("\n Enter your Sixth Subject name with Marks:");
         scanf("%s",&h6);
         scanf("%d",&c6);
printf("\n Your subject and Marks are:%s %d  %s %d  %s %d  %s %d %s %d %s %d",h1,c1,h2,c2,h3,c3,h4,c4,h5,c5,h6,c6);
         
         total5=(c1+c2+c3+c4+c5+c6);       
         per5=(total5/6);
         
 printf("\n Your Total Marks are     : %d Out of 800",total5);
 printf("\n You Gained               : %.1f Percentage",per5);
     per5>=90            ? printf("\n *A+++++*              Grade With Honour"):
     per5<90&&per5>=80   ? printf("\n *A+++*                Grade With Excellent"):
     per5<80&&per5>=70   ? printf("\n *A++*                 Grade With Best"):
     per5<70&&per5>=60   ? printf("\n *A+*                  Grade With Good"):
     per5<60&&per5>=50   ? printf("\n *B*                   Grade ,You have to need hard work"):
     per5<50&&per5>=30   ? printf("\n *C*                   Grade ,So Poor Condition "):
     per5<30             ? printf("\nFail,Try to Next Year:"):
                           printf("\n This is Invalid");}
    
         if (user==7){
         printf("\n Enter your first Subject name with Marks:");
         scanf("%s",&g1);
         scanf("%d",&b1);
         printf("\n Enter your second Subject name with Marks:");
         scanf("%s",&g2);
         scanf("%d",&b2);
         printf("\n Enter your Third Subject name with Marks:");
         scanf("%s",&g3);
         scanf("%d",&b3);
         printf("\n Enter your Fourth Subject name with Marks:");
         scanf("%s",&g4);
         scanf("%d",&b4);
         printf("\n Enter your Fifth Subject name with  Marks:");
         scanf("%s",&g5);
         scanf("%d",&b5);
         printf("\n Enter your Sixth Subject name with Marks:");
         scanf("%s",&g6);
         scanf("%d",&b6);
         printf("\n Enter your Seventh Subject name with Marks:");
         scanf("%s",&g7);
         scanf("%d",&b7);
 printf("Your subject and marks are: %s %d %s %d %s %d %s %d %s %d %s %d %s %d",g1,b1,g2,b2,g3,b3,g4,b4,g5,b5,g6,b6,g7,b7);
         total6=(b1+b2+b3+b4+b5+b6+b7);
         per6=(total6/7);
      
 printf("\n Your Total Marks are     : %d Out of 700",total6);
 printf("\n You Gained               : %.1f Percentage",per6);
  per6>=90               ? printf("\n *A+++++*                 Grade With Honour"):
     per6<90&&per6>=80   ? printf("\n *A+++*                   Grade With Excellent"):
     per6<80&&per6>=70   ? printf("\n *A++*                    Grade With Best"):
     per6<70&&per6>=60   ? printf("\n *A+*                     Grade With Good"):
     per6<60&&per6>=50   ? printf("\n *B*                      Grade ,You have to need hard work"):
     per6<50&&per6>=30   ? printf("\n *C*                      Grade ,So Poor Condition "):
     per6<30             ? printf("\nFail,Try to Next Year:"):
                           printf("\n This is Invalid");}
    
    if(user==8){
         printf("\n Enter your first Subject name with Marks:");
         scanf("%s",&d1);
         scanf("%d",&z1);
         printf("\n Enter your second Subject name with Marks:");
         scanf("%s",&d2);
         scanf("%d",&z2);
         printf("\n Enter your Third Subject name with Marks:");
         scanf("%s",&d3);
         scanf("%d",&z3);
         printf("\n Enter your Fourth Subject name with Marks:");
         scanf("%s",&d4);
         scanf("%d",&z4);
         printf("\n Enter your Fifth Subject name with  Marks:");
         scanf("%s",&d5);
         scanf("%d",&z5);
         printf("\n Enter your Sixth Subject name with Marks:");
         scanf("%s",&d6);
         scanf("%d",&z6);
         printf("\n Enter your Seventh Subject name with Marks:");
         scanf("%s",&d7);
         scanf("%d",&z7);
 
      
         printf("\n Enter your Eighth Subject name with Marks:");
         scanf("%s",&d8);
         scanf("%d",&z8);
 printf("Your subject and marks are:%s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d",d1,z1,d2,z2,d3,z3,d4,z4,d5,z5,d6,z6,d7,z7,d8,z8);
         total7=(z1+z2+z3+z4+z5+z6+z7+z8);
         per7=(total7/8);
      
 printf("\n Your Total Marks are     : %d Out of 200",total7);
 printf("\n You Gained               : %.1f Percentage",per7);
     per7>=90            ? printf("\n *A+++++*                Grade With Honour"):
     per7<90&&per7>=80   ? printf("\n *A+++*                  Grade With Excellent"):
     per7<80&&per7>=70   ? printf("\n *A++*                   Grade With Best"):
     per7<70&&per7>=60   ? printf("\n *A+*                    Grade With Good"):
     per7<60&&per7>=50   ? printf("\n *B*                     Grade ,You have to need hard work"):
     per7<50&&per7>=30   ? printf("\n *C*                     Grade ,So Poor Condition "):
     per7<30             ? printf("\nFail,Try to Next Year:"):
                           printf("\n This is Invalid");
}

  }                         
    
    
    
    

        



  


            


    
