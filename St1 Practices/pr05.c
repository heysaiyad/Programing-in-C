/*
5. Using precedence rules, evaluate the following expressions and determine the value of the
 vari-ables(without running the code). Also rewrite them using parenthesis to make the order explicit.

•	Assume ( x=10,y=2,z=2; ).Expression: z=y=x++ + ++y∗2; --- 
•	Assume ( x=10,y=4,z=1; ).Expression: y>>= x&0x2 && z
*/

// #include <stdio.h>

// int main(){
//     int x = 10;
//     int y = 2;
//     int z = 2;

//     printf("%d", z=y=x++ + ++y*2);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int x = 10;
//     int y = 4;
//     int z = 1;

//     printf("%d", y>>= x & 0x2 && z);
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int x;
// x=10,20,30;
// printf("%d",x);
// return 0;
// }

// #include <stdio.h>

// int main(){
//     int x = (2,3,4);
//     printf("%d", x);
//     return 0;
// }


// #include<stdio.h>
// int main(){
// int _=5;
// int __=10;
// int ___;
// ___=_+__;
// printf("%i",___);
// return 0;
// }

// #include<stdio.h>
// int main(){
// int max=100;
// int min=10;
// int avg;
// avg = max + min / 2;
// printf("%d",avg);
// return 0;
// }

// #include <stdio.h>
// #include<string.h>

// int main(){
//     int i =  0;

//     for(i<=2;)
//         printf("%d", ++i);

//     return 0;
// }

// #include<stdio.h>
// #define x 5+2
// int main(){
// int i;
// i=x*x*x;
// printf("%d",i);
// return 0;
// }

// #include<stdio.h>
// int main(){
// char c=125;
// c=c+10;
// printf("%d",c);
// return 0;
// }

// #include<stdio.h>
// 	int main(){
// 		float a=0.7;
// 		if(a<0.7){
// 			printf("C");
// 		}
// 		else{
// 			printf("C++");
// 		}
// 		return 0;
// 	}

// #include<stdio.h>
// 	int main(){
// 		int a=2,b=7,c=10;
// 		c=a==b;
// 		printf("%d",c);
// 		return 0;
// 	}

// #define PRINT printf("Star Wars");printf(" Psycho");
// 	#include<stdio.h>
// 	int main(){
// 		int x=1;
// 		if(x--)
// 			PRINT
// 		else
// 			printf("The Shawshank Redemption");
// 		return 0;
// 	}

// #include<stdio.h>
// 	int main(){
// 		int const X=0;
// 		switch(5/4/3){
// 			case X: printf("Clinton");
// 			break;
// 			case X+1:printf("Gandhi");
// 			break;
// 			case X+2:printf("Gates");
// 			break;
// 			default: printf("Brown");
// 		}
// 		return 0;
// 	}

// #include<stdio.h>
// 	int main(){
// 		int i=4,x;
// 		x=++i + ++i + ++i;
// 		printf("%d",x);
// 		return 0;
// 	}

// #include<stdio.h>
// 	int main(){
// 		int a=2;
// 		if(a==2){
// 			a=~a+2<<1;
// 			printf("%d",a);
// 		}
// 		else{
// 			break;
// 		}
// 		return 0;
// 	}

// #include<stdio.h>
// 	int main(){
// 		int a=10;
// 		printf("%d %d %d",a,a++,++a);
// 		return 0;
// 	}

// #include <stdio.h>
// 	#include <string.h>
// 	int main(){
// 		int i=0;
// 		for(;i<=2;)
// 			printf(" %d",++i);
// 		return 0;
// 	}



// #include<stdio.h>
// 	#define max 5;
// 	int main(){
// 		int i=0;
// 		i=max++;
// 		printf("%d",i++);
// 		return 0;
// 	}

	#include<stdio.h>
	int main(){
		printf("%d",sizeof(5.2));
		return 0;
	}	

