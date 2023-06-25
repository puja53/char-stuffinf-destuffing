#include<stdio.h>
#include<string.h>
 int main()
 {
 int i=0,j=0;
 char d[100],l[]="DLEETX",stuff_d[100],destuff_d[100];
 printf("Enter Data in UpperCase: ");
 scanf("%s",d);

 stuff_d[0]='D', stuff_d[1]='L', stuff_d[2]='E', stuff_d[3]='S',stuff_d[4]='T',stuff_d[5]='X';
 j=6;
 while(d[i]!='\0')
 {
 if(d[i]=='D'&& d[i+1]=='L'&& d[i+2]=='E')
 {
 stuff_d[j]='D', stuff_d[j+1]='L', stuff_d[j+2]='E', stuff_d[j+3]='D', stuff_d[j+4]='L', stuff_d[j+5]='E';
 j+=6;
 i+=3;
 }
 else
 stuff_d[j++]=d[i++];
 }
 stuff_d[j]='\0';
 strcpy(destuff_d,stuff_d);
 strcat(stuff_d,l);
 printf("after stuffing: ");
 printf("%s",stuff_d);
 i=0;
 j=6;
 while(destuff_d[j]!='\0')
 {
 if( destuff_d[j]=='D'&&destuff_d[j+1]=='L'&&destuff_d[j+2]=='E'&&destuff_d[j+3]=='D'&&destuff_d[j+4]=='L'&&destuff_d[j+5]=='E')
 {
 d[i]='D', d[i+1]='L',d[i+2]='E';
 j+=6;
 i+=3;
 }
 else
 d[i++]=destuff_d[j++];
 }
 d[i]='\0';
 printf("\n\nafter destuffing:  ");
 printf("%s",d);
 }
