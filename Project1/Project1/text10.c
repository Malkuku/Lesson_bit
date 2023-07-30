//#include <stdio.h>
////创建一个学生的类型
//struct  Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct Stu s = { " 逸",20,85.5 };//初始化
//	printf("1: %s %d %lf\n", s.name, s.age, s.score);//常规方法
//
//	struct Stu* ps = &s;
//	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);//指针1
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//指针2
//
//	return 0;
//}