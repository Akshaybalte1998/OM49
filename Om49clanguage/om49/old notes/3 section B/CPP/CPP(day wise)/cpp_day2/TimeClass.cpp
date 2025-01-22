#include <stdio.h>

class Time
{
	int hr;
	int min;
	int sec;
public:
//	Time()//Constructor
//	{
//		printf("\n------------Time()------------");
//		this->hr=0;
//		this->min=0;
//		this->sec=0;
//	}
	Time(int h=0,int m=0,int s=0)//Constructor
	{
		printf("\n------------Time(int,int,int)------------");
		this->hr=h;
		this->min=m;
		this->sec=s;
	}
	void setMin(int min)//Mutators/setter
	{
		if(min<60 && min>=0)
			this->min=min;
		else
			printf("\n Invalid min  :(");
	}
	int getHour()//inspector/getter
	{
		return this->hr;
	}
	void initTime()
	{
		this->hr=0;
		this->min=0;
		this->sec=0;
	}
	void printTime()//facilitator
	{
		printf("\n Time=%d:%d:%d",hr,min,sec);
	}
	void acceptTime()//facilitator
	{
		printf("\n Enter Time");
		scanf("%d%d%d",&hr,&min,&sec);
	}
	void incrTime()//facilitator
	{
		 sec++;
		 if(sec==60)
		 {
			 min++;
			 sec=0;
			 if(min==60)
			 {
				 hr++;
				 min=0;
				 if(hr==24)
				 {
					 hr=0;
				 }
			 }
		 }
	}
	~Time()//Destructor
	{
		printf("\n------------~Time()------------");
	}
};//end time class
int main()
{
	Time t1;
	//t1.hr=44; error
	//t1.initTime();
	//t1.acceptTime();
	t1.printTime();

	Time t2(8,30,00);
	t2.setMin(75);
	t2.printTime();

	int hr=t2.getHour();
	printf("\nhour=%d",hr);
}


















