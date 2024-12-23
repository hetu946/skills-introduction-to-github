#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<windows.h>
//#include<queue>
//#include<bits/stdc++.h>
using namespace std;
//#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
//#include <math.h>
//#define input scanf
//#define  max(a,b) (a>b?a:b) 
//#define print printf
//#define endl "\n"
//断流
//	    ios::sync_with_stdio(false);
//	    cin.tie(0), cout.tie(0);
//define endl "\n"



//int main(){
//vector<int>a;
//a.resize(10);
//int *p,*q;
//p=q=&a[0];
//p++;
//cout<<*p<<endl;
//}
//void f(int&p){
//	p=5;
//}


//signed main(){
//    for(int i=1;i<10;i++)
//{
//    for(int j=1;j<=i;j++)
//    cout<<i*j<<"   ";
//    cout<<endl;
//}
//    
//    vector<int>m(10);
//    cout<<m.back();
//int p;
//f(p);
//cout<<&p;
//vector<int>m(12,1);
//for(int &i:m){
//	i++;
//	print("%d",i);
//}
//printf("%d",true);
//string s;
//getline(cin,s);
//print("%s",s.c_str());
//cout<<s<<endl;
//int n;
//cin>>n;
//string s=to_string(n);
//string s="hello world!";
//for(auto i:s)cout<<i<<" ";
//struct qu{
//	int x;
//	int y;
//	int step;
//};
//queue<qu>m;
//qu a;
//a.x=1;
//a.y=1;
//a.step=0;
//m.push(a);
//m.pop();
//if(m.empty())cout<<"kong";
//else cout<<"bukong";
//#define int long long
//char a[10][10];
//gets(a[0]);
//char m[10];
//strcpy(m,a[0]);
//for(int i=1;i<10;i++){
//	gets(a[i]);
//    if(strcmp(m,a[i]))strcpy(m,a[i]);
//}
//printf("%s",m);
//int n;
//cout<<n<<endl;
//cin>>n;
//cout<<n;
//}
/*int main(){
	bool isprime=true;
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(i==1){
			i=2;
			//TODO
		}
		if(i<n&&n%i==0){
			isprime=false;
			//TODO
		}
		//TODO
	}
	printf("%d",isprime);
	
}*/
/*int main(){
	char a;
	scanf("%c",&a);
	printf("%c",a+'a'-'A');
}*/
/*int main(){
	int cnt=0;
	for( int i=1;i<=6;i++){
		cnt++;
		printf("smile!");
		if(cnt==1||cnt==3){
			printf("\n");
			//TODO
		}
		//TODO
	}
}*/
/*int sum(int begin,int end){
	int i=begin;
	int sum=0;
	for(i;i<=end;i++){
		sum+=i;
		//TODO
	}
}
int max(int a,int b){
	int ret;
	if(a>b){
		ret=a;-
	}else {
		ret=b;
}
return ret;
}
int main(){
	int c;
	c=max(10,12);
	printf("%d",c);
	return 0;
}*/


/*void swap();
int main(){
	int a=5;
	int b=6;
	swap(a,b);
	printf("a=%d b=%d",a,b);
	return 0;
}

void swap(int a,int b)
{
	int swap;
	int t=a;
	printf("in swap,a=%d,b=%d\n",a,b);
	a++;
	b++;
}*/

/*int max(int a,int b){
	if(a>b){
		return a;
		//TODO
	}else return b;
}
int main(){
	int i,j;
	scanf("%d %d",&i,&j);
	i=max(i,j);
	printf("%d",i);
	return 0;
}*/
/*int main(){
	int a,sum;
	scnaf("%d",&a);
	int cnt=0;
	if(a!=-1){
		sum+=a;
		scanf("%d",a);
		cnt++;
		//TODO
	}
	printf("average=%f",sum/cnt*1.0);
	return 0;
}*/
/*int main(){
	int x;
	double sum=0;
	int cnt=0;
	int number[3];
	scanf("%d",&x);
	while(x!=-1){
		number[cnt]=x;
		//
		{
			int i;
			printf("cnt=%d\t",cnt);
			for(i=0;i<=cnt;i++){
				printf("%d\t",number[i]);
				int j=number[i];
				printf("j=%d\t",j);
				
				//TODO
			}
			printf("\n");
		}
		sum+=x;
		cnt++;
		scanf("%d",&x);
		//TODO
	}
	   if(cnt>0){
		printf("%f\n",sum/cnt);
		for(int i=0;i<cnt;i++){
			if(number[i]>sum/cnt){
				printf("%d\n",number[i]);
				//TODO
			}
			
			
			
			//TODO
		}
	}
	return 0;
0}*/
/*int main(){
	int x;
	double sum=0;
	int cnt;
	printf("请输入数字总数");
	scanf("%d",&cnt);
	int i=0;
	if(cnt>0){
		int number[cnt];
		scanf("%d",&x);
		while(x!=-1){
			number[i]=x;
			sum+=x;
			scanf("%d",&x);
			//TODO
			printf("cnmber[i]=%d\t",number[i]);
			i++;
		}
		//TODO
	}
	return 0;
	
}*/

/*初见数组！！！！！！！！！*/
//int main(void){
//	int x,i;
//	scanf("%d",&x);
//	int count[10];
//	for(i=0;i<10;i++){
//		count[i]=0;}
//		//TODO
//		while(x!=-1){
//			if(x>0&&x<=9){
//				count[x]++;
//				//TODO
//			}
//			scanf("%d",&x);
//			//TODO
//		}
//	for(i=0;i<10;i++){
//		printf("%d:%d次\n",i,count[i]);
//		//TODO
//	}
//	return 0;
//}

/*数组初始化*/
//int main(void){
//	int a[5]={[1]=2};
//	for(int i=0;i<=4;i++){
//		printf("%d\t",a[i]);	//TODO
//	}
//
//}
//int main(){
//	int a[0];
//	printf("%d",sizeof(a));
//	return 0;
//}

//翁凯给的！！！！！！！
//int main(){
//	int n;
//	scanf("%d",&n);
//	int prime[n];
//	int i,x;
//	for(i=0;i<n;i++){
//		prime[i]=1;
//		//TODO
//	}
//	for(x=2;x<n;x++){
//		if(prime[x]){
//			for(i=2;i*x<n;i++){
//				prime[i*x]=0;
//				//TODO
//			}
//			//TODO
//		}
//		//TODO
//	}
//	for(i=2;i<n;i++){
//		if(prime[i]){
//			printf("%d\t",i);
//			//TODO
//		}
//		//TODO
//	}
//	printf("%d\t");
//	return 0;
//	
//}

//自己写的。。。。
//int main(){
//	int i,x,n;
//	scanf("%d",&n);
//	int prime[n];
//	for(i=0;i<n;i++){
//		prime[i]=1;
//		
//		//TODO
//	}
//	for(i=2;i<n;i++){
//		for(x=2;i*x<n;x++){
//			prime[i*x]=0;
//			//TODO
//		}
//		//TODO
//	}
//	for(i=0;i<n ;i++){
//		//TODO
//	
//	if(prime[i]){
//		printf("%d\t",i);
//		//TODO
//	}
//	}
//	return 0;
//}


// 模仿'
// int main(){
// 	const int size=3;
// 	int board[size][size];
// 	int playera,playerb;
// 	int heng,shu;
// 	int result=-1;
//	 int i,j;
//	                             //-1没人赢，0:b赢 1；a赢
//	                             //读入矩阵
//    for(i=0;i<size;i++){
//    	for(j=0;j<size;j++){
//    		scanf("%d",&board[i][j]);
//			//TODO
//		}
//    }
//		//TODO
//		//检查行
//		for(i=0;i<size;i++){
//			heng=shu=0;
//			for(j;j<size;j++){
//				if(board[i][j]==1){
//					heng++;
//					//TODO
//				}else shu++;
//				//TODO
//			}
//			if(heng==size){
//				result=1;
//				//TODO
//			}else result=0;
//			}
//			if(result==-1){
//						for(j=0;i<size;j++){
//							heng=shu=0;
//							for(i;i<size;i++){
//								if(board[i][j]==1){
//									shu++;
//									//TODO
//								}else heng++;
//								//TODO
//							}
//							if(shu==size){
//								result=1;
//								//TODO
//							}else result=0;
//							}
//			}
//			if(result==-1){
//				heng=shu=0;
//				for(i=0;i<size;i++){
//					if(board[i][j]==1){
//						heng++;
//						//TODO
//					}else shu++;
//					//TODO
//				}
//				if(heng==size){
//					result=0;
//				//TODO
//			}else if(shu==size){
//				result=1;
//			}
//			}
//			if(result==-1){
//				//TODO
//			
//			heng=shu=0;
//			for(i=0;i<size;i++){
//				if(board[i][size-i-1]==1){
//					heng++;
//					//TODO
//				}else shu++;
//				//TODO
//			}
//			if(heng==size){
//				result=1;
//			}else result=0;
//			
//			//TODO
//		
//			} 
//			if(result==1){
//				printf("playera win");
//				//TODO
//			}else if(result==0){
//				printf("playerb win");
//			}else printf("no one win");
//			return 0;
//
//
//
// }


//int main(){
//	int i=0;
//	printf("%p\n",&i);
//	return 0;
//}

//int main( ) {
//	double h;
//	scanf("%lf",&h);
//	int cnt=0;
//	for(int i=0;i<9;i++){
//		h+=1;
//		h*=1.5;
//		//TODO
//		cnt++;
//		printf("cnt=%d\t",cnt);
//			printf("h=%f\n",h);
//	}
//	
//	return 0;
//}
//
//int main(){
//	
//	long int c,d;
//	c=2;
//	d=10;
//	printf("Please input c and d(c>2):");
//	scanf("%d,%d",&c,&d);
//	long int prime[d];
//	int i,x;
//	for(i=0;i<d;i++){
//		prime[i]=1;
//		//TODO
//	}
//	for(i=2;i<d;i++){
//		for(x=2;x<d;x++){
//			prime[i*x]=0;
//			//TODO
//		}
//		
//			//TODO
//		}
//		long int hao[1][d];
//		int j=0;
//		for(i=0;i<d;i++){
//			hao[1][i]=1;
//			//TODO
//		}
//		for(i=0;i<=0;i++){
//			if(prime[i]=1){
//				hao[1][j]=i;
//				j++;
//				//TODO
//			}
//		}
//		for(int a=0;a<=j;a+2){
//			if(a>=c){
//				//TODO
//			
//			printf("(%ld,%ld)" ,hao[1][a],hao[1][a+1]);
//			//TODO
//		}
//		}
//	}
//	
//	
//	int main(){
//	long	int n,sum;
//		printf("Please enter n:" );
//		scanf("%ld",&n);
//		sum=0;
//	long	int cnt=0;
//	for(int i=1;i<=n;i++){
//		sum+=i*i*i;
//		if(sum>n){
//			printf("m<=%1d\n",cnt);
//			//TODO
//			break;
//		}		
//		cnt++;
//		//TODO
//	}
//	return 0;
//		
//		
//			//TODO
//	}
//	
//	
//int main(){
//	printf("   ******\n  ******\n ******\n******");
//}
//int main(){
//	int cnt=0;
//	int j=0;
//	int i=2;
//	int h=0;
//	do{
//		printf(" ");
//		cnt++;
//		while(cnt==3){
//			printf("*");
//			j++;
//			if(j==6){
//				h++;
//				if(h==4){
//					return 0;
//					//TODO
//				}
//				printf("\n");
//				cnt-=i;
//				i--;
//				j=0;
//				//TODO
//			}
//			
//			//TODO
//		}
//	}while(cnt!=0);
//int main(){
//	printf("order is a--%c\tb--%c\tc--%c\n",'z','x','y');
//}

//int main(){
//	int n;
//	int ret=1;
//	printf("Please input a number:\n");
//	scanf("%d",&n);
//	while(n<2){
//		scanf("%d",&n);
//		//TODO
//	}
//	for(int i=2;i<n-1;i++){
//		if(n%i==0){
//			ret=0;
//			//TODO
//		}
//		//TODO
//	}
//	if(ret==1){
//		printf("%d is a prime number\n",n);
//		//TODO
//	}else printf("%d is not a prime number\n",n);
//	return 0;
//	
//}
//int IsPerfect(int x){
//	int i,j;
//	int ret=1;
//
//	int cnt=0;
//	int sum=0;
//	
//	for(i=1;i<=x;i++){
//		for(j=1;j<=x;j++){
//			if(i*j==x&&j!=x){
//				sum+=j;
//				//TODO
//			}
//			//TODO
//		}
//		
//		//TODO
//	}
//
//	if(sum!=x){
//		ret=0;
//	}
//	return ret;
//		//TODO
//	 
//	}	
//	
//	void main(){
//		int n;
//		printf( "Input m:\n");
//		scanf("%d",&n);
//        
//		if(IsPerfect(n)==1){
//			printf("%d is a perfect number\n",n);
//			//TODO
//		}else printf("%d is not a perfect number\n",n);
//		
//		
//		
//	}

//int main(){
//	int i=1;
//	int *p=&i;
//	printf("p=%p *p=%p",&i,*p);
//	return 0;
//}
	
//void swap(int *pa,int *pb){
//	int t;
//	t=*pa;
//	*pa=*pb;
//	*pb=t;
//}	
//
//int main(){
//	int a=1,b=2;
//	swap(&a,&b);
//	printf("%d %d",a,b);
//}
//int main(void){
//	int a[5]={1,2,3,4,5};
//	int min,max;
//    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
//	printf("min=%d max=%d",min,max);
//	return 0;
//	}
//
//void minmax(int *a[1],int len,int *min,int *max){
//	int i;
//	*min=*max=a[0];
//	for(i=1;i<len;i++){
//		if(a[i]<*min){
//			min=a[i];
//		}
//		if(a[i]>*max){
//			*max=a[i];
//			//TODO
//		}
//		//TODO
//	}
//}

//int main(){
//	int a[2]={5,6};
//	int*p=a;
//	int*p1=&a[1];
////	printf("%d\t",sizeof(a)/sizeof(a[0]));
//	printf("%p\n",p1-p);
//	printf("%d\n",p1);
//	printf("%d\n",p);//	printf("%d",++*p);
//	return 0;
//}

//int sss(int a[],int leng,int *p,int *q);
//int main(){
//	int a=255;
//	int *p=&a;
//    char *q=(char*)p;
//	printf("%d",*q);
//	return 0;
//}
//int main(){
//	int n;
//
//	int sum=0;
//	do{printf("Input num:");
//		scanf("%d",&n);
//		//TODO
//		sum+=n;
//	}while(n!=0);
//	printf("sum = %d\n",sum);
//	return 0;
//}
//int main(){
//	int i,j,k;
//	printf("Enter a date(year month day):\n");
//	scanf("%d%d%d",&i,&j,&k);
//	printf( "You entered the date: %02d/%02d/%d",j,k,i);
//	return 0;
//}

//int main(){
//	int n;
//	printf("Input a single numeral:");
//	scanf("%d",&n);
//	switch (n) {
//		case 0:
//			printf("Sunday\n");
//			break;
//		case 1:
//			printf("Monday\n");
//			
//			//TODO
//			break;
//		case 2:
//			printf("Tuesday\n");
//			//TODO
//			break;
//			case 3:
//				printf("Wednesday\n");
//				break;
//				case 4:
//					printf("Thursday\n");
//					break;
//					case 5:
//						printf("Friday\n");
//						break;
//						case 6:
//							printf("Saturday\n");
//							
//			break;
//			default:
//				printf("%d\n",n);
//	}//int main(){
//	long int n,i;
//	printf("please enter a number optionaly:" );
//	scanf("&ld",&n);
//	printf("%d",n);
//}
//	return 0;
//}

//int main(){
//	int a=1;
//	int *p;
//	p=&a;
//	*p=(int)&a ;
//	printf("%d",*p);
//	return 0;
//}

//int main(){
//	int n;
//	printf("Please input your age: ");
//	scanf("%d",&n);
//	printf("The heart beats in your life: %d",n*75*60*24*365);
//	return 0;
//}
//
//include <stdio.h>



//int main()
//{
//    int a, b, c;
//
//    printf("Input two integers:");
//    scanf("%d %d",&a,&b);
//    c = a/b;
//    printf("The quotient of a and b is :%d", c);
//}

//int main(){
//	int i,j;
//	printf("input a and b=");
//	scanf("%d%d",&i,&j);
//	if(i>j){
//		printf("The max of a and b :%d\n",i);
//		//TODO
//	}else printf("The max of a and b :%d\n",j);
//	return 0;
//}
//int main(){
//	int a[9];
//	int i,j,k;
//	j=0;
//	i=j;
//	for(i;i<9;i++){
//		a[i]=i+1;
//		//TODO
//	}
//	while(j<9){
//		i=j;
//		k=0;
//		while(i>k){
//			printf(" ");
//			k++;
//			//TODO
//		}
//		for(i;i<9;i++){
//			printf("%d",a[i]);
//			//TODO
//		}
//		i-=2;
//		for(i;i>=j;i--){
//			printf("%d",a[i]);
//			//TODO
//		}
//		printf("\n");
//		j++;
//		//TODO
//	}
//}



//int main(){
//	char j;
//	printf("Enter a character:");
//	scanf("%c",&j);
//	printf("%c %c %c\n" ,j-1,j,j+1);
//	printf("%d %d %d\n",j-1,j,j+1);
//	
//}
//int main(){
//	int n=10;
//	printf("Enter %d numbers:",10);
//	int a[n];
//	
//	for(int i=0;i<10;i++){
//		scanf("%d",&a[i]);
//		//TODO
//	}
//	printf("In reverse order:" );
//	for(int i=9;i>=0;i--){
//		printf(" %d",a[i]);
//		//TODO
//	}
//	return 0;
//}

