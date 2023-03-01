#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int MCD(int n1,int n2){
	int i,mcd;
	for(i=1;i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            mcd = i;
    }
    return mcd;
}
int main(int argc, char *argv[]) {
	int a,n,i;
	printf("insert base a: ");
	scanf("%d",&a);
	printf("insert number n: ");
	scanf("%d",&n);
	int b=a;
	b=a%n;
	for(i=1;MCD(b-1,n)==1;i++){
		printf("b%d=%d^%d (mod %d)=",i,b,i,n);
		b=((int) pow(b,i))%n;
		printf("%d (mod %d)->",b,n);
		printf("MCD(%d,%d)=%d\n",b-1,n,MCD(b-1,n));
	}
	int p=MCD(b-1,n);
	int q=n/p;
	printf("prime factor: p=%d q=%d",p,q);
	return 0;
}
