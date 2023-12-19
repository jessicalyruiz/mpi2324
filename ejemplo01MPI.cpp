//
// Created by gitpod on 12/19/23.
//

#include "ejemplo01MPI.h"
#include <mpi.h>
int main(int argc, char** argv){

    MPI_Init(&argc, &argv);

    int rank, nprocs;

    MPI_Comm_rank(MPI_COMM_WORLD,&rank );

    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
        std::println("rank %d ")




    MPI_Finalize();



    Return 0;

}