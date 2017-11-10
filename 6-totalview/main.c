#include <mpi.h>
#include <math.h>

int main (int argc, char *argv[]){
    int size,rank,i;
    double x;
    MPI_Init(&argc,&argv);
    MPI_Comm_size (MPI_COMM_WORLD, &size);
    MPI_Comm_rank (MPI_COMM_WORLD, &rank);

    for (i=0;i<100000;i++) {

        if (rank == 0) {

            MPI_Barrier (MPI_COMM_WORLD);

        }
        else {

            MPI_Barrier (MPI_COMM_WORLD);

        }

        x=sin(x);
        sleep(1);
    }
    sleep(1000);
    printf("job finalized %i and %f\n",i,x);
    MPI_Finalize();
}
