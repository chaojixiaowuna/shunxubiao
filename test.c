#include"SeqList.h"

void TestSeqList1()
{
//	int f;
   SL s1;
   SeqListInit(&s1);

   SeqListPushBack(&s1,1);
   SeqListPushBack(&s1,2);
   SeqListPushBack(&s1,3);
   SeqListPushBack(&s1,4);
   SeqListPushBack(&s1,5);
    SeqListPrint(&s1);

   SeqListPopBack(&s1);
   SeqListPrint(&s1);

   SeqListPushFront(&s1,10);
   SeqListPushFront(&s1,20);
   SeqListPushFront(&s1,30);
   SeqListPushFront(&s1,40);
    SeqListPrint(&s1);

   SeqListpopFront(&s1);
   SeqListpopFront(&s1);
    SeqListPrint(&s1);
	//printf("请输入要查找的数字：");
	//scanf("%d",&f);
	//SeqListFind(&s1,f);

	SeqListInsert(&s1,4,7);
	SeqListInsert(&s1,5,8);
	SeqListInsert(&s1,6,9);
	 SeqListPrint(&s1);

	SeqListErase(&s1,5);
	 SeqListPrint(&s1);

   SeqListDestroy(&s1);
}
int main()
{
	TestSeqList1();
	return 0;
}
