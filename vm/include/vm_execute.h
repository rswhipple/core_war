#ifndef _VM_EXECUTE_H_
#define _VM_EXECUTE_H_
#include "op.h"

// function prototypes
int game_loop(core_t *core);
void print_winner(core_t *core);
bool check_for_winner(champion_t *head, bool no_winner);
int execute_inst(core_t *core, cursor_t *cursor);

#endif