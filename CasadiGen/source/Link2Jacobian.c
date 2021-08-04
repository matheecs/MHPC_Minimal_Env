/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) Link2Jacobian_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[18] = {14, 1, 0, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
static const casadi_int casadi_s1[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s2[18] = {2, 7, 0, 1, 2, 4, 6, 8, 8, 8, 0, 1, 0, 1, 0, 1, 0, 1};
static const casadi_int casadi_s3[16] = {2, 7, 0, 0, 0, 2, 4, 6, 6, 6, 0, 1, 0, 1, 0, 1};

/* Link2Jacobian:(i0[14],i1[2])->(o0[2x7,8nz],o1[2x7,6nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a6, a7, a8, a9;
  a0=1.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[1]? arg[1][1] : 0;
  a1=arg[0]? arg[0][4] : 0;
  a2=cos(a1);
  a3=arg[0]? arg[0][3] : 0;
  a4=cos(a3);
  a5=arg[0]? arg[0][2] : 0;
  a6=cos(a5);
  a7=(a4*a6);
  a8=sin(a3);
  a9=sin(a5);
  a10=(a8*a9);
  a7=(a7-a10);
  a10=(a2*a7);
  a11=sin(a1);
  a12=cos(a3);
  a13=(a12*a9);
  a14=sin(a3);
  a15=(a14*a6);
  a13=(a13+a15);
  a15=(a11*a13);
  a10=(a10-a15);
  a10=(a0*a10);
  a15=arg[1]? arg[1][0] : 0;
  a16=cos(a1);
  a17=(a16*a13);
  a18=sin(a1);
  a19=(a18*a7);
  a17=(a17+a19);
  a17=(a15*a17);
  a10=(a10-a17);
  a17=-2.0899999999999999e-001;
  a19=(a17*a7);
  a20=1.9000000000000000e-001;
  a21=(a20*a9);
  a19=(a19-a21);
  a10=(a10+a19);
  if (res[0]!=0) res[0][2]=a10;
  a10=sin(a5);
  a19=(a4*a10);
  a21=cos(a5);
  a22=(a8*a21);
  a19=(a19+a22);
  a22=(a2*a19);
  a23=(a12*a21);
  a24=(a14*a10);
  a23=(a23-a24);
  a24=(a11*a23);
  a22=(a22+a24);
  a22=(a0*a22);
  a24=(a16*a23);
  a25=(a18*a19);
  a24=(a24-a25);
  a24=(a15*a24);
  a22=(a22+a24);
  a24=(a17*a19);
  a25=(a20*a21);
  a24=(a24+a25);
  a22=(a22+a24);
  a22=(-a22);
  if (res[0]!=0) res[0][3]=a22;
  a22=cos(a5);
  a24=cos(a3);
  a25=(a22*a24);
  a26=sin(a5);
  a27=sin(a3);
  a28=(a26*a27);
  a25=(a25-a28);
  a28=(a2*a25);
  a29=sin(a3);
  a30=(a22*a29);
  a31=cos(a3);
  a32=(a26*a31);
  a30=(a30+a32);
  a32=(a11*a30);
  a28=(a28-a32);
  a28=(a0*a28);
  a32=(a16*a30);
  a33=(a18*a25);
  a32=(a32+a33);
  a32=(a15*a32);
  a28=(a28-a32);
  a32=(a17*a25);
  a28=(a28+a32);
  if (res[0]!=0) res[0][4]=a28;
  a28=cos(a5);
  a32=(a28*a27);
  a33=sin(a5);
  a34=(a33*a24);
  a32=(a32+a34);
  a34=(a2*a32);
  a35=(a28*a31);
  a36=(a33*a29);
  a35=(a35-a36);
  a36=(a11*a35);
  a34=(a34+a36);
  a34=(a0*a34);
  a36=(a16*a35);
  a37=(a18*a32);
  a36=(a36-a37);
  a36=(a15*a36);
  a34=(a34+a36);
  a36=(a17*a32);
  a34=(a34+a36);
  a34=(-a34);
  if (res[0]!=0) res[0][5]=a34;
  a34=(a22*a12);
  a36=(a26*a14);
  a34=(a34-a36);
  a36=cos(a1);
  a37=(a34*a36);
  a38=(a22*a8);
  a39=(a26*a4);
  a38=(a38+a39);
  a39=sin(a1);
  a40=(a38*a39);
  a37=(a37-a40);
  a37=(a0*a37);
  a40=sin(a1);
  a41=(a34*a40);
  a42=cos(a1);
  a43=(a38*a42);
  a41=(a41+a43);
  a41=(a15*a41);
  a37=(a37-a41);
  if (res[0]!=0) res[0][6]=a37;
  a37=(a28*a4);
  a41=(a33*a8);
  a37=(a37-a41);
  a41=(a37*a39);
  a43=(a33*a12);
  a44=(a28*a14);
  a43=(a43+a44);
  a44=(a43*a36);
  a41=(a41+a44);
  a41=(a0*a41);
  a44=(a37*a42);
  a45=(a43*a40);
  a44=(a44-a45);
  a44=(a15*a44);
  a41=(a41+a44);
  a41=(-a41);
  if (res[0]!=0) res[0][7]=a41;
  a41=sin(a5);
  a44=(a4*a41);
  a45=cos(a5);
  a46=(a8*a45);
  a44=(a44+a46);
  a46=(a2*a44);
  a47=(a12*a45);
  a41=(a14*a41);
  a47=(a47-a41);
  a41=(a11*a47);
  a46=(a46+a41);
  a46=(a0*a46);
  a47=(a16*a47);
  a41=(a18*a44);
  a47=(a47-a41);
  a47=(a15*a47);
  a46=(a46+a47);
  a44=(a17*a44);
  a45=(a20*a45);
  a44=(a44+a45);
  a46=(a46+a44);
  a44=arg[0]? arg[0][9] : 0;
  a46=(a46*a44);
  a45=sin(a3);
  a47=(a6*a45);
  a41=cos(a3);
  a48=(a9*a41);
  a47=(a47+a48);
  a48=(a2*a47);
  a49=cos(a3);
  a6=(a6*a49);
  a50=sin(a3);
  a9=(a9*a50);
  a6=(a6-a9);
  a9=(a11*a6);
  a48=(a48+a9);
  a48=(a0*a48);
  a6=(a16*a6);
  a9=(a18*a47);
  a6=(a6-a9);
  a6=(a15*a6);
  a48=(a48+a6);
  a47=(a17*a47);
  a48=(a48+a47);
  a47=arg[0]? arg[0][10] : 0;
  a48=(a48*a47);
  a46=(a46+a48);
  a48=sin(a1);
  a6=(a7*a48);
  a9=cos(a1);
  a51=(a13*a9);
  a6=(a6+a51);
  a6=(a0*a6);
  a51=cos(a1);
  a7=(a7*a51);
  a52=sin(a1);
  a13=(a13*a52);
  a7=(a7-a13);
  a7=(a15*a7);
  a6=(a6+a7);
  a7=arg[0]? arg[0][11] : 0;
  a6=(a6*a7);
  a46=(a46+a6);
  a46=(-a46);
  if (res[1]!=0) res[1][0]=a46;
  a46=cos(a5);
  a6=(a4*a46);
  a13=sin(a5);
  a53=(a8*a13);
  a6=(a6-a53);
  a53=(a2*a6);
  a54=(a12*a13);
  a46=(a14*a46);
  a54=(a54+a46);
  a46=(a11*a54);
  a53=(a53-a46);
  a53=(a0*a53);
  a54=(a16*a54);
  a46=(a18*a6);
  a54=(a54+a46);
  a54=(a15*a54);
  a53=(a53-a54);
  a6=(a17*a6);
  a20=(a20*a13);
  a6=(a6-a20);
  a53=(a53+a6);
  a53=(a53*a44);
  a6=(a21*a41);
  a20=(a10*a45);
  a6=(a6-a20);
  a20=(a2*a6);
  a21=(a21*a50);
  a10=(a10*a49);
  a21=(a21+a10);
  a10=(a11*a21);
  a20=(a20-a10);
  a20=(a0*a20);
  a21=(a16*a21);
  a10=(a18*a6);
  a21=(a21+a10);
  a21=(a15*a21);
  a20=(a20-a21);
  a6=(a17*a6);
  a20=(a20+a6);
  a20=(a20*a47);
  a53=(a53+a20);
  a20=(a23*a9);
  a6=(a19*a48);
  a20=(a20-a6);
  a20=(a0*a20);
  a23=(a23*a52);
  a19=(a19*a51);
  a23=(a23+a19);
  a23=(a15*a23);
  a20=(a20-a23);
  a20=(a20*a7);
  a53=(a53+a20);
  a53=(-a53);
  if (res[1]!=0) res[1][1]=a53;
  a53=sin(a5);
  a20=(a24*a53);
  a23=cos(a5);
  a19=(a27*a23);
  a20=(a20+a19);
  a19=(a2*a20);
  a6=(a31*a23);
  a21=(a29*a53);
  a6=(a6-a21);
  a21=(a11*a6);
  a19=(a19+a21);
  a19=(a0*a19);
  a6=(a16*a6);
  a21=(a18*a20);
  a6=(a6-a21);
  a6=(a15*a6);
  a19=(a19+a6);
  a20=(a17*a20);
  a19=(a19+a20);
  a19=(a19*a44);
  a20=sin(a3);
  a6=(a22*a20);
  a21=cos(a3);
  a10=(a26*a21);
  a6=(a6+a10);
  a10=(a2*a6);
  a13=cos(a3);
  a54=(a22*a13);
  a3=sin(a3);
  a46=(a26*a3);
  a54=(a54-a46);
  a46=(a11*a54);
  a10=(a10+a46);
  a10=(a0*a10);
  a54=(a16*a54);
  a46=(a18*a6);
  a54=(a54-a46);
  a54=(a15*a54);
  a10=(a10+a54);
  a6=(a17*a6);
  a10=(a10+a6);
  a10=(a10*a47);
  a19=(a19+a10);
  a10=(a25*a48);
  a6=(a30*a9);
  a10=(a10+a6);
  a10=(a0*a10);
  a25=(a25*a51);
  a30=(a30*a52);
  a25=(a25-a30);
  a25=(a15*a25);
  a10=(a10+a25);
  a10=(a10*a7);
  a19=(a19+a10);
  a19=(-a19);
  if (res[1]!=0) res[1][2]=a19;
  a19=cos(a5);
  a24=(a24*a19);
  a5=sin(a5);
  a27=(a27*a5);
  a24=(a24-a27);
  a27=(a2*a24);
  a31=(a31*a5);
  a29=(a29*a19);
  a31=(a31+a29);
  a29=(a11*a31);
  a27=(a27-a29);
  a27=(a0*a27);
  a31=(a16*a31);
  a29=(a18*a24);
  a31=(a31+a29);
  a31=(a15*a31);
  a27=(a27-a31);
  a24=(a17*a24);
  a27=(a27+a24);
  a27=(a27*a44);
  a21=(a28*a21);
  a20=(a33*a20);
  a21=(a21-a20);
  a2=(a2*a21);
  a3=(a28*a3);
  a13=(a33*a13);
  a3=(a3+a13);
  a11=(a11*a3);
  a2=(a2-a11);
  a2=(a0*a2);
  a16=(a16*a3);
  a18=(a18*a21);
  a16=(a16+a18);
  a16=(a15*a16);
  a2=(a2-a16);
  a17=(a17*a21);
  a2=(a2+a17);
  a2=(a2*a47);
  a27=(a27+a2);
  a9=(a35*a9);
  a48=(a32*a48);
  a9=(a9-a48);
  a9=(a0*a9);
  a35=(a35*a52);
  a32=(a32*a51);
  a35=(a35+a32);
  a35=(a15*a35);
  a9=(a9-a35);
  a9=(a9*a7);
  a27=(a27+a9);
  a27=(-a27);
  if (res[1]!=0) res[1][3]=a27;
  a27=(a12*a53);
  a9=(a14*a23);
  a27=(a27+a9);
  a9=(a36*a27);
  a23=(a4*a23);
  a53=(a8*a53);
  a23=(a23-a53);
  a53=(a39*a23);
  a9=(a9+a53);
  a9=(a0*a9);
  a23=(a42*a23);
  a27=(a40*a27);
  a23=(a23-a27);
  a23=(a15*a23);
  a9=(a9+a23);
  a9=(a9*a44);
  a23=(a22*a50);
  a27=(a26*a49);
  a23=(a23+a27);
  a27=(a36*a23);
  a22=(a22*a41);
  a26=(a26*a45);
  a22=(a22-a26);
  a26=(a39*a22);
  a27=(a27+a26);
  a27=(a0*a27);
  a22=(a42*a22);
  a23=(a40*a23);
  a22=(a22-a23);
  a22=(a15*a22);
  a27=(a27+a22);
  a27=(a27*a47);
  a9=(a9+a27);
  a27=sin(a1);
  a22=(a34*a27);
  a23=cos(a1);
  a26=(a38*a23);
  a22=(a22+a26);
  a22=(a0*a22);
  a26=cos(a1);
  a34=(a34*a26);
  a1=sin(a1);
  a38=(a38*a1);
  a34=(a34-a38);
  a34=(a15*a34);
  a22=(a22+a34);
  a22=(a22*a7);
  a9=(a9+a22);
  a9=(-a9);
  if (res[1]!=0) res[1][4]=a9;
  a12=(a12*a19);
  a14=(a14*a5);
  a12=(a12-a14);
  a14=(a36*a12);
  a4=(a4*a5);
  a8=(a8*a19);
  a4=(a4+a8);
  a8=(a39*a4);
  a14=(a14-a8);
  a14=(a0*a14);
  a4=(a42*a4);
  a12=(a40*a12);
  a4=(a4+a12);
  a4=(a15*a4);
  a14=(a14-a4);
  a14=(a14*a44);
  a49=(a28*a49);
  a50=(a33*a50);
  a49=(a49-a50);
  a36=(a36*a49);
  a28=(a28*a45);
  a33=(a33*a41);
  a28=(a28+a33);
  a39=(a39*a28);
  a36=(a36-a39);
  a36=(a0*a36);
  a42=(a42*a28);
  a40=(a40*a49);
  a42=(a42+a40);
  a42=(a15*a42);
  a36=(a36-a42);
  a36=(a36*a47);
  a14=(a14+a36);
  a23=(a37*a23);
  a27=(a43*a27);
  a23=(a23-a27);
  a0=(a0*a23);
  a37=(a37*a1);
  a43=(a43*a26);
  a37=(a37+a43);
  a15=(a15*a37);
  a0=(a0-a15);
  a0=(a0*a7);
  a14=(a14+a0);
  a14=(-a14);
  if (res[1]!=0) res[1][5]=a14;
  return 0;
}

CASADI_SYMBOL_EXPORT int Link2Jacobian(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int Link2Jacobian_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int Link2Jacobian_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Link2Jacobian_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int Link2Jacobian_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Link2Jacobian_release(int mem) {
}

CASADI_SYMBOL_EXPORT void Link2Jacobian_incref(void) {
}

CASADI_SYMBOL_EXPORT void Link2Jacobian_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int Link2Jacobian_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int Link2Jacobian_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_real Link2Jacobian_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Link2Jacobian_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Link2Jacobian_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Link2Jacobian_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Link2Jacobian_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    case 1: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int Link2Jacobian_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
