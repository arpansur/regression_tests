/*
 * Copyright (C) 2019 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * Authors:  Francesco Conti <fconti@iis.ee.ethz.ch>
 * Authors:  Arpan Suravi Prasad <prasadar@iis.ee.ethz.ch>
 */
#include <stdio.h>

#include <stdint.h>
#include "hal_fir.h"

#include "h_stim32.h"
#include "x_stim32.h"
#include "y_gold32.h"
__attribute__((section(".l2_data"))) __attribute__((aligned(16))) uint32_t y_actual[sizeof(y_gold)/sizeof(y_gold[0])];

int main() {

  int errors = 0;
  int gold_sum = 0, check_sum = 0;
  int i,j;
  
  int offload_id_tmp, offload_id;

  // acquire job 
  while((offload_id_tmp = fir_acquire_job()) < 0);
  
  // job-dependent registers
  fir_x_addr_set((unsigned int) x_stim & 0xFFFFFFFF);
  fir_h_addr_set((unsigned int) h_stim & 0xFFFFFFFF);
  fir_y_addr_set((unsigned int) y_actual & 0xFFFFFFFF);
  fir_shift_length_set(17, 512); // right_shift, length

  // start hwpe operation
  fir_trigger_job();

  FIR_BUSYWAIT();

  errors = fir_compare_int(y_actual, y_gold, sizeof(y_gold)/sizeof(y_gold[0]));
  printf("errors: 0x%x\n", errors);

  return errors;
}
