#pragma once
namespace ns
{
	class FloatList
	{
	   private:
		   struct ListNode
		   {
			   float value;
			   struct ListNode *next;
		   };
		   ListNode *head;
       
       struct node
       {
       int ti;
       node *next;
       }*head;

	   public:
		   FloatList();
		   ~FloatList();
		   void appendNode(float num);
		   void insertNode(float num);
		   void deleteNode(float num);
		   void displayList();
    };
}
