void talk(void)
{
freeze(1);
say_stop("What 2", 1);
wait(500);
say_stop("`4Ok...?", &current_sprite);
unfreeze(1);
}