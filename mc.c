/*
 * Monte Carlo
 */

#include <gsl/gsl_rng.h>

double mc_pi(long m, gsl_rng *r);

double mc_pi(long m, gsl_rng *r)
{

  unsigned long seed = 1UL;
  double p[NP], mean, sd;
  int i;

/* allocate random number generator */
   r = gsl_rng_alloc (gsl_rng_taus2);

/* seed the random number generator */
   gsl_rng_set (r, seed);
  
  for (i = 0; i < NP; i++)
  {
  p[i] = gsl_rng_uniform (r);
  }



  gsl_rng_free (r);

  return 0;

   // for (n = 0; n < m; n++) {
      /* generate random coordinates */
     // x = gsl_rng_uniform(r);
      // y = gsl_rng_uniform(r);

      /* count when the point lands in the circle */
      // if ((x*x + y*y) <= 1.0) {
      //  count += 1;
  //    }
   // }

   // return(4.0 * ((double)count)/((double)m));

} 
