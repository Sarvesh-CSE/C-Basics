#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int calculateOptimalCost(int *step_cost, int steps, int step, int *cache) {
  if (step >= steps) {
    return 0; /* We're at the end of the array. Return 0 */
  }
  if (cache[step] != -1) {
    /* 
     * We've cut out the must computationally expensive part of the function: calling the functions recursively again.
     * Due to this, we can drastically speed up execution of areas that we've already visited.
     */
    return cache[step];
  }
  int one_step_more = calculateOptimalCost(step_cost, steps, step + 1, cache);
  int two_step_more = calculateOptimalCost(step_cost, steps, step + 2, cache);
  cache[step] = step_cost[step] + ((one_step_more > two_step_more) ? two_step_more : one_step_more);
  /* If we don't have a cache, then we have no other choice than to spend computation power caching it. */
  return cache[step];
}

int main() {
  /* 
   * Given a path with cost, find out the minimum cost needed to reach to the end, given the cost of each step in an array.
   * We can either take one step, or two steps forward, while bearing the cost of the current step.
   */

  /* Optimal cost: 1 > 2 > 5 = 8 */
  int step_cost[] = { 1, 100, 2, 5, 900 };
  int steps = sizeof(step_cost) / sizeof(step_cost[0]);
  int *cache = (int*)calloc(steps, sizeof(int));
  /* Set all index values of cache to -1 */
  for (int i = 0; i < steps; i++) {
    cache[i] = -1;
  }

  int optimal_cost_from_step_0 = calculateOptimalCost(step_cost, steps, 0, cache);
  /* This will be vastly more faster to compute than the first function call, because we've cached a lot of stuff from the last function call */
  int optimal_cost_from_step_1 = calculateOptimalCost(step_cost, steps, 1, cache);  

  printf("The optimal cost is: %d\n", (optimal_cost_from_step_0 > optimal_cost_from_step_1) ? optimal_cost_from_step_1 : optimal_cost_from_step_0);
}
