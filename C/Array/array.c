#include <stdio.h>

struct Array
{
 int A[10];
 int size;
 int length;
};

void Swap(struct Array *a,int x, int y)
{
    int temp;
    int *p1 = a->A+x;
    int *p2 = a->A+y;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void Display(struct Array a)
{
    int i =0;
    for(;i<a.length;i++)
    {
        printf("%d ", a.A[i]);
    }
    printf("\n");
    printf("length = %d\n", a.length);
}

void Append(struct Array *a, int x)
{
    if(a->size > a->length)
    {
        a->A[a->length] = x;
        a->length++;
    }
}

int Delete(struct Array *a, int index)
{
    int x = a->A[index];
    for(;index < a->length-1;index++)
    {
        a->A[index] = a->A[index+1];
    }
    a->length--;
    return x;
}

int Search(struct Array *a, int x)
{
    int i = 0;
    for(;i<a->length;i++)
    {
        printf("Looking..\n");
        if(a->A[i] == x)
        {
            Swap(a, 0,i);
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct Array *a, int key)
{
    int low =0, high = a->length-1;
    int mid;
    while(low <= high)
    {
        printf("Looking..\n");
        mid = (low + high) /2 ;
        if(a->A[mid] == key)
        {
            return mid;
        }
        else if(a->A[mid] > key)
            high = mid - 1;
        else
        {
            low = mid + 1;
        }
    }
}

int RBinarySearch(struct Array *a, int l, int h, int m, int key)
{
    if(a->A[m] == key)
        return m;
    else if(a->A[m] > key)
        return RBinarySearch(a, l, m-1, (l+h)/2, key);
    else
    {
        return RBinarySearch(a, m+1, h, (l+h)/2, key);
    }
    
}

int Get(struct Array *a, int index)
{
    if(index >0 && a->length > index)
    {
        return a->A[index];
    }
}

int Set(struct Array *a, int index, int x)
{
    if(index >= 0 && a->length > index)
    {
        a->A[index] = x;
    }
}

int Max(struct Array *a)
{
    int i = 0, max = a->A[0];
    for(;i < a->length;i++)
    {
        if(a->A[i] > max)
            max = a->A[i];
    }
    return max;
}

int Min(struct Array *a)
{
    int i = 0, min = a->A[0];
    for(;i < a->length;i++)
    {
        if(a->A[i] < min)
            min = a->A[i];
    }
    return min;
}

int main()
{
    struct Array a={{1,2,3,4,5}, 10, 5};

    Display(a);
    Append(&a, 10);
    Display(a);
    printf("Delete = %d\n", Delete(&a, 3));
    Display(a);
    Swap(&a,1,2);
    Display(a);
    //printf("%d\n", Search(&a,10));
    //printf("%d\n", Search(&a,10));
    printf("Binary Search 10@%d\n", BinarySearch(&a,10));
    Display(a);
    printf("Binary Search 10@%d\n", RBinarySearch(&a,0, a.length, (0+a.length)/2,10));
    printf("%d\n", Get(&a, 3));
    Set(&a, 3, 33);
    Display(a);
    printf("Max = %d\n", Max(&a));
    printf("Min = %d\n", Min(&a));
    return 0;
}

