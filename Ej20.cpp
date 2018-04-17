#include <iostream>

using std::cout;
using std::endl;


int main(){
  double* u;
  double c = 1.0;
  double T = 0.5;
  double dx = 0.1;
  double dt = 0.01;
  double x_min =0.0 , x_max =2.0;
  int Nt = T/dt;
  int Nx = (x_max-x_min)/dx;
  u = new double[Nx];

  double x = 0.0; 
  for(int i=0;i<Nx;i++){
    x= x_min + i*dx;
    if(x>0.75 && x<=1.25){
      u[i] = 1.0;
    }else{
      u[i] = 0.0;
    }
  }

  for(int i=0;i<Nx;i++){
    cout<<u[i]<<" "<< i*dx <<endl;

  }
  /*double* t = new double*[N];  
  for(int j = 0 ; i<N;i++){
    t[j] = x[j]- c*(dt/dx)*(x[j+1]-x[j])
  }*/
  

  

  return 0;
}
