#include<stdio.h>
// DICKY IBROHIM
/* Logic: [low, high] denotes the range in which element has to be present.
          Initially low = 0, high  = number_of_elements which covers entire range.
          In every step we reduce the range by doing the following
            (i) If the middle element (mid) is less than key then key has to present in range [mid+1 , high]
           (ii) If middle element is the key, then we are done.
          (iii) If the middle element is greater than key then key has to be present in the range[low,mid-1]
 */
int BinarySearch(int *array, int manydata, int key)
{
        int low = 0, high = manydata-1, mid;

        while(low <= high)
        {
                mid = (low + high)/2;
                if(array[mid] < key)
                {
                        low = mid + 1;

                }
                else if(array[mid] == key)
                {
                        return mid;

                }
                else if(array[mid] > key)
                {
                        high = mid-1;

                }
            }

                return -1;

}
int main()
{
        int loop1,loop2, manydata;
          printf ("Input Many data: ");
        scanf("%d",&manydata);
        int array[manydata];

        /*Input has to be sorted in non decreasing order */
        for(loop1 = 0;loop1 < manydata;loop1++)
        {       printf ("Input %d: ", loop1);
                scanf("%d",&array[loop1]);
        }
        /* Check if the input array is sorted */
        for(loop2 = 1;loop2 < manydata;loop2++)
        {
                if(array[loop2] < array[loop2 - 1])
                {
                        printf("Given input is not sorted\n");
                        return 0;
                }
        }
        int key;
        scanf("%d",&key);
        /* Calling this functions searches for the key and returns its index. It returns -1
          if key is not found.*/
        int index;


           index = BinarySearch(array,manydata,key);
       if(index==-1)
        {
                printf("Element not found\n");
        }
        else
        {

                printf("Element is at index %d\n",index);
        }


        return 0;
}
