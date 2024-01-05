#include<graphics.h>
#include<stdio.h>

void main(){
	
	int gd = DETECT,gm,no,rev, x1 = 10, y1= 130;
	int i, j,jobs,pt[10],st[10],et[10],wt[10],temp,m,tot;
	float avg;
	char str[30],ch;
	clrscr();
	
	initgraph(&gd,&gm, "c:\\tc\\bgi");
	setcolor(BLUE);
	puts("Enter no of jobs do u have?");
	scanf("%d", &jobs);
	
	for(i=0; i<jobs; i++){
		printf("Enter the CPU brust time of process %d :",i+1);
		scanf("%d",&pt[i]);
	}
for(i=0;i<jobs;i++){
	for(j=i+1; j<jobs; j++){
	if(pt[i]>pt[j]){
		temp =pt[i];
		pt[i] = pt[j];
		pt[j] = temp;	
   }
}

    if(i==0){
    	st[0]=0;
    	et[0]=pt[0];
    	wt[0] = 0;
	}
	else{
		st[i]=et[i-1];
		et[i]=st[i]+pt[i];
		wt[i]= st[i];
	}
}

   settextstyle(2,0,4);
   
   outtextxy(x1)