#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char* argv[])
{
    if (argc <= 2)
    {
        printf(1, "Not enough arguments\n");
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int sum = add(a, b);
    printf(1, "%d + %d = %d\n", a, b, sum);
    exit();
}
