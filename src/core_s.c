#include "../include/op.h"
#include "../include/core.h"

// initialize core
core_t *init_core(void) {
    // initialize core
    core_t *core = malloc(sizeof(core_t));
    if (core == NULL) {
        return NULL;
    }
    memset(core->memory, 0, MEM_SIZE);  // initialize memory to 0
    core->champions = NULL;
    core->num_champions = 0;
    core->cycle_to_die = CYCLE_TO_DIE;
    core->cycle_delta = CYCLE_DELTA;
    core->nbr_live = NBR_LIVE;
    core->dump = -1;
    core->cycle = 0;

    core->free_core = free_core;
    core->load_champion = load_champion;

    return core;
}