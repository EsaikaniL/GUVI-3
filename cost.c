#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    char str1[300],str2[150],i,cost=0,cost1=0;
    scanf("%[^\n]s",str1);
    scanf("\n%[^\n]s",str2);
    int hash1[25]={0};
    int hash2[25]={0};
    int l1=strlen(str1);
    int l2=strlen(str2);
    int count=0,min;
    for(i=0;str1[i];i++){
        hash1[str1[i]-97]++;
    }
    for(i=0;str2[i];i++){
        hash2[str2[i]-97]++;
    }
    for(i=0;i<25;i++){
        count+=abs(hash1[i]-hash2[i]);
    }
    if(l1!=l2){
        if(count==abs(l1-l2)){
            cost=+count*3;
        }
    }
    else{
        cost=((count/2)*3)+((count/2)*4);
        cost1+=(count/2*5);
    }
    min=(cost<cost1)?cost:cost1;
    printf("%d",min);
}

