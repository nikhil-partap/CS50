#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
typedef uint8_t BYTE;

int count = 0;

int main(int argc, char *argv[])
{
    FILE *img = NULL;
    BYTE buffer[512];
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }
    FILE *mcard = fopen(argv[1], "rb");
    if (mcard == NULL)
    {
        printf("Could not open file: %s\n", argv[1]);
        return 1;
    }

    while (fread(buffer, 512, 1, mcard) == 1)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            if (img != NULL)
            {
                fclose(img);
            }

            char filename[8];
            snprintf(filename, sizeof(filename), "%03i.jpg", count++);

            img = fopen(filename, "wb");
            if (img == NULL)
            {
                printf("Could not open file.\n");
                fclose(mcard);
                return 1;
            }
        }
        if (img != NULL)
        {
            fwrite(buffer, 512, 1, img);
        }
    }
    fclose(mcard);
    if (img != NULL)
    {
        fclose(img);
    }
    return 0;
}