//int main(){
//	int n;
//	printf("Input n:");
//	scanf("%d",&n);
//	int a[n];
//	printf( "Input %d numbers:",n);
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		//TODO
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n-1;j++){
//			if(a[j]>a[j+1]){
//						int com=a[j+1];
//						a[j+1]=a[j];
//						a[j]=com;
//						//TODO
//					}
//			//TODO
//		}
//		//TODO
//	}
//	printf("Sorting results:" );
//	for(int j=0;j<n;j++){
//		printf("%4d",a[j]);
//		//TODO
//	}
//	
//	
//	
//	
//}
//int main(){
//	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//	int n;
//	printf("Input a month:");
//	scanf("%d",&n);
//	while(n>12){
//			printf("Input a month:");
//		scanf("%d",&n);
//	}
//	printf( "The number of days is %d\n",a[n-1]);
//}





































	
	
	
	



































































//int main(){
//	int n;
//	printf("Input n:");
//	scanf("%d",&n);
//	int a[n];
//	printf( "Input %d numbers:",n);
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		//TODO
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n-1;j++){
//			if(a[j]>a[j+1]){
//						int com=a[j+1];
//						a[j+1]=a[j];
//						a[j]=com;
//						//TODO
//					}
//			//TODO
//		}
//		//TODO
//	}
//	printf("Sorting results:" );
//	for(int j=0;j<n;j++){
//		printf("%4d",a[j]);
//		//TODO
//	}
//}
//int main(){
//	int a[5];
//	printf("Enter 5 integers: ");
//	for(int i=0;i<5;i++){
//		scanf("%d",&a[i]);
//		//TODO
//	}
//	int x;
//	int ret=0;
//	
//	printf("Enter x: ");
//	scanf("%d",&x);
//	int i;
//	for(i=0;i<5;i++){
//		if(a[i]==x){
//		printf("%d",i);
//		break;
//		}
//		//TODO
//	}
//	if(i==5)printf( "Not Found\n");
//	return 0;
//}
	
//#include <stdio.h>
//#define N 10; 
//int main()
//{
//    int a[N]={2,17,8,3,24,53,82,1,29,101};
//    int i,j,k,t;
//    for(i=0;i<10;i++)
//    {       k=i;
//            for(j=i+1;j<10;j++)
//                if(a[j]<a[k])    k=j;            
//            if(k=i) 
//            {
//                t=a[j]; 
//                a[j]=a[i]; 
//                a[i]=t;
//                        }
//    }
//        for(i=0;i<9;i++)
//                printf("%d ",a[i]);
//}

//int main(){
//	int a[10]={2,17,8,3,24,53,82,1,29,101};
//	for(int i=0;i<10;i++){
//		for(int j=0;j<10;i++){
//		
//			if(a[j]<a[j+1]){
//				int temp;
//				temp=a[j+1];
//				a[j+1]=a[j];
//				a[j]=temp;
//				//TODO
//			}
//			//TODO
//		}
//		//TODO
//		for(int i=0;i<10;i++){
//			printf("%d",a[i]);
//			//TODO
//		}
//	}
//	
//	
//	
//return 0;	
//}

//int main(){
//	int i,j,k,a;
//	float b;
//	printf("Enter item number:\n");
//	scanf("%d",&a);
//	printf("Enter unit price:\n");
//	scanf("%f",&b);
//	printf("Enter purchase date (yy mm dd):\n");
//	scanf("%d%d%d",&i,&j,&k);
//	printf("Item      Unit     Purchase\n");
//	printf("%-9d$%-9.2f%02d/%02d/%02d\n",a,b,j,k,i);
//	return 0;
//	
//}
//int main(){
//	for(int i=100;i<1000;i++){
//		if(i%4==2&&i%7==3&&i%9==5){
//			printf("%d",i);
//			break;
//			//TODO
//		}
//		//TODO
//	}
//}

//int main(){
//	int a[100];
//long int n;
//	printf("Please input c and d(c>2):");
//	scanf("%ld",&n);
//	for(int i=0;i<20;i++){
//		//TODO
//		a[i]=1;
//	}
//	for(int i=2;i<n;i++){
//		for(int j=2;i*j<n;j++){
//			a[i*j]=0;
//			//TODO
//		}
//		//TODO
//	}
//	int k=0;
//	int b[100];
//	for(int i=2;i<n ;i++){
//		if(a[i]==1){
//			b[k]=i;
//			k++;
//			//TODO
//		}
//	}
//		//TODO
//	k=0;
//	if(b[k+1]-b[k]==2){
//		printf("(%ld,%ld)" ,b[k],b[k+1]);
//		//TODO
//	}
//}

//int main(){
//	char c;
//	printf("Press a key and then press Enter:");
//	scanf("%c",&c);
//	if(c<91){
//		c=c+'a'-'A';
//		//TODO
//	}else c=c-'a'+'A';
//	printf("%c, %d\n",c,c);
//	return 0;
//}
//int main(){
//	int i,j,k;
//	for(i=1;i<=20;i++){
//		for(j=1;j<=20;j++){
//			for(k=1;k<=20;k++){
//				if(i*i+j*j==k*k&&i<j&&j<k){
//					printf("a=%d\tb=%d\tc=%d\n",i,j,k);
//					//TODO
//				}
//				//TODO
//			}
//			//TODO
//		}
//	}
//}

//int main(){
//	const int number=10;
//	int a[number];
//	for(int i=0;i<number;i++){
//		scanf("%d",&a[i]);
//		//TODO
//	}
//	int max=a[0];
//	for(int i=1;i<10;i++){
//		if(max<a[i]){
//			max=a[i];
//			//TODO
//		}
//		//TODO
//	}
//	printf("%d",max);
//}
//int main(){
//	int n;
//	int cnt;
//	int ret=1;
//	printf("Please enter a number:");
////	scanf("%d",&n);
//n=20;
//	if(n==1||n==0||n==-1){
//		printf("It is not a prime num.No divisor!\n");
//		//TODO
//	}
//	else{
//		
//	
//	for(int i=2;i<n-1;i++){
//		if(n%i==0){
//			ret=0;
//			break;
//			//TODO
//		}
//		//TODO
//	}
//	}
//	if(ret==1){
//		printf("It is a prime num.No divisor!\n");
//		//TODO
//	}
//	if(ret==0){
//		for(int i=2;i<n;i++){;
//			for(int j=2;j*i<n;j++){
//				if(i*j==n){
//					printf("%d\n",j);
//				}
//				//TODO
//			}
//			//TODO
//		}
//	}
//	return 0;





//}//#include <stdio.h>
//int main(){
//	int n;
//	int cnt;
//	int ret=1;
//	printf("Please enter a number:");
//	scanf("%d",&n);
////n=20;
//	if(n==1||n==0||n==-1){
//		printf("It is not a prime number.No divisor!\n");
//		//TODO
//	}
//	else{
//		
//	
//	for(int i=2;i<n-1;i++){
//		if(n%i==0){
//			ret=0;
//			break;
//			//TODO
//		}
//		//TODO
//	}
//	
//	if(ret==1){
//		printf("It is a prime number.No divisor!\n");
//		//TODO
//	}
//	if(ret==0){
//		for(int i=n-1;i<n;i--){
//			if(i==1){
//				break;
//				//TODO
//			}
//			for(int j=2;j*i<=n;j++){
//				if(i*j==n){
//					printf("%d\n",j);
//				}
//				//TODO
//			}
//			//TODO
//		}
//	}
//	}
//	
//	return 0;
//}



//int main(int agrc,char const *argv[]){
//	char s1[]="abc";
//	char s2[]="abc ";
//	printf("%d\n",strcmp(s1,s2));
//	return 0;
//	
//}
//


//int main(){
//	char string[][10]={
//		'sun'
//	};
//}



//int main(void){
//char name[10];
//char*a=name;
//scanf("%s",name);
//for(int i=0;*(a+i)!=0;i++){
//	//TODO
//	printf("%c ",*(a+i));
//}
//scanf("%s",name);
//for(int i=0;*(a+i)!=0;i++){
//	//TODO
//	printf("%c ",*(a+i));
//}
//}


//int main(void){
//char name[10];
////char*a=name;
//scanf("%s",name);
//for(int i=0;name[i]!=0;i++){
//	//TODO
//	printf("%c ",name[i]);
//}
//scanf("%s",name);
//for(int i=0;*(a+i)!=0;i++){
//	//TODO
//	printf("%c ",*(a+i));
//}
//}

//#define n 10
//int main(){
//	char a[n];
//		scanf("%s",a);
//		//TODO
//	for(int i=0;a[i]!='\0';i++){
//printf("%c ",a[i]);
//	}
////}
//
//int main(){
//	char a[10]="hello";
//	char b[10]="hellp";
//	printf("%d",strcmp(a,b));
//}



/*读入5个正整数并且显示它们。
如果输入的数值超过5个，也只会输出前5个。
如果程序读入的数据为负数时，程序立即终止。
**输入格式要求："%d" 提示信息："Please enter n:"
**输出格式要求："n = %d\n" "Program is over!\n"*/
//int main(){
//	int n=0;
//	int cnt=0;
//	do{printf("Please enter n:");
//		scanf("%d",&n);
//	if(n>0)	printf("n = %d\n",n);
//		cnt++;
//	}while(cnt<5&&n>0);
//	printf("Program is over!\n");
//	return 0;
//}

/*用函数编程统计平均成绩。要求在主函数中输入学生成绩，输入负数时,结束输入，调用子函数Average()计算平均成绩，并输出结果。
函数原型：int Average(int score[],int n)
****要求输入提示信息为："Input score:"
****输出格式要求为：
"Total students are %d\n"
"Average score is %d\n"*/
//int Average(int score[],int n){
//	int sum=0;
//	for(int i=0;i<n;i++){
//		sum+=score[i];
//		//TODO
//	}
//	int average=sum/n;
//	return average;
//}
//
//int main(){
//int a[100];
//int i=0;
//int j;
//do{
//	printf("Input score:");
//	scanf("%d",&j);
//	if(j>0){
//		a[i]=j;
//		i++;
//		//TODO
//	}else break;
//	
//}while(1);
//int b=Average(a,i);
//printf("Total students are %d\n",i);
//printf("Average score is %d\n",b);
//return 0;
//}

/*如果一个正整数等于其各个数字的立方和，则该数称为阿姆斯特朗数（亦称为自恋性数）。
如407=4^3+0^3+7^3就是一个阿姆斯特朗数。试编程求1000内的所有3位数的阿姆斯特朗数。
**输出格式要求："There are following Armstrong number smaller than 1000:\n" " %d "*/
//int main(void){
//	int i,j,k;
//	printf("There are following Armstrong number smaller than 1000:\n");
//	for(int n=100;n<1000;n++){
//		//TODO
//		i=n%10;
//		j=n/100;
//		k=(n/10)%10;
//		if(i*i*i+j*j*j+k*k*k==n){
//			printf(" %d ",n);
//			//TODO
//		}
//	}
//}

/*二分法。用二分法求一元方程2x^3-4x^2+3x-6=0在(x1,x2)区间的根。
**输入格式要求："%f,%f" 提示信息："Enter x1,x2:"
**输出格式要求："x=%6.2f\n"
程序运行示例如下：*/
//#include<math.h>
//int main(void){
//	
//	float x1,x2;
//	float x;
//	scanf("%f,%f",&x1,&x2);
//	x=(x1+x2)/2;
//	do{
//		int a;
//		a=2*x*x*x-4*x*x+3*x-6;
//		if(2*x*x*x-4*x*x+3*x-6<0){
//			a=-(2*x*x*x-4*x*x+3*x-6);
//			//TODO
//		}
//		if(a<1e-12){
//			printf("x=%6.2f\n",x);
//			break;
//			//TODO
//		}else if(a>0) x=(x+x1)/2;
//		//TODO
//	}while(1);
//}

//int main(){
//	int n,i,j;
//	printf("please input n:\n");
//	scanf("%d",&n);
//	i=n/100;
//		j=n%100;
//		
//			printf("the second operater is zero!\n");
//			//TODO
//		
//	printf("%d,%d\n",i,j);
//	printf("sum=%d,sub=%d,multi=%d\n",i+j,i-j,i*j);
//		if(j==0)printf("the second operater is zero!\n");
//else 	printf("dev=%.2f,mod=%d\n",1.0*i/j,i%j);
//		
//	
//}


/*求有10个整型元素的数组中最大元素及其下标。
**输入格式要求："%d" 提示信息："请输入10个元素的值：\n"
**输出格式要求："值最大的元素值为：%d  下标为%d\n"
程序运行示例1如下：
请输入10个元素的值：
23 45 36 11 20 90 31 66 30 33
值最大的元素值为：90  下标为5

*/
//#define n 10
//int main(){
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		//TODO
//	}
//	int cnt,i;
//	int max=a[0];
//	cnt=0;
//for(i=0;i<n-1;i++){
//	if(a[i]>max){
//		max=a[i];
//        cnt=i;
//		//TODO
//	}
//	//TODO
//}
//printf("值最大的元素值为：%d  下标为%d\n",max,cnt);
//}
//int main(){
//	float litres[] = { 11.5, 11.21, 12.7, 12.6, 12.4 } ;
//	  float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6 } ;
//	  int mpl[5] ;  /* Miles per litre. */
//	  int *p=mpl;
//	  float *q=litres;
//	  float*w=miles;
//	  for(int i=0;i<5;i++){
//	 *(p+i)=(*(w+i))/(*(q+i));
//	 printf("%d\t",*(p+i));}
//}

/*按如下函数原型编程计算并输出n×n阶矩阵的转置矩阵。其中，n由用户从键盘输入。已知n值不超过10。
void Transpose(int (*a)[N], int n);
void  Swap(int *x, int *y);
void InputMatrix(int (*a)[N], int n);
void PrintMatrix(int (*a)[N], int n);
输入提示信息："Input n:"
输入格式："%d"
输入提示信息："Input %d*%d matrix:\n"
输出提示信息："The transposed matrix is:\n"
输出格式："%d\t"*/

/*void Transpose(int (*a)[N], int n);
void  Swap(int *x, int *y);
void InputMatrix(int (*a)[N], int n);
void PrintMatrix(int (*a)[N], int n);*/
//
//int main(){
//	int n;
//	printf("Input n:");
//	scanf("%d",&n);
//	printf("Input %d*%d matrix:\n",n,n);
//	int a[n][n];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			scanf("%d",&a[i][j]);
//			//TODO
//		}
//	}
//		printf("The transposed matrix is:\n");
//		for(int i=0;i<n;i++){
//			for(int j=0;j<n;j++){
//				//TODO
//				printf("%d\t",a[j][i]);
//			}
//					printf("\n");
//		}
//		//TODO
//	
//}
//
//

//#include <stdio.h>
//
//int main()
//{
//    float a, b;
//    float sum, minus, product, quotient;
//    int remainder;
//
//    printf("\n请输入两个数:\n");
//    scanf("%f\n%f",&a, &b);
//    sum = a + b;
//    minus = a - b;
//    product = a * b;
//    quotient = a / b;
//    remainder = (int )a %(int) b;
//    printf("和为:%.2f\n", sum);
//    printf("差为:%.2f\n", minus);
//    printf("积为:%.2f\n", product);
//    printf("商为:%.2f\n", quotient);
//    printf("余数为:%d\n", remainder);
//}


/*输入某班学生某门课的成绩（最多不超过40人），当输入为负值时，表示输入结束，用函数编程统计成绩高于平均分的学生人数。
1）求平均分的函数原型为：int Average(int score[], int n);
2）统计成绩在全班平均分及平均分之上的学生人数的函数原型为：
int GetAboveAver(int score[], int n);

**输入要求：无输入提示 
**输入格式："%d"
**输出要求：
"Total students are %d\n"
"Average score is %d\n"
"Students of above average is %d\n"
*/
//int Average(int score[], int n){
//	int sum=0;
//	for(int i=0;i<n;i++){
//		sum+=score[i];
//		//TODO
//	}
//	int average=sum/n;
//	return average;
//}
//int main(){
//	int n=40,cnt=0;
//	int a[n];
//	int q,w,e;
//	for(int i=0;i<n;i++){
//		a[i]=0;
//		//TODO
//	}
//	for(int i=0;i<n;i++){
//		scanf("%d",&q);
//		if(q==-1){
//			break;
//			//TODO
//		}
//		//TODO
//		a[i]=q;
//		cnt++;
//	}
//	
//	w=Average(a,cnt);
//e=0;
//for(int i=0;i<n;i++){
//	if(a[i]>w){
//		e++;
//		//TODO
//	}
//	//TODO
//}
//	printf("Total students are %d\n",cnt);
//	printf("Average score is %d\n",w);
//	printf("Students of above average is %d\n",e);
//}

/*#define N 10
程序的某次运行结果如下：
Input n:10↙
Input 10 numbers:2 9 3 4 0 6 8 7 5 1↙
Sorting results:   0   1   2   3   4   5   6   7  8  9

输入格式:"%d"
输出格式：
输入数据个数提示："Input n:"
输入数据提示："Input %d numbers:"
输出提示："Sorting results:"
输出格式："%4d"*/

//int main(){
//	int N;
//	
//	int i,j,k;
//	printf("Input n:");
//	scanf("%d",&N);
//	int a[N];
//	printf("Input %d numbers:",N);
//	for(i=0;i<N;i++){
//		scanf("%d",&a[i]);
//		//TODO
//	}
//	for(i=0;i<N;i++){
//		for(j=0;j<N-1;j++){
//			if(a[j]>a[j+1]){
//				int temp=a[j+1];
//				a[j+1]=a[j];
//				a[j]=temp;
//				//TODO
//			}
//			//TODO
//		}
//	}
//	printf("Sorting results:");
//	for(i=0;i<N;i++){
//		printf("%4d",a[i]);
//		//TODO
//	}
//}

/*有一个3*4的矩阵，求其中的最大元素的值。

**输入提示："请输入3*4矩阵：\n"
**输入格式："%d"
**输出格式要求："max value is %d\n"
*/
//int main(){
//	int a[3][4];
//	int max=0;
//	for(int i=0;i<3;i++){
//		for(int j=0;i<4;i++){
//			scanf("%d",&a[i][j]);
//			//TODO
//		}
//		//TODO
//	}
//	max=a[0][0];
//	for(int i=0;i<3;i++){
//		for(int j=0;j<4;j++){
//			//TODO
//			if(a[i][j]>max){
//				max=a[i][j];
//				//TODO
//			}
//		}
//		//TODO
//	}
//
//	printf("max value is %d\n",max);
//}


//int main(){
//	int a[4];
//	int b[4];
//	int c[4];
//	printf("请输入3*4矩阵：\n");
//	for(int i=0;i<4;i++){
//		//TODO
//		scanf("%d",&a[i]);
//	}
//		for(int i=0;i<4;i++){
//			//TODO
//			scanf("%d",&b[i]);
//		}
//		
//				for(int i=0;i<4;i++){
//					//TODO
//					scanf("%d",&c[i]);
//				}
//				int max=0;
//				int i;
//for(i=0;i<4;i++){
//	//TODO
//	if(a[i]>max){
//		max=a[i];
//		//TODO
//	}
//}
//for(i=0;i<4;i++){
//	//TODO
//	if(b[i]>max){
//		max=b[i];
//		//TODO
//	}
//}
//for(i=0;i<4;i++){
//	//TODO
//	if(c[i]>max){
//		max=c[i];
//		//TODO
//	}
//}
//printf("max value is %d\n",max);
//		
//}
//int main(){
//	int a[3][4];
//	for(int i=0;i<3;i++){
//		for(int j=0;j<4;j++){
//			scanf("\t%d",&a[i][j]);
//			//TODO
//		}
//		//TODO
//	}
//		for(int i=0;i<3;i++){
//			for(int j=0;j<4;j++){
//			printf("%d\t",a[i][j]);
//			}
//			//TODO
//		}
//}

//int geren(int mt[],int en[],int ph[],int n,int sum[],double average[]);
//int xueke(int mt[],int en[],int ph[],int *mtsum,int *ensum,int* phsum,int n);
//int main(){
//	int n;                                    //学生人数 
//	printf("Input the total number of the students(n<40):")
//	;
//    int mtsum,ensum,phsum;                             
//	scanf("%d",&n);
//	printf("Input student’s ID and score as: MT  EN  PH:\n");
//	long int id[n];
//	int mt[n],en[n],ph[n];
//	int sum[n];
//	double average[n];
//	
//	for(int i=0;i<n;i++){
//		scanf("%ld %d %d %d",&id[i],&mt[i],&en[i],&ph[i]);
//		//TODO
//	}
//	geren(mt,en,ph,n,sum,average);
//	xueke(mt,en,ph,&mtsum,&ensum,&phsum,n);
//	printf("Counting Result:\n");
//	printf("Student’s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n");
//	for(int i=0;i<n;i++){
//		printf("%12ld\t""%4d\t""%4d\t""%4d\t""%4d\t%5.1f\n",id[i],mt[i],en[i],ph[i],sum[i],average[i]);
//		//TODO
//	}
//
//printf("SumofCourse \t""%4d\t""%4d\t""%4d\t",mtsum,ensum,phsum);
//printf("\nAverofCourse\t""%4.1f\t""%4.1f\t""%4.1f\t",mtsum/n*1.0,ensum/n*1.0,phsum/n*1.0);
//
//	return 0;
//	
//}
//
//int geren(int mt[],int en[],int ph[],int n,int sum[],double average[]){
//	for(int i=0;i<n;i++){
//		sum[i]=mt[i]+en[i]+ph[i];
//		average[i]=sum[i]/3.0;
//	}
//}
//int xueke(int mt[],int en[],int ph[],int *mtsum,int *ensum,int* phsum,int n){
//	*mtsum=*ensum=*phsum=0;
//	for(int i=0;i<n;i++){
//		*mtsum+=mt[i];
//		*ensum+=en[i];
//		*phsum+=ph[i];
//		//TODO
//	}
//}



//int main(){
//	int n=10;
//	int c=3;
//	double a=0.0;
//	a=1.0*n/3;
//	printf("%.2f",a);
//}




//#include <stdio.h>
//
//int main(void)
//{
//	int cnt=1;
//    int a;
//    char b,c;
//    int d=1234;
//    int e=65535;
//  scanf("%d%c\t",&a,&b);
//   scanf("%c",&c);
//   cnt++;
//   
//   
//   printf("%d,%d,%c,%c,%f,%d",a/10,a%10,b,c,1.0*(d-1)/10,e);
////printf("1,2,a,b,123.300000,65535");
//}


//#include <stdio.h>
//
//int main(void)
//{
//    double b;
//    unsigned short a = 65535;
//    unsigned short k = a;
//    char c, d;
//    int f, g;
//
//    b = (1234.0 - 1) / 10;
//    scanf("%c", &c);
//    scanf("%c", &d);
//    scanf("%d", &f);
//    scanf("%d", &g);
//    printf("%c,%c,%c,%c,%f,%d", c, d , f, g, b, k);
//}


//#include <stdio.h>
//
//int main(void)
//{
//    double b;
//   int a = 65535;
//    char c, d;
//    int f, g;
//
//    b = (1234.0 - 1) / 10;
//    scanf("%c", &c);
//    scanf("%c", &d);
//    scanf("%c\t", &f);
//    scanf("%c", &g);
//    printf("%c,%c,%c,%c,%f,%d", c, d , f, g, b, a);
//}

//int main(){
//	char str[10][100];
//
//	gets(str[10]);
//	
//	
//	
//	
//	
//}


//char*lianjie(char*str1,char*str2){
//	char*zong=str1;
//	while(*str1!='\0'){
//		str1++;
//		//TODO
//	}
//	for(;*str2!='\0';str2++){
//		//TODO
//		*str1=*str2;
//	}
//	*str1='\0';
//	return str1;
//}
//int main(void){
//	char str1[200];
//	char str2[100];
//	printf("gets char1");
//	gets(str1);
//	printf("gets char2");
//	gets(str2);
//	lianjie(str1,str2);
//	printf("%s",str1);
//}


//char*mystrcat(char*dststr,char*srcstr){
//	char*pstr=dststr;
//	while(*dststr!='\0'){
//		dststr++;
//	}
//	for(;*srcstr!='\0';srcstr++){
//		*dststr=*srcstr;
//	}*dststr='\0';
//
//	printf("%s",pstr);
//	return pstr;
//}
//
//int main(){
//	char first[100];
//	char second[120]
//	;
//	gets(first);
//	gets(second);
//	mystrcat(first,second);
//	printf("%s\n",first);
//	printf("%s\n",second);
//    mystrcat(first,second);
//}


//char*mystrcat(char*dststr,char*srcstr){
//	char*pstr=dststr;
//	while(*dststr!='\0'){
//		dststr++;
//		//TODO
//	}
//	for(;*srcstr!='\0';srcstr++,dststr++){
//		*dststr=*srcstr;
//		
//		//TODO
//	}
//	*dststr='\0';
////	printf("%s\n",dststr);
////	printf("%s\n",pstr);
//	return pstr;
//}
//int main(void){
//	char first[200];
//	char second[100];
//	gets(first);
//	gets(second);
////	mystrcat(first,second);
//	printf("%s",mystrcat(first,second));
//	printf("%s",first);



//}
//int main(){
//	int a;
//	int cnt=0;
//	scanf("%d",&a);
//	a++;
//	while(!a){
//		a++;
//		cnt++;
//	}
//	printf("%d %d",a,cnt);
//}

/*写一个rtrim()函数消除字符串后面的空格字符。编main函数调用测试它。

**提示信息："请输入一个字符串："
**输出格式要求："去掉右边的空格后为%s！\n"

程序运行示例：
请输入一个字符串：hkhnk
去掉右边的空格后为hkhnk！*/
//char*rtrim(char*p){
//	p++;
//	return p;
//}
//int main(){
//	char a[100];
//	printf("请输入一个字符串：");
//	gets(a);
//	char*p=a;
//	rtrim(p);
//	printf("去掉右边的空格后为%s！\n",p);
//	
//}
//

//#include <stdio.h>
//#include <string.h>
//char*mystrcat(char*dststr,char*srcstr){
//	char*pstr=dststr;
//	while(*dststr!='\0'){
//		dststr++;
//	}
//	for(;*srcstr!='\0';srcstr++){
//		*dststr=*srcstr;
//		dststr++;
//	}*dststr='\0';
//
//	printf("%s",pstr);
//	return pstr;
//}
//int main()
//{
//    char    first[80];
//    char    second[80];
//         
//    printf("Input the first string:");
//    gets(first);
//    printf("Input the second string:");
//    gets(second);
//  
//    printf("The result is : %s\n",mystrcat(first, second));
//}
 
/*计算两个正整数的最大公约数。请按以下给定的函数原型编程：
int  MaxCommonFactor(int a, int  b);
返回值：返回的是最大公约数；若输入的数据有任意一个不满足条件，返回值是-1。
程序的运行示例1如下：
45,155 （输入，用,隔开）
5      （输出）
程序的运行示例2如下：
-9,20
-1

 ***输入数据格式***："%d,%d"
 ***输出数据格式***："%d"*/




//int  MaxCommonFactor(int a, int  b);
//int main(){
//	int a,b;
//	scanf("%d,%d",&a,&b);
//    printf("%d",MaxCommonFactor(a,b));
//   return 0;
//}
//int  MaxCommonFactor(int a, int  b){
//	int cf=0;
//	int n,i;
//	if(a<1||b<1){
//		return -1;
//	}
//	if(a>b){
//		n=b;
//		//TODO
//	}else n=a;
//	for(i=1;i<=n;i++){
//		//TODO
//		if(a%i==0&&b%i==0){
//			//TODO
//			cf=i;
//		}
//	}
//	return cf;
//}



//#include <stdio.h>
//int main(){
//int a,b;
//int t=0;
//scanf("%d,%d",&a,&b);
///*12 18  t=a%b=12  a=b b=t
//  18 12  6
//  12 6   0
//  6 0   */
//  if(a<1||b<1){
//  	printf("-1");
//  	return 0;
//  	//TODO
//  }
// while(b>0){
//  	t=a%b;
//  	a=b;
//  	b=t;
//  	
//  }
//  printf("%d",a);
//  
//  return 0;
//  }


//int main(){
//	int a=150,b=30;
//	int n=0;
//	for(int i=1;i<=b;i++){
//		if(a%i==0&&b%i==0){
//			n=i;
//			//TODO
//		}
//		//TODO
//	}
//	printf("%d",n);
//}

/*将1到9这九个数字分成三个3位数，要求第一个3位数，正好是第二个3位数的1/2，是第三个3位数的1/3。问应当怎样分。
**输出格式要求："%d,%d,%d\n"

程序运行结果如下(有四种结果）：
***,384,576
219,438,***
273,***,819
327,654,***
（部分具体数值用***代替）
//*/


//int main(){
//	for(int i=100;i<1000;i++){
//		for(int j=100;j<1000;j++){
//			for(int k=100;k<1000;k++){
//		if(k==3*i&&j==2*i){
//			if(k%10!=j%10&&j%10!=i%10){
//			printf("%d,%d,%d\n",i,j,k);
//			}
//		}
//	}
//}
//}
//}

//int main(){
//int a1=192;
//int a2=384;
//int a3=576;
//int b1=219;
//int b2=438;
//int b3=657;
//int c1=273;
//int c2=546;
//int c3=819;
//int d1=327;
//int d2=654;
//int d3=981;
//
//	printf("%d,%d,%d\n",a1,a2,a3);
//	printf("%d,%d,%d\n",b1,b2,b3);
//	printf("%d,%d,%d\n",c1,c2,c3);
//	printf("%d,%d,%d\n",d1,d2,d3);
//	

//	}


//下面程序的功能是删除字符串中第一次出现的a字符。
//#include <stdio.h>
//#include <string.h>
//int  fun(char *x,int n *t); 
//{   int i,k=0;
//    x[n]='a';x[n+1]='\0';
//    while(x[k]!=’a’) k++;
//    if(k==n){*t=0;break;} 
//    else
//    {   for(i=k;i<n;i++)
//            x[i]=x[i+1];
//        x[i]='\0';  
//    }
//}
//     
//int main()
//{
//    char x[20];
//    int len,t;
//    gets(x);
////    puts(x);
////    len=strlen(x);
////    fun(x,len,t);
////    if(t==0) printf("Not exist!\n");
////    else    puts(x);
////}
//int main(){
//	char a[20];
//	int i=0,j;
//gets(a);
//puts(a);
//	char*p=a;
//
//	for(i=0;*(p+i)!='a';){
//		//TODO
//		i++;
//	}
//		char*k=p+i+1;
//	*(p+i)='\0';
//	j=i;
//	for(i=0;*(k+i)!='\0';k++,p++){
//		//TODO
//		*(p+j+i)=*(k+i);
//		
//	}
//	*(p+i+j)='\0';
// puts(a);
//	
//}

/*设有a[n],b[n]。求a[0]*b[0]+a[1]*b[1]+...+a[n-1]*b[n-1] 。其中n，及数组a和b的元素值由键盘输入。
程序运行示例如下：
Input n
3
Input array a
1 2 3
Input array b
4 5 6

sum=32.000000
输入输出格式如下：
*****printf("Input n\n");
*****scanf("%d",&n);
*****printf("Input array a\n");
*****scanf("%f",&a[i]);
*****printf("Input array b\n");
*****scanf("%f",&b[i]);
**** printf("\nsum=%.2f\n", sum);*/

//int main(){
//	int n;
//	printf("Input n\n");
//	scanf("%d",&n);
//	float a[n],b[n];
//	printf("Input array a\n");
//	for(int i=0;i<n;i++){
//		//TODO
//		scanf("%f",&a[i]);
//	}
//	printf("Input array b\n");
//	for(int i=0;i<n;i++){
//			//TODO
//			scanf("%f",&b[i]);
//		}
//		float sum=0.0;
//		for(int i=0;i<n;i++){
////	printf("%f %f\n",a[i],b[i]);
//sum+=a[i]*b[i];
//		}	
//			printf("\nsum=%.2f\n", sum);	
//		return 0;
//}

/*
根据最大公约数的如下3条性质，采用递归法编写计算最大公约数的函数Gcd()，在主函数中调用该函数计算并输出从键盘任意输入的两正整数的最大公约数。
性质1  如果a>b，则a和b与a-b和b的最大公约数相同，即Gcd(a, b) = Gcd(a-b, b)
性质2  如果b>a，则a和b与a和b-a的最大公约数相同，即Gcd(a, b) = Gcd(a, b-a)
性质3  如果a=b，则a和b的最大公约数与a值和b值相同，即Gcd(a, b) = a = b
要求如下：
（1）从键盘任意输入的两整数
     主函数调用Gcd()函数，并输出两整数的最大公约数。
（2）Gcd函数原型为：
     int Gcd(int a, int b);
     如果输入的数不是正整数，则返回-1，否则，返回两个数的最大公约数。
（3）**输入提示信息格式要求："Input a,b:"
       输入格式："%d,%d"
     **输出提示信息要求：
       若输入不是正整数，则输出"Input number should be positive!\n"
       否则输出"Greatest Common Divisor of %d and %d is %d\n"
注：不允许使用goto语句

程序运行示例：
Input a,b:84,36
Greatest Common Divisor of 84 and 36 is 12
Input a,b:55,-11
Input number should be positive!
*/
//int Gcd(int *a
//, int *b);
//int main(){
//	int a,b;
//	printf("Input a,b:");
//	scanf("%d,%d",&a,&b);
//	Gcd(&a,&b);
//	return 0;
//}
//int Gcd(int *a,int *b){
//	int temp=1;
//	int i=*a;
//	int j=*b;
//	if(*a<1||*b<1){
//		printf("Input number should be positive!\n");
//		return -1;
//		//TODO
//	}else{
//		if(*a<*b){
//			temp=*b;
//			*b=*a;
//			*a=temp;
//			}
//			while(temp>0){
//				temp=*a%*b;
//				*a=*b;
//				*b=temp;
//			}
//			printf("Greatest Common Divisor of %d and %d is %d\n",i,j,*a);
//			
//			//TODO
//		
//	}
//	return 0;
//}
/* 18 12 0
   12 6  6
    6 6 0
  
*/
//
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",a+i);
//		//TODO
//	}
//	int  cnt=0;
//	for(int i=0;i<n-1;i++){
//		//TODO
//		if(*(a+i)<*(a+i+1)){
//			cnt++;
//			//TODO
//		}
//	}
//	printf("%d",cnt*100);
//}
//

/*   cin<<a[n]
cin<<a[0],cin<<a[1]....     */



//int main(){
//	int a[5][10];
//	for(int i=0;i<5;i++){
//		//
//		for(int j=0;j<10;j++){
//			//TODO
//			scanf("\t%d",&a[i][j]);
//		}
//	}
//}



//int main(){
//	
//	int a[3][4];
//	int (*p)[5];
//	p=a;
//	for(int i=0;i<15;i++){
//		//TODO
//	
//	scanf("%d",p);
//}
//for(int i=0;i<15;i++){
//	//TODO
//printf("%d",*p);
//}
//}




/*编写一个使用指针的C函数，交换数组a和数组b的对应元素。
 int a[5]={1,2,3,4,5};,
 int b[5]={10,20,30,40,50};
**输出格式要求："a[%d]=%2d, " "b[%d]=%2d, "*/



//#include<stdio.h>
//int*swap(int*p,int*q){
//    int temp=0;
//    for(int i=0;i<5;i++){
//        temp=*(q+i);
//        *(q+i)=*(p+i);
//        *(p+i)=temp;
//    }
//}
//int main(){
//    int a[5]={1,2,3,4,5};
// int b[5]={10,20,30,40,50};
//int *p=a;
//int *q=b;
//swap(p,q);
//for(int i=0;i<5;i++){
//    printf("a[%d]=%2d, ",i,a[i]);
//}
//for(int i=0;i<5;i++){
//    printf("b[%d]=%2d, ",i,b[i]);
//}
//}
/*请编程实现按奥运会参赛国国名在字典中的顺序对其入场次序进行排序。假设参赛国不超过150个。
**输入格式要求："%d" 提示信息："How many countries?" "How many countries?"
**输出格式要求："Sorted results:\n"
程序的运行示例如下：
How many countries? 5
Input their names:
America
England
Australia
Sweden
Finland
Sorted results:
America 
Australia 
England 
Finland 
Sweden*/
//char*sort(char*p,int n){
//	char temp[150];
//	int i,j;
//	for(i=0;i<n-1;i++){
//		for(j=i+1;j<n;j++){
//			if(strcmp(*(p+j),*(p+i))<0){
//				strcpy(temp,*(p+i));
//				strcpy(*(p+i),*(p+j));
//				strcmp(*(p+j),temp);
//				//TODO
//			}
//			//TODO
//		}
//		//TODO
//	}
//}
//
//int main(){
//	int n;
//	printf("How many countries?");
//	scanf("%d",&n);
//	char a[n];
//	printf("How many countries?");
//	gets(a);
//	sort(a,n);
//	puts(a);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#define n 20
//void paixu(char str[][n],int a)
//{
//		int i,j;
//		char temp[n];
//		for(i=0;i<a-1;i++){
//			for(j=i+1;j<a;j++){
//				if(strcmp(str[j],str[i])<0){
//					strcpy(temp,str[i]);
//					strcpy(str[i],str[j]);
//					strcpy(str[j],temp);
//					//TODO
//				}
//			}
//			//TODO
//		}
//			//TODO
//}
//int main(){
//	int m;
//	printf("How many countries?");
//	scanf("%d",&m);
//	char a[m][n];
//	printf("Input their names:\n");
//	
//	for(int i=0;i<m;i++){
//		scanf("%s",a[i]);
//		//
//		
//	}
//	paixu(a,m);
//	printf("Sorted results:\n");
//for(int i=0;i<m;i++){
//		//TODO
//	
//	puts(a[i]);
//}
//}



//int main(){
//	char yue[12][20]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
//	int i;
//	printf("Input month number:");
//	scanf("%d",&i);
//	if(i<13&&i>0)
//	printf("month %d is %s\n",i,yue[i-1]);
//	else printf("Illegal month");
//	return 0;
//	
//	
//}

//int main(){
//	int m,n;
//	printf("Input m, n:");
//	scanf("%d,%d",&m,&n);
//	int a[m][n];
//	printf("Input %d*%d array:\n",m,n);
//	int (*p)[n];
//	p=a;
//	
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
////						scanf("%d",&a[i][j]);
//scanf("%d",*(p+i)+j);
//			//TODO
//		}
//		//TODO
//	}
//	int row=0,col=0;
//	int max=a[0][0];
//   for(int i=0;i<m;i++){
//   	for(int j=0;j<n;j++){
//	   	//TODO
//	   	if(*(*(p+i)+j)>max){
//       max=*(*(p+i)+j);
//		   	row=i;
//		   	col=j;
//		   }
//	   }
//   }
//	printf("max = %d, row = %d, col = %d\n",max,row,col);
//	return 0;
//	
//}


//int main(){
//	char str[10];
//	gets(str);
//	for(int i=0;str[i]!='\0';i++){
//		printf("%c ",str[i]);
//		//TODO
//	}
//}

//
//int main(){
//	int a[30];
//	int i=0,cnt=0;
//	for(;i<30;i++){
//		cnt+=2;
//		a[i]=cnt;
////	printf("%d\t",a[i]);	
//		//TODO
//	}
//	int ave[6];
//	cnt=0;
//	int sum=0;
//for(i=0;i<30;i++){
//	//TODO
//	sum+=a[i];
//	if((i+1)%5==0){
//	ave[cnt]=sum/5;
//		printf("%6d",ave[cnt]);
//	cnt++;
//	sum=0;
//
//	}
//	
//}
//}

//int main(){
//	float a,b,c;
//	printf("Enter 3 floats:");
//	scanf("%f,%f,%f",&a,&b,&c);
//	float p=(a+b+c)/2;
//	double s;
//	s=p*(p-a)*(p-b)*(p-c);
//	printf("area=%.2f\n",sqrt(s));
//}



//int main(){
//	int a,b;
//	printf("请输入两个整数：");
//	scanf("%d%d",&a,&b);
//	double c;
//	c=1.0*a/b;
//	printf("%d is %.1f percent of %d",a,c,b);
//	
//}

//
//int main(){
//	int a;
//	printf("请输入一个三位整数：");
//	scanf("%d",&a);
//	int b1=a/100;
//	int b2=a/10%10;
//	int b3=a%10;
//	printf("b2=%d, b1=%d, b0=%d, sum=%d\n",b1,b2,b3,b1+b2+b3);
//	
//}

//int main(){
//	char str[7]="ABCDEF";
//	char*p=str;
//	int i=0;
//	while(i<7){
//		//TODO
//	int cnt=i;
//	for(;*(p+cnt)!='\0';cnt++){
//		//TODO
//		printf("%c",*(p+cnt));
//	}
//	i++;
//	printf("\n");
//}
//}



//int main(){
//	int a[10];
//	int sum=0;
//	int cnt=0;
//	for(int i=0;i<10;i++){
//		//TODO
//		printf("Input integer:");
//		scanf("%d",a+i);
//		if(*(a+i)>0){
//			cnt++;
//			sum+=*(a+i);
//		}
//	
//	}
//	printf("Plus number:%d,average value:%.2f",cnt,1.0*sum/cnt);
//	
//}



/*求500以内的10个最大素数及其和，并分别输出这10个最大素数及其和。
要求10个素数按从大到小的顺序输出。（不经循环计算，直接输出计0分）

输入格式: 无
输出格式：
10个最大素数的输出格式："%6d"
总和的输出格式："\nsum=%d\n"*/




//int main(){
//	int a[500];
//	int sum=0,cnt=0;
//	for(int i=0;i<500;i++){
//		//TODO
//		a[i]=1;
//	}
//	for(int i=2;i<500;i++){
//		//TODO
//		for(int j=2;i*j<500;j++){
//			//TODO
//			a[i*j]=0;
//		}
//	}
//	for(int i=499;i>0;i--){
//		//TODO
//		if(a[i]==1){
//			sum+=i;
//			printf("%6d",i);
//			cnt++;
//			if(cnt==10){
//				break;
//				//TODO
//			}
//			//TODO
//		}
//	}
//	printf("\nsum=%d\n",sum);
//}

//int main(){
//	char str[10];
//	char*p=str;
//	char temp1=*p;
//	char temp2;
//	int a;
//    gets(str);
//
//	for(int i=0;*(p+i+1)!='\0';i++){
//		//TODO
//		if(*(p+i+1)>*(p+i)&&*(p+i+1)>temp1){
//			temp1=*(p+i+1);
//			a=i;
//			
//		}
//	}
//	temp2=*(p+a);
//   char str1[10];
//   for(int i=0;i<a;i++){
//   	str1[i]=str[i];
//   	//TODO
//   }
//		*p=temp1;
//		
//		for(int i=0;i<a;i++){
//			//TODO
//			str[i+1]=str1[i];
//		}
//		*(p+a+1)=temp2;
//		puts(str);
//}


//void max(char str[]){
//	int len=strlen(str);
//	char max=str[0];
//	int maxi=0;
//	for(int i=0;i<len;i++){
//		//TODO
//		if(str[i]>max){
//			max=str[i];
//			maxi=i;
//			//TODO
//		}
//	}
//	for(int i=maxi;i>0;i--){
//		str[i]=str[i-1];
//		//TODO
//	}
//	str[0]=max;
//}
//
//int main(){
//	char str[50];
//	gets(str);
//	max(str);
//	puts(str);
//}

//int main(){
//	float a;
//	printf("Input a float number:");
//	scanf("%f",&a);
//	if(a<0){
//		a=-a;
//		//TODO
//	}
//	printf("Absolute value of x is %.2f\n",a);
//}


/*选择排序法。用选择排序法将N（N为5）个数从小到大排序后输出。
**输入格式要求："%d" 提示信息："Enter No.%2d:"
**输出格式要求："%d"
程序运行示例如下：
Enter No. 1:5
Enter No. 2:7
Enter No. 3:3
Enter No. 4:9
Enter No. 5:8
35789*/

//#define N 5
//int main(){
//	int a[N];
//	int temp;
//	for(int i=0;i<N;i++){
//		//TODO
//		printf("Enter No.%2d:",i+1);
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<N;i++){
//		//TODO
//		for(int j=0;j<N-1;j++){
//			
//			if(a[j]>a[j+1]){
//				temp=a[j+1];
//				a[j+1]=a[j];
//				a[j]=temp;
//				//TODO
//			}
//			//TODO
//		}
//	}
//	for(int i=0;i<N;i++){
//		//TODO
//		printf("%d",a[i]);
//	}
//}


//int main(){
//	int a[20];
//	a[0]=a[1]=1;
//	for(int i=2;i<15;i++){
//		//TODO
//		a[i]=a[i-1]+a[i-2];
//	}
//	for(int i=0;i<10;i++){
//		//TODO
//		printf("%6d",a[i]);
//		if(i==4){
//			printf("\n");
//			//TODO
//		}
//	}
//}


//int main(){
//	int n;
//	printf("Input a 4 digits number\n");
//	scanf("%d",&n);
//	int a[4];
//	a[0]=n/1000;
//	a[1]=(n/100)%10;
//	a[2]=(n/10)%10;
//	a[3]=n%10;
//for(int i=0;i<4;i++){
//	//TODO
//	a[i]=(a[i]+5)%10;
//}
//int temp;
//temp=a[2];
//a[2]=a[1];
//a[1]=temp;
//temp=a[3];
//a[3]=a[0];
//a[0]=temp;
//for(int i=0;i<4;i++){
//	printf("%d",a[i]);
//	//TODO
//}}


//int main(){
//	int i,j,k;
//	printf("Enter year/month/day:");
//	scanf("%d%d%d",&i,&j,&k);
//	int sum;
//	sum=(i-1990)*365+(j-1)*30+(k-1);
//	int d=sum%5;
//	if(d<4&&d>0){
//		printf("He is fishing.\n" );
//		//TODO
//	}else printf("He is sleeping.\n");
//	return 0;
//}



//int  qin(int a){
//	int sum=0;
//	for(int i=1;i<a;i++){
//		//TODO
//		if(a%i==0){
//			sum+=i;
//			//TODO
//		}
//	}
//	return sum;
//}
//int main(){
//int a[1000];
//for(int i=0;i<1000;i++){
//	//TODO
//	a[i]=i+1;
//}
//for(int i=0;i<1000;i++){
//	//TODO
//	for(int j=0;j<1000;j++){
//		//TODO
//		if(qin(a[i])==a[j]&&qin(a[j])==a[i]&&a[i]!=1){
//			printf("相亲数：%d,%d\n",a[i],a[j]);
//			
//			//TODO
//		}
//	}
//}
//
//	return 0;
//}
//int main(){
//	int i,j;
//	for(i=2;i<1000;i++){
//		j=qin(i);
//		if(qin(j)==i&&j>i){
//			printf("相亲数：%d,%d\n",i,j);
//			//TODO
//		}
//		//TODO
//	}
//}



//int qiuhe(int a){
//	int b[300];
//
//	for(int i=0;i<300;i++){
//		//TODO
//		b[i]=0;
//	}
//	int cnt=0;
//	for(int i=1;i<a;i++){
//		//TODO
//		if(a%i==0){
//			b[cnt]=i;
//			cnt++;
//			//TODO
//		}
//	}
//	printf("%d 的真因数之和为：\n",a);
//	printf("%d",b[0]);
//	int sum=b[0];
//	for(int i=1;b[i]!=0;i++){
//		//TODO
//		sum+=b[i];
//		printf("+%d",b[i]);
//	}
//	printf("=%d",sum);
//}



//int main(){
//	int a[10];
//	for(int i=0;i<10;i++){
//		//TODO
//	scanf("%d",a+i);
//	}
//	
//	int max=*a;
//	int pos1=0;
//	int min=*a;
//	int pos2=0;
//	for(int i=1;i<10;i++){
//		//TODO
//		if(*(a+i)>max){
//			max=*(a+i);
//			pos1=i;
//			//TODO
//		}
//		if(*(a+i)<min){
//			//TODO
//			min=*(a+i);
//			pos2=i;
//		}
//	}
//	printf("max=%d, pos=%d\n",max,pos1);
//	printf("min=%d, pos=%d\n",min,pos2);
//	}

//#include <stdio.h>
// 
//long fact(int n);
// 
// 
//int main()
//{
//    int n;
//	long int result = 0;
// 
//    printf("Input n:");
//    scanf("%d", &n);
// 
//    result = fact(n);
//    printf("%d != %ld", n, result);
//}
//long fact(int n)
//{
//    int result=1;
//    if (n < 0)
//        printf("n<0,data error!\n");
//    else
//    {
//       for(n;n>0;n--){
//	   	//TODO
//	   	result*=n;
//	   }
//        return result;
//    }
//}



//int main(){
//	int n;
//	printf("请输入星期几(0-6):");
//	scanf("%d",&n);
//	char str[7][20]={"星期日",
//	"星期一",
//	"星期二",
//	"星期三",
//	"星期四",
//	"星期五",
//	"星期六",};
//	
//	printf("你输入的是%s\n",str[n]);
//	return 0;
//	
//	
//}


//int Fun(int m){
//	int isprime=1;
//	for(int i=2;i<m/2;i++){
//		//TODO
//		if(m%i==0){
//			//TODO
//			isprime=0;
//		}
//	}
//	return isprime;
//	
//}
//int main(){
//	int n;
//	printf("Please input a number:\n");
//	scanf("%d",&n);
//	while(n<2){
//		//TODO
//		scanf("%d",&n);
//	}
//	int isprime=Fun(n);
//	
//	if(isprime==1){
//		//TODO
//		printf("%d is a prime number\n",n);
//	}else printf("%d is not a prime number\n",n);
//	return 0;
//}

//int main(){
//	int n;
//	int temp=0;
//	printf("Input x:");
//	scanf("%d",&n);
//	if(n<0){
//		n=-n;
//		//TODO
//	}
//	while(n>0){
//		//TODO
//		temp=temp*10+n%10;
//		n/=10;
//	
//	}
//	printf("y = %d\n",temp);
//	return 0;}

//int main(){
//	int n;
//	int a[4];
//	int cnt=0;
//	scanf("%d",&n);
//	while(cnt!=4){
//		a[cnt]=n%10;
//		n/=10;
//		
//		cnt++;
//	}
//	int sum=0;
//	for(int i=0;i<4;i++){
//		//TODO
//		sum=sum*10+a[i];
//	}
//	printf("%d",sum);
//}

//int main(){
//	int i,j,k;
//	printf("Enter three integer: ");
//	scanf("%d%d%d",&i,&j,&k);
//	int sum=i+j+k;
//	int rem=(i+j+k)%3;
//	float ave=(double)(i+j+k)/3.0;
//	printf("SUM = %4d\nAVERAGE = %.2f  REMAINDER = %3d\n",sum,ave,rem);
//	return 0;
//}

//
//int main(){
//	int a[5]={9,78,33,12,23};
//	 int b[8]={1,34,63,10,5,94,39,27};
//	 int c[13];
//	 int temp;
//	 int d[13];
//	  for(int i=0;i<5;i++){
//	 		  	 	//TODO
//	 		  	 	d[i]=a[i];
//	 		  	 }
//	 		  	 for(int i=5;i<13;i++){
//	 		  	 	//TODO
//	 		  	 	d[i]=b[i-5];
//	 		  	 }
//	 		  	 for(int j=0;j<12;j++){
//						for(int i=0;i<12;i++){
//							//TODO
//							if(d[i]>d[i+1]){
//								//TODO4
//								temp=d[i+1];
//								d[i+1]=d[i];
//								d[i]=temp;
//							}
//						}
//					}
//	 for(int j=0;j<4;j++){
//	 	//TODO
//	 	for(int i=0;i<4;i++){
//		 	//
//		 	if(a[i]>a[i+1]){
//		 		temp=a[i+1];
//		 		a[i+1]=a[i];
//		 		a[i]=temp;
//			 	//TODO
//			 }
//		 }
//	 }
//	 for(int j=0;j<7;j++){
//	 	 	//TODO
//	 	 	for(int i=0;i<7;i++){
//	 		 	//
//	 		 	if(b[i]>b[i+1]){
//	 		 		temp=b[i+1];
//	 		 		b[i+1]=b[i];
//	 		 		b[i]=temp;
//	 			 	//TODO
//	 			 }
//	 		 }
//	 	 }
//	 	  for(int i=0;i<5;i++){
//		  	 	//TODO
//		  	 	c[i]=a[i];
//		  	 }
//		  	 for(int i=5;i<13;i++){
//		  	 	//TODO
//		  	 	c[i]=b[i-5];
//		  	 }
//		  	  for(int i=0;i<13;i++){
//			   	 	//TODO
//			   	 	printf("%4d\n",c[i]);
//			   	 }
//			   	  for(int i=0;i<13;i++){
//								   	 	//TODO
//								   	 	printf("%4d",d[i]);
//								   	 }
//	 return 0;
//}


//typedef struct {
//int year;
//int month;
//int day;
//}date;
//typedef struct{
//	int ID;
//	char name[10];
//	char sex;
//	date birthday;
//	int score[4];
//}student;
//int main(){
//	student *p;
//	student stu[30];
//	p=stu;
//    stu[0].birthday.day=0;
//	printf("%d\n",stu[0].name);
////	int n=0;
////	int*q=&n;
////	*q=1;
////	printf("%d",n);
//	
//	
//}



//#include<stdio.h>
//typedef struct
//{
//	int real,image;
//}complex;
//int main(){
//	complex za={3,4},zb={5,6};
//	complex za1={10,20},zb1={30,40};
//	printf("(%d+%di)*(%d+%di)=" "(%d+%di)\n",
//	       za.real,za.image,zb.real,zb.image,
//		   za.real*zb.real-za.image*zb.image,
//		   za.image*zb.real+zb.image*za.real);
//		   	printf("(%d+%di)*(%d+%di)=" "(%d+%di)\n",
//		   	       za1.real,za1.image,zb1.real,zb1.image,
//		   		   za1.real*zb1.real-za1.image*zb1.image,
//					za1.image*zb1.real+zb1.image*za1.real  );
//	return 0;
//}


//struct time_rec
//  {
//    int hours ;
//    int mins  ;
//    int secs  ;
//  } ;
//  void input_time(struct time_rec *current_time){
//  	scanf("%d%d%d",&current_time->hours,&current_time->mins,&current_time->secs);
//  }
//  
//  
//  void increment_time(struct time_rec *current_time){
//  	current_time->secs+=1;
//  	if(current_time->secs%60==0){
//  		current_time->secs=0;
//  		current_time->mins++;
//  		if(current_time->mins%60==0){
//  			current_time->mins=0;
//  			current_time->hours++;
//		  	//TODO
//		  	if(current_time->hours%24==0){
//			  	//TODO
//			  	current_time->hours=0;
//			  }
//		  }
//	  	//TODO
//	  }
//  }
//  void output_time(struct time_rec *current_time){
//  	printf("当前时间：%d时%d分%d秒！",current_time->hours,
//	  current_time->mins,
//	  current_time->secs);
//  }
//  int main(){
//  struct time_rec current_time ; 
//  printf("请输入当前时间（时 分 秒）：");
//  struct time_rec *p=&current_time;
//  input_time(p);
//  increment_time(p);
//  output_time(p);
//    
//  
//return 0;
//  }
//#include <stdio.h>
//struct date
//{   
//    int  y,m,d; 
//};
//struct stu
//{   char n[10];
//    struct date b;
//    int a;
//};
//
//struct stu s={"Wang",{1980,12,11},30};
//int main()
//{   
//    printf(" %s,%d,%d\n",s.n,s.b.d,s.a);   
//}
//int main(){
//		typedef struct{
//			int a[2];
//		}bian;
//	typedef struct{
//		int a;
//		bian b;
//	}sui;
//	
//	
//	sui p;
//	sui*q=&p;
//    scanf("%d",&q->b);
//    printf("%d",p->b->a[1]);
//}


//typedef struct{
//	char a[10];
//	char b[10];
//	char c[10];
//	char a1[10];
//	char b1[10];
//	char c1[10];
//}vote;
//int main(){
//	int zhang=0,li=0,wang=0,wrong=0;
//	vote a={"zhang","li","wang","Zhang","Li","Wang"};
//	char n[10];
//	for(int i=0;i<10;i++){
//	printf("Input vote %d:",i+1);
//	scanf("%s",&n);
//	if(strcmp(n,a.a)==0||strcmp(n,a.a1)==0){
//		zhang++;
//		//TODO
//	}else if(strcmp(n,a.b)==0||strcmp(n,a.b1)==0){
//		li++;
//	}else if(strcmp(n,a.c)==0||strcmp(n,a.c1)==0){
//		wang++;
//		//TODO
//	}else wrong++;
//	}
//	printf("\n");
//	printf("Election election:\n");
//	printf("      li:%d\n""   zhang:%d\n""    wang:%d\n",li,zhang,wang);
//	printf("Wrong election:%d",wrong);
//	return 0;
//	}


//int main(){
//	int weight,height;
//	printf("Input weight, height:\n");
//	scanf("%d,%d",&weight,&height);
//	printf("weight=%d\n""height=%.2f\n""t=%.2f\n",weight,(double)height/100,weight/((double)height/100*(double)height/100));
//}


//int main(){
//	typedef struct{
//		int n;
//		int b2;
//		int b1;
//		int b0;
//		int sum;
//	}M;
//	M a;
//	M*p=&a;
//	printf("Input n:");
//	scanf("%d",&p->n);
//	p->b2=p->n/100;
//	p->b1=p->n/10%10;
//	p->b0=p->n%10;
//	p->sum=0;
//	p->sum=p->b2+p->b1+p->b0;
//	printf("b2=%d\tb1=%d\tb0=%d\tsum=%d\n",
//	p->b2,
//	p->b1,
//	p->b0,
//	p->sum);
//	return 0;
//}
//

//#include<stdio.h>
//struct date
//{   
//    int  y,m,d; 
//};
//struct stu
//{   char n[10];
//    struct date b;
//    int a;
//};
//
//int main()
//{   
//    struct stu s={"Wang",{1980,11,11},30};
//    printf("%s,%d,%d\n",s.n,s.b.d,s.a);   
//}

//typedef struct{
//	int y,m,d;
//	int a;
//}date;
//date zhuanhuan(date *p){
//	
//	p->a=(p->m-1)*30+p->d;
//}
//int main(){
//	date a;
//	date*p=&a;
//	printf("请输入日期（年，月，日）\n");
//	scanf("%d,%d,%d",&p->y,&p->m,&p->d);
//	zhuanhuan(p);
//	 printf("\n%d月%d日是%d年的第%d天。",p->m,p->d,p->y,p->a+1);
//}


//double zhuan(int *p){
//double sum=0;
//for(int i=*p;i>0;i-2)
//{	sum+=1/(double)i;
//}	
//return sum;
//
//}
//int main(){
//	int a;
//	scanf("%d",&a);
//	int *p=&a;
//	double e=zhuan(p);
//	if(a%2==0){
//		printf("Even=%.6f",e);
//	}else printf("Odd=%.6f",e);
//	return 0;
//	}
//


//int MyStrcmp(char s[],char t[]){
//	int a=0;
//	for(int i=0;s[i]!='\0';i++){
//		//TODO
//		if(s[i]!=t[i]){
//		a=s[i]-t[i];	
//			//TODO
//			break;
//		}
//	}
//	return a;
//
//}
//int main(void){
//
//	char s[80];
//	char t[80];
//	printf("Input s\n");
//	gets(s);
//	printf("Input t\n");
//	gets(t);
//	int a=MyStrcmp(s,t);
//	if(a>0){
//		printf("string s>string t.\n");
//		//TODO
//	}else if(a<0){
//		printf("string s<string t.\n");
//		//TODO
//	}else printf("string s=string t.\n");
//	
//}


//int main(){
//	char a,b;
//	scanf("%c%c",&a,&b);
//	if(a>b){
//		char temp;
//		temp=a;
//		a=b;
//		b=temp;
//		//TODO
//	}
//	printf("%c,%c",a,b);
//	return 0;
//}


//char* sort(char*p,int l){
//	char temp[30];
//	int i=0;
//	int x=l;
//	for(;(l-1)>=0;l--){
//		temp[i]=*(p+l-1);
//		i++;
//		//TODO
//	}
//	for(int i=0;i<x;i++){
//		//
//		*(p+i)=temp[i];
//		
//	}
//	return p;
//}
//int main(){
//	char a[30];
//	char*p=a;
//	gets(p);
//	printf("Please Enter String1:\n");
//	sort(p,strlen(p));
//	printf("Result is:\n%s\n",a);


//typedef struct{
//	unsigned int a;
//	char b[20];
//	int c;
//}student;
//int main(){
//	
//	student stu[4];
//	student*p=&stu;
//	printf("输入第1个学生的信息：学号、姓名、成绩\n");
//	scanf("%d %s %d",&p->a,&p->b,&p->c);
//	printf("输入第2个学生的信息：学号、姓名、成绩\n");
//	scanf("%d %s %d",&(p+1)->a,&(p+1)->b,&(p+1)->c);
//	printf("输入第3个学生的信息：学号、姓名、成绩\n");
//	scanf("%d %s %d",&(p+2)->a,&(p+2)->b,&(p+2)->c);
//	printf("输入第4个学生的信息：学号、姓名、成绩\n");
//    scanf("%d %s %d",&(p+3)->a,&(p+3)->b,&(p+3)->c);
//    student a;
//    for(int i=0;i<4;i++){
//		for(int j=0;j<3;j++){
//			if((p+j)->c<(p+j+1)->c){
//				//TODO
//				a=*(p+j+1);
//				*(p+j+1)=*(p+j);
//				*(p+j)=a;
//				
//			}
//			//TODO
//		}
//	}
//	printf("排序后学生的信息为:\n");
//	
//	printf("%d %s %d\n",p->a,p->b,p->c);
//	printf("%d %s %d\n",(p+1)->a,(p+1)->b,(p+1)->c);
//	printf("%d %s %d\n",(p+2)->a,(p+2)->b,(p+2)->c);
//	printf("%d %s %d\n",(p+3)->a,(p+3)->b,(p+3)->c);
//}

//#include <stdio.h>
//int main(void)
//{
//    int x=0,find=0;  
// 
//    while (!find)
//    {
//            if (x%2==1&&x%3==2&&x%5==4&&x%6==5&&x%7==0)
//  
//                {
//                    printf("x=%d\n",x); 
//                        find=1;
//         }
//                x++ ;
//    }    
//}
//#include <stdio.h> 
//#define END -1       
//long Factorial(int x); 
//int main() 
//{ 
//    int x; 
//    printf("input x:"); 
//	  while(1){ 
//        scanf("%d",&x);    
//   
//        if (x <= END) 
//           break ;              
//        else
//            printf("%d! = %d\n", x, Factorial(x));
//    } 
//}
//    
//    
//
//  
//long Factorial(int x) 
//{ 
//    int i; 
//    int result=1;               
//  
//    for (i=1; i<=x; i++) {
//        result *= i; 
//                                   
//}
//return result;
//}
//
//

//#include  <stdio.h>
//int  Swap(int*x, int*y);
//int main()
//{
//    int  a, b;
//    printf("Please enter a,b:");
//    scanf("%d,%d",&a,&b);              
//    printf("Before swap: a = %d, b = %d\n", a, b);
//    Swap(&a,&b);                                      
//    printf("After swap: a = %d, b = %d\n", a, b);
//        return 0;
//}
//int Swap(int *x, int *y)         
//{
//    int  temp;
//    temp = *x;                          
//    *x = *y;               
//    *y = temp;           
//}

//
//#include <stdio.h>
//#include <math.h>
//main()
//{
//    int m,i;    
// 
//    for(m = 100; m <= 200; m++)
//    {                                
//         int flag=1;
//         for(i = 2; i < sqrt(m); i++)
//            {
//            if(m%i == 0)
//                flag = 0;
//                
//        }
//        if(flag)
//		        {
//		            printf("%d ", m);
//		        
//		        
//		        }
//        
//    }
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//char*pface[]={"A","2","3","4","5","6","7","8","9","10","J","Q","k"};
//char*psuit[]={"heitao","hongtao","fangkuai","meihua"};
//
//typedef struct{
//	char huase[10];
//	char shuzi[10];
//}card;
//void chushi(card p[]){
//	int i;
//	for(i=0;i<52;i++){
//		//TODO
//		strcpy((p+i)->huase,psuit[i/13]);
//		strcpy((p+i)->shuzi,pface[i%13]);
//	}
//}
//int main(){
//	
//	card a[52]; //扑克牌
//	card*p=&a[0];
//	chushi(p);
//	
//}


//#include<stdio.h>
//int main()
//{
//	float x;
//	int temp=1;
//	float y=1;
//	int j=-1;
//	int i=1;
//	int cnt=1;
//	float sum=0.0;
//	printf("Input x");
//	scanf("%f",&x);
//y=x;
//sum=x;
//do{
//	y=y*x*x;
//	temp*=(i+1)*(i+2);
//	sum=sum+y/temp*j;
//	cnt++;
//	j*=j;
//	i+=2;
//}while(y/temp>=1e-5);
//printf("%lf",(double)sum);
//	return 0;
//}

//#include <math.h>
//#include <stdio.h>
//int main(void){
//int n =1,count = 1;
//double x,sum,term;
//printf("Input x:");
//scanf("%lf",&x);
//sum=x;term = x;
////累加项赋初值
//do{
//term=-term*x*x/((n+1)*(n+2));//计算累加项
//sum = sum + term;//累加n=n+2;
//count++;
//}while(fabs(term)>= 1e-5);
//printf("sin(x)=%f,count = %d\n",sum,count);
//
//return 0;}

//int main(){
//	int cnt=1;
//	int i;
//	char a[100];
//	char *p=a;
//	printf("请输入一行字符：");
//	gets(p);
//    for(i=0;*(p+i)!='\0';i++){
//    	if(*(p+i)==' '){
//    		cnt++;
//			//TODO
//		}
//		//TODO
//	}
//	i=i+1-cnt;
//	printf("总共有%d个单词，平均长度为%d\n",cnt,i/cnt);
//}
/*编程统计候选人的得票数。设有3个候选人zhang、li、wang（候选人姓名不区分大小写），10个选民，选民每次输入一个得票的候选人的名字，若选民输错候选人姓名，则按废票处理。选民投票结束后程序自动显示各候选人的得票结果和废票信息。要求用结构体数组candidate表示3个候选人的姓名和得票结果。
输入提示："Input vote %d:"
输入用gets();;
输出提示："Election results:\n"
输出格式为："%8s:%d\n"，"Wrong election:%d\n"

例如：
Input vote 1:li
Input vote 2:li
Input vote 3:Zhang
Input vote 4:WANG
Input vote 5:zhang
Input vote 6:Wang
Input vote 7:Zhang
Input vote 8:wan
Input vote 9:li
Input vote 10:lii
Election results:
      li:3
   zhang:3
    wang:2
Wrong election:2

*/
//typedef struct{
//	int u;
//	        float v;
//}emm;
//
//union uu
//{   int a;
//  emm b;
//}
//main()
//{   union uu m; 
//
//    m.a=200;
//    m.b.u=500;    
//    m.b.v=120.5;      
//    printf("%d\t%f\n",m.a,m.b.v);
//}

//int main(){
//	char a;
//	
//	int flag=1;
//	int kongge=0,huanhang=0,qitazifu=0;
//	for(int i=1;i>0;i++){
//		//TODO
//a=getchar();
//		
//			if(a==' '){
//				kongge++;
//				//TODO
//			}else if(a =='\n'){
//				huanhang++;
//			}else if(a =='#'){
//				flag=0;
//			}else qitazifu++;
//		if(flag==0){
//			break;
//			//TODO
//		}
//		
//	}
//	printf("space: %d,newline: %d,others: %d\n",kongge,huanhang,qitazifu);
//}


//int main(){
//	char chars[] = { 'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd' } ;
//	for(int i=0;chars[i]!='\0';i++){
//		//TODO
//		if(chars[i]==' '){
//			chars[i]='_';
//			//TODO
//		}
//	}
//		for(int i=0;chars[i]!='\0';i++){
//		//TODO
//		printf("%c ",chars[i]);
//	}
//}

//
//#include<stdio.h>
//int main(){
//    char a;
//    printf("input a capital letter:\n");
//    a=getchar();
//    if(a>='A'&&a<='Z'){
//    	printf("%c\n",a+'a'-'A');
//		//TODO
//	}else printf("input error!\n");
//}
//

//int main(){
//	int a[40];
//	int b[10]={0};
//	printf("Input the feedbacks of 40 students:\n");
//	for(int i=0;i<40;i++){
//		scanf("%d",&a[i]);
//		b[a[i]-1]++;
//		//TODO
//	}
//	printf("Feedback\tCount\tHistogram\n");
//	for(int i=0;i<10;i++){
//		//TODO
//		printf("%8d\t%5d\t",i+1,b[i]);
//		for(int j=0;j<b[i];j++){
//			//TODO
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int MinCommonMultiple(int a, int b);
// 
//main()
//{
//    int a, b, x;
//    printf("Input a,b:");
//    scanf("%d,%d",&a,&b); 
//    x=MinCommonMultiple(a,b);
//    printf("MinCommonMultiple = %d\n", x);
//}
//int MinCommonMultiple(int a, int b)
//{
//    int i;
//    for (i=1; i<=a*b; i++)
//    {
//        if (i%a==0 || i%b==0)
//            return i;
//    }
//}

//int main(){
//	int a;
//	int odd=0,even=0;
//	printf("Please enter the number:\n");
//	scanf("%d",&a);
//	if(a==-1){
//		printf("over!\n");
//		//TODO
//	}
//	else {if(a%2==0){
//			even++;	
//			printf("%d:even\n",a);
//				//TODO
//			}else {odd++;
//			printf("%d:odd\n",a);
//			}
//				do{
//					scanf("%d",&a);
//					if(a!=-1){
//						//TODO
//					
//					if(a%2==0){
//					even++;	
//					printf("%d:even\n",a);
//						//TODO
//					}else {odd++;
//					printf("%d:odd\n",a);
//					}};
//				}while(a!=-1);
//			}
////	do{
////		scanf("%d",&a);
////		if(a%2==0){
////		even++;	
////		printf("%d:even\n")
////			//TODO
////		}else {odd++;
////		printf("%d:odd\n");
////		};
////	}while(a!=-1);
//	printf("The total number of odd is %d\n""The total number of even is %d\n",odd-1,even);
//}






//#include "stdio.h"
//#define M 5
//int main()
//{   int a[M]={1,2,3,4,5};
//    int i=0,j=M-1,t;
//    int cnt=0;
//    while(2*cnt<M){
//		t=*(a+i);
//		*(a+i)=*(a+j);
//		*(a+j)=t;
//		cnt++;
//		i++;
//		j--;
//	}
//    for(i=0;i<M;i++) printf("%d",*(a+i));
//}

//int main(){
//	int a[4][3]={1,2,3,4,
//	9,8,7,6,
//	10,-1,-4,4};
//	int max=a[0][0];
//	int *p=a;
//	for(int i=0;i<4*3;i++){
//		//TODO
//		if(*(p+i)>max){
//			max=*(p+i);
//			//TODO
//		}
//	}
//	printf("max=%d\n",max);
//	
//}
//int main(){
//	int a[3][3];
//	int *p=a;
//	int max=0,row=0;
//	for(int i=0;i<3*3;i++){
//		//TODO
//		scanf("%d",(p+i));
//		if(i==0||i==4||i==8){
//		if(*(p+i)>max){
//			max=*(p+i);
//			row=i%3;
//			//TODO
//		}
//		}
//	}
//    printf("max=%d ,row=%d",max,row);
//}
/*按如下函数原型编写程序，输入n×n阶矩阵，用函数编程计算并输出其两条对角线上的各元素之和。
void InputMatrix(int a[N][N], int n);
int AddDiagonal(int a[N][N], int n);

输入提示信息：
"Input n:"
"Input %d*%d matrix:\n"
输入格式："%d"
输出提示信息和输出格式："sum = %d\n"

程序运行示例：
Input n:2
Input 2*2 matrix:
1 3
4 5
sum = 13*/
//#include<stdio.h>
//void InputMatrix(int p[], int n){
//	int i;
//    for( i=0;i<n*n;i++){
//		//TODO
//		scanf("%d",p+i);
//		
//	}
//}
//int AddDiagonal(int p[], int n){
//	int sum=0;
//	for(int i=0;i<n*n;i=i+n+1){
//		sum+=p[i];
//		//TODO
//	}
//	for(int i=n-1;i<=n*(n-1);i=i+(n-1)){
//		//TODO
//		sum+=p[i];
//	}
//	return sum;
//}
//int main(){
//	int N;
//	printf("Input n:");
//	scanf("%d",&N);
//	printf("Input %d*%d matrix:\n",N,N);
//    int a[N*N];
//    int*p=a;
//    InputMatrix(p,N);
//   int sum= AddDiagonal(p,N);
//		printf("sum = %d\n",sum);
//	
//}



//#include <stdio.h>
//#define  N   10
//void InputMatrix(int a[N][N], int n);
//int AddDiagonal(int a[N][N], int n);
//int main()
//{  	   	 	   	  
//    int a[N][N], n, sum; //1
//    printf("Input n:"); //1
//
//    scanf("%d", &n); //1  
//    InputMatrix(a, n); //1
//    sum = AddDiagonal(a, n); //1
//    printf("sum = %d\n", sum); //1
//    return 0;
//}  	   	 	   	  
///*  函数功能： 输入n×n矩阵的元素值，存于数组a中 */
//void InputMatrix(int a[N][N], int n)
//{  	   	 	   	  
//    int i, j; //1
//    printf("Input %d*%d matrix:\n", n, n); //1
//    for (i = 0; i < n; i++) //1
//    {  	   	 	   	  
//        for (j = 0; j < n; j++) //1
//        {  	   	 	   	  
//            scanf("%d", &a[i][j]); //1
//        }
//    }
//}  	   	 	   	  
///*  函数功能： 计算n×n矩阵中两条对角线上的元素之和 */
//int AddDiagonal(int a[N][N], int n)
//{  	   	 	   	  
//    int i, j, sum = 0; //1
//    for (i = 0; i < n; i++) //1
//    { 
//        for (j = 0; j < n; j++) //1
//        {  	   	 	   	  
//            if (i == j || i + j == n - 1) //1
//                sum = sum + a[i][j];
//        }
//    }
//    return sum;
//}  	   	 	   


//#include<stdio.h>
//int main(){
//    printf("Input n:");
//    int n;
//    scanf("%d",&n);
//    int i=1;
//    for(;i<=n;i++){
//      long  int sum=1;
//        for(int j=1;j<=;j++){
//            sum*=j;
//        }
//        printf("%d! = %ld\n",i,sum);
//    }
//}

//#include<stdio.h>
//int main(){
//	int a[10],b[9];
//	scanf("%d",&a[0]);
//	for(int i=1;i<10;i++){
//		//TODO
//		scanf("%d",&a[i]);
//		b[i-1]=a[i]*a[i-1];
//		printf("%3d",b[i-1]);
//	}
//}

//#include<stdio.h>
//int main(){
//	for(int i=0;i<5;i++){
//    int temp=i+1;
//	int cnt=5;
//	for(;cnt>0;cnt--){
//		if(temp>1){
//			printf("%d ",temp);
//			temp--;
//			//TODO
//		}else printf("%d ",temp);
//		//TODO
//	}
//	printf("\n");	
//}
//
//}
//#include <stdio.h>
//main()
//{
//    int n;
//    char monthName[][20] = {"Illegal month", "January", "February", "March", "April","May", "June", "July", "August", "September", "October", "November", "December"};
// 
//    printf("Input month number:");
//    scanf("%d",&n);
//    if ((n < 13) || (n > 0))
//    {
//        printf("month %d is %s\n", n, monthName[n]);
// 
//    }
//    else
//    {
//        printf("%s\n", monthName[0]);
//    }
//}
//#include<stdio.h>
//#include<string.h>
//int main(){
//    char str2[100],str1[100];
//    printf("Enter string 2:");
//    gets(str2);
//    strcpy(str1,str2);
//    printf("Output string 1:%s\n",str1);
//}

//int main(){
//	char a[][10]={"abc", "bbc", "ccc", "Hello", "John", "Tome",};
//	printf("请输入一行字符：");
//	char b[10];
//	scanf("%s",&b);
//	for(int i=0;;i++){
//if(strcmp(a[i],b)==0){
//	printf("欢迎你，%s！",b);
//	//TODO
//	break;
//}else if(i==6){
//	printf("名字没有找到！");
//	break;
//	//TODO
//}		//TODO
//	}
//	
//}

//#include<stdio.h>
//#define ARR_SIZE 80
//int main()
//{
//    char str[ARR_SIZE];
//    int i, num;
// 
//    gets(str);
//    if(str[0] != ' ' && str[0] != '\0')
//    {
//        num = 1;
//    }
//    else
//    {
//        num = 0;
//    }
//    for(i = 1 ; str[i] != '\0'; i++)
//    {
//        if(str[i]  != ' ' && str[i-1] == ' ') 
//        {
//            num++;
//        }
//    }
//    printf("num=%d\n", num);
//}
//#include<stdio.h>
//void swap(int *p,int*q){
//    int temp;
//    temp=*p;
//    *p=*q;
//    *q=temp;
//}
//int main(){
//    int a,b;
//    printf("Please enter a,b:");
//    scanf("%d,%d",&a,&b);
//    printf("Before swap: a = %d, b = %d\n",a,b);
//    swap(&a,&b);
//    printf("After swap: a = %d, b = %d\n",a,b);
//    return 0;
//}
//#include<stdio.h>
//void swap(int a[],int m,int n){
//    for(int i=n-1;m>0;m--){
//        int temp=a[i];
//        for(int j=n-1;j>0;j--){
//            a[j]=a[j-1];
//        }
//        a[0]=temp;
//    }
//    
//}
//int main(){
//    int n=0,m=0;
//    printf("the total numbers is:");
//    scanf("%d",&n);
//    printf("back m:");
//    scanf("%d",&m);
//    int a[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&a[i]);
//    }
//    swap(a,m,n);
//    for(int i=0;i<n;i++){
//        printf("%d",a[i]);
//        if(i<n-1){
//            printf(",");
//        }
//    }
//    return 0;
//}
//

//void Transpose(int *a, int *at, int m, int n);
//void InputMatrix(int *a, int m, int n);
//void PrintMatrix(int *at, int n, int m);
//int main(){
//	int m,n;
//	printf("Input m, n:");
//	scanf("%d,%d",&m,&n);
//	int a[m][n];
//	int b[n][m];
//    int (*p)[n]=a;
//    int (*q)[m]=b;
//		InputMatrix(p,m,n);
//		Transpose(p,q,m,n);
//		PrintMatrix(q,n,m);
//		return 0;
//}
//void Transpose(int *a, int *at, int m, int n){
//	int i,j;
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			//TODO
//			*(at+i*n+j)=*(a+i*m+j);
//		}
//		//TODO
//	}
//}
//void InputMatrix(int *a, int m, int n){
//	int i,j;
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			scanf("%d",*(a+i)+j);
//			//TODO
//		}
//		//TODO
//	}
//}
//void PrintMatrix(int *at, int n, int m){
//	for(int i=0;i<n;i++){
//		//TODO
//		for(int j=0;j<m;j++){
//			printf("%d\t",(at[i]+j));
//			//TODO
//		}
//		printf("\n");
//	}
//}
//

//typedef struct s
//{
//    char name[10];
//    int age;
//}student;
//int main()
//{
//    student a[3] = {"John",19,
//	"Paul",17,
//	"Marry",18};
//    student *p; 
// 
//    for(p=&a;p<a+3;p++)
//    {
//    	printf("%d,%s\n",p->age,p->name);
//    }
//    
//}


//int main(){
//typedef struct{
//	int year;
//	int month;
//	int day;
//}date;
//date a;
//date*p=&a;
//printf("请输入日期（年，月，日）");
//scanf("%d,%d,%d",&p->year,&p->month,&p->day);
//int days=0;
//int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//for(int i=1;i<p->month;i++){
//	//TODO
//	days+=day[i];
//}
//days+=p->day;
//if((p->year%4)==0){
//	days+=1;
//}
//printf("\n%d月%d日是%d年的第%d天。",p->month,p->day,p->year,days);
//
//
//}




//void f(int a[], int *odd, int *even)
//{
//    
//    for(int i=0;i<2;i++){
//		if(a[i]%2==0){
//		(*even)++;
//			//TODO
//		}else (*odd)++;
//	}
//	 printf("Odd numbered=%d,Even numbered=%d\n",*odd,*even);
//  return ;     
//}
//int main()
//{
//    int a[2], i, odd = 0, even = 0;
//    printf("input 20 numbers:");
//    for(i=0;i<2;i++){
//    scanf("%d",&a[i]);
//    }
//    f(a,&odd,&even);
//    printf("Odd numbered=%d,Even numbered=%d\n", odd, even);
//    return 0;
//}


//	int main(){
//		int p=0;
//		p++;
//		printf("%d",++p);
//		return 0;
//	}

//void input(int a[],int n){
//	for(int i=0;i<n;i++){
//		//TODO
//		scanf("%d,",&a[i]);
//	}
//}
//void output(int a[],int n){
//	for(int i=0;i<n ;i++){
//		//TODO
//		printf("%d",a[i]);
//		if(i<n-1){
//			printf(",");
//			//TODO
//		}
//	}
//}
//
//int main(){
//	int n,h;
////	int a[n];
//	printf("共有多少个数？");
//	scanf("%d",&n);
//	int a[n];
//	printf("后移多少个？");
//	scanf("%d",&h);
//	printf("请以,号为间隔输入%d个数。\n",n);
//	input(a,n);
//		int temp=0;
//		while(h>0){
//			temp=a[n-1];
//		for(int i=n-2;i>=0;i--){
//			//TODO
//			a[i+1]=a[i];
//	}
//	a[0]=temp;
//	h--;
//		}
//	printf("移动后顺序为：\n");
//	output(a,n);
//	return 0;
//}

//int main(){
//	int n,m;
//	scanf("%d%d",&n,&m);
//	int a[n];
//	for(int i=0;i<n;i++){
//		//TODO
//		a[i]=0;
//	}
//	int cnt=0;
//	int i=m-1;
//	while(cnt<n){
//		//TODO
//	if(a[i]!=0){
//		i++;
//	while(a[i]!=0){
//		//TODO
//		i++;
//	}
//	a[i]=1;
//				//TODO
//	}else a[i]=1;
//	i+=m;
//		if(i>n-1){
//			i-=n;
//			//TODO
//		}
//		cnt++;
//	}
//	printf("%d",i);
//}
//

//int main(){
//	char a[500];
//	gets(a);
//	int a1,a2,a3,a4,a5;
//	a1=a2=a3=a4=a5=0;
//	int cnt=0;
//	for(int i=0;a[i]!='\0';i++){
//		//TODO
//		if(a[i]!=' '&&a[i+1]!='\0'){
//			//TODO
//		cnt++;}else{
//			if(a[i+1]=='\0'){
//				//TODO
//				cnt++;
//			}
//		if(cnt==1){
//			a1++;
//		}else if(cnt>1&&cnt<6){
//			//TODOa
//			a2++;
//		}else if(cnt>5&&cnt<11){
//			//TODO
//			a3++;
//		}else if(cnt>10&&cnt<21){
//			a4++;
//		}else a5++;
//			cnt=0;
//		}
//	}
//	printf("长度为1的单词数：%d\n"
//	"长度在2到5的单词数：%d\n"
//	"长度在6到10的单词数：%d\n"
//	"长度在11到20的单词数：%d\n"
//	"长度大于等于21的单词数：%d\n",a1,a2,a3,a4,a5);
//}

//void s(int *a){
//	printf( "Array b:\n");
//	for(int i=0;i<2;i++){
//		//TODO
//	for(int j=3;j>=0;j--){
//		printf("%4d",a[j*2+i]);
//		//TODO
//	}
//printf("\n");
//	}
//}
//void output(int *a){
//	printf("Array a:\n");
//	for(int i=0;i<4;i++){
//		//TODO
//	for(int j=0;j<2;j++){
//		//TODO
//		printf("%4d",a[i*2+j]);
//	}
//	printf("\n");
//	}
//}
//int main(){
//	int a[4][2]={{1,2},{3,4},{5,6},{7,8}
//	};
//	output(*a);
//	s(*a);
//	
//}
//   
//   
//   
   
//   typedef struct {
//   	int id;
//   	int score;
//   	int rank;
//   }compet;
//   int main(){
//   	compet a[7]=
//	   {1,5,3,
//	   2,3,1,
//	   3,4,2,
//	   4,7,5,
//	   5,3,1,
//	   6,5,3,
//	   7,6,4};
//	   compet *p=&a[0];
//	   printf("  Player_NO  Score  Rank\n");
//	   for(int i=0;i<7;i++){
//	   	//TODO
//	   printf("   %3d    %4d   %4d\n",p->id,p->score,p->rank);
//	   p++;
//	   }
//   	return 0;
//   }
   

//  
//   #include<stdio.h>
//      
//      int main(){
//      	int n;
//      	printf("输入一个八进制字符串（5位）:");
//      	scanf("%d",&n);
//      		printf("输入的八进制字符串为%d",n);
//      	int p=n;
//      	int sum=0;
//      	int cnt=0;
//      	if(n/100000>0){
//      		printf("错误：字符串太长\n\n");
//   	   	//TODO
//   	   }
//      	else {
//   	   	while(n>0){
//   	   		int temp=n%10;
//   		   	//TODO
//   		   	if(temp>8){
//   		   		printf("错误:%d 不是一个八进制字符\n\n",p);
//   			   	//TODO
//   			   }else sum+=temp*pow(8,cnt);
//   			   cnt++;
//   			    n/=10;
//   		   }
//   		   printf("\n%d 转换成十进制整数为：%d\n",p,sum);
//   	   }
//      	
//      	
//      	return 0;
//      }
//   
   
   

//   #define N 10
//   void Transpose(int *a, int n);
//      void  Swap(int *x, int *y,int n);
//      void InputMatrix(int *a, int n);
//      void PrintMatrix(int *a, int n);
//   int main(){
//   	int n;
//   	   	int a[N][N];
//	   int b[N][N];
//   	printf("Input n:");
//   	scanf("%d",&n);
//   	
//   	InputMatrix(*a,n);
//   	Swap(*a,*b,n);
//   	PrintMatrix(*b,n);
//   	
//   	return 0;
//   }
//  void  InputMatrix(int *a,int n){
//  	printf("Input %d*%d matrix:\n",n,n);
//   	int i,j;
//   	for(i=0;i<n ;i++){
//	   	//TODO
//	   	for(j=0;j<n;j++){
//	   		scanf("%d",&a[i*n+j]);
//		   	//TODO
//		   }
//	   }
//	   
//   }
//   void Swap(int *x, int *y,int n){
//	   	int i,j;
//	   	for(i=0;i<n ;i++){
//		   	//TODO
//		   	for(j=0;j<n;j++){
//		   		y[j*n+i]=x[i*n+j];
//			   	//TODO
//			   }
//		   }
//	   }
// void PrintMatrix(int *a, int n){
// 	int i,j;
// 	
//	 for(i=0;i<n ;i++){
//	 	//TODO
//	 	for(j=0;j<n;j++){
//	 		printf("%d\t",a[i*n+j]);
//		 	//TODO
//		 }
//		 printf("\n");
//	 }
// }   
	   //	#include <stdio.h>
	   //	#define M 10
	   //	#define N 10
	   //	void Transpose(int *a, int *at, int m, int n);
	   //	void InputMatrix(int *a, int m, int n);
	   //	void PrintMatrix(int *at, int n, int m);
	   //	int main()
	   //	{  	   	 	      
	   //	    int s[M][N], st[N][M], m, n;
	   //	    printf("Input m, n:");
	   //	    scanf("%d,%d", &m, &n);
	   //	    InputMatrix(*s, m, n);
	   //	    Transpose(*s, *st, m, n);
	   //	    printf("The transposed matrix is:\n");
	   //	    PrintMatrix(*st, n,  m);
	   //	    return 0;
	   //	}  	   	 	      
	   //	/* 函数功能：计算m*n矩阵a的转置矩阵at */
	   //	void Transpose(int *a, int *at, int m, int n)
	   //	{  	   	 	      
	   //	    int i, j;
	   //	    for (i = 0; i < m; i++)
	   //	    {  	   	 	      
	   //	        for (j = 0; j < n; j++)
	   //	        {  	   	 	      
	   //	            at[j * m + i] = a[i * n + j];
	   //	        }
	   //	    }
	   //	}  	   	 	      
	   //	/* 函数功能：输入m*n矩阵a的值 */
	   //	void InputMatrix(int *a, int m, int n)
	   //	{  	   	 	      
	   //	    int i, j;
	   //	    printf("Input %d*%d matrix:\n", m, n);
	   //	    for (i = 0; i < m; i++)
	   //	    {  	   	 	      
	   //	        for (j = 0; j < n; j++)
	   //	        {  	   	 	      
	   //	            scanf("%d", &a[i * n + j]);
	   //	        }
	   //	    }
	   //	}  	   	 	      
	   //	/* 函数功能：输出n*m矩阵at的值 */
	   //	void PrintMatrix(int *at, int n, int m)
	   //	{  	   	 	      
	   //	    int i, j;
	   //	    for (i = 0; i < n; i++)
	   //	    {  	   	 	      
	   //	        for (j = 0; j < m; j++)
	   //	        {  	   	 	      
	   //	            printf("%d\t", at[i * m + j]);
	   //	        }
	   //	        printf("\n");
	   //	    }
	   //	}  	   	 	      
	   //	
	   	/*八皇后问题。在一个8*8的国际象棋棋盘上，有八个皇后，每个皇后占一格；
		   要求皇后间不会出现相互“攻击”的现象，即不能有两个皇后处在同一行、同一列或同一对角线上。问共有多少种不同的方法。
		   **输入格式要求：提示信息："The possible configuration of 8 queens are:\n"
		   **输出格式要求："  [%2d]:"  "\n   [%2d]:"   "  %d"
		   
		   */
//	   #include<stdio.h>
//	   #define SIZE 10
//	   int main( )
//	   { int  i, j, t, a[SIZE];
//	      printf("input  10  numbers: \n");
//	      for(i = 0;i < SIZE;i++) 
//	            scanf("%d",&a[i]); 
//	      printf("\n");
//	      for (i = 0; i< SIZE; i++) 
//	          for (j = SIZE - 1; j >= i + 1; j--)
//	              if (a[j] < a[j-1])  
//	              {
//	           t=a[j-1];  
//	           a[j-1]=a[j]; 
//	           a[j]=t;    
//	           }
//	      for (i = 0; i < SIZE; i++)
//	         printf("%d\n", a[i]);
//	   }
	   	
	   	/*n个人围成一圈，顺序编号。从第一个人开始从1到m报数，凡报到m的人退出圈子，编程求解最后留下的人的初始编号。
		   程序运行示例：
		   6 3（两个输入数据之间有空格）
		   1
		   
		   输入格式：scanf("%d%d",&n,&m);
		   输出格式：printf("%d\n",loop[dest]);*/


//#include<stdio.h>
//int n,m,cnt;
//int ji,no;
//int a[50000];
//int main(){
//	scanf("%d%d",&n,&m);
//	no=1;
//	while(1){
//		if(no>n) no=1;
//		if(a[no]==1){
//			no++;
//			continue;
//		}else{
//			ji++;
//			if(ji==m){
//				a[no]=1;
//				ji=0;
//				no++;
//				cnt++;
//				if(cnt==n-1) break;
//			}else{
//				no++;
//			}
//		}
//	}
//	for(int i=1;i<=n;i++){
//		if(a[i]==0){printf("%d",i);break;}
//	}
//	return 0;
//}
//
//
//






		   
//		   typedef struct person{
//		   	int n;
//		   struct person*next;
//		   }sss;
//		   void creat(sss**head,sss*new){
//		   	sss*move=*head;
//		   	if(*head==NULL){
//		   		*head=new;
//		   		new->next=NULL;
//			   	//TODO
//			   }else{
//			   	while(move->next!=NULL){
//				   	move=move->next;
//				   }
//				   move->next=new;
//				   new->next=NULL;
//			   }
//		   }
//		   void output(sss*head)
//		   		   {
//		   		   	sss*pt=head;
//		   		   	while(pt!=NULL){
//		   		   		printf("%4d",pt->n);
//		   		   		pt=pt->next;
//		   			   }
//		   			   
//		   		   }
//	   	int main(){
//		   	int n,m;
//		   	sss*p=NULL,*pt=NULL;
//		   	sss*head=NULL,*new=NULL;
//		scanf("%d%d",&n,&m);
//		   	for(int i=1;i<=n;i++){
//			   	//TODO
//			   	new=(sss*)malloc(sizeof(sss));
//			   	new->n=i;
//			   	creat(&head,new);
//				   			   }
////output(head);
//	new->next=head;
//	pt=head;
//	while(pt->next!=pt){
//	for(int i=1;i<m;i++){
//		//TODO
//		p=pt;
//		pt=pt->next;
//	}
//	p->next=pt->next;
//pt=pt->next;
//	}
////pt=head;
////while(pt->next!=pt){
////for(int i=1;i<m;i++){
////	//TODO
////	p=pt;
////	pt=pt->next;
////}
////	p->next=pt->next;
////	pt=pt->next;
////}
//
//
//	printf("%d",pt->n);
//		   	return 0;
//		   }
 
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct person{
//		   	int n;
//		   struct person*next;
//		   }sss;
//		   void creat(sss**head,sss*newnode){
//		   	sss*move=*head;
//		   	if(*head==NULL){
//		   	
//		   		*head=newnode;
//		   		newnode->next=NULL;
//			   	//TODO
//			   }else{
//			   	while(move->next!=NULL){
//				   	move=move->next;
//				   }
//				   move->next=newnode;
//				   newnode->next=NULL;
//			   }
//		   }
//		   void output(sss*head)
//		   {
//		   	sss*pt=head;
//		   	while(pt!=NULL){
//		   		printf("%4d",pt->n);
//		   		pt=pt->next;
//			   }
//			   
//		   }
//	   	int main(){
//		   	int n,m;
//		   	sss*p=NULL,*pt=NULL;
//		   	sss*head=NULL,*newnode=NULL;
//	  	scanf("%d%d",&n,&m);
//		   	for(int i=1;i<=n;i++){
//			   	//TODO
//			   	newnode=(sss*)malloc(sizeof(sss));
//			   	newnode->n=i;
//			   	creat(&head,newnode);
//				   			   }
//				output(head);
//				
//	newnode->next=head;
//	pt=head;
//	while(pt->next!=NULL){
//	for(int i=0;i<m;i++){
//		//TODO
//		pt=pt->next;
//	}
//	p=pt->next;
//	free(pt);
//	pt=p;
//	}
//	printf("%d",pt->n);
//		   	return 0;
//		   }
//#define N 100
//int main(){
//	int a[N]={0};
//	int m,n;
//	int i=0,k=0;
//	int cnt=0;
//	scanf("%d%d",&m,&n);
//while(cnt!=m){
//	i++;
//	if(i>m){
//		i=1;
//		//TODO
//	}
//	if(a[i]==0){
//		k++;
//		if(k==n){
//			a[i]=1;
//            cnt++;
//			k=0;
//			//TODO
//		}
//		//TODO
//	}
//	//TODO
//}
//printf("%d",i);
//}
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct sta{
//    int n;
//    struct sta*next;
//}s;
//void output(s*head){
//    printf("此链表各个结点的数据域为：");
//    while(head!=NULL){
//        printf("%d ",head->n);
//        head=head->next;
//    }
//}
//void creat(s**head,s*newnode){
//		   	s*move=*head;
//		   	if(*head==NULL){
//		   		*head=newnode;
//		   		newnode->next=NULL;
//			   	//TODO
//			   }else{
//			   	while(move->next!=NULL){
//				   	move=move->next;
//				   }
//				   move->next=newnode;
//				   newnode->next=NULL;
//			   }
//		   }
//		   #define N 6 
//int main(){
//    int a[N];
//    s *head=NULL,*newnode=NULL;
//    printf("输入数组%d个元素的值。\n",N);
//    for(int i=0;i<N;i++){
//        scanf("%d",&a[i]);
//        newnode=(s*)malloc(sizeof(s));
//        newnode->n=a[i];
//           creat(&head,newnode);
//    }
//    output(head);
//}

//#include <stdio.h>
//int main()
//{
//    int  a[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},21};
//    int i,j;
//    printf("before transposition\n");
//    for (i=0; i<=4; i++){
//       for (j=0; j<=4; j++)
//     {        printf("%4d", a[i][j]); 
//    }
//    printf("\n");
//    }
//    printf("after transposition\n");
//    for (i=0; i<=4; i++){
//       for (j=0; j<=4; j++){
//	   	printf("%4d",a[j][i]);
//	   	
//	   }
//          printf("\n");
//}
//
//}

//int main(){
//	int a,n;
//	printf("Enter array size:");
//	scanf("%d",&n);
//	a=(int*)malloc(n*sizeof(int));
//	for(int i=0;i<n;i++){
//		//TODO
//	
//	printf("array[%d]=%d\n",i,i*10);
//}
//}

//#define N 10
//int main(){
//	char str[N];
//	char str1[N];
//	int k=0;
//	int m;
//	   printf("请输入一个字符串：\n");
//	    scanf("%s", str);
//	    printf("从第几个字符开始复制？");
//	    scanf("%d", &m);
//	    if(m>strlen(str)){
//	    printf("输入错误。");
//			//TODO
//		}else {
//			for(int i=m-1;str[i]!='\0';i++,k++){
//				//TODO
//		str1[k]=str[i];
//			}
//			str1[k]='\0';
//		puts(str1);
//		}
//
//	return 0;
//}
//}#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct person{
//		   	int n;
//		   struct person*next;
//		   }sss;
//		   void creat(sss**head,sss*newnode){
//		   	sss*move=*head;
//		   	if(*head==NULL){
//		   	
//		   		*head=newnode;
//		   		newnode->next=NULL;
//			   	//TODO
//			   }else{
//			   	while(move->next!=NULL){
//				   	move=move->next;
//				   }
//				   move->next=newnode;
//				   newnode->next=NULL;
//			   }
//		   }
//		   void output(sss*head)
//		   {
//		   	sss*pt=head;
//		   	while(pt!=NULL){
//		   		printf("%4d",pt->n);
//		   		pt=pt->next;
//			   }
//			   
//		   }
//	   	int main(){
//		   	int n,m,count=0;
//		   	sss*p=NULL,*pt=NULL;
//		   	sss*head=NULL,*newnode=NULL;
//	  	scanf("%d%d",&n,&m);
//		   	for(int i=1;i<=n;i++){
//			   	//TODO
//			   	newnode=(sss*)malloc(sizeof(sss));
//			   	newnode->n=i;
//			   	creat(&head,newnode);
//				   			   }
//			//	output(head);
//				
//	//newnode->next=head;
//	pt=head;
//	p=head;
//	while(count<n-1){
//	for(int i=0;i<m-1;i++){
//		//TODO
//		
//		if(pt->next==NULL)
//		{p=pt; 
//		pt=head;}
//		else
//		{
//		p=pt;
//		pt=pt->next;}
//	}
//	
//	printf("%d=%d\n",count+1,pt->n);
//    if(pt->next==NULL)
//	{
//	p->next=NULL;
//    free(pt);
//	count++;
//	pt=head;}
//	else
//	{
//	   if(pt==head)
//	   {
//	   head=head->next;
//	   free(pt);
//	   count++;
//	   pt=head;}
//	   else
//	   {p->next=pt->next;
//	   free(pt);
//	   count++;
//	   pt=p->next;
//	   }
//	   
//	}
//	
//	}
//	printf("%d",pt->n);
//		   	return 0;
//		   }
//#include <stdio.h>
//long Factorial(int n)
//{	
//
// if (n==0 && n==1)
//	{
//		return 1;
//	}
//	else 
//	{
//		return n * (int)Factorial(n-1); 
//	}
//	
//} 
//int main()
//{
// int n;
//	long x;
//	printf("Input n:\n");
//	scanf("%d",&n);
//	x = Factorial(n);
//	printf("%d!=%ld\n", n, x);
//}
//#include<stdio.h>
//int main(){
//    int n,sum=1;
//	printf("Input n:\n");
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//	    sum*=i;
//	}
//	printf("%d!=%d\n",n,sum);
//}
//int main(){
//	int max=0;
//	int n;
//	for(int i=0;i<10;i++){
//		//TODO
//		printf("input the number!\n");
//		scanf("%d",&n);
//		if(n>max){
//			max=n;
//			//TODO
//		}
//	}
//	printf("max integer is %d!\n",max);
//}
/***输入格式要求："%d" 
**输入提示信息："Input score:" "Total students are %d\n" "Sorted scores:" 
**输出格式要求："%4d"
程序的运行示例如下：
Input score:84
Input score:83 
Input score:88
Input score:87
Input score:61
Input score:-1
Total students are 5
Sorted scores:  88  87  84  83  61
*/
//#define N 100
//int main(){
//	int a[N],n,cnt=0;
//	for(int i=0;i>=0;i++){
//	printf("Input score:");
//	scanf("%d",&n);
//	if(n<0){
//   break;		//TODO
//	}else a[i]=n;cnt++;
//		//TODO
//	}
//	for(int i=0;i<=0;i++){
//		//TODO
//	}
//	for(int i=0;i<cnt;i++){
//		//TODO
//		for(int j=0;j<cnt-1;j++){
//			//TODO
//			if(a[j]<a[j+1]){
//				int temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//				
//			}
//		}
//	}
//	printf("Total students are %d\n" "Sorted scores:",cnt );
//	for(int i=0;i<cnt;i++){
//		//TODO
//		printf("%4d",a[i]);
//	}
//}
//#include<stdio.h>
//#define N 5
//int main(){
//    int a[N];
//    for(int i=0;i<5;i++){
//        printf("Enter No.%2d:",i+1);
//        scanf("%d",&a[i]);
//    }
//    for(int i=0;i<5;i++){
//        for(int j=0;j<4;j++){
//            if(a[i]>a[i+1]){
//                int temp=a[i];
//                a[i]=a[i+1];
//                a[i+1]=temp;
//            }
//        }
//    }
//    for(int i=0;i<5;i++){
//        printf("%d",a[i]);
//    }
//}

//void find_MaxMin(float income[],int n,float *pmax,float *pmin);
//#define N 30
//int main(){
//	int n;
//	float pmax,pmin;
//	float re[N];
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		//TODO
//		scanf("%f",&re[i]);
//	}
//	find_MaxMin(re,n,&pmax,&pmin);
//	return 0;
//}
//void find_MaxMin(float income[],int n,float *pmax,float *pmin){
//	int i;
//	*pmax=*pmin=income[0];
//	for(i=0;i<n;i++){
//		//TODO
//		if(income[i]>*pmax){
//			*pmax=income[i];
//			//TODO
//		}else if(income[i]<*pmin){
//			//TODO
//			*pmin=income[i];
//		}
//		
//	}
//printf("min=%10.2f,max=%10.2f\n",*pmin,*pmax);
//}
/*给定某年某月某日，将其转换成这一年的第几天并输出。
提示：定义如下的二维数组，根据月份循环求和即可。
int day_tab[2][13]={
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}};
**输入格式要求："%d%d%d"
**输出格式要求："%d"
程序运行示例如下：
2012 11 8
313

*/
//typedef struct{
//	int year;
//	int month;
//	int day;
//}date;
//int main(){
//	date a;
//	int sum=0;
//	date *p=&a;
//	scanf("%d%d%d",&p->year,&p->month,&p->day);
//int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//for(int i=0;i<p->month;i++){
//	//TODO
//	sum+=day_tab[i];
//}
//sum+=p->day;
//if(p->year%4==0){
//	//TODO
//	sum++;
//}
//printf("%d",sum);
//	return 0;
//}


//typedef struct date_rec
//  {
//    int day ;
//    int month ;
//    int year ;
//  }date;
//void input_date(struct date_rec *current_date){
//	printf("请输入当前日期（年 月 日）：");
//	scanf("%d%d%d",&current_date->year,&current_date->month,&current_date->day);
//}
//void increment_date(struct date_rec *current_date){
//	current_date->day++;
//	if(current_date->month==2&&current_date->day==29&&current_date->year%4!=0){
//		current_date->day=1;
//		current_date->month++;
//		//TODO
//	}else if(current_date->day==32){
//		if(current_date->month==12){
//			//TODO
//			current_date->year++;
//			current_date->month=current_date->day=1;
//		}else{
//		current_date->day=1;
//		current_date->month++;
//		//TODO
//		}
//	}else if(current_date->month<8&&current_date->month%2==0){
//		//TODO
//		if(current_date->day==31){
//			current_date->day=1;
//			current_date->month++;
//			//TODO
//		}
//	}else if(current_date->month>7&&current_date->month%2==1){
//			//TODO
//			if(current_date->day==31){
//				current_date->day=1;
//				current_date->month++;
//				//TODO
//			}
//		}
//}
//void output_date(struct date_rec *current_date){
//	printf("当前日期：%d年%d月%d日！",current_date->year,current_date->month,current_date->day);
//}
//int main(){
//	date a;
//	input_date(&a);
//	increment_date(&a);
//	output_date(&a);
//	
//}


//#define N 5
//int chek1(int *a){
//	int i;
//	for(i=1;i<N;i++){
//			//TODO
//			if(a[i]!=a[i-1]) return 0;
//	
//	}
//		return 1;
//}
//void output(int *a){
//printf("It is a magic square!\n");
//	int i;
//	for(i=0;i<N*N;i++){
//		//TODO
//		printf("%4d",a[i]);
//		if((i+1)%5==0&&i!=24){
//			printf("\n");
//			//TODO
//		}
//	}
//}
//void check(int *a){
//	int i,j;
//	int flag=1;
//	int sum[5]={0,0,0,0,0};
//	/*检测行*/
//	for(i=0;i<N*N;i++){
//		sum[i%N]+=a[i];
//	}
//	flag=chek1(sum);
//	if(flag==0){
//		printf("It is not a magic square!\n" );
//	exit(1) ;
//	}
//	/*检测列*/
//     for(i=0;i<N;i++){
//	 	//TODO
//	 	sum[i]=0;
//	 }
//	for(i=0;i<N;i++){
//		//TODO
//		for(j=0;j<N;j++){
//			//TODO
//			sum[i]=a[j*N+i];
//		}
//	}
//	flag=chek1(sum);
//	if(flag==0){
//		printf("It is not a magic square!\n" );
//	exit(1) ;
//	}
//	/*检测斜*/
//for(i=0;i<N;i++){
//	 	//TODO
//	 	sum[i]=0;
//	 }
//	for(i=0;i<N*N;i=i+N+1){
//		sum[0]+=a[i];
//		//TODO
//	}
//	for(i=N-1;i<N*N-1;i=i+N-1){
//			sum[1]+=a[i];
//			//TODO
//		}
//
//	if(sum[0]!=sum[1]){
//			printf("It is not a magic square!\n" );
//			exit(1);
//		}else output(a);
//		
//}
//
//
//int main(){
//	int a[N][N]={{17,24,1,8,15},{23,5,7,14,16},{4,6,13,20,22},{10,12,19,21,3},{11,18,25,2,9}};
//	check(a);
//	return 0;
//}

//#define N 80
//int Mystrlen(char str[]);
//int main()
//{
//	char str[N];
//	printf("Please input the string:\n");
//	gets(str);
//	printf("%d",Mystrlen(str));
//	
//	return 0;
//}
//int Mystrlen(char str[]){
//	int i;
//	for(i=0;str[i]!='\0';i++);
//	return i;
//	
//	
//}

//typedef struct data{
//	int dat;
//	struct data*next;
//}DA;
//void mydelete(DA**head);
//void output(DA*head);
//void creat(DA**head,DA*newnode);
//int main(){
//	int n=6;
//	DA*head=NULL,*newnode=NULL;
//	printf("输入数组%d个元素的值。\n",n);
//	for(int i=0;i<6;i++){
//		//TODO
//		newnode=(DA*)malloc(sizeof(DA));
//		scanf("%d",&newnode->dat);
//		creat(&head,newnode);
//	}
//	printf("此链表各个结点的数据域为：");
//	output(head);
//	printf("\n");
//	mydelete(&head);
//    printf("删除后链表各个结点的数据域为：");
//	output(head);
//}
//void creat(DA**head,DA*newnode){
//	DA *move=*head;
//	if(*head==NULL){
//		*head=newnode;
//		newnode->next=NULL;
//		//TODO
//	}else{
//		while(move->next!=NULL){
//			move=move->next;
//		}
//		move->next=newnode;
//		newnode->next=NULL;
//	}
//}
//void output(DA*head){
//
//	while(head!=NULL){
//		printf("%d ",head->dat);
//		head=head->next;
//		//TODO
//	}
//}
//void mydelete(DA**head){
//	int x;
//	printf("输入要删除的数据x: ");
//	scanf("%d",&x);
//	DA *ptr,*move;
//	ptr=move=*head;
//	while(move->dat!=x&&move->next!=NULL){
//		ptr=move;
//		move=move->next;
//		//TODO
//	}
//	if(move->next==NULL){
//		//TODO
//		return ;
//	}
//   if(move==*head){
//   	*head=move->next;
//   	//TODO
//   }else{ptr->next=move->next;}
//}
//#include <stdio.h>
//
//void fun(int n, int a[], int *num)
//{
//    int b[200];
//    int c[400]={0};
//    int i, j;
//    for (i = 0;; i++)
//    {
//        if (n == 0)
//        {
//            break;
//        }
//        b[i] = n % 10;
//        n = n / 10;
//    }
//    n = i;
//    for (i = 0; i < *num; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            c[i + j] = a[i] * b[j] + c[i + j];
//        }
//    }
//    int flag1 = 1, flag2 = 0;
//    for (i = 0; i<n+*num; i++)
//    {      
//        c[i] = c[i] + flag2;
//        flag1 = c[i] / 10;
//        a[i] = c[i] % 10;
//        c[i] = a[i];
//        flag2 = flag1;
//    }
//    while (flag2 != 0)
//    {
//        a[i++] = flag2 % 10;
//        flag2 = flag2 / 10;
//    }
//    *num = i;
//}
//
//main()
//{
//    int n, m;
//    int i=0, j=0;
//    int a[400];
//    for(i=0;i<400;i++){
//        a[i]=0;
//    }
//    a[0]=1;
//    scanf("%d %d", &n, &m);
//    int num = 1;
//    for (i = 2; i <= n; i++)
//    {
//        fun(i, a, &num);
//    }
//    for (i = 2; i <= m; i++)
//    {
//        fun(i, a, &num);
//    }
//        for (i = num - 1; i >= 0; i--)
//    {
//        if(a[i]!=0)
//        break;
//    }
//    for (; i >= 0; i--)
//    {
//        printf("%d", a[i]);
//    }
//    printf("\n");
//}

//#include<stdio.h>
//int main(void){
//    int a[4]={6,8,10,12};
//    int i,j=0;
//    double sum=0;
//    double b[4];
//    for(i=0;i<4;i++){
//		//TODO
//	   b[i]=1+(double)a[i]/100;
//	   printf("%lf",b[i]);
//	}
//    int c[4];
//    for(i=1;;i++){
//		//TODO
//		sum*=b[j];
//		if(sum-2.0>1e-6){
//	    c[j]=i;
//	    i=0;
//	    j++;
//	    sum=1;
//		}
//		if(j==3){
//			break;
//			//TODO
//		}
//	}
//	for( i=0;i<4;i++){
//		//TODO
//		printf("When grow rate is %d, the output can be doubled after %d years.\n",a[i],c[i]);
//	}
//}
//int main(void){
//	double a[4]={0.06,0.08,0.10,0.12};
//	int b[4];
//	int j=0;
//	double sum=1.0;
//	for(int i=1;i>=0;i++){
//		sum*=(1.0+a[i]);
//		if((sum-2.0)>1e-6){
//			b[j]=i;
//			i=0;
//			j++;
//			sum=1.0;
//		}
//		if(j>3){
//			break;
//			//TODO
//		}
//		//TODO
//	}
//	for(int i=0;i<4;i++){
//		printf("When grow rate is %d, the output can be doubled after %d years.\n",a[i]*100,b[i]);
//		//TODO
//	}
//}

//void put(int a[],int i);
//int check(int a[]);
//int main(void){
//	int a[9];
//	int i;
//	int cnt=0;
//	for(i=101;i<334;i++){
//		//TODO
//		
//		put(a,i);
//		if(check(a)){
//			cnt++;
//			printf("No.%d: %d %d %d\n",cnt,i,2*i,3*i);
//		}
//	}
//	
//}
//void put(int a[],int i){
//	int j,k;
//	int cnt=0;
//	for(j=1;j<=3;j++){
//		int temp=i*j;
//		for(k=0;k<3;k++){
//			a[cnt]=temp%10;
//			temp/=10;
//			cnt++;
//		}
//		//TODO
//	}
//}
//int check(int a[]){
//	int i,j;
//    for(i=0;i<9;i++){
//		int temp=a[i];
//		for(j=i+1;j<9;j++){
//			//TODO
//			if(temp==a[j]||temp==0){
//				return 0;
//			}
//		}
//	}
//	return 1;
//}

//#include <stdio.h>
//
//int main()
//{
//    char s[] = "24635", c, i;
//
//    for (i = 0; c = s[i]; i++)
//    {
//        switch ((c - '0'))
//        {
//        case 2:
//        case 3:
//            putchar(c + 4);
//            break;
//        case 4:
//            putchar(c + 4);
//            break;
//        case 5:
//            putchar(c + 3);
//            break;
//        default:
//            putchar(c + 2);
//            break;
//        }
//        putchar('\n');
//    }
//}
//void swap(int *a,int*b){
//	int temp;
//	temp=*b;
//	*b=*a;
//	*a=temp;
//}
//int z(int a[],int n);
//int main(void){
//	int n,a[4];
//	printf("输入：");
//scanf("%d",&n);
//
//	printf("输出：""%d",z(a,n));
//}
//int z(int a[],int n){
//	int i,sum=0;
//	for(i=0;i<4;i++){
//	a[i]=(n%10+5)%10;
//		n/=10;
//	}
//	swap(&a[2],&a[1]);
//	swap(&a[0],&a[3]);
//	for(i=3;i>=0;i--){
//		//TODO
//		sum=sum*10+a[i];
//	}
//	return sum;
//}
//#include <stdio.h>
//#define M 3
//#define N 4
//int FindMax(int (*p)[M][N],int m,int n, int *pRow, int *pCol); 
//int main()
//{
//    int score[M][N], i, j, maxScore, row, col;
//    for ( i=0; i<M; i++ )
//    {
//          for ( j=0; j<N; j++ )
//          {
//               scanf("%d", &score[i][j]);
//          }
//    }
//    maxScore = FindMax(&score, M, N, &row, &col);
//    printf("%d %d %d\n", maxScore, row+1, col+1);
//}
// 
//int FindMax( int (*p)[M][N], int m, int n, int *pRow, int *pCol )
//{
//    int  i, j, max;
//    max = 0;
//    pRow = 0; 
//    pCol = 0; 
//    for (i=0; i<m; i++)
//    {
//        for (j = 0; j<n; j++)
//                {
//            if ( (*p)[i][j]> max )
//                        {
//                max = (*p)[i][j] ;
//                *pRow = i;
//                *pCol = j;
//                        }
//        }
//    }
// return max;    
//}

//#include <stdio.h>
//#define M 3
//#define N 4
//int main(void){
//	int a[M][N];
//    int max=0,r=0,c=0;
//    for(int i=0;i<M;i++){
//        for(int j=0;j<N;j++){
//            scanf("%d",&a[i][j]);
//            if(a[i][j]>max){
//                max=a[i][j];
//                r=i+1;
//                c=j+1;
//            }
//        }
//    }
//     printf("%d %d %d\n", max, r, c);
//    
//}

/*将一个链表按逆序排列，即将链头当链尾，链尾当链头。
**输入提示："\n请输入链表（非数表示结束）\n"
**输入提示："结点值："
**输出提示："\n原来表：\n"
**输出格式："%4d"
**输出提示："\n\n反转表：\n"
**输出格式："%4d"

程序的运行示例如下：
请输入链表（非数表示结束）
结点值：3
结点值：4
结点值：5
结点值：6
结点值：7
结点值：end
原来表：
   3   4   5   6   7

反转表：
   7   6   5   4   3

*/
//int main(){
//	int a[100];
//	int cnt=0;
//	int n;
//	printf("\n请输入链表（非数表示结束）\n");
//	for(int i=0;;i++){
//		printf("结点值：");
//		scanf("%d",&n);
//		if(n>9)
//			break;
//			else{
//			a[i]=n;
//		cnt++;
//		}
//		//TODO
//	}
//	printf("\n原来表：\n");
//	for(int i=0;i<cnt;i++){
//		//TODO
//		printf("%4d",a[i]);
//	}
//	printf("\n\n反转表：\n");
//	for(int i=cnt;i>=0;i--){
//		printf("%d",a[i]);
//		//TODO
//	}
//}
//typedef struct da*pt;
//typedef struct da{
//	int data;
//	pt next;
//}some;
//pt creat(){
//	pt head=NULL;
//	pt move=NULL;
//	pt temp=NULL;
//	do{
//		temp=(pt)malloc(sizeof(some));
//		printf("结点值：");
//		scanf("%d",&temp->data);
//		if(temp->data>9){
//			return head;
//			//TODO
//		}
//		if(head==NULL){
//			head=temp;
//			head->next=NULL;
//			//TODO
//		}else {
//			move=head;
//			while(move->next!=NULL){
//				move=move->next;
//				//TODO
//			}
//			move->next=temp;
//			move=move->next;
//			move->next=NULL;
//		}
//	}while(1);
//}
//void output(pt head){
//	while(head!=NULL){
//		printf("%4d",head->data);
//		head=head->next;
//		//TODO
//	}
//}

//pt fanzhuan(pt head){
//	pt head1=NULL ;
//	pt temp1=NULL;
//    head1=temp1 ;
//
//	do{
//	pt move=NULL;
//	move=head;
//	/*寻找head最后一个*/
//		while(move->next!=NULL){
//			move=move->next;
//		}
//	if(temp1==NULL){
//		temp1=move;
//		temp1->next=NULL;
//	}else{
//		while(temp1->next!=NULL){
//			temp1=temp1->next;
//			//TODO
//		}temp1->next=move;
//		temp1=temp1->next;
//		temp1->next=NULL;
//	}free(move);
//	}while(head!=NULL );
//	return head1;
//}

//pt fanzhuan(pt head){
//pt head1=NULL;
//pt temp1=NULL;
//temp1=head1;
//while(head!=NULL){
//pt move=head;
//while(move->next!=NULL){
//	move=move->next;
//	//TODO
//}
//if(head1==NULL){
//	head1=move;
//	head1->next=NULL;
//	//TODO
//}else{
//	while(head1->next!=NULL){
//		//TODO
//		head1=head1->next;
//	}
//	head1->next=move;
//	head1=head1->next;
//	head1->next=NULL;
//}
//free(move);
//move=NULL;
//}
//return temp1;
//}
//pt fanzhuan(pt head){
//	pt q=NULL;
//	pt head1=NULL;
//	head1=(pt)malloc(sizeof(pt));
//	head1->next=head;
//	pt p=head->next;
//	head->next=NULL;
//	while(p!=NULL ){
//		q=p;
//		p=p->next;
//		q->next=head1->next;
//		head1->next=q;
//		//TODO
//	}
//	pt temp=head1;
//	head1=head1->next;
//	free(temp);
//	return head1;
//}
//int main(void){
//		printf("\n请输入链表（非数表示结束）\n");
//	pt head=creat();
//printf("\n原来表：\n");
//	output(head);
//	pt head1;;
//	head1=fanzhuan(head);
//	printf("\n\n反转表：\n");
//	output(head1);
//	
//}


//typedef struct sss{
//	int data;
//	struct sss*next;
//}some;
//struct sss* creat(){
//	some*head=NULL;
//	some*move=head;
//	some*temp=NULL;
//	printf("\n请输入链表（非数表示结束）\n");
//	do{
//		printf("结点值：");
//		temp=(some*)malloc(sizeof(some));
//		scanf("%d",&temp->data);
//		if(temp->data>9){
//			return move;
//		}
//		if(head==NULL){
//			head=temp;
//			head->next=NULL;
//			//TODO
//		}else{
//			while(head->next==NULL){
//				head=head->next;
//				//TODO
//			}head->next=temp;
//			head=head->next;
//			head->next=NULL;
//			}
//	}while(1);
//};
//void output(some*head){
//	while(head!=NULL){
//		printf("%4d",head->data);
//		head=head->next;
//		//TODO
//	}
//}
//some*fanzhuan(some*head){
//	some*head1=NULL;
//    
//}
//int main(void){
//	some*head=creat();
//    printf("\n原来表：\n");	
//	output(head);
//	printf("\n\n反转表：\n");
//}


//#include <stdio.h>
//#include <string.h>
//int main(void )
//{
//int  cases, sum[10], i, j,max;
//  char str[1000];                          
//    scanf("%d",&cases);                    
//  while (cases > 0)
//       {
//                scanf("%s", str);
//            for( i = 0; i < 10; i++){
//                 sum[i] = 0; }
//                 int k=strlen(str);
//                    for(j=0;j<k; j++){
//                sum[(int)(str[j]-'0')]++;}
//          max=0;
//          int temp=0;
//          for(i=9;i>=0;i--){
//          	if(sum[i]>max||sum[i]==max){
//          		max=sum[i];
//          		temp=i;
//			  	//TODO
//			  }
//		  	//TODO
//		  }
//            printf("%d %d\n", temp, max);
//            cases --;
//       }
//}

/*小明有一些矩形的材料，他要从这些矩形材料中切割出一些正方形。

当他面对一块矩形材料时，他总是从中间切割一刀，切出一块最大的正方形，剩下一块矩形，然后再切割剩下的矩形材料，直到全部切为正方形为止。

例如，对于一块两边分别为5和3的材料（记为5×3），小明会依次切出3×3、2×2、1×1、1×1 共4个正方形。

现在小明有一块矩形的材料，两边长分别是2019和324。请问小明最终会切出多少个正方形？*/

//int main(){
//	int m,n;
//	m=2019,n=324;
//	if(n>m){
//		int temp=n;
//		n=m;
//		m=temp;
//	}
//	int cnt=0;
//while(n>0){
//	cnt+=m/n;
//	int temp=n;
//	n=m%n;
//	m=temp;
//}
//printf("%d",cnt);
//	return 0;
//}
/*小明对数位中含有2、0、1、9 的数字很感兴趣（不包括前导0），在1到40中这样的数包括1、2、9、10至32、39和40，共28个，他们的和是574。

请问，在1到n中，所有这样的数的和是多少？*/
//int re(int i){
//	int a[5];
//	int cnt=0;
//	while(i>0){
//		a[cnt++]=i%10;
//		i/=10;
//	}
//	for(int i=0;i<cnt;i++){
//		if(a[i]==2||a[i]==0||a[i]==1||a[i]==9){
//			return 1;
//			//TODO
//		}
//	}
//	return 0;
//}
//int main(){
//	int n,flag,sum=0;
//	scanf("%d",&n);
//	for(int i=0;i<=n;i++){
//		flag=re(i);
//		if(flag){
//			sum+=i;
//			//TODO
//		}
//	}
//printf("%d",sum);
//	return 0;
//}
//#include<stdio.h>
//
//     
//
//int main()
//
//{
//
//int n, i, ans = 0;
//
//scanf("%d", &n);
//
//for (i = 1; i <= n; ++i)
//
//{
//
//int t = i, ok = 0;
//
//while (t > 0)
//
//{
//
//int g = t % 10;
//
//if (g==2 || g==0 || g==1 || g==9)
//
//ok = 1;
//
//t = t / 10;          
//
//}
//
//if (ok)
//
//ans += i;
//
//}
//
//printf("%d\n", ans);
//
//return 0;
//
//}

//int main(){
//	int cnt=0;
//	long long int i=4;
//	for(long long int j=1;j<=i/2;j++){
//		for(long long int k=1;k<i/2;k++){
//			for(long long int l=1;l<=i/2;l++){
//			if(j*k*l==i)cnt++;
//			}
//		}
//	}
//	cnt=3*(cnt+1);
//	printf("%d",cnt);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int re(int n){
//  int temp;
//  while(n>0){
//  	temp=n%10;
//    if(temp!=1&&temp!=2){
//      return 0;
//    }
//   n/=10;
//  }
//  return 1;
//}
//int main(int argc, char *argv[])
//{
//long int n,i;
//scanf("%ld",&n);
//for(i=1;i<n;i++){
//if(re(i*n)){
//  printf("%ld",i);
//  break;
//}
//}
//if(i==n){
//  printf("No Solution");
//}
//return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int main(int argc, char *argv[])
//{
//	int c1=0,c2=0,c3=0,c4=0,c5=0;
//  // 请在此输入您的代码
//  int t;
//  int cnt=0;
//  scanf("%d",&t);
//  int b[t];
//  for(int i=0;i<t;i++){
//  	b[i]=0;
//  }
//  while(t-->0){
//int n;
//scanf("%d",&n);
//char a[n];
//scanf("%s",a);
//if(strlen(a)!=7){
//b[cnt++]=0;
//}else{
//  int i=0;
//  c1=0,c2=0,c3=0,c4=0,c5=0;
//  if(a[i]!='L'){
//    b[cnt++]=0;
//  }
// else{
// 	 while(a[i]!=0){
//    switch(a[i]){
//case 'a':
//c1++;
//break;
//case 'i':
//c2++;
//break;
//case 'n':
//c3++;
//break;
//case 'o':
//c4++;
//break;
//case 'q':
//c5++;
//break;
//
//    }
//    i++;
//  }
//}
//if(c1==2&&c2==1&&c3==1&&c4==1&&c5==1){
//b[cnt++]=1;
//}
//}
//  }
//  for(int j=0;j<cnt;j++){
//    if(b[j]){
//      printf("YES\n");
//    }else printf("NO\n");
//  }
//  return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char *argv[])
//{
//char a[10][10]={"jia","yi","bing","ding","wu","ji","geng","xin","ren","gui"};
//
//char b[12][10]={"zi","chou","ying","mao","chen","si","wu","wei","shen","you","xu","hai"};
//int n;
//scanf("%d",&n);
//printf("%s%s",a[(n+56)%10],b[(n+56)%12]);
//  return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include<math.h>
//int re(int n){
//	int cnt=0;
//	while(n>0){
//		n/=10;
//		cnt++;
//	}
//	return cnt;
//}
//int main(int argc, char *argv[])
//{int flag;
//int n,m;
////scanf("%d %d",&n,&m);
//int i=1;
//int j;
//int temp;
//n=1;
//m=169;
//i=13;
//while(i*i<=m){
//	if(i*i<n){
//		i++;
//	}else{
//	j=i*i;
//	flag=1;
//	while(j>0){
//		temp=j%10;
//		j/=10;
//		if(temp!=1&&temp!=4&&temp!=9){
//			flag=0;
//			break;
//			//TODO
//		}
//		//TODO
//	}
//	if(flag==1){
//		printf("%d\n",i*i);
//		//TODO
//	}
//	i++;
//}
//}
//
//  return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int r,c,count=0;
//	scanf("%d %d",&r,&c);/*确定矩阵大小*/
////r=5,c=6;
//	char a[r][c];
//	/*输入*/
//    for(int i=0;i<r;i++){
//		scanf("%s",a[i]);
//	}	
//char temp;
//	int cnt=0;
//	/*便利验证*/
//	for(int i=0;i<r-1;i++){
//		for(int j=0;j<c-1;j++){
//			cnt=1;
//			temp=a[i][j];
//			if(a[i+1][j+1]==temp&&a[i-1][j-1]!=temp){/*确定 x没被找过*/
//				cnt++;
//				while(a[i+cnt][j+cnt]==temp){
//					cnt++;/*用cnt确定x图形斜线长度*/
//				}
//				cnt--;/*cnt为偶数明显不行，cnt为奇数可以，减一个方便找到x图形中心*/
//				int temp3=1;
//                if(cnt%2==0){
//					cnt/=2;/*确定图形中心*/
//					/*不知道为什么，测试的时候i+cnt-temp3可以小于0而且程序可以进行*/
//					while(a[i+cnt-temp3][j+cnt+temp3]==a[i+cnt+temp3][j+cnt-temp3]&&i+cnt-temp3>-1){
//						temp3++;/*temp3用作移位*/
//					}
//					if(--temp3==cnt){
//						count+=cnt;/*长度为cnt的图形，可以找（cnt-1）/2个图形*/
//					}
//				} 
//			}
//		}
//	}
//	printf("%d",count);
//	return 0;
//}
//#include  <stdio.h>
//unsigned int ComputeAge(unsigned int n);
//main()
//{   	     	   
//    unsigned int n = 5;
//    printf("The 5th person's age is %d\n", ComputeAge(n));
//}   	     	   
///* 函数功能：用递归算法计算年龄 */
//unsigned int ComputeAge(unsigned int n)
//{   	     	   
//    unsigned int age;
//    if (n == 1)
//    {   	     	   
//        age = 10;
//    }
//    else
//    {   	     	   
//        age = ComputeAge(n - 1) + 2;
//    }
//    return age;
//}   	     
//
//int  x(int n,int i){
//	if(i--==1){
//		return n;
//	}else return x(n+2,i);
//}
//int main(){
//	printf("%d",x(10,5));
//	
//	return 0;
//}
//#include <stdio.h>
//long Fib(int a);//1
//int main()
//{  	 	   	      
//    int n, i, x;
//    printf("Input n:");
//    scanf("%d", &n);//1
//    for (i = 1; i <= n; i++)//2
//    {  	 	   	      
//        x = Fib(i);    //2/* 调用递归函数Fib()计算Fibonacci数列的第n项 */
//        printf("Fib(%d)=%d\n", i, x);//1
//    }
//    return 0;
//}  	 	   	      
///* 函数功能：用递归法计算Fibonacci数列中的第n项的值 */
//long Fib(int n)//2
//{  	 	   	      
//    long f;
//    if (n == 1 || n == 2)	//2
//        f = 1;            //1  /* 基线情况 */
//    else
//        f = Fib(n - 1) + Fib(n - 2); //2/* 一般情况 */
//    return f; //1
//}  
//int main(){
//	int n;
//	printf("Input n:");
//	scanf("%d",&n);
//	int j=1,k=1;
//	for(int i=0;i<n;i++){
//		if(i+1==1||i+1==2){
//	printf("Fib(%d)=%d\n",i+1,k);	
//		}
//		else {
//			int temp=k;
//			k+=j;
//			j=temp;
//				printf("Fib(%d)=%d\n",i+1,k);
//			
//		}
//	}
//	
//}
//int fib(int n){
//	if(n==1||n==2)
//	{
//		return 1;
//	}else{
//		return fib(n-1)+fib(n-2);
//	}
//}
//
//int main(){
//	
//	for(int i=1;i<11;i++){
//		printf("%d\n",fib(i));
//	}
//	return 0;
//}

//int fact(int n){
//	if(n==1)return 1;
//	else {
//		
//		return n*fact(n-1);
//}
//}
//int main(){
//	int n;
//	printf("Input n:");
//	scanf("%d",&n);
//	if(n<0)printf("n<0, data error!\n");
//	else printf("n!=%d",fact(n));
//	return 0;
//}



/*编程求解汉诺塔问题。
汉诺塔（Hanoi）是必须用递归方法才能解决的经典问题。它来自于印度神话。
上帝创造世界时作了三根金刚石柱子，在第一根柱子上从下往上按大小顺序摞着64片黄金圆盘，如图7-3所示。
上帝命令婆罗门把圆盘从下面开始按大小顺序重新摆放到第二根柱子上，并且规定，每次只能移动一个圆盘，在小圆盘上不能放大圆盘。
有人预言说，这件事完成时宇宙会在一瞬间闪电式毁灭，也
有人相信婆罗门至今仍在一刻不停地搬动着圆盘。
**输入格式要求："%d" 提示信息："Input the number of disks:"
**输出格式要求："Steps of moving %d disks from A to B by means of C:\n" "Move %d: from %c to %c\n"
程序运行示例如下：
Input the number of disks:3
Steps of moving 3 disks from A to B by means of C:
Move 1: from A to B
Move 2: from A to C
Move 1: from B to C
Move 3: from A to B
Move 1: from C to A
Move 2: from C to B,
Move 1: from A to B*/
//void hannuota(int n,char a,char b,char c);
//void print(char a,char b){
//	printf("%c-->%c\n",a,b);
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	hannuota(n,'A','B','C');
//	return 0;
//}
//void hannuota(int n,char a,char b,char c){
//	if(n==1){
//		print(a,c);
//	}
//	else {
//		hannuota(n-1,a,c,b);
//	print(a,c);
//		hannuota(n-1,b,a,c);		
//		
//	}
//}

//int main(){
//	int b[100],cnt=0;
//	int sum=0;
//	char a[1000];
//	gets(a);
//for(int i=0;a[i]!='\0';i++){
//	if(a[i]>='0'&&a[i]<='9'){
//		b[cnt++]=a[i]-'0';
//	}
//	if(a[i+1]>'9'||a[i+1]<'0'){
//		for(int j=0;j<cnt;j++){sum=sum*10+b[j];}
//		if(sum!=0)printf("%10d\n",sum);
//		sum=0;
//		cnt=0;
//	}
//}
//	return 0;
//}


/*提交
   
延长答题时间
下面的程序Squeeze函数的功能是删除字符串s中所出现的与变量c相同的字符。注意：
(1)请将修改正确后的完整源程序拷贝粘贴到答题区内；
(2)对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分；
(3)当且仅当错误全部改正，且程序运行结果调试正确，才给加5分；
(4)改错时不能改变程序原有的意图，不能改变函数原型；
(5)按原题要求，先读入字符串，再读入字符c；
(6)c为任意字符（空格除外）；不能修改函数原型。

}*/
//#include <stdio.h>
//void  Squeeze(char *s, char c);
//int main()
//{
//    char a[80], c;
// scanf("%s",a);
// getchar();
//    scanf("%c",&c);
//    Squeeze(a, c);
//    printf("%s\n", a);
//}
//void  Squeeze(char *s, char c)
//{
//    int i=0, j=0;
//    for(; *(s + i) != '\0'; i++)
//    {
//    	
//        if (*(s + i) != c)
//        {
//             *(s + j)=*(s+i);
//            j++;
//        }
//    }
//     *(s + j) = '\0';
//}
//


//#define N 40
//void sort(int a[]);
//void findmean(int a[]);
//void findmedian(int a[]);
//void findmode(int a[]);
//int main(){
//	int a[N];
//	printf("Input the feedbacks of 40 students:\n");
//	for(int i=0;i<N;i++){
//		scanf("%d",&a[i]);
//	}
//	sort(a);
//	findmean(a);
//	findmedian(a);
//	findmode(a);
//	return 0;
//}
//void sort(int a[]){
//	int i=0;
// for(;i<N-1;i++){
// 	if(a[i]>a[i+1]){
//	 	int temp=a[i+1];
//	 	a[i+1]=a[i];
//	 	a[i]=temp;
//	 }
// }
//}
//void findmean(int a[]){
//	int sum=0;
//	int i=0;
//	for(;i<N;i++){
//		sum+=a[i];
//	}
//	sum/=N;
//	printf("Mean value=%d\n",sum);
//}
//void findmedian(int a[]){
//	int median=0;
//	median=(a[N/2]+a[N/2-1])/2;
//	printf("Median value=%d\n",median);
//}
//void findmode(int a[]){
//	int b[11];
//	int i;
//	for(i=0;i<11;i++){
//		b[i]=0;
//	}
//	for(i=0;i<N;i++){
//		b[a[i]]++;
//	}
//	int max=0;
//	for(i=0;i<11;i++){
//		if(b[i]>max){
//			max=b[i];
//			//TODO
//		}
//	}
//	printf("Mode value=%d\n",max);
//}


//	int n,m;
//	  void kaishi(){
//	  	 printf("How many Athletes?");
//		  	    scanf("%d", &n);                                /* 输入选手人数 */
//		  	    printf("How many judges?");
//		  	    scanf("%d", &m);                                     /* 输入评委人数 */
//	  }
//typedef struct{
//	int number;
//	float min;
//	float max;
//	float finalscore;
//	float fenshu[20];
//}player;
//void input(player a[]);
//int main(){
//	player a[n];
//	 kaishi();
//	input(a);		
//		              
//}
//void input(player a[]){
//	int i=0,j=0;
//	for(;i<n;i++){
//	printf("\nAthlete %d is playing.", i+1);
//	    printf("\nPlease enter his number code:");
//	    scanf("%d",&a[i].number);
//	    for(j=0;j<m;j++){
//		printf("Judge %d gives score:", j+1);
//		scanf("%f",&a[i].fenshu[j]);
//		}
//		for(j=0;j<m-1;j++){
//	if(a[i].fenshu[j]>a[i].fenshu[j+1]){
//			float temp=a[i].fenshu[j+1];
//			a[i].fenshu[j+1]=a[i].fenshu[j];
//			a[i].fenshu[j]=temp;
//					}
//				} 
//				for(j=1;j<m-1;j++){
//					a[i].finalscore+=a[i].fenshu[j];
//				}
//				a[i].finalscore/=(m-2);
//	 printf("Delete a maximum score:%.1f\n", a[i].max);
//     printf("Delete a minimum score:%.1f\n", a[i].min);    /*去掉一个最高分和最低分*/
//	printf("The final score of Athlete 12 is %f",a[i].finalscore); 	
//	}
//}
//

//#include <stdio.h>
//#include <stdlib.h>
//
//void CountAthleteScore(int sh[], float sf[], int n, float f[], int m) {
//    for (int i = 0; i < n; i++) {
//        printf("选手 %d 正在比赛。", i + 1);
//        printf("请输入他的编号：");
//        scanf("%d", &sh[i]);
//
//        float max = -1, min = 10;
//        for (int j = 1; j <= m; j++) {
//            printf("评委 %d 给出评分：", j);
//            scanf("%f", &sf[i * m + j - 1]);
//
//            if (sf[i * m + j - 1] > max) {
//                max = sf[i * m + j - 1];
//            }
//            if (sf[i * m + j - 1] < min) {
//                min = sf[i * m + j - 1];
//            }
//        }
//
//        float sum = 0;
//        for (int j = 1; j <= m; j++) {
//            sum += (sf[i * m + j - 1] - min - max) / (m - 2);
//        }
//        f[i] = sum / m;
//    }
//}
//
//void Sort(int h[], float f[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - 1 - i; j++) {
//            if (f[j] < f[j + 1]) {
//                float temp_f = f[j];
//                f[j] = f[j + 1];
//                f[j + 1] = temp_f;
//
//                int temp_h = h[j];
//                h[j] = h[j + 1];
//                h[j + 1] = temp_h;
//            }
//        }
//    }
//}
//
//void Print(int h[], float f[], int n) {
//    printf("排名\t最终得分\t编号");
//    for (int i = 0; i < n; i++) {
//        printf("%5d\t%11.3f\t%6d", i + 1, f[i], h[i]);
//    }
//}
//
//void CountJudgeScore(int ph[], float pf[], int m, float sf[], float f[], int n) {
//    for (int i = 0; i < m; i++) {
//        float sum = 0;
//        for (int j = 0; j < n; j++) {
//            sum += (10 - (sf[j * m + i] - f[j]) * (sf[j * m + i] - f[j])) / m;
//        }
//        pf[i] = sum;
//    }
//}
//
//int main() {
//    int n, m;
//    printf("选手人数？");
//    scanf("%d", &n);
//    printf("评委人数？");
//    scanf("%d", &m);
//
//    int sh[n];
//    float sf[n * m];
//    float f[n];
//    int h[n];
//
//    CountAthleteScore(sh, sf, n, f, m);
//    Sort(h, f, n);
//    Print(h, f, n);
//
//    float pf[m];
//    CountJudgeScore(ph, pf, m, sf, f, n);
//    Sort(ph, pf, m);
//    Print(ph, pf, m);
//
//    return 0;
//}
//int main(){
//	int cnt=0;
//	for(double i=0;cnt!=3;i++){
//		if(sqrt(i+100)==(int)sqrt(i+100)&&sqrt(i+268)==(int)sqrt(i+268))
//		{
//			printf("%d\n",(int)i);
//			cnt++;
//		}
//	}
//	
//	
//	
//	return 0;
//}
//#define I 1000000
//int main(){
//	int n;
//	scanf("%d",&n);
//    char a[I];
//	char b[I];	
//	int i,cnt=0;
//	int flag=0;
//	while(n-->0){
//scanf("%s\n%s",a,b);
//		if(a[0]!=b[0]){
//		printf("-1\n");
//		continue;
//			}
//		for(i=1;a[i]!='\0';i++){
//		if(a[i]!=b[i]){
//			if(i==strlen(a))flag=1;
//			if(b[i-1]==b[i+1]&&b[i]!=b[i-1]){
//				b[i]=a[i];
//				cnt++;
//			}else{
//				flag=1;
//				cnt=0;
//				break;
//			}
//		}
//			}
//			if(flag==1)printf("-1\n");
//			else printf("%d",cnt);
//				cnt=0;
//		}
//}
//
//


//int main(){
//	int a=1;
//	int b=2;
//	int max;
//	max=(b<a)?b:a;
//	printf("%d",max);
//	return 0;
//}



//void part1(){
//	
//typedef struct sss {
//	int data;
// struct sss* next;
//}dat;
//dat * creat(){
//	dat* first=NULL;
//	first=(dat*)malloc(sizeof(dat));
//	dat* temp=first;
//	dat* temp1=NULL;
//	int n;
//	printf("请输入数组个数：");
//	scanf("%d",&n);
//    for(int i=0;i<n;i++){
//    	printf("请输入第%d个元素：",i+1);
//    	temp1=(dat*)malloc(sizeof(dat));
//		scanf("%d",&temp1->data);
//		temp->next=temp1;
//		temp=temp->next;
//	}
//	temp->next=NULL;
//	return first;
//}
//void output(dat*a){
//	a=a->next;
//	int i=1;
//	printf("插入后的数组是\n");
//	while(a){
//		printf("第%d个元素：",i++);
//		printf("%d\n",a->data);
//		a=a->next;
//	}
//}
//void insert(dat*a,int n){
//	for(int i=1;i<n;i++){
//		a=a->next;
//	}
//	dat*temp=NULL;
//	temp=(dat*)malloc(sizeof(dat));
//	temp->next=a->next;
//	a->next=temp;
//	printf("您要插入的元素是？");
//	scanf("%d",&temp->data);
//}
//
//	dat* a;
//	int n;
//	a=creat();
//	printf("您要在哪个位置插入元素");
//	scanf("%d",&n);
////	output(a);
//	insert(a,n);
//	output(a);
//}
//
//int main(){
//	part1();
//}

//#include<stdio.h>
//int main(){
//	printf("hello\n");
//	
//	
//	return 0;}

//int main(){
//	
//for(int i=0;i<n-1;i++){
//	for(int j=i+1;j<n;j++){
//		if(a[j]<a[i]){
//			int temp=a[j];
//			a[j]=a[i];
//		    a[i]=temp;
//		}
//	}
//}
//}
//#include<stdio.h>
//int main(){
//	int i=0;
//	int n=(int)'a';
//	while(++i){
//		
//		printf("%c\t",(char)n++);
//		
//		if(i==26)break;
//	}
//	
//	
//	
//	return 0;
//}

//int main(){
//	int a[n];
//	for(int i=0;i<n;i++){
//		int zuobiao=0;
//	int min=findmin(a+i,&zuobiao);
//	int temp=min;
//	a[i]=a
//}
//}
/*输入一个整形数（最多可以到亿位），然后按汉语的习惯，将其读出来并输出。如1052，读作：一千零五十二。

输入信息格式："%s"
输出信息格式："%s"
程序运行示例：
1052
一千零五十二*/

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//const char shuzi[10][4] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"};
//const char weishu[5][4] = {"十", "百", "千", "万", "亿"};
//
//void read(char *str);
//
//int main()
//{  	 	       	 
//    char str[11] = {'0'};
//    scanf("%s", str + 1);
//    read(str + 1);
//    return 0;
//}  	 	       	 
//
//void read(char *str)
//{  	 	       	 
//    if (strlen(str) == 0)
//        return;
//    else
//    {  	 	       	 
//        switch (str[0])
//        {  	 	       	 
//        case '0':
//            if (str[1] != '0' && strlen(str) >= 2)
//                printf("%s", shuzi[0]);
//            break;
//        case '1':
//            if (strlen(str) != 2 && strlen(str) != 6)
//                printf("%s", shuzi[1]);
//            else if (*(str - 1) != '0')
//                printf("%s", shuzi[1]);
//            break;
//        case '2':
//            printf("%s", shuzi[2]);
//            break;
//        case '3':
//            printf("%s", shuzi[3]);
//            break;
//        case '4':
//            printf("%s", shuzi[4]);
//            break;
//        case '5':
//            printf("%s", shuzi[5]);
//            break;
//        case '6':
//            printf("%s", shuzi[6]);
//            break;
//        case '7':
//            printf("%s", shuzi[7]);
//            break;
//        case '8':
//            printf("%s", shuzi[8]);
//            break;
//        case '9':
//            printf("%s", shuzi[9]);
//            break;
//        default:
//            return;
//        }
//        switch (strlen(str))
//        {  	 	       	 
//        case 9:
//            printf("%s", weishu[4]);
//            break;
//        case 8:
//            if (str[0] != '0')
//                printf("%s", weishu[2]);
//            break;
//        case 7:
//            if (str[0] != '0')
//                printf("%s", weishu[1]);
//            break;
//        case 6:
//            if (str[0] != '0')
//                printf("%s", weishu[0]);
//            break;
//        case 5:
//            if (str[0] != '0')
//            printf("%s", weishu[3]);
//            break;
//        case 4:
//            if (str[0] != '0')
//                printf("%s", weishu[2]);
//            break;
//        case 3:
//            if (str[0] != '0')
//                printf("%s", weishu[1]);
//            break;
//        case 2:
//            if (str[0] != '0')
//                printf("%s", weishu[0]);
//            break;
//        case 1:
//            break;
//        default:
//            return;
//        }
//        read(++str);
//    }
//}  	 	       	 

/*判断输入是否是数字*/
//int main(){
//	int n,i;
//	n=scanf("%d",&i);//是的话n=1，不然等于0
//}


//int main(){
// double n;
//	printf("请输入月用电量：\n");
//	scanf("%lf",&n);
//	if(n<=50.0){
//		printf("应支付电费=%.2f\n",n*0.53);
//	}else printf("应支付电费=%.2f\n",n*0.58);
//	
//	
//	return 0;
//}
//#include<stdio.h>
//void find(int n){
//    int c;
//    if(n){
//    c=n%10;
//    n/=10;
//    printf("%d",c);
//    find(n);
//}
//}
//int main(){
//    int n;
//    printf("Enter number:");
//    scanf("%d",&n);
//    find(n);
//    return 0;
//}
//int main(){
//	int n;
//	printf("Input  n(n<20):\n");
//	scanf("%d",&n);
//	int a[20][20]={0};
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//a[i][j]=0;
//		}
//	}
//	for(int i=0;i<n;i++){
//		a[i][0]=1;
//			for(int j=0;j<=i ;j++){
//			if(i==j) a[i][j]=1;
//			}
//		}
//		for(int i=0;i<n;i++){
//				for(int j=0;j<=i ;j++){
//			printf("%4d",a[i][j]);	
//				}
//				printf("\n");
//			}	
//	return 0;
//}
//int main()
//{
// int arr[20][20] = { 0 };
// int n;
// printf("Input  n(n<20):\n");
// scanf("%d",&n);
// int a = 1;
// int b = 1;
// 
// for (a = 0;  a < n; a++)
// {
////  b = n - a;
////     while (b--)
////  {
////   printf(" ");
////  }
//// 
//  arr[a][0] = 1;//注意访问数组是从0开始（数组的最低下标是0）
// 
//  for (b = 0; b <=a; b++)
//  {
//   if(a==b)
//   arr[a][b] = 1;
//   if(a>1 && b>=1)
//   arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];//上一行前一列和本列数之和
//   printf("%d ", arr[a][b]);//赋值完一行后直接打印得到的整体打印效果就是直接
//  }
// 
//  printf("\n");
// }
// 
// return 0;
//}

//
//void input(int(*a)[2]){
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			scanf("%d",(*(a+i)+j));
//		}
//	}
//}
//void output(int (*a)[2]){
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//		printf("%3d",*(*(a+i)+j));
//		}
//	}
//}
//int main(){
//	int a[2][2];
//	input(a);
//	output(a);
//	
//	return 0;
//}



// 螺旋矩阵************************************
//int** piGenerateMatrix(int Row, int Col){
//    int iStartx = 0, iStarty = 0;
//    int iLoop = Row / 2;
//    int iMid = Row / 2;
//    int iCount = 1;
//    int iOffset = 1;
//    int i, j,pm;
//    int **Res = (int **)malloc(sizeof(int*)*Row);           //开辟行空间
//    for(pm = 0; pm < Col; pm++){                            //开辟列空间
//        Res[pm] = (int*)malloc(sizeof(int) * Col);
//    }
//    while(iLoop--){
//        i = iStartx;
//        j = iStarty;
//        // 面开始的四个for就是模拟转了一圈
//        // 模拟填充上行从左到右(左闭右开)
//        for(j = iStarty; j < iStarty + Row - iOffset; j++){
//            Res[iStartx][j] = iCount++;
//        }
//        // 模拟填充右列从上到下(左闭右开)
//        for(i = iStartx; i < iStartx + Row - iOffset; i++){
//            Res[i][j] = iCount++;
//        }
//        // 模拟填充下行从右到左(左闭右开)
//        for(; j > iStarty; j--){
//            Res[i][j] = iCount++;
//        }
//         // 模拟填充左列从下到上(左闭右开)
//        for(; i > iStartx; i--){
//            Res[i][j] = iCount++;
//        }
//        // 第二圈开始的时候，起始位置要各自加1，
//        iStartx++;
//        iStarty++;
//        // offset 控制每一圈里每一条边遍历的长度
//        iOffset += 2;
//    }
//     // 如果n为奇数的话，需要单独给矩阵最中间的位置赋值
//    if(Row % 2){
//        Res[iMid][iMid] = iCount;
//    }
//    return Res;
//}
//int main(void)
//{
//    int **p = piGenerateMatrix(3,3);
//    int i = 0;
//    for(i = 0; i < 3; i++){
//        printf("%d\n", (*(p+i))[0]);
//    }
//    for(i = 0; i < 3; i++){
//        // 释放列空间
//        free(p[i]);
//    }
//    //释放行空间
//    free(p);
//    return 0;
//} 


//void sum(){
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		printf("*");
//		for(int j=0;j<i;j++){
//			printf("**");
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int n;
//		scanf("%d",&n);
//		for(int i=0;i<n;i++){
//			printf("*");
//			for(int j=0;j<i;j++){
//				printf("**");
//			}
//			printf("\n");
//		}
//		static a=1;
//		printf("%d",++a);
//		return 0;
//		
//}
//int main(){
//	char c='\0';
//	char b='0';
//	printf("a b");
//}
//int main(){
//	
//	return 0;
//}
//int main(){
//	char a[10],b[10];
//	int c[10]={0},d[10]={0},e[20]={0};
//    scanf("%s %s",a,b);
//	for(int i=0;*(a+i)!='\0';i++){
//		c[9-i]=a[i]-48;
//		d[9-i]=b[i]-48;
//		printf("c=%d d=%d\n",c[9-i],d[9-i]);
//	}
////	for(int i;i<10;i++){
////		for(int j=0;j<10;j++){
////			e[i+j]=e[i]+c[i]*d[i];
////			if(e[i+j]>10){
////				e[i+j+1]+=e[i+j]/10;
////			}
////		}
////	}
//	for(int i=0;i<20;i++){
//		printf("%d",e[i]);
//	}
//	return 0;
//}
//螺旋矩阵
//int main(){
//	int N,left,right,high,down;
//	scanf("%d",&N);
//	int cnt=1;
//	left=high=0,right=down=N-1;
//	int i,j,p,q;
//	int a[N][N];
//	while(high<=down&&left<=right){
//		i=left;
//		left++;
//		while(i<right){
//			a[high][i]=cnt++;
////		printf("%d",a[high][i]);
//			i++;
//		}
//		j=high;
//		high++;
//		while(j<down){
//			a[j][i]=cnt++;
////		printf("%d",a[i][j]);
//			j++;
//		}
//	q=right;
//		right--;
//		while(q>left){
//			a[q][j]=cnt++;
//			q--;
////			printf("%d",a[q][j]);
//		}
//	 p=down;
//		down--;
//		while(p>high){
//			a[q][p]=cnt++;
//			p--;
//		}
//	}
//
//	for(int i=0;i<N;i++){
//		for(int j=0;j<N;j++){
//			printf("%3d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//#define N 6
//int main(){
//	int a[N][N];
//int up,left;
//int down,right;
//up=left=0,right = down =N-1;
//int cnt=1;
//while(left<=right&&up<=down){
//for(int i=left;i<=right;i++){
//	a[up][i]=cnt;
//	cnt++;
//}
//up++;
//for(int i=up;i<=down;i++){
//	a[i][right]=cnt++;
//}	
//right--;
//for(int i=right;i>=left;i--){
//	a[down][i]=cnt++;
//}
//down--;
//for(int i=down;i>=up;i--){
//	a[i][left]=cnt++;
//}
//left++;
//}
//for(int i=0;i<N;i++){
//	for(int j=0;j<N;j++){
//		printf("%3d",a[i][j]);
//	}
//	printf("\n");
//}
//	return 0;
//}
//#define ElementType int
//typedef struct AVLNode *Position;
//typedef Position AVLTree; /* AVL树类型 */
//struct AVLNode{
//    ElementType Data; /* 结点数据 */
//    AVLTree Left;     /* 指向左子树 */
//    AVLTree Right;    /* 指向右子树 */
//    int Height;       /* 树高 */
//};
//
//int Max ( int a, int b )
//{
//    return a > b ? a : b;
//}
//
//AVLTree SingleLeftRotation ( AVLTree A )
//{ /* 注意：A必须有一个左子结点B */
//  /* 将A与B做左单旋，更新A与B的高度，返回新的根结点B */     
//
//    AVLTree B = A->Left;
//    A->Left = B->Right;
//    B->Right = A;
//    A->Height = Max( GetHeight(A->Left), GetHeight(A->Right) ) + 1;
//    B->Height = Max( GetHeight(B->Left), A->Height ) + 1;
// 
//    return B;
//}
//
//AVLTree DoubleLeftRightRotation ( AVLTree A )
//{ /* 注意：A必须有一个左子结点B，且B必须有一个右子结点C */
//  /* 将A、B与C做两次单旋，返回新的根结点C */
//    
//    /* 将B与C做右单旋，C被返回 */
//    A->Left = SingleRightRotation(A->Left);
//    /* 将A与C做左单旋，C被返回 */
//    return SingleLeftRotation(A);
//}
//
///*************************************/
///* 对称的右单旋与右-左双旋请自己实现 */
///*************************************/
//
//AVLTree Insert( AVLTree T, ElementType X )
//{ /* 将X插入AVL树T中，并且返回调整后的AVL树 */
//    if ( !T ) { /* 若插入空树，则新建包含一个结点的树 */
//        T = (AVLTree)malloc(sizeof(struct AVLNode));
//        T->Data = X;
//        T->Height = 0;
//        T->Left = T->Right = NULL;
//    } /* if (插入空树) 结束 */
//
//    else if ( X < T->Data ) {
//        /* 插入T的左子树 */
//        T->Left = Insert( T->Left, X);
//        /* 如果需要左旋 */
//        if ( GetHeight(T->Left)-GetHeight(T->Right) == 2 )
//            if ( X < T->Left->Data ) 
//               T = SingleLeftRotation(T);      /* 左单旋 */
//            else 
//               T = DoubleLeftRightRotation(T); /* 左-右双旋 */
//    } /* else if (插入左子树) 结束 */
//    
//    else if ( X > T->Data ) {
//        /* 插入T的右子树 */
//        T->Right = Insert( T->Right, X );
//        /* 如果需要右旋 */
//        if ( GetHeight(T->Left)-GetHeight(T->Right) == -2 )
//            if ( X > T->Right->Data ) 
//               T = SingleRightRotation(T);     /* 右单旋 */
//            else 
//               T = DoubleRightLeftRotation(T); /* 右-左双旋 */
//    } /* else if (插入右子树) 结束 */
//
//    /* else X == T->Data，无须插入 */
//
//    /* 别忘了更新树高 */
//    T->Height = Max( GetHeight(T->Left), GetHeight(T->Right) ) + 1;
//    
//    return T;
//}
//

//#define N 100
//int main(){
//	int a[N];
//	for(int i=0;i<N;i++){
//		a[i]=rand()%100;
//	}
//	int target=rand()%200;
//	for (int i=0;i<N-1;i++){
//		for(int j=i+1;j<N;j++){
//			if(a[i]+a[j]==target)printf("%d,%d\n",i,j);
//		}
//	}
//	
//	
//	return 0;
//}







//#include<stdio.h>
//#include<string.h>
//int x[100]={0},y[100]={0},z[105]={0};//将数组元素全部初始化为0 
//int main()
//{
//	char a[100],b[100];//通过字符串对大数进行输入并储存 
//	int len1,len2,len;
//	while(scanf("%s %s",a,b))
//	{
//		int i,j=0,k=0;
//		len1=strlen(a);
//		len2=strlen(b);
//		for(i=len1-1;i>=0;i--)//将两个字符串中的字符转化为数字，并倒序储存到数组中，即字符串为123456，则数组为654321 
//		{
//			x[j]=a[i]-'0';
//			j++;
//		}
//		for(i=len2-1;i>=0;i--)
//		{
//			y[k]=b[i]-'0';
//			k++;
//		}
//		if(len1>len2)
//            len=len1;
//        else
//            len=len2;
//		i=0;//从最低位(个位)开始进行计算
//		int m=0;
//		for(i=0;i<len;i++)
//		{
//			z[i]=(x[i]+y[i]+m)%10;//将所得数的个位存到数组z[i]中去 
//			if((x[i]+y[i]+m)>=10)
//				m=1;
//			else
//				m=0;
//		}
//		if((x[i-1]+y[i-1]+m)>=10)//判断运算的最大位的和是否>=10 
//			z[i]=1;
//		else
//			i=i-1;
//		for(;i>=0;i--)//到序输出数组 
//			printf("%d",z[i]);
//		printf("\n");
//	}
//	return 0; 
//}
//typedef struct Treenode* Tree;
//typedef Tree node;
//struct Treenode{
//	int data;
//	node left,right;	
//};
//Tree creat__tree(void);
//void insert(Tree T,int n);
//int main(){
//	Tree root;
//	 root=creat__tree();
//	
//	
//	
//	return 0;
//}
//Tree creat__tree(void){
//	Tree head=NULL;
//	int n;
//	scanf("%d",&n);
//	printf("请输入数据个数");
//	head=(Tree)malloc(sizeof(Tree));
//	for(int i=0;i<n;i++){
//			printf("请输入数据：");
//			scanf("%d",&n);
//			insert(head,n);
//	}
//	return head;
//}


/*搜索二叉树练习*/
//typedef struct Treenode* Tree;
//typedef Tree node;
//struct Treenode{
//	int data;
//	node left,right;	
//};
//Tree creat__tree(void);
//Tree insert(Tree T,int n);
//void output(Tree T);
//void modify(Tree T);
//void run__modify(Tree T,int n);
//int main(){
//	Tree root;
//	 root=creat__tree();
//	 modify(root);
//	output(root);
//	printf("%d",sizeof(root));
//	free(root);
//	return 0;
//}
//
//Tree creat__tree(void){
//	Tree head=NULL;
//	int n,q;
//	printf("请输入数据个数");
//	scanf("%d",&n);
//	head=(Tree)malloc(sizeof(struct Treenode));
//	printf("请输入数据：");
//	scanf("%d",&q);
//	head->data=q;
//	head->left=head->right=NULL;
//	for(int i=0;i<n-1;i++){
//			printf("请输入数据：");
//			scanf("%d",&q);
//			insert(head,q);
//	}
//	return head;
//}
//Tree insert(node T,int n){
//	/*如果树是空的直接插进去，不然就和数据比较*/
//if(!T){
//	T=(Tree)malloc(sizeof( struct Treenode));
//	T->data=n;
//	T->left=T->right=NULL;
//}else{
//	/*数据相等就不管他,只比大小*/
//	if(n>T->data){
//		T->right=insert(T->right,n);
//	} if(n<T->data){
//		
//	T->left=insert(T->left,n);
//	}
//}
//return T;
//}
//void output(Tree T){
//	if(T){
//		output(T->left);
//		if(T->data!=0)printf("%d",T->data);
//		output(T->right);
//	}
//}
//void modify(Tree T){
//	printf("您要修改的节点个数是：？");
//	int n,q;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		scanf("%d",&q);
//    run__modify(T,q);
//	}
//}
//void run__modify(Tree T,int n){
//	if(!T){
//		printf("无此数据");
//	}
//	else {
//		if(n==T->data){
//		T->data=0;
//	}else if(n<T->data){
//		run__modify(T->left,n);
//	}else if(n>T->data){
//		run__modify(T->right,n);
//	}
//	}
//}






//enum
//{
//FALSE,TRUE
//};
//
//
//int main(){
//	if(TRUE){
//		printf("1");
//	}
//	return 0;
//}
//typedef struct Treenode * Tree;
//typedef Tree node;
//
//void search(Tree T);
//
//int main(){
//	
//	
//	
//	return 0;
//}

//C语言实现创建二叉树 
 
 
//#include<stdio.h>
//#include<stdlib.h>
//typedef int DataType;
// 
//typedef struct Node{
//	DataType Data;
//	struct Node *lchild, *rchild;
//}BinTNode, *BiTree;
// 
//void Create_BinTree(BiTree *T)
//{
//	char ch;
//	
//	scanf("%c",&ch);
//	if(ch=='#')
//	{
//		*T==NULL;
//	//	return; 
//	} 
//	else
//	{
//		*T=(BinTNode*)malloc(sizeof(BinTNode)); 
//		(*T)->Data=ch;
//		printf("\n建立左子树\n");
//		(*T)->lchild=NULL; 
//		(*T)->rchild=NULL;
//		Create_BinTree(  &((*T)->lchild ) );//建立左子树 
//		printf("\n建立右子树\n");
//		Create_BinTree(  &((*T)->rchild ) );//建立右子树 
//	}
//	return ;
//}
// 
//void DestroyBitTree(BiTree *T)//销毁二叉树 
//{
//	if(*T)
//	{
//		if((*T)->lchild)
//			DestroyBitTree(  &((*T)->lchild ) );
//		if((*T)->rchild)
//			DestroyBitTree(  &((*T)->rchild)  );
//	
//	free(*T);
//	*T=NULL; 
//	}
//	
//	printf("\n销毁成功!\n");
//	return;
//}
// 
// 
////遍历二叉树
//void PreOrder_Traverase(BiTree T)//先序遍历 
//{
//	if(T==NULL)
//	return;
//	else
//	{
//		printf(" %c " , T->Data);
//		PreOrder_Traverase(T->lchild);
//		PreOrder_Traverase(T->rchild);
//	}
//	
//} 
// 
//void InOrder_Traverase(BiTree T)//中序遍历 
//{
//	if(T==NULL)
//	return;
//	else
//	{
//		PreOrder_Traverase(T->lchild);
//		printf(" %c " , T->Data);
//		PreOrder_Traverase(T->rchild);	
//	} 
//	
//}
// 
//void PostOrder_Traverase(BiTree T)//后序遍历 
//{
//	if(T==NULL)
//	return ;
//	else
//	{
//		PreOrder_Traverase(T->lchild);
//		PreOrder_Traverase(T->rchild);	
//		printf(" %c " , T->Data);
//	}
//} 
// 
// 
//int main()
//{
//	BiTree Tree;
//	Create_BinTree(&Tree);
//	
//	printf("\n先序遍历\n"); 
//	PreOrder_Traverase(Tree);
//	printf("\n中序遍历\n");
//	InOrder_Traverase(Tree);
//	printf("\n后序遍历\n");
//	PostOrder_Traverase(Tree);
//	
//	
//	DestroyBitTree(&Tree);
//	
//	 
//	return 0;
//}




//typedef struct node{
//	struct node* next;
//	int data;
//};
//void creat(struct node* ran){
//	if(!ran){
//		ran=(struct node * )malloc(sizeof(struct node));
//	}
//
//}
//int main(){
//	struct node *p=NULL;
//
//	if(!p)printf("empty");
//	else printf("full");
//	free(p);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct node
//{
//    int a;
//    struct node *next;
//}node;
//void Initlinklist(node *p)
//{
//    if(p==NULL)
//    {
//        p=(node*)malloc(sizeof(node));
//    }
//    p->a=0;
//    p->next=NULL;
//    
//}
//int main()
//{
//    node*p;
//    //IninLinklist就是一个链表的初始化函数
//Initlinklist(&p);
//    if(p==NULL)
//    {
//        printf("NULL ");
//    }
//    else{
//        printf("good ");
//    }
//    if(p->next=NULL)
//    {
//        printf("NULL");
//    }
//    else{
//        printf("good ");
//    }
//    system("pause");
//    return 0;
//}

//
//bool isPrefixCode(char* codes[],int numCodes)
//{ 
//int i,j;
// for(i=0;i<numCodes-1;i++) 
// for(j=i+1;j<numCodes;j++) 
// { 
// if(strncmp(codes[i],codes[j],strlen(codes[i]))==0||strncmp(codes[j],codes[i],strlen(codes[j]))==0) return false; 
// } 
// return true;}




// int main(){
// 	int a[5]={1,2,3,4,5};
// 	int b[5]={6,7,8,9,10};
// 	printf("%d",*(a+1));
// 	return 0;
// }

//#include <stdio.h>
//
//#define MAXN 10
//
//double f( int n, double a[], double x );
//
//int main()
//{
//    int n, i;
//    double a[MAXN], x;
//    
//    scanf("%d %lf", &n, &x);
//    for ( i=0; i<=n; i++ )
//        scanf("%lf", &a[i]);
//    printf("%.1f\n", f(n, a, x));
//    return 0;
//}
//double f( int n, double a[], double x ){
//double sum=0,k=1.0;
//    int j;
//    for(int i=0;i<=n;i++)
//    {
//     j=i;
//     while (j-->0)k*=x;
//     sum=sum+k*a[i];
//    }
//return sum;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node *PtrToNode;
//struct Node {
//    int Data; /* 存储结点数据 */
//    PtrToNode Next; /* 指向下一个结点的指针 */
//};
//typedef PtrToNode List; /* 定义单链表类型 */
//
//int FactorialSum( List L );
//
//int main()
//{
//    int N, i;
//    List L, p;
//
//    scanf("%d", &N);
//    L = NULL;
//    for ( i=0; i<N; i++ ) {
//        p = (List)malloc(sizeof(struct Node));
//        scanf("%d", &p->Data);
//        p->Next = L;  L = p;
//    }
//    printf("%d\n", FactorialSum(L));
//
//    return 0;
//}
//int FactorialSum( List L ){
//int sum=0,i,temp=1;
//while(L){
//    for(i=1;i<=L->Data;i++)
//        temp*=i;
//    sum+=temp;
//    L=L->Next;
//}
//    return sum;
//}
//#include <stdio.h>
//#include <math.h>
//
//int IsTheNumber ( const int N );
//
//int main()
//{
//    int n1, n2, i, cnt;
//    
//    scanf("%d %d", &n1, &n2);
//    cnt = 0;
//    for ( i=n1; i<=n2; i++ ) {
//        if ( IsTheNumber(i) )
//            cnt++;
//    }
//    printf("cnt = %d\n", cnt);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//int IsTheNumber ( const int N ){
//if(N<0)return 0;
//    int a[10]={0};
//    int q=N;
//if(N==sqrt(N)*sqrt(N))
//{
//    while(q>0){
//a[q%10]++;
//q/=10;
//    }
//}
//    for(int i=0;i<10;i++){
//        if(a[i]>1)return 1;
//    }
//  return 0;
//}
//#define a 001
//int main(){
//	
//	printf("%d",sizeof('0'));
//	return 0;
//}
//typedef struct maxt*maxee;
//struct maxt{
//	int data;
//	maxee i;
//};
//maxee creat(maxee*i){
//	*i=(maxee)malloc(sizeof(struct maxt));
//	return *i;
//}
//int main(){
//	maxee i=NULL;
//	i=creat(&i);
//	if(i)printf("1");
//	else printf("0");
//}
//#define size 5
//typedef struct quene* Quene;
//struct quene {
//	int data[size];
//	Quene rear,front;
//};
//struct quene_node{
//	i
//};
//void creat_quene(Quene * my_quene){
//	(*my_quene)
//	
//}
//int main(){
//	Quene my_quene=NULL;
//	creat(&my_quene);
//	
//	
//}
//struct quene_node{
//	int data;
//	struct quene_node*next;
//};
//struct quene{
//	struct quene_node * front;
//	struct quene_node * rear;
//};
//struct quene_node * creat(void){
//	struct quene_node *front,*rear;
//	front=rear=NULL;
//	front=(struct quene_node*)malloc(sizeof(struct quene_node));
//	rear=front;
//	for(int i=0;i<5;i++){
//		scanf("%d",&(front->data));
//		front=front->next;
//		front=(struct quene_node*)malloc(sizeof(struct quene_node));
//	}
//	return rear;
//};
//int main(){
//	struct quene* myquene;
//		struct quene_node* temp;
//	myquene->front=creat();
//	while(myquene->front){
//		printf("%d",myquene->front->data);
//	temp=myquene->front;
//	myquene->front=myquene->front->next;
//	free(temp);
//	}
//	return 0;
//}
//struct quene_node {
//    int data;
//    struct quene_node *next;
//};
//
//struct quene {
//    struct quene_node *front;
//    struct quene_node *rear;
//};
//
//struct quene_node *creat(void) {
//    struct quene_node *front, *rear;
//    front = rear = NULL;
//    front = (struct quene_node *)malloc(sizeof(struct quene_node));
//    front->next = NULL;
//    rear = front;
//    for (int i = 0; i < 5; i++) {
//        scanf("%d", &(front->data));
//        if (i < 4) {
//            front = front->next;
//            front = (struct quene_node *)malloc(sizeof(struct quene_node));
//            front->next = NULL;
//        }
//    }
//    return rear;
//}
//
//int main() {
//    struct quene *myquene;
//    struct quene_node *temp;
//    myquene = (struct quene *)malloc(sizeof(struct quene));
//    myquene->front = creat();
//    while (myquene->front) {
//        printf("%d", myquene->front->data);
//        temp = myquene->front;
//        myquene->front = myquene->front->next;
//        free(temp);
//    }
//    free(myquene);
//    return 0;
//	}



//typedef struct q_quene * quene;
//typedef struct q_node * node;
//struct q_node{
//	int data;
//	node next;
//};
//struct q_quene{
//	node front;
//	node rear;
//};
//node creat(void){
//	node q=NULL ;
//	q=(node)malloc(sizeof(struct q_node));
//	q->next=NULL;
//	return q;
//}
//void q_insert(quene*q,int n){
//	while((*q)->front!=NULL){
//		(*q)->front=(*q)->front->next;
//	}
//	(*q)->front=(node)malloc(sizeof(struct q_node));
//	(*q)->front->data=n;
//	(*q)->front->next=NULL;
//}
//int main(){
//	int n;
//	quene myquene;
//	myquene=NULL;
//	myquene=(quene)malloc(sizeof(struct q_quene));
//	myquene->front=creat();
//	myquene->rear=myquene->front;
//	scanf("%d",&(myquene->front->data));
//	for(int i;i<3;i++){
//		scanf("%d",&n);
//		q_insert(&myquene,n);
//	}
//	while(myquene->front!=NULL){
//		printf("%d\n",myquene->front->data);
//		myquene->front=myquene->front->next;
//	}
////printf("%d",myquene->front->data);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//    int data;
//    struct Node *next;
//} Node;
//Node *create_node(int data) {
//    Node *new_node = (Node *)malloc(sizeof(Node));
//    new_node->data = data;
//    new_node->next = NULL;
//    return new_node;
//}
//void insert_node(Node **head, int data) {
//    Node *new_node = create_node(data);
//    if (*head == NULL) {
//        *head = new_node;
//    } else {
//        Node *temp = *head;
//        while (temp->next!=NULL) {
//            temp = temp->next;
//        }
//        temp->next = new_node;
//    }
//}
//void display_list(Node *head) {
//    Node *temp = head;
//    while (temp != NULL) {
//        printf("%d -> ", temp->data);
//        temp = temp->next;
//    }
//    printf("NULL");
//}
//void free_list(Node *head) {
//    Node *temp;
//    while (head != NULL) {
//        temp = head;
//        head = head->next;
//        free(temp);
//    }
//}
//int main() {
//    Node *head = NULL;
//    int num;
//    printf("请输入五个数字：");
//    for (int i = 0; i < 5; i++) {
//        scanf("%d", &num);
//        insert_node(&head, num);
//    }
//    printf("链表中的元素按输入顺序输出：");
//    display_list(head);
//    free_list(head);
//    return 0;
//}





//struct test{
//	struct test*next;
//};
//int main(){
//	struct test *n=NULL;
//	n=(struct test*)malloc(sizeof(struct test));
//	if(n->next->next->next==NULL){
//		printf("NULL");
//	}else printf("yes");
//	}

//typedef int MyQDataType;
//typedef struct QueueNode
//{
//	MyQDataType data;
//	struct QueueNode* next;
//}QNode;
//
//
////队列结构的创建
//typedef struct QueueStack
//{
//	QNode* phead;//指向队头位置
//	QNode* ptail;//指向队尾位置
//	int size;//记录数据个数
//}Queue;
//



//typedef struct p_node * node;
//typedef struct p_quene *quene;
//struct  p_node{
//	int data;
//	node next;
//};
//struct p_quene{
//	node head;
//	node tail;
//	int size;
//};
//void creat(quene*my_quene){
//	(*my_quene)=(quene)malloc(sizeof(struct p_quene));
//	(*my_quene)->head=NULL;
//	(*my_quene)->tail=NULL;
//	(*my_quene)->size=0;
//}
//void insert(quene my_quene,int n){
//	node i=NULL;
//	i=(node)(sizeof(struct p_node));
//    i->data=n;
//    i->next=NULL;
//    if(my_quene->head==NULL)
//    my_quene->tail=my_quene->head=i;
//    else {
////		while(my_quene->head!=NULL)
////		my_quene->head=my_quene->head->next;
////		my_quene->tail=my_quene->head=i;
// my_quene->tail->next = i;
//        my_quene->tail = i;
//	}
//	my_quene->size++;
//}
//void push(quene my_quene){
//    node temp = my_quene->head;
//    while (temp != NULL) {
//        printf("%d", temp->data);
//        temp = temp->next;
//    }
//}
//
////void push(quene my_quene){
////	while(my_quene->head)
////{	printf("%d\n",my_quene->tail->data);
////my_quene->head=my_quene->head->next;
////}
////}
//int main(){
//	int n;
//	quene my_quene=NULL;
//	creat(&my_quene);
//	for(int i=0;i<5;i++){
//	scanf("%d",&n);
//	insert(my_quene,n);	
//	}
//	push(my_quene);
//	return 0;
//}




/*队列练习*/
//
//typedef struct p_node * node;
//typedef struct p_quene *quene;
//struct  p_node{
//    int data;
//    node next;
//};
//struct p_quene{
//    node head;
//    node tail;
//    int size;
//};
//void creat(quene*my_quene){
//	*my_quene=(quene)malloc(sizeof(struct p_quene));
//    (*my_quene)->head=NULL;
//    (*my_quene)->tail=NULL;
//    (*my_quene)->size=0;
//}
//void insert(quene my_quene,int n){
////    node i=NULL;
//
//node i=(node)malloc(sizeof(struct p_node));
//    i->data=n;
//    i->next=NULL;
//    if(my_quene->head==NULL)
//    my_quene->tail=my_quene->head=i;
//    else {
////    	while(my_quene->head!=NULL){
////			my_quene->head=my_quene->head->next;
////		}
////		my_quene->head=i;
////		
//       my_quene->head->next=i;
//       my_quene->head=my_quene->head->next;
////	while(my_quene->head!=NULL)
////		my_quene->head=my_quene->head->next;
////		my_quene->tail=my_quene->head=i;
////       my_quene->tail->next = i;
////        my_quene->tail = i;
//    }
//    my_quene->size++;
//}
//void push(quene my_quene){
//    while(my_quene->tail!=NULL)
//   { printf("%d\n",my_quene->tail->data);
//my_quene->tail=my_quene->tail->next;
////node temp=my_quene->head;
////while(temp!=NULL){
////	printf("%d",temp->data);
////	temp=temp->next;
////}
//}
//}
//int main(){
//    int n;
//    quene my_quene;
//    creat(&my_quene);
//    for(int i=0;i<5;i++){
//    scanf("%d",&n);
//    insert(my_quene,n);    
//    }
//    push(my_quene);
//    return 0;
//}

//typedef struct p_node * node;
//typedef struct p_quene *quene;
//struct  p_node{
//    int data;
//    node next;
//};
//struct p_quene{
//    node head;
//    node tail;
//    int size;
//};
//
//void creat(quene* my_quene){
//    *my_quene = (quene)malloc(sizeof(struct p_quene));
//    (*my_quene)->head = NULL;
//    (*my_quene)->tail = NULL;
//    (*my_quene)->size = 0;
//}
//
//void insert(quene my_quene, int n){
//    node i = (node)malloc(sizeof(struct p_node));
//    i->data = n;
//    i->next = NULL;
//    if (my_quene->head == NULL) {
//        my_quene->tail = my_quene->head = i;
//    } else {
//        my_quene->tail->next = i;
//        my_quene->tail = i;
//    }
//    my_quene->size++;
//}
//
//void push(quene my_quene){
//    node temp = my_quene->head;
//    while (temp != NULL) {
//        printf("%d", temp->data);
//        temp = temp->next;
//    }
//}
//
//int main(){
//    int n;
//    quene my_quene;
//    creat(&my_quene);
//    for (int i = 0; i < 5; i++) {
//        scanf("%d", &n);
//        insert(my_quene, n);    
//    }
//    push(my_quene);
//    return 0;
//}


//int main(){
//	int a[10]={0};
//	char b[10];
//	scanf("%s",&b);
//	int i;
//	i=strlen(b);
//	for(;i>0;i--){
//		a[strlen(b)-i]=b[i-1]-'0';
//		printf("%d",a[strlen(b)-i]);
//	}
//
//	return 0;
//}
/*魔幻矩阵
编程实现9*9以内任意奇数阶方阵的魔幻矩阵。
所谓奇数魔幻矩阵就是n*n的矩阵(n为奇数)的n*n个格子中放入数1到n*n，使得每行、每列、主对角线、付对角线上元素的和都相等。算法生成如下：:
1 ,第一个数字在第一行的中间位置
2,以后每一个数放在前一个数的右上方，,如果向上超出了界限,在矩阵的最后一行插入，列不变；,如果右侧超出了界限,在矩阵的最左边插入，行不变。
3.如果插入数的位置已经有数，则在前一个数的下方插入。.
5*5魔幻矩阵：
17 24  1  8 15
23  5  7 14 16
 4  6 13 20 22
10 12 19 21  3
11 18 25  2  9
输入提示："input Magic matrix n:"
输入格式："%d"
输出格式："%4d"

程序运行示例：
input Magic matrix n:4
   9  15   1   7
  14   4   6   8
   3   5  11  13
   0  10  12   2*/

//#define N 9
//int main(){
//int n;
//int a[N][N]={0};
//printf("input Magic matrix n:");
//scanf("%d",&n);
//int p=0,q=n/2;
//int t_p,t_q;
//for(int i=0;i<n*n;i++){
//	if(a[p][q]==0)a[p][q]=i+1;
//	 else{
//     t_p++;
//     p=t_p;
//     q=t_q;
//     if(p<0)p+=n;
//	      if(q>n-1)q-=n;
//	      a[p][q]=i+1;
//	 }
//	 t_p=p,t_q=q;
//     p--;
//     q++;
//     if(p<0)p+=n;
//     if(q>n-1)q-=n;
//}
//for(int i=0;i<n;i++){
//	for(int j=0;j<n;j++){
//		printf("%d ",a[i][j]);
//	}
//	printf("\n");
//	
//}
//}



/*魔幻*/
//#include <stdio.h>
//#include <stdlib.h>                                
//void f(int a[9][9], int n);                              
//int main()
//{	  	  		   	 
//    int a[9][9], i, j, n;
//    for (i = 0; i <= 8; i++)
//        for (j = 0; j <= 8; j++)
//            a[i][j] = 0;                                 //1
//    printf("input Magic matrix n:");
//    scanf("%d", &n);                                     //1
//    f(a, n);                                             
//    for (i = 0; i <= n - 1; i++)                         //0.5
//    {	  	  		   	 
//        for (j = 0; j <= n - 1; j++)                     //0.5
//            printf("%4d", a[i][j]);                      //1
//        printf("\n");                                    //1
//    }
//    return 0;
//}	  	  		   	 
//void f(int a[9][9], int n)                               
//{	  	  		   	 
//    int i, j, k;
//    j = n / 2;                                            //0.5
//    a[0][j] = 1;                                          //0.5
//    i = 0;                                                //0.5
//    for (k = 2; k <= n * n; k++)                          //1
//    {	  	  		   	 
//        i = i - 1;                                        //0.5
//        j = j + 1;                                        //0.5
//        if ((i < 0) && (j > n - 1))                       //1
//        {	  	  		   	 
//            i = i + 2;                                    //0.5
//            j = j - 1;                                    //0.5
//        }
//        else
//        {	  	  		   	 
//            if (i < 0) i = n - 1;                         //0.5
//            if (j > n - 1) j = 0;                         //0.5
//        }
//        if (a[i][j] == 0) a[i][j] = k;                    //1
//        else
//        {	  	  		   	 
//            i = i + 2;                                    //0.5
//            j = j - 1;                                    //0.5
//            a[i][j] = k;                                  //1
//        }
//    }
//}	  	
//
//int main(){
//	char a[8][20];
//	char temp[20];
//	for(int i=0;i<8;i++){
//	gets(a[i]);
//	}
//	for(int i=0;i<7;i++){
//		for(int j=i+1;j<8;j++){
//			if(strcmp(a[i],a[j])>0){
//				strcpy(temp,a[i]);
//				strcpy(a[i],a[j]);
//				strcpy(a[j],temp);
//			}
//		}
//	}
//	for(int i=0;i<8;i++){
//		printf("%s ",a[i]);
//		printf("\n");
//	}
//	
//	
//	return 0;
//}

//	#include <stdio.h>
//	
//	int main() {
//	    int matrix[2][6] ;
//	    int found_saddle_point = 0;
//	    for(int i=0;i<2;i++){
//			for(int j=0;j<6;j++){
//				scanf("%s",&matrix[i][j]);
//			}
//		}
//	    for (int i = 0; i < 2; i++) {
//	        for (int j = 0; j < 6; j++) {
//	            int row_max = matrix[i][0];
//	            int col_min = matrix[0][j];
//	            for (int k = 0; k < 2; k++) {
//	                if (matrix[k][j] > row_max) {
//	                    row_max = matrix[k][j];
//	                }
//	                if (matrix[i][k] < col_min) {
//	                    col_min = matrix[i][k];
//	                }
//	            }
//	            if (matrix[i][j] == row_max && matrix[i][j] == col_min) {
//	                found_saddle_point = 1;
//	                printf("%d\n", matrix[i][j]);
//	                break;
//	            }
//	        }
//	        if (found_saddle_point) {
//	            break;
//	        }
//	    }
//	
//	    if (!found_saddle_point) {
//	        printf("no saddle point\n");
//	    }
//	
//	    return 0;
//	}
//	
//	
//

//int main(){
//	int temp,temp1;;
//	int a[2][3]={{4,6,1},{10,12,8}};
//	for(int i=0;i<2;i++){
//		for(int j=0;j<3;j++){
//			printf("%6d",a[i][j]);
//		}
//			printf("\n");
//	}
//	
//	return 0;
//}

//#define M 3
//#define N 4
//int a[M][N];
//int main(){
//	int max=0,r=0,c=0;
//	for(int i=0;i<M;i++){
//		//TODO
//		for(int j=0;j<N;j++){
//		scanf("%d",*(a+i)+j);
//		if(*(a+i*N+j)>max){
//			r=i;
//			c=j;
//			max=*(*(a+i)+j);
//			}
//		}
//	}
//	printf("The maximum is %d, which is in row %d, colum %d\n",max,r,c);
//	
//	
//	return 0;
//}

//#include <stdio.h>
//#define SIZE sizeof(struct node)
//struct node
//{
//    long num;
//    float score;
//    struct node *next;
//};
//int main()
//{
//    int n = 0;
//    struct node *head = NULL, *p1, *p2;
//    p1 = p2 = (struct node*)malloc(SIZE);
//    printf("Input %d node data:\n", n + 1);
//    scanf("%ld %f", &p1->num, &p1->score);
//    while (p1->num != 0)
//    {
//        if (++n == 1)
//            head = p1;
//        else
//            p2->next = p1;
//        p1 = p2;
//        p1 = (struct node*)malloc(SIZE);
//        printf("Input %d node data:\n", n + 1);
//        scanf("%ld %f", &p1->num, &p1->score);
//    }
//    free(p1);
//    printf("Print list:\n");
//    p2->next = NULL;
//    if (head != NULL)
//    {
//         p2=head;     
//         while (p2 != NULL) // 修改这里，使用p2指针进行遍历
//        {   
//            printf("num:%ld\tscore:%.2f\n", p2->num, p2->score); // 修改这里，使用p2指针进行输出
//            p2 = p2->next; // 修改这里，使用p2指针进行遍历
//        }
//    }
//    return 0;
//}
















//int main(){
//	int a[3][4];
//    int b[4][3];
//    for(int i=0;i<3;i++){
//		for(int j=0;j<4;j++){
//			scanf("%d",&a[i][j]);
//			b[j][i]=a[i][j];
//		}
//	}
//	for(int j=0;j<4;j++){
//	 for(int i=0;i<3;i++)printf("%4d",b[j][i]);
//	 printf("\n");
//	}
//	
//	
//	
//	
//	
//}


//
//typedef struct tree * my_tree;
//typedef my_tree node;
//struct tree{
//	int data;
//	node left;
//	node right;
//};
//
//node insert(node T,int n){
//if(!T){
//	T=(node)malloc(sizeof(struct tree));
//	T->data=n;
//	T->left=T->right=NULL;
//}else{
//	if(n>T->data){
//		T->right=insert(T->right,n);
//	} 
//	if(n<T->data){
//	T->left=insert(T->left,n);
//	}
//}
//return T;
//}
//void count(my_tree T,int*cnt){
//if(T){	
//    count(T->left,cnt);
//    	(*cnt)++;
//	count(T->right,cnt);
//}
//}
//int main(){
//	int n,k;
//	my_tree T=NULL;
//	scanf("%d%d",&n,&k);
//    int*a=(int*)malloc(n*sizeof(int));
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n-1;i++){
//	for(int j=i+1;j<n;j++){
//		if(a[i]%a[j]+a[j]%a[i]==k){
//	T=insert(T,i);
//	T=insert(T,j);
//		}
//	}
//	}
//	int cnt=0;
//    count(T,&cnt);
//	printf("%d",cnt);
//}


//typedef struct Treenode* Tree;
//typedef Tree node;
//struct Treenode{
//	int data;
//	node left,right;	
//};
//Tree creat__tree(void);
//Tree insert(Tree T,int n);
//void count(Tree T,int *cnt){
//	if(T){
//		count(T->left,cnt);
//		(*cnt)++;
//			count(T->left,cnt);
//	}
//}
//int main(){
//	Tree root;
//	int cnt=0;
//	 root=creat__tree();
//	 count(root,&cnt);
//	printf("%d",cnt);
//	return 0;
//}
//
//Tree creat__tree(void){
//	Tree head=NULL;
//    int n,k;
//    scanf("%d %d",&n,&k);
//    int a[n];
//    for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//for(int i=0;i<n-1;i++){
//	for(int j=i+1;j<n;j++){
//		if(a[i]%a[j]+a[j]%a[i]==k){
//	insert(head,i);
//	insert(head,j);
//		}
//	return head;
//}
//}
//}
//Tree insert(node T,int n){
//
//if(!T){
//	T=(Tree)malloc(sizeof( struct Treenode));
//	T->data=n;
//	T->left=T->right=NULL;
//}else{
//	if(n>T->data){
//		T->right=insert(T->right,n);
//	} if(n<T->data){
//		
//	T->left=insert(T->left,n);
//	}
//}
//return T;
//}



//int main(){
//	int n,k;
//	int cnt=0;
//	scanf("%d %d",&n,&k);
//	int a[n],b[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		b[i]=-1;
//	}
//		for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[i]%a[j]+a[j]%a[i]==k){
//				for(int q=0;q<n;q++){
//				if(b[0]==-1)b[0]=i,cnt++;
//				else if(b[q]==j)break;
//				else if(b[q]==-1){
//					b[q]=j;
//					cnt++;
//				}
//				}
//			}
//		}
//		}
//		printf("%d",cnt);
//}
//
//


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct tree *my_tree;
//typedef struct tree node;
//
//struct tree {
//    int data;
//    my_tree left;
//    my_tree right;
//};
//
//my_tree insert(my_tree T, int n) {
//    if (!T) {
//        T = (my_tree)malloc(sizeof(struct tree));
//        T->data = n;
//        T->left = T->right = NULL;
//    } else {
//        if (n > T->data) {
//            T->right = insert(T->right, n);
//        } else if (n < T->data) {
//            T->left = insert(T->left, n);
//        }
//    }
//    return T;
//}
//
//void count(my_tree T, int *cnt) {
//    if (T) {
//        count(T->left, cnt);
//        (*cnt)++;
//        count(T->right, cnt);
//    }
//}
//
//int main() {
//    int n, k;
//    scanf("%d%d", &n, &k);
//
//    int *a = (int *)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    my_tree T = NULL;
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (a[i] % a[j] + a[j] % a[i] == k) {
//                T = insert(T, i);
//                T = insert(T, j);
//            }
//        }
//    }
//
//    int cnt = 0;
//    count(T, &cnt);
//    printf("%d\n", cnt);
//
//    free(a); // 释放动态分配的内存
//    return 0;
//}
//int main(){
//	int n,k;
//	int cnt=0;
//	scanf("%d %d",&n,&k);
//	int a[n],b[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		b[i]=-1;
//		if(i>1){
//			for(int j=i;j>0;j--){
//			
//			}
//		}
//	}
//		for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[i]%a[j]+a[j]%a[i]==k){
//				for(int q=0;q<n;q++){
//				if(b[0]==-1)b[0]=i,cnt++;
//				else if(b[q]==j)break;
//				else if(b[q]==-1){
//					b[q]=j;
//					cnt++;
//				}
//				}
//			}
//		}
//		}
//		printf("%d",cnt);
//}




//int main(){
//	int n;
//	scanf("%d",&n);
//	char *a;
//	a=(char*)malloc(n*sizeof(char));
//	for(int i=0;i<n-1;i++){
//		*(a+i)='1';
//	}
//	*(a+n)='\0';
//	printf("%s",a);
//	
//	
//	
//	
//	
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//void Print_Factorial ( const int N ) {
//    if (N < 0) {
//        printf("Invalid input");
//    } else {
//        int result[2000] = {0}; // Array to store the factorial result
//        result[0] = 1; // Initialize the first element as 1
//        
//        for (int i = 1; i <= N; i++) {
//            int carry = 0;
//            for (int j = 0; j < 2000; j++) {
//                int product = result[j] * i + carry;
//                result[j] = product % 10; // Store the last digit of the product
//                carry = product / 10; // Update the carry value
//            }
//        }
//        
//        // Find the first non-zero digit and print the result
//        int start = 0;
//        while (result[start] == 0) {
//            start++;
//        }
//        
//        for (int i = start; i < 2000; i++) {
//            printf("%d", result[i]);
//        }
//        printf("");
//    }
//}
//
//int main() {
//    int N;
//    
//    scanf("%d", &N);
//    Print_Factorial(N);
//    return 0;
//}




///*快排*/
////#include<time.h>
////void swap(int *a,int *b){
////    int temp;
////    temp=*b;
////    *b=*a;
////    *a=temp;
////}
////int dium(int a[],int i,int j){
////    int m=(i+j)/2;
////    if(a[i]>a[j])swap(&a[i],&a[j]);
////    if(a[i]>a[m])swap(&a[i],&a[m]);
////    if(a[m]>a[j])swap(&a[m],&a[j]);
////    //此时a[i]<=a[m]<=a[j]
////    swap(&a[m],&a[j-1]);
////    //将基准放在右边
////    return a[j-1];
////    //返回基准
////}
////void quick_sort(int a[],int l,int r){
////  if (l>=r) return;//
////    int medium=dium(a,l,r);//选基准
////    int i=l,j=r-1;
////    for(;;){
////        while(a[++i]<medium){}
////        while(a[--j]>medium){}
////        if(i<=j)swap(&a[i],&a[j]);
////        else break;//比基准小的放左边，大的放右边
////    }
////    swap(&a[i],&a[r-1]);
////    quick_sort(a,l,i-1);
////    quick_sort(a,i+1,r);
////}
////int main(){
////    srand(time(NULL));
////    int a[100];
////    for(int i=0;i<100;i++){
////        //TODO
////   a[i]=rand()%100;
//////a[i]=100-i;
////    }    
////    quick_sort(a,0,99);
////    for(int i=0;i<100;i++){
////        printf("%d ",a[i]);
////    }
////    return 0;
////}


/*深度优先搜索*/
// #include<stdio.h>
// #include<stdlib.h> 
// #include<time.h>
// void swap(int *a,int *b){
//     int temp;
//     temp=*b;
//     *b=*a;
//     *a=temp;
// }
// int dium(int a[],int i,int j){
//     int m=(i+j)/2;
//     if(a[i]>a[j])swap(&a[i],&a[j]);
//     if(a[i]>a[m])swap(&a[i],&a[m]);
//     if(a[m]>a[j])swap(&a[m],&a[j]);
//     //此时a[i]<=a[m]<=a[j]
//     if(j-i>1)
// 	swap(&a[m],&a[j-1]);
//     //将基准放在右边
//     return a[j-1];
//     //返回基准
// }
// void quick_sort(int a[],int l,int r){
//   int medium=dium(a,l,r);//选基准
//   if (l>=r-1) return;//递归截止
//     
//     int i=l,j=r-1;
//     for(;;){
//         while(a[++i]<medium){}
//         while(a[--j]>medium){}
//         if(i<=j)swap(&a[i],&a[j]);
//         else break;//比基准小的放左边，大的放右边
//     }
//     swap(&a[i],&a[r-1]);
//     	
//     
//     quick_sort(a,l,i-1);
//     quick_sort(a,i+1,r);
// }
// int main(){
//     srand(time(NULL));
//     int a[100];
//     
//  for(int i=0;i<100;i++){
//         //TODO
//    a[i]=rand()%100;
// //a[i]=100-i;
//     }    
//    
//     quick_sort(a,0,99);
//     for(int i=0;i<100;i++){
//         printf("%d ",a[i]);
//     }
//    
//     return 0;
// }

////深度优先搜索初体验
//#define N 100
//int a[N][N];
//int vis[N][N]={0};
//int xend,yend,m,n;
////顺序右下左上
////变位数组
//int flag=false;
//int vx[4]={0,1,0,-1};
//int vy[4]={1,0,-1,0};
//void dfs(int x,int y,int step,char way[]);
//int main()
//{
//	char way[1000];
//	scanf("%d %d",&m,&n);
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			//0表示可以走，1表示不可以走
//			scanf("%d",&a[i][j]);
//		}
//	}
//	scanf("%d%d",&xend,&yend);
//	dfs(0,0,0,way);
//	if(flag==true)printf("YEs");
//	else printf("NO");
//for(int i=0;i<(int)strlen(way);i++){
//	print(" %c",way[i]);
//}
//	return 0;
//}
//void dfs(int x,int y,int step,char way[]){
//	if (x==xend&&y==yend){
//		flag=true;
//		return;
//	}
//	vis[x][y]=1;
//	if(flag==true)return;
//	for(int i=0;i<4;i++){
//		int tx,ty;
//		tx=x+vx[i];
//		ty=y+vy[i];
//		switch (i) {
//			case 0:
//				way[step]='r';
//				break;
//			case 1:
//				way[step]='d';
//				break;
//            case 2:
//            	way[step]='l';
//            	break;
//            case 3:
//            	way[step]='n';
//				break;
//		}
//		
//		if(a[tx][ty]==0&&vis[tx][ty]==0&&tx>-1&&tx<m&&ty>-1&&ty<n){
//			dfs(tx,ty,step+1,way);
//		}
//		}
//	}

//烤鸡
//int a[10];//调料
//int sum=0;//满意度
//int cnt=0;
//int vis[10]={0};
//void dfs(int sum,int cnt){
//	if(sum>11)return;
//	if(cnt>=10){
//		if(sum==11){
//		for(int i=0;i<cnt;i++){
//			print("%d ",a[i]);
//		}	
//		print("\n");
//		}
//		return;
//	}
//	for(int i=1;i<4;i++){
//		a[cnt]=i;
//	    dfs(sum+i,cnt+1);
//	    a[cnt]=0;
//}
//}
//
//int main(){
//	dfs(sum,0);
//}



//#define N 100
//int a[N][N];
//int vis[N][N]={0};
//int xend,yend,m,n;
//char *way;
////顺序右下左上
////变位数组
//int flag=false;
//int vx[4]={0,1,0,-1};
//int vy[4]={1,0,-1,0};
//void dfs(int x,int y,int step);
//int main()
//{
//way=(char*)malloc(sizeof(char));
//	scanf("%d %d",&m,&n);
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			//0表示可以走，1表示不可以走
//			scanf("%d",&a[i][j]);
//		}
//	}
//	scanf("%d%d",&xend,&yend);
//	dfs(0,0,0);
//	if(flag==true)printf("YEs");
//	else printf("NO");
//for(int i=0;i<(int)strlen(way);i++){
//	print(" %c",way[i]);
//}
//	return 0;
//}
//void dfs(int x,int y,int step){
//	if (x==xend&&y==yend){
//		flag=true;
//		return;
//	}
//	vis[x][y]=1;
//	if(flag==true)return;
//	for(int i=0;i<4;i++){
//		int tx,ty;
//		tx=x+vx[i];
//		ty=y+vy[i];
//		switch (i) {
//			case 0:
//				way[step]='右';
//				break;
//			case 1:
//				way[step]='下';
//				break;
//            case 2:
//            	way[step]='左';
//            	break;
//            case 3:
//            	way[step]='上';
//				break;
//		}
//		
//		if(a[tx][ty]==0&&vis[tx][ty]==0&&tx>-1&&tx<m&&ty>-1&&ty<n){
//			dfs(tx,ty,step+1);
//			break;
//		}
//		}
//	}

//int main(){
//    char a[100];
//    scanf("%s",a);
//    for(int i=0;a[i]!='\0';i++)a[i]+=1;
//    print("%s",a);
//	return 0;
//}


//快排
//#include<stdio.h>
//#include<stdlib.h> 
//#include<time.h>
//void swap(int *a,int *b){
//    int temp;
//    temp=*b;
//    *b=*a;
//    *a=temp;
//}
//int dium(int a[],int i,int j){
//    int m=(i+j)/2;
//    if(a[i]>a[j])swap(&a[i],&a[j]);
//    if(a[i]>a[m])swap(&a[i],&a[m]);
//    if(a[m]>a[j])swap(&a[m],&a[j]);
//    //此时a[i]<=a[m]<=a[j]
//    if(j-i>1)
//	swap(&a[m],&a[j-1]);
//    //将基准放在右边
//    return a[j-1];
//    //返回基准
//}
//void quick_sort(int a[],int l,int r){
//  int medium=dium(a,l,r);//选基准
//  if (l>=r-1) return;//递归截止
//    
//    int i=l,j=r-1;
//    for(;;){
//        while(a[++i]<medium){}
//        while(a[--j]>medium){}
//        if(i<=j)swap(&a[i],&a[j]);
//        else break;//比基准小的放左边，大的放右边
//    }
//    swap(&a[i],&a[r-1]);
//    	
//    
//    quick_sort(a,l,i-1);
//    quick_sort(a,i+1,r);
//}
//int main(){
//	int n;
//	scanf("%d",&n);
////    srand(time(NULL));
//    int *a;
//    a=(int*)malloc(n*sizeof(int));
// for(int i=0;i<n;i++){
//        //TODO
////   a[i]=rand()%100;
//scanf("%d",&a[i]);
////a[i]=100-i;
//    }    
//   
//    quick_sort(a,0,n-1);
//    for(int i=0;i<n;i++){
//        printf("%d ",a[i]);
//    }
//   
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
///*n为数据个数，data存储数据，
//temp存储每一个最大排序，
//count存储temp中每一行的排列元素个数
//mposition存储最大元素所在的位置
//min为一个临时变量储存要输进temp的元素
//*/int n,*data;
//int mposition,min;
//int temp[1000][1000],count[1000];
//int main(){
//	int i;
//	int cnt;
//	scanf("%d",&n);
//	data=(int*)malloc(n*sizeof(int));
//	for(i=0;i<n;i++){
//		scanf("%d",&data[i]);
//	}
//	for(i=0;i<n-1;i++){
//		min=data[i];
//		mposition=i;
//		cnt=0;
//		temp[i][cnt]=min;
//		for(int j=i+1;j<n;j++){
//			if(data[j]>min){
//				min=data[j];
//		temp[i][++cnt]=min;
//			}
//		}
//		count[i]=cnt+1;
//	}
//	//应该是下面这个for循环的问题你改一下，估计是判定条件
//	mposition=2;
////	for(int j=0;j<n-1;j++){
////		if(count[j]>count[mposition]){
////			//TODO
////			mposition=j;
////			printf("%d %d",j,count[j]);
////		}
////	}
//
//	for(int j=0;j<count[mposition];j++){
//		printf("%d ",temp[mposition][j]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int n, *data;
//int mposition, min;
//int temp[1000][1000], count[1000];
//
//int main() {
//    int i;
//    int cnt;
//    scanf("%d", &n);
//    data = (int *)malloc(n * sizeof(int));
//    
//    for (i = 0; i < n; i++) {
//        scanf("%d", &data[i]);
//    }
//    
//    for (i = 0; i < n - 1; i++) {
//        min = data[i];
//        mposition = i;
//        cnt = 0;
//        temp[i][cnt] = min;
//        
//        for (int j = i + 1; j < n; j++) {
//            if (data[j] > min) {
//                min = data[j];
//                temp[i][++cnt] = min;
//            }
//        }
//        count[i] = cnt + 1;
//    }
//
//    mposition = 0;
//    for (int j = 0; j < n - 1; j++) {
//        if (count[j] >= count[mposition]) {
//            mposition = j;
//        }
//    }
//
//    printf("%d %d\n", mposition, count[mposition]);
//    for (int j = 0; j < count[mposition]; j++) {
//        printf("%d ", temp[mposition][j]);
//    }
//    
//    return 0;
//}



//判断一个字符串是否是另一个字符串的排列
//int main(){
//	int flag=1;
//	int harsh[52]={0};
//	char str1[100],str2[100];
//	scanf("%s",str1);
//	scanf("%s",str2);
//	if(strlen(str1)!=strlen(str2))
//	{
//		printf("NO");
//		return 0;
//		}
//	for(int i=0;str1[i]!='\0';i++){
//	if(str1[i]>='a'&&str1[i]<='z'){
//		harsh[str1[i]-'a']++;
//		//TODO
//	}	
//		if(str1[i]>='A'&&str1[i]<'Z')harsh[str1[i]-'A'+26]++;
//	}
//	for(int i=0;str2[i]!='\0';i++){
//		if(str2[i]>='a'&&str2[i]<='z'){
//			harsh[str2[i]-'a']--;
//			//TODO
//		}	
//			if(str2[i]>='A'&&str2[i]<'Z')harsh[str2[i]-'A'+26]--;
//		}
//	for(int i=0;i<52;i++){
//		if(harsh[i]!=0)flag=0;
//	}
//	if(flag==1)printf("YES");
//	else printf("NO");
//	return 0;
//}
//int main(){
//int	flag=1,harsh[127]={0};
//char str[100];
//scanf("%s",str);
//for(int i = 0;str[i]!='\0';i++){
//	if(str[i]>'a'&&str[i]<'z')harsh[str[i]-32]++;
//	else harsh[(int)str[i]]++;
//}	
//for(int i = 0;i<127;i++)
//{
//	if(harsh[i]>1)flag=0;
//}
//if(flag==1)printf("YES");
//else printf("NO");
//return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LENGTH 100
//char* check_permutation(char* str1, char* str2);
//
//int main() {
//    char str1[MAX_LENGTH], str2[MAX_LENGTH];
//    
//    fgets(str1, MAX_LENGTH, stdin);
//    fgets(str2, MAX_LENGTH, stdin);
//    
//    // 去除换行符
//    str1[strcspn(str1, "\n")] = '\0';
//    str2[strcspn(str2, "\n")] = '\0';
//    
//    // 输出结果
//    printf("%s\n", check_permutation(str1, str2));
//    
//    return 0;
//}
//char* check_permutation(char* str1, char* str2) {
//    // 如果两个字符串长度不相等，则肯定不是排列
//    if (strlen(str1) != strlen(str2)) {
//        return "NO";
//    }
//    
//    int count_str1[128] = {0}; //str1 中字符出现的次数
//    int count_str2[128] = {0}; //  str2 中字符出现的次数
//    
//    // 统计 str1 中每个字符出现的次数
//    for (int i = 0; str1[i] != '\0'; i++) {
//        count_str1[str1[i]]++;
//    }
//    
//    // 统计 str2 中每个字符出现的次数
//    for (int i = 0; str2[i] != '\0'; i++) {
//        count_str2[str2[i]]++;
//    }
//    
//    // 检查两个字符串中字符出现次数是否一致
//    for (int i = 0; i < 128; i++) {
//        if (count_str1[i] != count_str2[i]) {
//            return "NO";
//        }
//    }
//    
//    return "YES";
//}


//哈希链表初体验
//typedef struct hash* hh;  // 定义一个指向结构体hash的指针类型别名hh
//struct hash{
//    int data;  // 数据域，用于存储整型数据
//    struct hash* next;  // 指向下一个节点的指针
//};
//
//int main(){
//    int n, tp;
//    scanf("%d", &n);  // 输入哈希表的大小n
//    hh * H = NULL;  // 定义一个指向hh类型的指针数组H
//    H = (hh*)malloc(n * sizeof(hh));  // 为H分配内存空间
//
//    for(int i = 0; i < n; i++){
//        H[i] = (hh)malloc(sizeof(struct hash));  // 为每个元素分配内存空间
//        H[i]->data = 0;  // 初始化数据域为0
//        H[i]->next = NULL;  // 初始化指向下一个节点的指针为NULL
//    }
//
//    for(int i = 0; i < n; i++){
//        scanf("%d", &tp);  // 输入要插入的数据
//        if(H[tp % n]->data == 0)
//            H[tp % n]->data = tp;  // 如果该位置为空，则直接插入数据
//        else{
//            hh bb;
//            bb = H[tp % n];
//            while(bb->next != NULL)
//                bb = bb->next;  // 找到最后一个节点
//            bb->next = malloc(sizeof(struct hash));  // 分配新节点的内存空间
//            bb = bb->next;
//            bb->data = tp;  // 将数据存入新节点
//            bb->next = NULL;  // 新节点的指针域置为NULL
//        }
//    }
//
//    while(true){
//        printf("搜索");
//        int want;
//        scanf("%d", &want);  // 输入要查找的数据
//        if(want < 0)
//            break;  // 如果输入的数据小于0，退出循环
//        else{
//            while(true){
//                if(H[want % n] == NULL){
//                    printf("No\n");
//                    break;  // 如果该位置为空，输出"No"并退出循环
//                }
//                else{
//                    if(H[want % n]->data == want){
//                        printf("Yes\n");
//                        break;  // 如果找到了匹配的数据，输出"Yes"并退出循环
//                    }
//                    else{
//                        H[want % n] = H[want % n]->next;  // 否则继续在链表中查找
//                    }
//                }
//            }
//        }
//    }
//
//    return 0;
//}







//int main(int argc, char *argv[])
//{
// int n;
// scanf("%d",&n);
// if(n%3==0&&n%5==0)printf("FizzBuzz");
// else if(n%3==0)printf("Fizz");
// else if(n%5==0)printf("Buzz");
// else printf("%d",n);
//  return 0;
//}




// BFS 拿下下下
//typedef struct zb * node;  // 定义一个指向结构体zb的指针类型别名node
//int map[100][100];  // 定义一个二维数组map，用于存储迷宫地图
//int m, n;  // 定义两个整型变量m和n，分别表示迷宫的行数和列数
//int flag = 0;  // 定义一个标志变量flag，用于判断是否找到终点
//int xstart, ystart, xend, yend;  // 定义四个整型变量，分别表示起点和终点的坐标
//int v[100][100] = {0};  // 定义一个二维数组v，用于记录每个位置是否被访问过
//int vx[4] = {0, 1, 0, -1};  // 定义一个一维数组vx，表示在x方向上的移动向量
//int vy[4] = {1, 0, -1, 0};  // 定义一个一维数组vy，表示在y方向上的移动向量
//struct zb{
//    int x;  // 定义一个整型变量x，表示当前节点的横坐标
//    int y;  // 定义一个整型变量y，表示当前节点的纵坐标
//    node next;  // 定义一个指向下一个节点的指针next
//};
//
//int main(){
//    node head = NULL, tail = NULL;  // 定义头节点head和尾节点tail
//    scanf("%d %d", &m, &n);  // 输入迷宫的行数和列数
//    for(int i = 0; i < m; i++){
//        for(int j = 0; j < n; j++){
//            scanf("%d", &map[i][j]);  // 输入迷宫地图
//        }
//    }
//    scanf("%d %d %d %d", &xstart, &ystart, &xend, &yend);  // 输入起点和终点的坐标
//    tail = (node)malloc(sizeof(struct zb));  // 为尾节点分配内存空间
//    tail->x = xstart;
//    tail->y = ystart;
//    tail->next = NULL;
//    head = (node)malloc(sizeof(struct zb));  // 为头节点分配内存空间
//    head->next = tail;
//    while(head->next){
//        if(head->next->x == xend && head->next->y == yend){
//            flag = 1;  // 如果当前节点是终点，将flag置为1并退出循环
//            break;
//        }
//        if(v[head->next->x][head->next->y] == 0 && map[head->next->x][head->next->y] == 0 && head->next->x < m && head->next->x > -1 && head->next->y < n && head->next->y > -1){
//            v[head->next->x][head->next->y] = 1;  // 如果当前节点未被访问过且不是障碍物，将其标记为已访问
//            for(int i = 0; i <= 3; i++){
//                int tx = head->next->x + vx[i];
//                int ty = head->next->y + vy[i];
//                node temp = NULL;
//                temp = (node)malloc(sizeof(struct zb));  // 创建一个新的节点temp
//                temp->next = NULL;
//                temp->x = tx;
//                temp->y = ty;
//                tail->next = temp;  // 将新节点添加到链表尾部
//                tail = tail->next;
//            }
//        }
//        head = head->next;  // 将头节点向后移动一位
//    }
//    if(flag == 1) print("YES");  // 如果找到了终点，输出"YES"
//    else print("NO");  // 否则输出"NO"
//    return 0;
//




//最长上升子序列长度
//int main(){
//	int a[100];
//	int dp[100]={0};
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
//	for(int i =1;i<=n;i++)
//	{
//		dp[i]=1;
//		for(int j=1;j<i;j++){
//			if(a[j]<a[i])
//			dp[i]=max(dp[i],dp[j]+1);
//		}
//		
//	}
//	for(int i= 1;dp[i]!=0;i++)cout<<dp[i];
//	
//	
//	return 0;
//	
//}


//金字塔
//int a[6][6];
//int q[6][6];
//int n;//层数
//int main()
//{
//	
//	scanf("%d",&n);
//	//输入数据
//	for(int i = 1 ;i<=n; i ++)
//	{
//	for(int j=1;j<=i;j++){
//		scanf("%d",&q[i][j]);
//	}
//	}
//	//初始化最下层
//	for(int i = 1;i<=n;i++)
//	{
//		a[n][i]=q[n][i];
//	}
//	
//	for(int i=n-1;i>0;i--)
//	{
//	for(int j=1;j<=i;j++)
//		a[i][j]=max(a[i+1][j],a[i+1][j+1])+q[i][j];
//	}
//	
//	print("%d",a[1][1]);
//	
//	return 0;
//}


//void dp(int a[],int b[]);
//int n;
//int *a,*b;
//int main(){
//	scanf("%d",&n);
//	a=(int*)malloc(n*sizeof(int));
//	b=(int*)malloc(n*sizeof(int));
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		b[i]=-1;
//	}
//	dp(a,b);
//	for(int i=0;i<n;i++)
//	print("b[%d]=%d\n",i,b[i]);
//
//	return 0;
//}
//void dp(int a[],int b[]){
//	b[0]=a[0];
//	b[1]=max(a[0],a[1]);
//	for(int i=2;i<7;i++){
//		b[i]=max(b[i-2]+a[i],b[i-1]);
//	}
//}

//递归解决子序列和
//int flag=0;
//void dp(int sum,int i);
//int n,m;
//int *a;
//int main(){
//	scanf("%d%d",&n,&m);
//	a=(int*)malloc(n*sizeof(int));
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	dp(m,0);
//    if(flag)print("YES");
//    else print("NO");
//    
//	return 0;
//}
//void dp(int sum,int i){
//int t;
//	if(a[i]==sum||sum==0){
//		flag=1;
//		return;
//	}
//	if(flag==1)return;
//while(i<n){
//t=i;
//	i++;
//	if(a[t]<sum){
//		dp(sum-a[t],i);
//		dp(sum,i);
//	}else{
//		dp(sum,i);
//	}
//}
//}


//动态规划解决子序列和
//int *a;//数组a
//int n,m;//数组元素个数，目标
//int dp[1000]={0};
//
//void Free(){
//   for(int i=0;i<n;i++)free(a+i);
//}
//
//int main(){
//	scanf("%d",&n);
//	a=(int*)malloc(n*sizeof(int));
//	dp[0]=1;
//	for(int i=0;i<n;i++)input("%d",&a[i]);
//	for(int i=0;i<n;i++)
//	for(int j=m;j>a[i];j--)dp[j]+=dp[j-a[i]];
//	if(dp[m])print("yes");
//	else print("NO");
//	Free();
//	return 0;
//}


//01背包初体验
//int *v,*w;//v表示价值，w表示重量;
//int n,m;//m为背包容量，n为物品数量
//int dp[1000][1000];//dp表示背包
//
//int main(){
//	scanf("%d%d",&m,&n);//依次输入背包大小，物品数量
//    v=(int*)malloc((n+1)*sizeof(int));
//    w=(int*)malloc((n+1)*sizeof(int));
//    for(int i=1;i<=n;i++)
//    {
//		scanf("%d%d",&w[i],&v[i]);
//	}
//    for(int i=0;i<=n;i++){
//		for(int j=0;j<=m;j++){
//			dp[i][j]=0;
//		}
//	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//		if(j>=w[i])	dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
//		else dp[i][j]=dp[i-1][j];
//		}
//	}
//	printf("%d",dp[n][m]);
//	return 0;
//}


//int main(){
//	int n;
//	cin>>n;
//	int*a;
//	int dp[1000]={0};
//	a=(int*)malloc(n*sizeof(int));
//	for(int i=0;i<n;i++)cin>>a[i];
//	for(int i=0;i<n;i++){
//		dp[i]=1;
//		for(int j=0;j<i;j++){
//			if(a[i]>a[j])dp[i]=max(dp[i],dp[j]+1);
//		}
//	}
//for(int i=0;i<n;i++)	cout<<dp[i]<<endl;
//	return 0;
//}



//冶炼金属 枚举
//int main()
//{
//	
////	char a[4][10]={"abc","def","hij","klm"};
////    char (*pa)[10]=a;
////    pa++;
////cout;
//
//int m;
//cin>>m;
//vector<int>a(m),b(m);
//for(int i=0;i<m;i++)cin>>a[i]>>b[i];
////枚举最小
//for(int i=1;i<1e4;i++){
//	bool flag=true;
//	for(int j=0;j<m;j++){
//		if((a[j]/i)!=b[j]){
//			flag=false;
//			break;
//		}
//	}
//	if(flag){cout<<i<<" ";
//	break;
//	}
//}
////枚举最大
//for(int i=1e4;i>0;i--){
//	bool flag=true;
//	for(int j=0;j<m;j++){
//		if(a[j]/i!=b[j]){
//			flag=false;
//			break;
//		}
//	}
//	if(flag){
//			cout<<i;
//			break;
//}
//
//}
//
//
//}


//冶炼金属暴力
//int find_max(const vector<long long>& a, const vector<long long>& b){
//	int mmax=a[0]/b[0];
//	int n=a.size();
//	for(int i=1;i<n;i++){
//		if(a[i]/b[i]<mmax)mmax=a[i]/b[i];		
//	}
//	return mmax;
//}
//int find_min(const vector<long long>& a, const vector<long long>& b){
//	int mmin=a[0]/(b[0]+1);
//	for(int i=0;i<a.size();i++){
//		if(a[i]/(b[i]+1)>mmin)mmin=a[i]/(b[i]+1);
//	}
//	return mmin+1;
//}
//int main(){
//	
//	    ios::sync_with_stdio(false);
//	    cin.tie(0), cout.tie(0);
//	int n;
//	cin>>n;
//	vector<long long>a(n),b(n);
//	for(int i=0;i<n;i++)cin>>a[i]>>b[i];
//	int mymin=find_min(a,b);
//	int mymax=find_max(a,b);
//	cout<<mymin<<" "<<mymax;
//	return 0;
//}


//int flag=false;
//void dfs(int(*a)[2],int i,int m){
//	if(i==(m-1))flag=true;
//	if(flag==true)return;
//    if(a[i][1]<a[i+1][0]&&a[i][0]!=a[i+1][0])dfs(a,i+1,m);
//    else if(a[i][0]==a[i+1][0]&&a[i][1]!=a[i+1][1])dfs(a,i+1,m);
//}







//飞机降落
// 第一次
//void sort(int (*a)[2],int m){
//	for(int i=0;i<m-1;i++){
//		for(int j=i+1;j<m;j++){
//			if(a[i][0]>a[j][0]){
//				int temp=a[i][0];
//				a[i][0]=a[j][0];
//				a[j][0]=temp;
//			}
//		}
//	}
//}
//int main(){
//	int n,m;
//	cin>>n; 
//	for(int i=0;i<n;i++){
//		cin>>m;
//		int a[m][3];
//		int b[m][2];
//		for(int j=0;j<m;j++){
//			cin>>a[j][0]>>a[j][1]>>a[j][2];
//			b[j][0]=a[j][0]+a[j][2];
//			b[j][1]=b[j][0]+a[j][1];
//		}
//		//检查
//	sort(b,m);
//	dfs(b,0,m);
//	if(flag){
//		
//	cout<<"YES"<<endl;
//	flag=false;
//	}else cout<<"NO"<<endl;
//	}
//	
//	return 0;
//}




//飞机降落    再体验
//#define N 20
//struct plane{
//	int t,d,l;
//}airplane[N];
//bool v[N]={false};
//int n,m;
//bool dfs(int n,int time);//n表示已经降落的飞机数量，time表示下一降落时间
//int main(){
//    cin>>m;
//	for(int j=0;j<m;j++){
//		cin>>n;
//	for(int i=0;i<n;i++)
//	{
//	
//		cin>>airplane[i].t>>airplane[i].d>>airplane[i].l;
//		v[i]=false;
//	}if(dfs(0,0))cout<<"YES"<<endl;
//	else cout<<"NO"<<endl;
//	}
//	return 0;
//}
//bool dfs(int u,int time){
//	if(u>=n)return true;
//	for(int i=0;i<n;i++){
//		if(!v[i]){
//			v[i]=true;
//			if(airplane[i].t+airplane[i].d<time){
//				v[i]=false;
//				return false;
//			}
//			int t=max(airplane[i].t,time)+airplane[i].l;
//			if(dfs(u+1,t)){
//				return true;
//			}
//			v[i]=false;
//		}
//	}
//	return false;
//}


//字串简写 暴力超时了 60%
//int main(){
//	int n,l;
//	int cnt=0;
//	string s;
//	char a,b;
//	cin>>n;
//	cin>>s>>a>>b;
//	for(int i=0;i<s.length();i++){
//		l=0;
//		if(s[i]==a){
//		for(int j=i;j<s.length();j++){
//			if(s[i]>'z'||s[i]<'a')l++;
//			if(s[j]==b&&j-i-l>=n-1)cnt++;
//		}
//	}
//	}
//	cout<<cnt;
//	
//	return 0;
//}


//第一次优化 好了一点 80%
//int main(){
//	int n,cnt=0;
//	string s;
//	char a,b;
//	cin>>n;
//	cin>>s>>a>>b;
//	//用三个数组存储a,b,连字符的位置
//	vector<int>ca(0);
//	vector<int>cb(0);
//	vector<int>cl(0);
//	for(int i=0;i<s.length();i++){
//		if(s[i]==a)ca.push_back(i);
//		if(s[i]>'z'||s[i]<'a')cl.push_back(i);
//		if(s[i]==b)cb.push_back(i);
//	}
////	l=max(max(ca.size(),cb.size()),cl.size());
//for(int i=0;i<ca.size();i++){
//	for(int j=0;j<cb.size();j++){
//	    if(cb[j]-ca[i]>=n-1){
//			int temp=cb[j]-ca[i];
//			for(int k=0;k<cl.size();k++){
//					if(cl[k]>ca[i]&&cl[k]<cb[j])temp--;	
//					}
//					if(temp>=n-1)cnt++;
//		}
//	}
//}
//cout<<cnt;
//	return 0;
//}


//wc 90%!!!
//int main(){
//	int n,cnt=0,flag=0;
//	string s;
//	char a,b;
//	cin>>n;
//	cin>>s>>a>>b;
//	//用三个数组存储a,b,连字符的位置
//	vector<int>ca(0);
//	vector<int>cb(0);
//	vector<int>cl(0);
//	for(int i=0;i<(int)s.length();i++){
//		if(s[i]==a)ca.push_back(i);
//		if(s[i]>'z'||s[i]<'a')cl.push_back(i);
//		if(s[i]==b)cb.push_back(i);
//	}
////	l=max(max(ca.size(),cb.size()),cl.size());
//for(int i=0;i<(int)ca.size();i++){
//	for(int j=flag;j<(int)cb.size();j++){
//	    if(cb[j]-ca[i]>=n-1){
//			int temp=cb[j]-ca[i];
//			for(int k=0;k<(int)cl.size();k++){
//					if(cl[k]>ca[i]&&cl[k]<cb[j])temp--;	
//					}
//					if(temp>=n-1){
//						cnt+=(cb.size()-j);
//						break;
//					}
//		}else flag=j;
//	}
//}
//cout<<cnt;
//	return 0;
//}

//int main(){
//	
//	return 0;
//}

/*矩阵鞍点
找出一个二维数组中的鞍点，即该位置上的元素在该行最大，在该列上最小。也可能没有鞍点。

**输入提示格式："\n输入行数："
**输入提示格式："\n输入列数："
**输入提示格式："第%d行？\n"
**输入数据格式："%d"
**输出格式："%5d"     注意：每一行后边有一个回车： printf("\n");
**输出格式： 
"\n第%d行，第%d列的%d是鞍点\n"
"\n矩阵中无鞍点!\n"

程序的运行示例1如下：
输入行数：3
输入列数：3
第0行？
1 2 3
第1行？
4 5 6
第2行？
7 8 9
    1    2    3
    4    5    6
    7    8    9

第0行，第2列的3是鞍点
程序的运行示例2如下：
输入行数：2
输入列数：2
第0行？
1 2
第1行？
4 1
    1    2
    4    1

矩阵中无鞍点！*/
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int c,r,rm=-1,cc,flag=1;
//	int **a;
//	printf("\n输入行数：");
//	scanf("%d",&r);
//	printf("\n输入列数：");
//	scanf("%d",&c);
//	a=(int**)malloc(r*sizeof(int*));
//	for(int i=0;i<r;i++)a[i]=(int*)malloc(c*sizeof(int));
//	for(int i=0;i<r;i++){
//		printf("第%d行？\n",i);
//		for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
//	}
//	for(int i=0;i<r;i++){
//		for(int j=0;j<c;j++){
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");
//	}
//	for(int i=0;i<r;i++){
//		flag=1;
//		for(int j=0;j<c;j++){
//			if(a[i][j]>rm){
//				rm=a[i][j];
//				cc=j;
//			}
//		}//找到一行中最大的数 并记录列坐标j;
//		for(int k=0;k<r;k++){
//			if(a[k][cc]<rm){
//				flag=0;
//			}
//		}//判断rm是否为一列中最小的数
//		if(flag==1){
//			printf("\n第%d行，第%d列的%d是鞍点\n",i,cc,rm);
//			return 0;
//			}
//	}
//	printf("\n矩阵中无鞍点!\n");
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{int a[100]={0};
//  int flag=1;
//  string s;
//  cin>>s;
//  
//  for(int i=0;i<s.size();i++){
//    if(s[i]==s[i+1])flag=0;
//    a[s[i]]++;
//  }
//  if(flag)cout<<"NO";
//  else{
//    for(int i=0;i<100;i++){
//      if(a[i]){
//        printf("%c",i);
//        if(a[i]!=1)printf("%d",a[i]);
//      }
//    }
//  }
//  return 0;
//}


//int main(){
//	int n=23,i;
//	printf("这里是23根火柴游戏！！\n");
//	printf("每个游戏者轮流移走1 根、2 根或3 根火柴；\n");
//	printf("谁取走最后一根火柴为失败者。\n");
//	while(true){
//		printf("请输入您移动的火柴数目：\n");
//		scanf("%d",&i);
//		n-=i;
//		printf("您移动的火柴数目为：%d\n",i);
//		printf("您移动后剩下的火柴数目为：%d\n",n);
//		if(!n){
//			printf("对不起！您输了！\n");
//			break;
//		}
//		if(n>3){
//			printf("计算机移动的火柴数目为：%d\n",n%3+1);
//			n=n-(n%3+1);
//			printf("计算机移动后剩下的火柴数目为：%d\n",n);
//		}
//		else if(n>1){
//			printf("计算机移动的火柴数目为：%d\n",n-1);
//			printf("计算机移动后剩下的火柴数目为：%d\n",1);
//			n=1;
//		}else if(n==1){
//			printf("计算机移动的火柴数目为：%d\n",1);
//			printf("计算机移动后剩下的火柴数目为：%d\n",0);
//			printf("恭喜您！您赢了！\n");
//			break;
//		}
//	}
//	
//	return 0;
//}


//日期统计
//int ff(int a[],int b[]){
//	int i=0;
//	for(int j=0;j<100;j++){
//		if(a[j]==b[i])i++;
//		if(i==4)return j;
//	}
//}
//int main(){
//int a[100],cnt=0;
//int b[4]={2,0,2,3};
//int c[13]={0};
//for(int i=0;i<13;i++)c[i]=i;
//int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//for(int i=0;i<100;i++)cin>>b[i];
//	int p=ff(a,b);
//	//找单位数字开头
//	for(int i=p;i<100;i++){
//	    if(a[i]!=0){
//	    	int temp1=0;
//			for(int j=i+1;j<100;j++){
//				
//			}
//		}
//		if(a[i]==1){
//			
//		}
//	}
//	//找双位置
//	return 0;
//}



//#include <stdio.h>
//
//using namespace std;
//int main(){
//	int a[100],cnt=0;
//	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//	for(int i=0;i<100;i++)cin>>a[i];
//	
//	for(int month=1;month<=12;month++){
//		for(int day=1;day<=m[month];day++){
//			int c[8]={2,0,2,3,month/10,month%10,day/10,day%10};
//			int temp=0;
//			for(int k=0;k<100;k++){
//				if(a[k]==c[temp])temp++;
//				if(temp==8){
//					cnt++;
//					break;
//				}
//			}
//		}
//	}
//	
//	cout<<cnt<<endl;
//	return 0;
//}
//#include<math.h>
//int main(){
//	double n=23333333;
//	double r=11625907.5798;
//	double a,b;//a是0出现的次数，b是1出现的次数;
//	for(int i=0;i<=n;i++){
//		a=1.0*i;
//		b=1.0*(n-i);
//		if(fabs(-a*a/n*log2(a/n)-b*b/n*log2(b/n)-r)<1e-4&&a<b){
//			cout<<i<<endl;
//			break;
//		}
//	}		
//	return 0;
//}



//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//    int n = 23333333;
//    for (int i = 1; i < n; ++i)
//    {
//        double a = i * 1.0 / n;  // 0出现的占比
//        double b = (n - i) * 1.0 / n;  // 1出现的占比
//        double res = 0;
//        res -= a * log2(a) * i + b * log2(b) * (n - i);
//        if (fabs(res - 11625907.5798) < 0.0001)
//        {
//            cout << i << endl;
//            break;
//        } 
//    }
//    return 0;
//}

//接龙
//int main(){
//	int n,flag=0;
//	int *p=NULL,*dp=NULL;
//	cin>>n;
//	dp=(int*)malloc(sizeof(int)*(n+1));
//	p=(int*)malloc(sizeof(int)*(n+1));
//	for(int i=1;i<=n;i++){
//		cin>>p[i];
//		dp[i]=0;
//	}
//	string s1,s2;
//	dp[1]=1;
//	s1=to_string(p[1]);
//	for(int i=2;i<=n;i++){
//		if(flag==1){
//			s1==to_string(p[i]);
//		}
//		if(p[i]<10)dp[i]=dp[i-1]+1;
//	   else{
//	   	s2=to_string(p[i]);
//	   	if(s2[0]==s1[s1.size()-1]){
//		   	dp[i]=dp[i-1]+1;
//		   	s1=s2;
//			   }
//	   	else dp[i]=dp[i-1];
//	   }
//	   if(s1!=s2)flag=1;
//	}
//	cout<<n-dp[n]<<endl;
//	return 0;
//}
//int main(){
//	int n,mx=0;
//	int *a,*b,*e,*dp;
//	cin>>n;
//	a=(int*)malloc(sizeof(int)*(n+1));
//	b=(int*)malloc(sizeof(int)*(n+1));
//	e=(int*)malloc(sizeof(int)*(n+1));
//	dp=(int*)malloc(sizeof(int)*(n+1));
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//		b[i]=to_string(a[i])[0];
//		e[i]=to_string(a[i])[to_string(a[i]).size()-1];
//		dp[i]=1;
//	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<i;j++){
//			if(b[i]==e[j])dp[i]=max(dp[i],dp[j]+1);
//		}
//		mx=max(mx,dp[i]);
//	}
//	cout<<n-mx;
//	return 0;
//}
//我想不出来的接龙序列
//int main(){
//	string s;
//	int n,a[10]={0};
//    cin>>n;
//    for(int i=0;i<n;i++){
//		cin>>s;
//		int be=s[0]-'0';
//		int en=s[s.size()-1]-'0';
//		a[en]=max(a[en],a[be]+1);
//	}
//	int mx=0;
//	for(int i=1;i<=9;i++){
//		mx=max(a[i],mx);
//	}
//	cout<<n-mx;
//	return 0;
//}




//整数删除 哈希失败
//#include <iostream>
//#include <vector>
//using namespace std;
//
//#define kk 500000
//typedef struct data * d;
//struct data{
//    int pos = -1;
//    d next = NULL;
//};
//
//int main(){
//    d ele[kk];
//    int n, k, q = 0;
//    cin >> n >> k;
//    vector<int> a(n);
//
//    // 输入加存储
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//        if (ele[a[i]]->pos == -1) {
//            ele[a[i]]->pos = i;
//        } else {
//            d temp1 = ele[a[i]];
//            while (temp1->next != NULL) {
//                temp1 = temp1->next;
//            }
//            d temp = (d)malloc(sizeof(struct data));
//            temp->pos = i;
//            temp->next = NULL;
//            temp1->next = temp;
//        }
//    }
//
//    while (k-- > 0) {
//        for (; q < n; q++) {
//            if (ele[q]->pos == -1) continue;
//            else break;
//        }
//        // 找到了要删的最小的p的位置
//        int minp = ele[q]->pos;
//        d temp1 = ele[q];
//        d temp2 = ele[q];
//        while (temp1->next != NULL) {
//            temp1 = temp1->next;
//            minp = min(temp1->pos, minp);
//        }
//        int cnt = 1;
//        while (temp2->next != NULL) {
//            if (temp2->pos == minp && cnt == 1) {
//                if (ele[q]->next != NULL) {
//                    ele[q] = ele[q]->next;
//                    free(temp2);
//                }
//            } else {
//                temp2 = temp2->next;
//            }
//            cnt++;
//        }
//        int cnt1 = 1;
//        for (;;) {
//            if (minp + cnt1 >= n || a[minp + cnt1] == -1) {
//                cnt1++;
//            } else {
//                a[minp + cnt1] += a[minp];
//            }
//        }
//        cnt1 = 1;
//        for (;;) {
//            if (minp - cnt1 < 0 || a[minp - cnt1] == -1) {
//                cnt1++;
//            } else {
//                a[minp - cnt1] += a[minp];
//            }
//        }
//        a[minp] = -1;
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (a[i] != -1) {
//            cout << a[i] << " ";
//        }
//    }
//    return 0;
//}
//试试暴力
//#include <iostream>
//using namespace std;
//int main()
//{
//  int n,k;
//  cin>>n>>k;
//  vector<int>a(n,-1);
//  for(int i=0;i<n;i++)cin>>a[i];
//  while(k-->0){
//    int pos,minn=1e9;
//    for(int i=0;i<n;i++){
//      if(a[i]==-1)continue;
//      if(a[i]<minn){
//        minn=a[i];
//        pos=i;
//      }
//    }
//    int cnt=1;
//    for(;;){
//      if(a[pos+cnt]==-1)cnt++;
//       else {
//	        	a[pos+cnt]+=minn;
//	        	break;
//	        }
//       if(pos+cnt>n-1)break;
//    }
//    cnt=1;
//      for(;;){
//      if(a[pos-cnt]==-1)cnt++;
//      else {
//      	a[pos-cnt]+=minn;
//      	break;
//      }
//      if(pos-cnt<0)break;
//    }
//    a[pos]=-1;
//  }
//  for(int i=0;i<n;i++){
//    if(a[i]!=-1)cout<<a[i]<<" ";
//  }
//  return 0;
//}


//int main(){
//	cout<<20230408*20230409/2;
//	return 0;
//}

//int main(){
//	int n,k;
//	cin>>n>>k;
//	vector<int> a(n);
//	for(int i=0;i<n;i++)cin>>a[i];
//	while(k--){
//		int mp=0;
//		for(int i=0;i<a.size();i++){
//			if(a[i]<a[mp])mp=i;
//		}
//		if(mp-1>-1)a[mp-1]+=a[mp];
//		if(mp+1<a.size())a[mp+1]+=a[mp];
//		a.erase(a.begin()+mp);
//	}
//	for(auto i:a)cout<<i<<" ";
//	return 0;
//}

//优先队列＋链表
//typedef pair<int,int> pii;
//int main(){
//	priority_queue<pii,vector<pii>,greater<pii>>q;
//	
//	return 0;
//}








//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int dx1[8]={0,1,1,1,0,-1,-1,-1},dy1[8]={1,1,0,-1,-1,-1,0,1};
//int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
//int flag=0;
//int m,n;
//int times;
//int pos[60][60]={0},mp[60][60]={0};
//string s;
//void dfs(int x,int yy);
//void dfs1(int x, int y);
//struct point{
//    int x;
//    int y;
//};
//queue<point>q;
//
//int main(){
//    int cnt=0;
//    cin>>times;
//    while(times--){
//        //读入
//        cin>>m>>n;
//        for(int i=1;i<=m;i++){
//            cin>>s;
//        for(int j=1;j<=n;j++){
//            mp[i][j] = s[ j - 1] - '0';
//        }
//        }
//        for(int i=1;i<=m;i++){
//            for(int j=1;j<=n;j++){
//                if(mp[i][j]==1&&pos[i][j]==0){
//                    cnt++;
////                    cout<<"i:"<<i<<"j"<<j<<endl;
//                    dfs(i,j);
//                    if(i>2&&i<m-1&&j>2&&j<m-1){
//                if(mp[i][j]==2)  {
//                point temp;
//                temp.x=i;
//                temp.y=j;
//                q.push(temp);
//                      dfs1(i,j);
//                }
//                    if(flag==0)cnt--;
//                    flag=0;
////                    cout<<"cnt="<<cnt<<endl;
//                }
//                }
//            }
//        }
//        
//    
//    for(int i=1;i<=m;i++)
//    {
//        for(int j=1;j<=n;j++)
//        {
//            mp[i][j]=0;
//            pos[i][j]=0;
//        }
//    }
//        
//            cout<<cnt<<endl;
//            cnt=0;
//    }
//
//    
//    
//    return 0;
//}
//void dfs(int x,int y){
//    pos[x][y]=1;
//    mp[x][y]+=1;
//    for(int i=0;i<4;i++){
//        int tx=x+dx[i];
//        int ty=y+dy[i];
////        if(tx==ex&&ty==ey&&pos[x][y]==1)flag=1;
////        if(flag)return;
//        if(pos[tx][ty]==0&&mp[tx][ty]==1){
//        dfs(tx,ty);
//        }
//    }
//
//    pos[x][y]=0;
//    return ;
//}
//void dfs1(int x, int y){
//    while(!q.empty()){
//        x=q.front().x;
//        y=q.front().y;
//    pos[x][y]=1;
//    for(int i=0;i<8;i++){
//        int tx=x+dx1[i];
//        int ty=y+dy1[i];
//        if((tx>=m||tx<=1||ty<=1||ty>=n)&&mp[tx][ty]==0)flag=1;
//        if(flag==1){
//            pos[x][y]=0;
//            return;
//        }
//        point temp;
//        temp.x=tx;
//        temp.y=ty;
//        if(mp[tx][ty]==0&&pos[tx][ty]==0){
//            q.push(temp);
//        }
//    }
//    
//    q.pop();
//    pos[x][y]=0;
//    }
//}




























//#include<iostream>
//using namespace std;
//int dx1[8]={0,1,1,1,0,-1,-1,-1},dy1[8]={1,1,0,-1,-1,-1,0,1};
//int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
//int flag=0;
//int m,n;
//int times;
//int pos[60][60]={0},mp[60][60]={0};
//string s;
//void dfs(int x,int yy);
//void dfs1(int x, int y);
//struct point{
//	int x;
//	int y;
//};
//queue<point>q;
//
//int main(){
//	int cnt=0;
//	cin>>times;
//	while(times--){
//		//读入
//		cin>>m>>n;
//		for(int i=1;i<=m;i++){
//			cin>>s;
//		for(int j=1;j<=n;j++){
//			mp[i][j] = s[ j - 1] - '0';
//		}
//		}
//		for(int i=1;i<=m;i++){
//			for(int j=1;j<=n;j++){
//				if(mp[i][j]==1&&pos[i][j]==0){
//					cnt++;
////					cout<<"i:"<<i<<"j"<<j<<endl;
//					dfs(i,j);//dfs搜岛
//					//bfs搜海
//		    	if(mp[i][j]==2)  {
//				point temp;
//				temp.x=i;
//				temp.y=j;
//				q.push(temp);
//                flag=0;
//                while(!q.empty()){
//					int x=q.front().x,y=q.front().y;
//					if((x<=1||x>=m||y<=1||y>=n)&&mp[x][y]==0){
//						flag=1;
//						break;
//					}
//				}
//				if(flag==0)cnt--;
//
//		    	}
//
////					if(flag==0)cnt--;
////					flag=0;
////					cout<<"cnt="<<cnt<<endl;
//				}
//			}
//		}
//		
//	
//	for(int i=1;i<=m;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			mp[i][j]=0;
//			pos[i][j]=0;
//		}
//	}
//		
//			cout<<cnt<<endl;
//			cnt=0;
//	}
//
//	
//	
//	return 0;
//}
//void dfs(int x,int y){
//	pos[x][y]=1;
//	mp[x][y]+=1;
//	for(int i=0;i<4;i++){
//		int tx=x+dx[i];
//		int ty=y+dy[i];
////		if(tx==ex&&ty==ey&&pos[x][y]==1)flag=1;
////		if(flag)return;
//		if(pos[tx][ty]==0&&mp[tx][ty]==1){
//		dfs(tx,ty);
//		}
//	}
//
//	pos[x][y]=0;
//	return ;
//}
//void dfs1(int x, int y){
//	while(!q.empty()){
//		x=q.front().x;
//		y=q.front().y;
//	pos[x][y]=1;
//	for(int i=0;i<8;i++){
//		int tx=x+dx1[i];
//		int ty=y+dy1[i];
//		if((tx>=m||tx<=1||ty<=1||ty>=n)&&mp[tx][ty]==0)flag=1;
//		if(flag==1){
//			pos[x][y]=0;
//			break;
//		}
//		point temp;
//		temp.x=tx;
//		temp.y=ty;
//		if(mp[tx][ty]==0&&pos[tx][ty]==0){
//			q.push(temp);
//		}
//	}
//	
//    q.pop();
//	pos[x][y]=0;
//	}
//}



//#include<iostream>
//
//using namespace std;
//int dx1[8]={0,1,1,1,0,-1,-1,-1},dy1[8]={1,1,0,-1,-1,-1,0,1};
//int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
//int flag=0;
//int time,m,n;
//int pos[60][60]={0},mp[60][60]={0};
//string s;
//void dfs(int x,int yy);
//void dfs1(int x, int y);
////struct point{
////	int x;
////	int y;
////};
////queue<point>q;
//
//int main(){
//	int cnt=0;
//	cin>>time;
//	while(time--){
//		//读入
//		cin>>m>>n;
//		for(int i=1;i<=m;i++){
//			cin>>s;
//		for(int j=1;j<=n;j++){
//			mp[i][j] = s[ j - 1] - '0';
//		}
//		}
//		for(int i=1;i<=m;i++){
//			for(int j=1;j<=n;j++){
//				if(mp[i][j]==1&&pos[i][j]==0){
//					cnt++;
//					cout<<"i:"<<i<<"j"<<j<<endl;
//					dfs(i,j);
//		    	if(mp[i][j]==2)    dfs1(i,j);
//					if(flag==0)cnt--;
//					flag=0;
////					cout<<"cnt="<<cnt<<endl;
//				}
//			}
//		}
//		
//	
//	for(int i=1;i<=m;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			mp[i][j]=0;
//			pos[i][j]=0;
//		}
//	}
//		
//			cout<<cnt<<endl;
//			cnt=0;
//	}
//
//	
//	
//	return 0;
//}
//void dfs(int x,int y){
//	pos[x][y]=1;
//	mp[x][y]+=1;
//	for(int i=0;i<4;i++){
//		int tx=x+dx[i];
//		int ty=y+dy[i];
////		if(tx==ex&&ty==ey&&pos[x][y]==1)flag=1;
////		if(flag)return;
//		if(pos[tx][ty]==0&&mp[tx][ty]==1){
//		dfs(tx,ty);
//		}
//	}
//
//	pos[x][y]=0;
//	return ;
//}
//void dfs1(int x, int y){
//	pos[x][y]=1;
//	for(int i=0;i<8;i++){
//		int tx=x+dx1[i];
//		int ty=y+dy1[i];
//		if((tx>=m||tx<=1||ty<=1||ty>=n)&&mp[tx][ty]==0)flag=1;
//		if(flag==1){
//			pos[x][y]=0;
//			return;
//		}
//		if(mp[tx][ty]==0&&pos[tx][ty]==0){
//			dfs1(tx,ty);
//		}
//	}
//	pos[x][y]=0;
//}




//岛屿个数
//int pos[60][60]={0},pos1[60][60]={0},mp[60][60]={0};
//int main(){
//	string s;
//	int time;
//	int m,n,cnt=0;
//	cin>>time;
//	while(time--){
//	//输入
//	cin>>m>>n;
//	for(int i=1;i<=m;i++){
//		cin>>s;
//		for(int j=1;j<=n;j++){
//		mp[i][j]=s[j-1];	
//	}
//	}
//	
//	//判断有没有环
//for(int i=1;i<=m;i++){
//		for(int j=1;j<=n;j++){
////			if(mp[i][j]==1){
////				cnt++;
////				dfs(i,j,i,j);
////			}
//cout<<mp[i][j];
////			dfs(i,j,i,j);
////			if(flag)cnt++;
////			flag=0;
//			}
//	}
//	cout<<" ";
//	}
//	cout<<cnt;
//	return 0;
//}
//
//
//void dfs(int x,int y,int ex,int ey){
////	if(x==ex&&y==ey&&pos[x][y]==1)flag=1;
//	pos[x][y]=1;
//	if(flag==1)return;
//	for(int i=0;i<4;i++){
//		int tx=x+dx[i];
//		int ty=y+dy[i];
//		if(pos[tx][ty]==0&&mp[tx][ty]==1){
//			mp[tx][ty]=2;
//			dfs(tx,ty,ex,ey);
//			pos[x][y]=0;
//			}
//	}
//	return ;
//}


//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int dx1[8]={0,1,1,1,0,-1,-1,-1},dy1[8]={1,1,0,-1,-1,-1,0,1};
//int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
//int flag=0;
//int m,n,cnt;
//int times;
//int pos[60][60]={0},mp[60][60]={0};
//string s;
//void dfs(int x,int y);
//void bfs(int x,int y);
//struct point{
//    int x;
//    int y;
//};
//queue<point>q;
//void bfs(int x,int y);
//int main(){
//	cin>>times;
//	while(times--)
//	{
//		cnt=0;
//		cin>>m>>n;
//		for(int i=0;i<m;i++){
//			cin>>s;
//			for(int j=0;j<n;j++)mp[i][j]=s[j]-'0';
//		}
//		for(int i=0;i<m;i++){
//			for(int j=0;j<n;j++){
//				if(i==0||j==0||i==m-1||j==n-1){
//					if(pos[i][j]==0&&mp[i][j]==0){
//						bfs(i,j);
//					}
//				}
//			}
//		}
//		cout<<cnt<<endl;
//		for(int i=0;i<m;i++){
//			for(int j=0;j<n;j++){
//				pos[i][j]=0;
//				mp[i][j]=0;
//			}
//		}
//		
//	}
//	
//	return 0;
//}
//void bfs(int x,int y){
//	point temp;
//	temp.x=x;
//	temp.y=y;
//	q.push(temp);
//	pos[x][y]=1;
//	while(!q.empty()){
//	for(int i=0;i<8;i++){
//		int tx=q.front().x+dx1[i];
//		int ty=q.front().y+dy1[i];
//		if(mp[tx][ty]==1&&pos[tx][ty]==0&&tx>=0&&tx<m&&ty>=0&&ty<n){
//			cnt++;
//		    dfs(tx,ty);
////			dfs(tx,ty);
////			for(int i=0;i<m;i++){
////				for(int j=0;j<n;j++){
////					cout<<mp[i][j]<<" ";
////				}
////				cout<<endl;
////			}
//		}
//		if(mp[tx][ty]==0&&pos[tx][ty]==0&&tx>=0&&tx<m&&ty>=0&&ty<n){
//			point temp1;
//			temp1.x=tx;
//			temp1.y=ty;
//			pos[tx][ty]=1;
//			q.push(temp1);
//		}
//	}	
//		q.pop();	
//	}
//	return;
//}
//
//void dfs(int x,int y){
//	pos[x][y]=1;
//	mp[x][y]=2;
//	for(int i=0;i<4;i++)
//	{
//		int tx=x+dx[i];
//		int ty=y+dy[i];
//		if(mp[tx][ty]==1&&pos[tx][ty]==0){
//			dfs(tx,ty);
//		}
//	}
//}

//#define t 1e6
//int main(){
//	int a[100][100]={0};
//	int n,k;
//	cin>>n>>k;
//	for(int i=0;i<10;i++){
//		for(int j=0;j<10;j++){
//			a[i][j]=t;
//		}
//	}
//	for(int i=1;i<n;i++){
//		int u,v,w;
//		cin>>u>>v>>w;
//		a[u][v]=a[v][u]=w;
////		cout<<endl<<a[u][v]<<endl;
//	}
//	for(int p=1;p<10;p++){
//		for(int i=1;i<10;i++){
//			for(int j=1;j<10;j++){
//				if(a[i][p]+a[p][j]<a[i][j])a[i][j]=a[i][p]+a[p][j];
//			}
//		}
//	}
////	for(int i=0;i<10;i++){
////		for(int j=0;j<10;j++)cout<<a[i][j]<<" ";
////		cout<<endl;
////	}
////cout<<a[6][5];
//	vector<int>v(k);
//	for(int i=0;i<k;i++)cin>>v[i];
//	vector<int>pp;
//	for(int i=0;i<v.size();i++){
//		int sum=0;
//		pp=v;
//		pp.erase(pp.begin()+i);
//		for(int j=0;j<pp.size()-1;j++){
//		   int u=pp[j],v=pp[j+1];
//		   sum+=a[u][v];	
//		}
//		cout<<sum<<" ";
//	}
//}








//#define t 1e6
//int main(){
//	int a[10][10];
//	int n,k,temp;
//	cin>>n>>k;
//	temp=n;
//	for(int i=1;i<10;i++){
//		for(int j=1;j<10;j++){
//			a[i][j]=t;
////			cout<<a[i][j]<<" ";
//		}
////		cout<<endl<<endl;
//	}
//	while(--temp){
//		int i,j,k;
//		cin>>i>>j>>k;
//		a[i][j]=a[j][i]=k;
//	}
//	vector<int>b(k);
//	for(int i=0;i<k;i++)cin>>b[i];
//	//遍历
//	for(int k=1;k<n;k++)
//	{
//		for(int i=1;i<n;i++){
//			for(int j=1;j<n;j++){
//				if(a[i][k]+a[k][j]<a[i][j]){
//					a[i][j]=a[i][k]+a[j][k];
////					printf("a[%d][%d]=%d  ",i,j,a[i][j]);
//				}
//			}
//		}
//	}
////	for(int i=1;i<n;i++){
////		for(int j=1;j<n;j++)cout<<a[i][j]<<" ";
////		cout<<endl;
////	}
//	vector<int>pp;
//	for(int i=0;i<b.size();i++){
//		int sum=0;
//		pp=b;
//		pp.erase(pp.begin()+i);
//		for(int j=0;j<pp.size()-1;j++){
//			int u=pp[i],v=pp[i+1];
//			sum+=a[u][v];
//		}
//		cout<<sum<<" ";
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
////#define endl "\n"
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(0),cout.tie(0);
//    int n,m,K,cnt=0,first=0,second=0;
//    cin>>n>>m>>K;
//    while(n--){
//		string s;
//		cin>>s;
//		for(auto i:s){
//			if(i=='1')cnt++;
//		}
//	}
//	for(int i=0;i<=K;i++){
//	    first=i;
//	    second=K-i;
//	    if(3*first+2*second==cnt){
//			cout<<first<<" "<<second<<endl;
//		}
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#define endl "\n"
//#include<bits/stdc++.h>
//int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0),cout.tie(0);
//	string s;
//	long long m,n;
//	cin>>m>>n;
//	cin>>s;
//  vector<int>tes((int)s.size(),0);
//  for(int i;i<s.size();i++)tes[i]=s[i]-'a';
//	for(int i=0;i<n;i++){
//		long long be,en,k;
//		cin>>be>>en>>k;
//		k%=26;
//		for(int i=be-1;i<en;i++){
//			tes[i]=(tes[i]+k)%26;
//		}
//		}
//	for(int i=0;i<s.size();i++){
//		printf("%c",tes[i]+'a');
//	}
//	cout<<s<<endl;
//	return 0;
//}












//#include <iostream>
//using namespace std;
//#define endl "\n"
//#include<bits/stdc++.h>
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(0),cout.tie(0);
//    string s;
//    int m,n;
//    cin>>m>>n;
//    cin>>s;
//    while(n--){
//        int be,en;
//        long long k;
//        cin>>be>>en>>k;
//        for(int i=be-1;i<en;i++){
//            s[i]+=(k%26);
//            if(s[i]>'z')s[i]-=26;
//        }
//    }
//    cout<<s<<endl;
//    return 0;
//}
//刚学会的前缀和差分解决字符迁移
//#define N 200005
//int main(){
//	int n,q;
//	cin>>n>>q;
//	string s;
//	cin>>s;
//	vector<int> diff(N,0),pre(n+1,0),prefix(n+1,0);
//	for(int i=1;i<=n;i++)pre[i]=s[i-1]-'a';
//	for(int i=1;i<=n;i++)diff[i]=pre[i]-pre[i-1];
//	while(q--){
//		long long l,r,k;
//		cin>>l>>r>>k;
//		diff[l]+=k;
//		diff[r+1]-=k;
//		diff[l]%=26;
//		diff[r+1]%=26;
//	}
//	for(int i=1;i<=n;i++)prefix[i]=prefix[i-1]+diff[i];
//	for(int i=1;i<=n;i++)s[i-1]=prefix[i]%26+'a';
//	cout<<s;
//	return 0;
//}

//字典树
//int main(){
//	int n,sum=0;
//	cin>>n;
//	vector<int>a(0);
//	int b;
//	for(int i=0;i<n;i++){
//		cin>>b;
//		int j=1;
//		while(b){
//			if(a.size()<j)a.push_back(b%2);
//			else a[i-1]+=b%2;
//			b/=2;
//			j++;
//		}
//	}
//    for(int i=0;i<a.size();i++){
//		sum+=(a[i]-1)*a[i]/2;
//	}
//	cout<<sum;
//	return 0;
//}

//int main(){
//	int a[3]={1,3,2};
//	int sum=0;
//	for(int i=0;i<2;i++){
//		for(int j=i+1;j<3;j++){
//			sum+=a[i]&a[j];
//		}
//	}
//	cout<<sum;
//	return 0;
//}

//#include<bits/stdc++.h>
//int main(){
//	 int n=365,sum=0;
//	 vector<int>a;
//	 int year,mon,day,hor,minu,sor;
//	 int my_mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//	 int prefix[13]={0};
//	 for(int i=1;i<13;i++)prefix[i]=prefix[i-1]+my_mon[i];
//	 for(int i=0;i<520;i++){
//	 	scanf("%d-%d-%d %d:%d:%d",&year,&mon,&day,&hor,&minu,&sor);
//	 	a.push_back(prefix[mon-1]*86400+day*86400+hor*3600+minu*60+sor);
//	 }
//	 sort(a.begin(),a.end());
//     for(int i=0;i<520;i+=2){
//	 	sum+=a[i+1]-a[i];
//	 }
//	 cout<<sum;
//}

//三国游戏
//int main(){
//	int n,m=0;
//	cin>>n;
//	vector<int>xf;
//	vector<int>yf;
//	vector<int>zf;
//	int x=0,y=0,z=0;
//	int t1=0,t2=0,t3=0,t11=0,t22=0,t33=0;
//	for(int i=0;i<n;i++){
//		cin>>t1>>t2>>t3;
//		if(t1-t2-t3>0){
//			x+=(t1-t2-t3);
//			t11++;
//		}
//		else xf.push_back(t1-t2-t3);
//		if(t2-t1-t3>0)
//		{
//			y+=(t2-t1-t3);
//			t22++;
//		}
//		else yf.push_back(t2-t1-t3);
//	    if(t3-t1-t2>0)
//		{
//			z+=(t3-t1-t2);
//			t33++;
//		}
//	    else zf.push_back(t3-t1-t2);
//	}
//	cout<<z;
//	if(x||y||z){
//	if(x){
//		sort(xf.begin(),xf.end());
//		for(int i=xf.size()-1;i>=0;i--){
//			if(x+xf[i]>0){
//				x+=xf[i];
//				t11++;
//			}
//			else break;
//		}
//		m=max(t11,m);
//	}
//    if(y){
//		sort(yf.begin(),yf.end());
//		for(int i=yf.size()-1;i>=0;i--){
//			if(y+yf[i]>0){
//				y+=yf[i];
//				t22++;
//			}
//			else break;
//		}
//		m=max(t2,m);
//	}	
//    if(z){
//		sort(zf.begin(),zf.end());
//		for(int i=zf.size()-1;i>=0;i--){
//			if(z+zf[i]>0){
//				z+=zf[i];
//				t33++;
//			}
//			else break;
//		}
//		m=max(t33,m);
//	}	
//	cout<<m<<endl;
//	}else cout<<-1;
//	return 0;
//}


//int ans(vector<int>&x,vector<int>&y,vector<int>&z);

//int main(){
//	int m,n,xw,yw,zw;
//	cin>>n;
//	vector<int>x(n),y(n),z(n);
//    for(int i=0;i<n;i++)cin>>x[i];
//    for(int i=0;i<n;i++)cin>>y[i];
//    for(int i=0;i<n;i++)cin>>z[i];
//	xw=ans(x,y,z);
//	yw=ans(y,x,z);
//	zw=ans(z,x,y);
//	m=max(max(xw,yw),zw);
//	if(!m)cout<<-1;
//	else cout<<m;
//	return 0;
//}
//int ans(vector<int>&x,vector<int>&y,vector<int>&z){
//	vector<int>t;
//	int sum=0;
//	int cnt=0;
//	for(int i=0;i<x.size();i++){
//		if(x[i]>y[i]+z[i]){
//			cnt++;
//			sum+=x[i]-y[i]-z[i];
//		}else t.push_back(x[i]-y[i]-z[i]);
//	}
//	if(!sum)return 0;
//	sort(t.begin(),t.end());
//	for(int i=t.size()-1;i>=0;i--){
//		if(sum+t[i]>0){
//			sum+=t[i];
//			cnt++;
//		}else break;
//	}
//	return cnt;
//}
/*
1
2 3
4 5   6 7
1
2 3 4
5 6 7    8 9 10    11 12 13
1
2 3 4 5
6 7 8 9   10 11 12 13  
*/
//#include <iostream>
//using namespace std;
//
//void solve() {
//    int n, m, k;
//    cin >> n >> m >> k;
//    long long res = 1, L = k, R = k;
//    while(1) {
//        L = (L - 1) * m + 2;
//        R = R * m + 1;
//        if (L > n) break;
//        if (R <= n) {
//            res += R - L + 1;
//        } else {
//            res += n - L + 1;
//            break;
//        }
//    }
//    cout << res << endl;
//}
//
//int main() {
//    int T;
//    cin >> T;
//    while (T--) solve();
//    return 0;
//}
//#include <iostream>
//using namespace std;
//#include<bits/stdc++.h>
//int main(){
//  ios::sync_with_stdio(false);
//  cin.tie(0),cout.tie(0);
//	int T;
//  vector<long long int>sequ(0);
//	long long int n,m,k;//完全m叉树
//	cin>>T;
//	while(T--){
//		int cnt;
//		cin>>n>>m>>k;
//		if(n==1)cnt=1;
//		else{
//		cnt=1;
//		vector<int>a(n+1);
//		for(int i=0;i<=n;i++)a[i]=i;
//		  int deep=(int)(log(n)/log(m));
//		  int temp=(int)(log(k)/log(m));
//		  int sum=1;
//		  for(int i=1;i<deep-temp;i++){
//		  	sum*=m;
//		  	cnt+=sum;
//		  }
//		  int l,r,t1=k,t2=k;
//		  for(int i=0;i<deep-temp;i++){
//		  	t1=t1*m+1;
//		  	r=t1;
//		  }
//		  for(int i=0;i<deep-temp;i++){
//		  	t2=t2*m+2-m;
//		  	l=t2;
//		  }
//		  if(l==n)cnt++;
//	      if(r<=n)cnt=cnt+r-l+1;
//	      if(r>n&&l<n)cnt=cnt+n-l+1;
//		}
//     sequ.push_back(cnt);		
//	}
//  for(auto i:sequ)cout<<i<<endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//#include<bits/stdc++.h>
//int main(){
//  ios::sync_with_stdio(false);
//  cin.tie(0),cout.tie(0);
//	int T;
//	long long int n,m,k;//完全m叉树
//	cin>>T;
//	while(T--){
//		cin>>n>>m>>k;
//		long long int cnt=1;
//		vector<long long int>a(n+1);
//		for(int i=0;i<=n;i++)a[i]=i;
//		  int deep=(int)(log(n)/log(m));
//		  int temp=(int)(log(k)/log(m));
//		  long long int sum=1;
//		  for(int i=1;i<deep-temp;i++){
//		  	sum*=m;
//		  	cnt+=sum;
//		  }
//		  long long int l,r,t1=k,t2=k;
//		  for(int i=0;i<deep-temp;i++){
//		  	t1=t1*m+1;
//		  	r=t1;
//		  }
//		  for(int i=0;i<deep-temp;i++){
//		  	t2=t2*m+2-m;
//		  	l=t2;
//		  }
//		  if(l==n)cnt++;
//	      if(r<=n)cnt=cnt+r-l+1;
//	      if(r>n&&l<n)cnt=cnt+n-l+1;
//		cout<<cnt<<endl;
//	}
//	return 0;
//}

//#include<time.h>
//int main(){
//	system("shutdown -s -t 5");
//	
//	return 0;
//}

/**/
//int n;
//int **a;

//int main(){
//	int n;
//	int **a;
//	cin>>n;
////	time_t t=time(NULL);
////	cout<<t<<endl;
////	clock_t t1=clock();
//	a=(int**)malloc(sizeof(int*)*n);
//	for(int i=0;i<n;i++)*(a+i)=(int*)malloc(sizeof(int)*n);
//	for(int i=0;i<n;i++){
//		a[i][0]=a[0][i]=1;
//	}
//	for(int i=1;i<n;i++){
//		for(int j=1;j<n;j++){
//			a[i][j]=a[i-1][j]+a[i][j-1];
//		}
//	}
////	Sleep(500);
////	clock_t t2=clock();
////	int i=t2-t1;
////	cout<<i<<endl;
////	for(int i=0;i<n;i++){
////		for(int j=0;j<n;j++)cout<<a[i][j]<<"  ";
////		cout<<endl;
////	}
//	cout<<a[n-1][n-1];
//	return 0;
//}

//int main(){
//	string s;
//	getline(cin,s);
//    for(int i=0;i<s.size();i++)if(s[i]<='z'&&s[i]>='a')s[i]-=32;
//	cout<<s;
//	return 0;
//}
//int main(){
//	int n,sum=0,m=0,f=0;
//	for(int i=1;i<=12;i++){
//		cin>>n;
//		sum+=300;
//		if(sum<n){
//		cout<<"-"<<i;
//		return 0;
//		}
//		else{
//			sum-=n;
//			m=m+(sum/100)*100;
//			sum%=100;
//		}
//	}
//
//	cout<<sum+m*1.2;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//bool chek(vector<int>&a){
//	for(auto i:a)if(i!=0)return false;
//	return true;
//}
//vector<int> chuli(string a){
//	vector<int>b(a.size());
//	for(int i=0;i<a.size();i++)b[i]=a[i]-'0';
//	vector<int>vec;
//	for(;;){
//		vector<int>c(a.size(),0);
//		if(chek(b))return vec;
//		vec.push_back(b[a.size()-1]%2);
//		for(int i=0;i<a.size();i++){
//			if((b[i]+c[i])<2&&i<a.size()-1){
//				b[i+1]=(b[i]+c[i])*10+b[i+1];
//				b[i]=0;
//				c[i+1]=b[i+1]%2;
//				b[i+1]/=2;
//			}else{
//				c[i+1]=(b[i]+c[i])%2;
//				b[i]=(b[i]+c[i])/2;
//			}
//		}
//	}
//}
//vector<int> com(vector<int>&a,vector<int>&b){
//	vector<int> t;
//	if(a.size()>=b.size()){
//		for(int i=0;i<b.size();i++){
//			if(a[i]==b[i])t.push_back(0);
//			else t.push_back(1);
//		}
//		for(int i=b.size();i<a.size();i++){
//			t.push_back(a[i]);
//		}
//	}else{
//		
//		for(int i=0;i<a.size();i++){
//			if(a[i]==b[i])t.push_back(0);
//			else t.push_back(1);
//		}
//		for(int i=a.size();i<b.size();i++){
//			t.push_back(b[i]);
//		}
//		
//	}
//	return t;
//}
//long long cifang(int a,int b){
//	long long sum=a;
//	while(--b)sum*=2;
//	return sum;
//}
//int main(){
//	int n;
//	cin>>n;
//	string a;
//	cin>>a;
//	vector<int> b=chuli(a);
////	for(int i:b)cout<<i<<"  ";
//	while(--n){
//		cin>>a;
//		vector<int> tem=chuli(a);
//		b=com(tem,b);
////		for(int i:tem)cout<<i<<"  ";
//	}
//	long long q=0;
//	for(auto i:b)q=q*2+b[i];
//	cout<<q;
////	vector<int> q;
////	for(int i=0;i<b.size();i++){
////		long long p;
////		p=b[i]*cifang(2,i);
////		string v=to_string(p);
////	     while(q.size()<v.size()+1)q.push_back(0);
////	     for(int j=0;j<v.size();j++){
////		 	q[j]+=(int)v[j]-'0';
////		 	if(q[j]>10){
////			 	q[j+1]++;
////				 q[j]-=10;}
////		 }
////	}
////	if(q[q.size()-1]!=0)cout<<q[q.size()-1];
////	for(int i=q.size()-2;i>=0;i--)cout<<q[i];
//	return 0;
//}




//int main(){
//	
////	system("shutdown -s -t 1800");
////	system("shutdown -a");
//	return 0;
//}


//int main(){
//int n;
//cin >> n;
//long long x = 0;
//for (int i = 1; i <= n; ++i) {
//	long long a;
//	cin >> a;
//	x = x ^ a;
//}
//cout<<x;
//}

int main(){
	if(1<>2)
	system("shutdown -s -t 14400");
}
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//    int weight, n;
//    int dp[1000][1000] = {0};
//    int v[1001] = { 0 };
//    int w[1001] = { 0 };
//    cin >> weight >> n;
//    for (int i = 1;i <= n;i++)cin >> w[i] >> v[i];
//    for (int i = 1;i <= n;i++) {
//        for (int j = 1;j <=weight;j++) {
//            if (j >= w[i])dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]]+v[i]);
//            else dp[i][j]=dp[i-1][j];
//        }
//    }
//    cout << dp[n][weight];
//    return 0;
//}
//int main (){
//	system("shutdown -s -t 1");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include<iostream>
////定义结点结构体
//typedef struct student
//{
//    //数据域
//    int num;		//学号
//    int score;      //分数
//    char name[20];  //姓名
//    //指针域
//    struct student* next;
//}STU;
//
//void link_creat_head(STU* p_head, STU* p_new)
//{
//    STU* p_mov = p_head;
//    if (p_head == NULL)	//当第一次加入链表为空时，head执行p_new
//    {
//        p_head = p_new;
//        p_new->next = NULL;
//    }
//    else //第二次及以后加入链表
//    {
//        while (p_mov->next != NULL)
//        {
//            p_mov = p_mov->next;	//找到原有链表的最后一个节点
//        }
//
//        p_mov->next = p_new;	//将新申请的节点加入链表
//        p_new->next = NULL;
//    }
//}
//
//int main()
//{
//    STU* head = NULL, * p_new = NULL;
//    int num, i;
//    printf("请输入链表初始个数:\n");
//    scanf("%d", &num);
//    for (i = 0; i < num;i++)
//    {
//        p_new = (STU*)malloc(sizeof(STU));//申请一个新节点
//        printf("请输入学号、分数、名字:\n"); //给新节点赋值
//        scanf("%d %d %s", &p_new->num, &p_new->score, p_new->name);
//
//        link_creat_head(head, p_new);	//将新节点加入链表
//    }
//    std::cout << head->name;
//    return 0;
//}

//void print(int a,...);
//int main(){
//	print(1,2,3);
//	return 0;
//}
//
//void print(int a,...){
//	int *ptr=&a;
//	printf("%d %d %d",*ptr,*(ptr+1),*(ptr+2));
//}

 
/*反转链表*/
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//typedef struct link*node;
//struct link{
//	int data;
//	node next;
//};
//node creat(){
//	cout<<"how much";
//	int n;
//	cin>>n;
//	node zanshi=NULL;
//	node head=NULL;
//	head=(node)malloc(sizeof(struct link));
//	zanshi=head;
//	for(int i=0;i<n;i++){
//		node temp=NULL;
//		temp=(node)malloc(sizeof(struct link));
//		temp->next=NULL;
//		cin>>temp->data;
//		zanshi->next=temp;
//		zanshi=zanshi->next;
//	}
//	return head;
//}
//node fz(node head){
//	node p1,p2,p3,p4;
//	p1=p2=p3=head;
//	while(p2->next!=NULL){
//	p3=p2;
//	while(p3->next!=NULL){
//		p4=p3;
//		p3=p3->next;
//	}	
//	p4->next=NULL;
//	p3->next=p2->next;
//	p2->next=p3;
//	p2=p2->next;
//	}
//	return p1;
//}
//int main(){
//	node head=NULL;
//    head=creat();	
//    head=fz(head);
//	while(head->next!=NULL){
//		cout<<head->next->data<<endl;
//		head=head->next;
//	}
//	
//	return 0;
//}
