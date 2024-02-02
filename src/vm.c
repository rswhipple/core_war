#include "../include/op.h"
#include "../include/vm_parse.h"

int main(int argc, char **argv)
{
    // parse arguments
    if (argc < 2) {
        print_usage();
        return EXIT_FAILURE;
    } else {
       parse_args(argc, argv);
    }

    // run core

    // print winner

    return 0;
}