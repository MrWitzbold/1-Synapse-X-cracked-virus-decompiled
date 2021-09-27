
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int_WINAPI
wWinMain(HINSTANCE base_address_of_module,HINSTANCE no_meaning_always_zero,
        PWSTR command_line_arguments,int app_window_state)

{
  uint someCalc_With_base_address;
  int i_counter_forloops2;
  byte base_adress_bytes;
  int byte_counter;
  int always_2_;
  uint unaff_EBP;
  undefined *args_without_somebytes;
  PWSTR commandline_arguments;
  bool standin_bytecounter_buffer;
  bool stand_in_for_buffer_;
  bool original_bytecounter_buffer;
  bool standin_base_address_buffer;
  bool base_address_bytes_buffer;
  bool standin_base_addressbuffer2;
  int *buffer_for_variables;
  
  FUN_00c69f38();
  byte_counter._0_1_ = uVar9;
  commandline_arguments = command_line_arguments;
  do {
    buffer_for_variables = &base_address_of_module->unused;
    base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
    *(undefined *)commandline_arguments = *(undefined *)buffer_for_variables;
    commandline_arguments = (PWSTR)((int)commandline_arguments + 1);
    always_2_ = 2;
LAB_00c69e05:
                    /* 256 */
    standin_bytecounter_buffer = CARRY1((byte)byte_counter,(byte)byte_counter);
    byte_counter._0_1_ = (byte)byte_counter * uVar10;
    stand_in_for_buffer_ = standin_bytecounter_buffer;
    if ((byte)byte_counter == 0) {
      base_adress_bytes = *(byte *)&base_address_of_module->unused;
      base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
      stand_in_for_buffer_ = CARRY1(base_adress_bytes,base_adress_bytes);
      stand_in_for_buffer_ =
           stand_in_for_buffer_ || CARRY1(base_adress_bytes * uVar11,standin_bytecounter_buffer);
      byte_counter._0_1_ = base_adress_bytes * uVar11 + standin_bytecounter_buffer;
    }
                    /* Stop when it's False */
  } while (!stand_in_for_buffer_);
                    /* Updates bvar9 if bvar5 is zero */
  original_bytecounter_buffer = CARRY1((byte)byte_counter,(byte)byte_counter);
  byte_counter._0_1_ = (byte)byte_counter * uVar12;
  standin_bytecounter_buffer = original_bytecounter_buffer;
  if ((byte)byte_counter == 0) {
    base_adress_bytes = *(byte *)&base_address_of_module->unused;
    base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
    standin_bytecounter_buffer =
         CARRY1(base_adress_bytes,base_adress_bytes) ||
         CARRY1(base_adress_bytes * uVar13,original_bytecounter_buffer);
    byte_counter._0_1_ = base_adress_bytes * uVar13 + original_bytecounter_buffer;
  }
  if (standin_bytecounter_buffer) {
    original_bytecounter_buffer = CARRY1((byte)byte_counter,(byte)byte_counter);
    byte_counter._0_1_ = (byte)byte_counter * 2;
    standin_bytecounter_buffer = original_bytecounter_buffer;
    if ((byte)byte_counter == 0) {
      base_adress_bytes = *(byte *)&base_address_of_module->unused;
      base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
      standin_bytecounter_buffer =
           CARRY1(base_adress_bytes,base_adress_bytes) ||
           CARRY1(base_adress_bytes * uVar14,original_bytecounter_buffer);
      byte_counter._0_1_ = base_adress_bytes * uVar14 + original_bytecounter_buffer;
    }
    if (standin_bytecounter_buffer) {
      original_bytecounter_buffer = CARRY1((byte)byte_counter,(byte)byte_counter);
      base_adress_bytes = (byte)byte_counter * uVar15;
      standin_bytecounter_buffer = original_bytecounter_buffer;
      if (base_adress_bytes == 0) {
        base_adress_bytes = *(byte *)&base_address_of_module->unused;
        base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
        standin_bytecounter_buffer =
             CARRY1(base_adress_bytes,base_adress_bytes) ||
             CARRY1(base_adress_bytes * uVar16,original_bytecounter_buffer);
        base_adress_bytes = base_adress_bytes * uVar16 + original_bytecounter_buffer;
      }
      standin_base_address_buffer = CARRY1(base_adress_bytes,base_adress_bytes);
      base_adress_bytes = base_adress_bytes * '\x02';
      original_bytecounter_buffer = standin_base_address_buffer;
      if (base_adress_bytes == 0) {
        base_adress_bytes = *(byte *)&base_address_of_module->unused;
        base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
        original_bytecounter_buffer =
             CARRY1(base_adress_bytes,base_adress_bytes) ||
             CARRY1(base_adress_bytes * '\x02',standin_base_address_buffer);
        base_adress_bytes = base_adress_bytes * '\x02' + standin_base_address_buffer;
      }
      base_address_bytes_buffer = CARRY1(base_adress_bytes,base_adress_bytes);
      base_adress_bytes = base_adress_bytes * '\x02';
      standin_base_address_buffer = base_address_bytes_buffer;
      if (base_adress_bytes == 0) {
        base_adress_bytes = *(byte *)&base_address_of_module->unused;
        base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
        standin_base_address_buffer =
             CARRY1(base_adress_bytes,base_adress_bytes) ||
             CARRY1(base_adress_bytes * '\x02',base_address_bytes_buffer);
        base_adress_bytes = base_adress_bytes * '\x02' + base_address_bytes_buffer;
      }
      standin_base_addressbuffer2 = CARRY1(base_adress_bytes,base_adress_bytes);
      byte_counter._0_1_ = base_adress_bytes * '\x02';
      base_address_bytes_buffer = standin_base_addressbuffer2;
      if ((byte)byte_counter == 0) {
        base_adress_bytes = *(byte *)&base_address_of_module->unused;
        base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
        base_address_bytes_buffer =
             CARRY1(base_adress_bytes,base_adress_bytes) ||
             CARRY1(base_adress_bytes * '\x02',standin_base_addressbuffer2);
        byte_counter._0_1_ = base_adress_bytes * '\x02' + standin_base_addressbuffer2;
      }
      someCalc_With_base_address =
           (((uint)standin_bytecounter_buffer * 2 + (uint)original_bytecounter_buffer) * 2 +
           (uint)standin_base_address_buffer) * 2 + (uint)base_address_bytes_buffer;
      if (someCalc_With_base_address != 0) {
        someCalc_With_base_address =
             (uint)*(byte *)((int)commandline_arguments - someCalc_With_base_address);
      }
      *(char *)commandline_arguments = (char)someCalc_With_base_address;
                    /* Adding the commandline arguments 1 byte at a tiem */
      commandline_arguments = (PWSTR)((int)commandline_arguments + 1);
      always_2_ = 2;
    }
    else {
      buffer_for_variables = &base_address_of_module->unused;
      base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
      base_adress_bytes = *(byte *)buffer_for_variables >> 1;
      unaff_EBP = (uint)base_adress_bytes;
      if (base_adress_bytes == 0) {
        return (int)commandline_arguments - (int)command_line_arguments;
      }
      args_without_somebytes = (undefined *)((int)commandline_arguments - unaff_EBP);
      for (always_2_ = ((*(byte *)buffer_for_variables & 1) != 0) + 2; always_2_ != 0;
          always_2_ = always_2_ + -1) {
        *(undefined *)commandline_arguments = *args_without_somebytes;
        args_without_somebytes = args_without_somebytes + 1;
        commandline_arguments = (PWSTR)((int)commandline_arguments + 1);
      }
      always_2_ = 1;
    }
  }
  else {
    i_counter_forloops2 = 1;
    do {
      original_bytecounter_buffer = CARRY1((byte)byte_counter,(byte)byte_counter);
      base_adress_bytes = (byte)byte_counter * uVar17;
      standin_bytecounter_buffer = original_bytecounter_buffer;
      if (base_adress_bytes == 0) {
        base_adress_bytes = *(byte *)&base_address_of_module->unused;
        base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
        standin_bytecounter_buffer =
             CARRY1(base_adress_bytes,base_adress_bytes) ||
             CARRY1(base_adress_bytes * uVar18,original_bytecounter_buffer);
        base_adress_bytes = base_adress_bytes * uVar18 + original_bytecounter_buffer;
      }
      i_counter_forloops2 = i_counter_forloops2 * 2 + (uint)standin_bytecounter_buffer;
      original_bytecounter_buffer = CARRY1(base_adress_bytes,base_adress_bytes);
      byte_counter._0_1_ = base_adress_bytes * '\x02';
      standin_bytecounter_buffer = original_bytecounter_buffer;
      if ((byte)byte_counter == 0) {
        base_adress_bytes = *(byte *)&base_address_of_module->unused;
        base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
        standin_bytecounter_buffer =
             CARRY1(base_adress_bytes,base_adress_bytes) ||
             CARRY1(base_adress_bytes * '\x02',original_bytecounter_buffer);
        byte_counter._0_1_ = base_adress_bytes * '\x02' + original_bytecounter_buffer;
      }
    } while (standin_bytecounter_buffer);
    i_counter_forloops2 = i_counter_forloops2 - always_2_;
    always_2_ = 1;
    if (i_counter_forloops2 != 0) {
      unaff_EBP = CONCAT31((int3)i_counter_forloops2 + -1,
                           *(undefined *)&base_address_of_module->unused);
      base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
      i_counter_forloops2 = 1;
      do {
        original_bytecounter_buffer = CARRY1((byte)byte_counter,(byte)byte_counter);
        base_adress_bytes = (byte)byte_counter * '\x02';
        standin_bytecounter_buffer = original_bytecounter_buffer;
        if (base_adress_bytes == 0) {
          base_adress_bytes = *(byte *)&base_address_of_module->unused;
          base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
          standin_bytecounter_buffer =
               CARRY1(base_adress_bytes,base_adress_bytes) ||
               CARRY1(base_adress_bytes * '\x02',original_bytecounter_buffer);
          base_adress_bytes = base_adress_bytes * '\x02' + original_bytecounter_buffer;
        }
        i_counter_forloops2 = i_counter_forloops2 * 2 + (uint)standin_bytecounter_buffer;
        original_bytecounter_buffer = CARRY1(base_adress_bytes,base_adress_bytes);
        byte_counter._0_1_ = base_adress_bytes * '\x02';
        standin_bytecounter_buffer = original_bytecounter_buffer;
        if ((byte)byte_counter == 0) {
          base_adress_bytes = *(byte *)&base_address_of_module->unused;
          base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
          standin_bytecounter_buffer =
               CARRY1(base_adress_bytes,base_adress_bytes) ||
               CARRY1(base_adress_bytes * '\x02',original_bytecounter_buffer);
          byte_counter._0_1_ = base_adress_bytes * '\x02' + original_bytecounter_buffer;
        }
      } while (standin_bytecounter_buffer);
      if (unaff_EBP < 32000) {
        if (0x4ff < unaff_EBP) {
          args_without_somebytes = (undefined *)((int)commandline_arguments - unaff_EBP);
          for (i_counter_forloops2 = i_counter_forloops2 + 1; i_counter_forloops2 != 0;
              i_counter_forloops2 = i_counter_forloops2 + -1) {
            *(undefined *)commandline_arguments = *args_without_somebytes;
            args_without_somebytes = args_without_somebytes + 1;
            commandline_arguments = (PWSTR)((int)commandline_arguments + 1);
          }
          goto LAB_00c69e05;
        }
        if (unaff_EBP < 0x80) goto LAB_00c69efd;
      }
      else {
LAB_00c69efd:
        i_counter_forloops2 = i_counter_forloops2 + 2;
      }
      args_without_somebytes = (undefined *)((int)commandline_arguments - unaff_EBP);
      for (; i_counter_forloops2 != 0; i_counter_forloops2 = i_counter_forloops2 + -1) {
        *(undefined *)commandline_arguments = *args_without_somebytes;
        args_without_somebytes = args_without_somebytes + 1;
        commandline_arguments = (PWSTR)((int)commandline_arguments + 1);
      }
      goto LAB_00c69e05;
    }
    i_counter_forloops2 = 1;
    do {
      original_bytecounter_buffer = CARRY1((byte)byte_counter,(byte)byte_counter);
      base_adress_bytes = (byte)byte_counter * uVar19;
      standin_bytecounter_buffer = original_bytecounter_buffer;
      if (base_adress_bytes == 0) {
        base_adress_bytes = *(byte *)&base_address_of_module->unused;
        base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
        standin_bytecounter_buffer =
             CARRY1(base_adress_bytes,base_adress_bytes) ||
             CARRY1(base_adress_bytes * '\x02',original_bytecounter_buffer);
        base_adress_bytes = base_adress_bytes * '\x02' + original_bytecounter_buffer;
      }
      i_counter_forloops2 = i_counter_forloops2 * 2 + (uint)standin_bytecounter_buffer;
      original_bytecounter_buffer = CARRY1(base_adress_bytes,base_adress_bytes);
      byte_counter._0_1_ = base_adress_bytes * '\x02';
      standin_bytecounter_buffer = original_bytecounter_buffer;
      if ((byte)byte_counter == 0) {
        base_adress_bytes = *(byte *)&base_address_of_module->unused;
        base_address_of_module = (HINSTANCE)((int)&base_address_of_module->unused + 1);
        standin_bytecounter_buffer =
             CARRY1(base_adress_bytes,base_adress_bytes) ||
             CARRY1(base_adress_bytes * '\x02',original_bytecounter_buffer);
        byte_counter._0_1_ = base_adress_bytes * '\x02' + original_bytecounter_buffer;
      }
    } while (standin_bytecounter_buffer);
    args_without_somebytes = (undefined *)((int)commandline_arguments - unaff_EBP);
    for (; i_counter_forloops2 != 0; i_counter_forloops2 = i_counter_forloops2 + -1) {
      *(undefined *)commandline_arguments = *args_without_somebytes;
      args_without_somebytes = args_without_somebytes + 1;
      commandline_arguments = (PWSTR)((int)commandline_arguments + 1);
    }
  }
  goto LAB_00c69e05;
}

