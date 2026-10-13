#include <stdio.h>
int main()
{
    int pageSize, numPages, numFrames;
    int pageTable[20];
    int logicalAddress;
    int pageNumber, offset, frameNumber, physicalAddress;
    int i;
    printf("Enter page size: ");
    scanf("%d", &pageSize);
    printf("Enter number of pages: ");
    scanf("%d", &numPages);
    printf("Enter number of frames: ");
    scanf("%d", &numFrames);
    printf("\nEnter Page Table:\n");
    for (i = 0; i < numPages; i++)
    {
        printf("Page %d -> Frame: ", i);
        scanf("%d", &pageTable[i]);
    }
    printf("\nEnter logical address: ");
    scanf("%d", &logicalAddress);
    // Calculate page number and offset
    pageNumber = logicalAddress / pageSize;
    offset = logicalAddress % pageSize;
    if (pageNumber >= numPages)
    {
        printf("\nInvalid Logical Address!\n");
        return 0;
    }
    // Get frame number from page table
    frameNumber = pageTable[pageNumber];
    // Calculate physical address
    physicalAddress = (frameNumber * pageSize) + offset;
    printf("\n--- Paging Address Translation ---\n");
    printf("Logical Address  = %d\n", logicalAddress);
    printf("Page Number      = %d\n", pageNumber);
    printf("Offset           = %d\n", offset);
    printf("Frame Number     = %d\n", frameNumber);
    printf("Physical Address = %d\n", physicalAddress);
    return 0;
}
