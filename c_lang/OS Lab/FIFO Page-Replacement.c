#include <stdio.h>

int main()
{
    int pages[50], frames[10];
    int n, f;
    int i, j, k = 0;
    int pageFaults = 0, pageHits = 0;
    int found;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter reference string:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pages[i]);
    }

    printf("Enter number of frames: ");
    scanf("%d", &f);

    for (i = 0; i < f; i++)
    {
        frames[i] = -1;
    }

    printf("\nPage\tFrames\n");

    for (i = 0; i < n; i++)
    {
        found = 0;

        for (j = 0; j < f; j++)
        {
            if (frames[j] == pages[i])
            {
                found = 1;
                pageHits++;
                break;
            }
        }

        if (found == 0)
        {
            frames[k] = pages[i];
            k = (k + 1) % f;
            pageFaults++;
        }

        printf("%d\t", pages[i]);

        for (j = 0; j < f; j++)
        {
            if (frames[j] == -1)
                printf("- ");
            else
                printf("%d ", frames[j]);
        }

        printf("\n");
    }

    printf("\nTotal Page Faults = %d", pageFaults);
    printf("\nTotal Page Hits = %d\n", pageHits);

    return 0;
}