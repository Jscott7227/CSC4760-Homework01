#include <Kokkos_Core.hpp>
#include <cstdio>
#include <iostream>

// Problem: Link and run program with Kokkos where you initialize a View and print out its name with the $.label()$ method.

int main(int argc, char* argv[]) {
  Kokkos::initialize(argc, argv);
  {
  // Make View Labeled Label
  Kokkos::View<int*> A("Label", 10);
  
  //Print label of the view 
  std::cout << "The label of A is " << A.label() << std::endl;
  }
  Kokkos::finalize();
}
