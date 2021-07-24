#include <stdio.h>

int main()
{
    //variable important one to run the program with suitable data type 
    float bs,ta,da,hra,gs,pf;
    
    printf("your basic salary : ");
    scanf("%f",&bs);
    //when salary 10000 or less
    if(bs <=10000){
        ta = (bs *10)/100;
        da = (bs *15)/100;
        hra = (bs *20)/100;
    }
    //when salary between 10k to 20k
    else if(bs<=20000 && bs>=10000 ){
        ta = (bs *15)/100;
        da = (bs *20)/100;
        hra = (bs *25)/100;
    }
    //when salary between 20k tp 30k
    else if(bs>=20000 && bs<=30000 ){
        ta = (bs *20)/100;
        da = (bs *25)/100;
        hra = (bs *30)/100;
    }
    //when salary is more then 30k
    else{
        ta = (bs *25)/100;
        da = (bs *30)/100;
        hra = (bs *35)/100;
    }
    //travel allowances
    printf("travel allowances : %f \n",ta);
    //daring allowances
    printf("daring allowances : %f \n",da);
    //home rent allowances
    printf("home rent allowances : %f \n",hra);
    //gross salary 
    gs = bs+ta+da+hra;
    printf("gross salary : %f \n",gs);
    //provident fund
    pf = (gs*12)/100;
    printf("provident fund : %f \n",pf);
    //total allow salary
    printf("salary added with all the allowances  : %f",(gs-pf));
    return 0;
}
