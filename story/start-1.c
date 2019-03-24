//start
void buttonon( void )
{
  say("Woo", 1);
  sp_pframe(&current_sprite, 2);
  Playsound(20,22050,0,0,0);
}

void buttonoff( void )
{
  sp_pframe(&current_sprite, 1);
  Playsound(21,22050,0,0,0);
}

void click ( void )
{
  freeze(1);
  say_stop_xy("`%Please wait. (Creating new game), Woo!", 0, 394);
  unfreeze(1);
  wait(1);

  //"turns game on"
  set_mode(2);
  reset_timer();
  fill_screen(0);
  //put dink in this room
  &player_map = 334;

  //make dink
  sp_x(1, 490);
  sp_y(1, 312);
  sp_base_walk(1, 70);
  sp_base_attack(1, 100);
  sp_dir(1, 8);
  sp_brain(1, 1);
  sp_que(1, 0);
  sp_noclip(1, 0);

  //dinks weapons
  add_item("item-fst",438, 1);
  &cur_weapon = 1;
  arm_weapon();

  //status bar
  &update_status = 1;
  draw_status();

  kill_this_task();
}