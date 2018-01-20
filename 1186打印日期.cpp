/*题目描述
给出年分m和一年中的第n天，算出第n天是几月几号。
输入描述:
输入包括两个整数y(1<=y<=3000)，n(1<=n<=366)。
输出描述:
可能有多组测试数据，对于每组数据，
按 yyyy-mm-dd的格式将输入中对应的日期打印出来。

输入
2000 3
2000 31
2000 40
2000 60
2000 61
2001 60
输出
2000-01-03
2000-01-31
2000-02-09
2000-02-29
2000-03-01
2001-03-01
*/

#include <stdio.h>
#define ISYEAP(x) x%100!=0 && x%4==0 || x%400==0?1:0
int dayOfMonth[13][2]= {
	0,0,
	31,31,
	28,29,
	31,31,
	30,30,
	31,31,
	30,30,
	31,31,
	31,31,
	30,30,
	31,31,
	30,30,
	31,31
};

int main() {
	int y,n;
	
	while(scanf("%d%d",&y,&n)!=EOF){
		int Day=1;
	    int Month=1;
	    for(int i=0; i<n-1; i++){
			Day++;
		    if(Day>dayOfMonth[Month][ISYEAP(y)]){
			Day=1;
			Month++;
		    }
		}
		printf("%d-%02d-%02d\n",y,Month,Day);
	}
	return 0;
}
