#ifndef INITIALIZE_H
#define INITIALIZE_H

#include <stdint.h>
#include "gsl_rng.h"
#include "array.h"
#include "heap.h"

extern uint64_t simulator_time; //milliseconds
extern struct array* payments;
FILE* csv_payment;

void initialize_simulator_data(long n_payments, double payment_mean, double same_dest, double sigma_amount, unsigned int is_preproc);

void initialize();

void create_payments_from_csv(unsigned int is_preproc);

#endif