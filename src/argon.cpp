/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/home/xavier/Documents/UniSherbrooke/FinDeBack/Buzz_particle_argon/argon/src/argon.ino"
/*
 * Project argon
 * Description:
 * Author:
 * Date:
 */

#include "bbzparticle.h"

void bzz_print_number();
void bbz_delay();
void setup();
void bbz_setup();
void loop();
#line 10 "/home/xavier/Documents/UniSherbrooke/FinDeBack/Buzz_particle_argon/argon/src/argon.ino"
void bzz_print_number(){
    bbzvm_assert_lnum(1);

    int dat_num = (uint16_t)bbzheap_obj_at(bbzvm_locals_at(1))->i.value;

    Serial.printlnf("Dat number %d", dat_num);
    bbzvm_ret0();
}

void bbz_delay(){
    delay((uint16_t)bbzheap_obj_at(bbzvm_locals_at(1))->i.value);

    bbzvm_ret0();
}

// setup() runs once, when the device is first turned on.
void setup() {

    Serial.printlnf("Start");

    bbz_particle_init();

    vm->state = BBZVM_STATE_READY;

    Serial.printlnf("Registering functions %d", System.freeMemory());

    bbzvm_function_register(BBZSTRING_ID(print), bzz_print_number);

    Serial.printlnf("First done ");
    bbzvm_function_register(BBZSTRING_ID(delay), bbz_delay);


    Serial.printlnf("INIT DONE");
}

void bbz_setup() {
    Serial.printlnf("BBVM STARTED :D ");
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {

    //bbz_particle_start(NULL);
    Serial.printlnf("DEVICE CRASHED");

}