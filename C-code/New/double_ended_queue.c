
/* two types 
  *1.input restircted queue- one option for input but two for output
  2.output restircted queue - one for output but two for input
*/

#include <stdio.h>
#define max 5
int front=-1,rear=-1,arr[max],item;
void dequef()
{
    if(front==-1)
    {
        printf("underflow at front\n");
        
    }else{
        item=arr[front];
        front=(front+1)%max;
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
        printf("deque = %d\n",item);
    }
}
void dequer()
{
    if(rear==-1)
    {
        printf("underflow at rear\n");
    }else{
        
        item=arr[rear];
        rear=(rear-1)%max;
        
        if(rear<front)
        {
            rear=-1;
            front=-1;
        }
        printf("dequer = %d\n",item);
    }
}

void enque()
{
    if((rear+1)%max==front)
    {
        printf("overflow\n");
    }else{
        printf("enter ele\n");
        scanf("%d",&item);
        rear=(rear+1)%max;
        arr[rear]=item;
        if(front==-1)   front=0;
    }
}

int main()
{
    int choice;
    do{
        printf("1 for enquer 2 for dequer 3 for dequef 4 for exit\t");
        scanf("%d",&choice);
        
        if(choice==1) enque();
        if(choice==2) dequer();
        if(choice==3) dequef();
        
    }while(choice!=4);

    return 0;
}
