#include "utils.h"
#include <numeric>
#include <stdint.h>
#include <thread>
#include <vector>

void AccumulateRange(uint64_t &sum, int lo, int hi) {
  sum = 0;
  for (int i = lo; i < hi; i++) {
    sum += i;
  }
}

void threadTest() {
  const int number_of_threads = 2;
  const int number_of_elements = 1000000;
  const int step = number_of_elements / number_of_threads;
  std::vector<uint64_t> partial_sums(number_of_threads);

  std::thread t1(AccumulateRange, std::ref(partial_sums[0]), 0, step);
  std::thread t2(AccumulateRange, std::ref(partial_sums[1]), step,
                 number_of_threads * step);

  t1.join();
  t2.join();
  uint64_t total = std::accumulate(partial_sums.begin(), partial_sums.end(), 0);
  std::cout << "Total: " << total << std::endl;
}