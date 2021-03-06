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
  #define CASADI_PREFIX(ID) Dyn_FL_ ## ID
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
#define casadi_sq CASADI_PREFIX(sq)

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

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[18] = {14, 1, 0, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
static const casadi_int casadi_s1[8] = {4, 1, 0, 4, 0, 1, 2, 3};

/* Dyn_FL:(i0[14],i1[4])->(o0[14],o1[4]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92;
  a0=arg[0]? arg[0][7] : 0;
  if (res[0]!=0) res[0][0]=a0;
  a1=arg[0]? arg[0][8] : 0;
  if (res[0]!=0) res[0][1]=a1;
  a2=arg[0]? arg[0][9] : 0;
  if (res[0]!=0) res[0][2]=a2;
  a3=arg[0]? arg[0][10] : 0;
  if (res[0]!=0) res[0][3]=a3;
  a4=arg[0]? arg[0][11] : 0;
  if (res[0]!=0) res[0][4]=a4;
  a5=arg[0]? arg[0][12] : 0;
  if (res[0]!=0) res[0][5]=a5;
  a6=arg[0]? arg[0][13] : 0;
  if (res[0]!=0) res[0][6]=a6;
  a7=arg[0]? arg[0][2] : 0;
  a8=cos(a7);
  a9=arg[0]? arg[0][3] : 0;
  a10=cos(a9);
  a11=-2.5360000000000001e-002;
  a12=-7.8079999999999998e-003;
  a13=arg[0]? arg[0][4] : 0;
  a14=cos(a13);
  a15=(a12*a14);
  a16=1.2800000000000000e-001;
  a17=(a16*a14);
  a18=-2.0899999999999999e-001;
  a19=(a18*a14);
  a20=(a17*a19);
  a15=(a15+a20);
  a13=sin(a13);
  a20=(a16*a13);
  a21=(a18*a13);
  a22=(a20*a21);
  a15=(a15+a22);
  a15=(a11+a15);
  a22=(a10*a15);
  a9=sin(a9);
  a23=(a16*a14);
  a24=(a23*a21);
  a25=(a12*a13);
  a26=(a16*a13);
  a27=(a26*a19);
  a25=(a25+a27);
  a24=(a24-a25);
  a25=(a9*a24);
  a22=(a22+a25);
  a25=(a8*a22);
  a7=sin(a7);
  a27=(a10*a24);
  a28=(a9*a15);
  a27=(a27-a28);
  a28=(a7*a27);
  a25=(a25+a28);
  a28=5.4600000000000000e+000;
  a29=arg[0]? arg[0][5] : 0;
  a30=cos(a29);
  a31=1.2680000000000000e+000;
  a32=arg[0]? arg[0][6] : 0;
  a33=cos(a32);
  a34=(a16*a33);
  a35=(a34*a33);
  a32=sin(a32);
  a36=(a16*a32);
  a37=(a36*a32);
  a35=(a35+a37);
  a35=(a31+a35);
  a37=(a30*a35);
  a29=sin(a29);
  a38=(a16*a33);
  a39=(a38*a32);
  a40=(a16*a32);
  a41=(a40*a33);
  a39=(a39-a41);
  a41=(a29*a39);
  a37=(a37+a41);
  a41=(a37*a30);
  a42=(a36*a33);
  a43=(a34*a32);
  a42=(a42-a43);
  a43=(a30*a42);
  a44=(a40*a32);
  a45=(a38*a33);
  a44=(a44+a45);
  a44=(a31+a44);
  a45=(a29*a44);
  a43=(a43+a45);
  a45=(a43*a29);
  a41=(a41+a45);
  a41=(a28+a41);
  a45=(a17*a14);
  a46=(a20*a13);
  a45=(a45+a46);
  a45=(a31+a45);
  a46=(a10*a45);
  a47=(a23*a13);
  a48=(a26*a14);
  a47=(a47-a48);
  a48=(a9*a47);
  a46=(a46+a48);
  a48=(a46*a10);
  a20=(a20*a14);
  a17=(a17*a13);
  a20=(a20-a17);
  a17=(a10*a20);
  a26=(a26*a13);
  a23=(a23*a14);
  a26=(a26+a23);
  a26=(a31+a26);
  a23=(a9*a26);
  a17=(a17+a23);
  a23=(a17*a9);
  a48=(a48+a23);
  a41=(a41+a48);
  a48=(a8*a41);
  a23=(a30*a39);
  a49=(a29*a35);
  a23=(a23-a49);
  a49=(a23*a30);
  a50=(a30*a44);
  a51=(a29*a42);
  a50=(a50-a51);
  a51=(a50*a29);
  a49=(a49+a51);
  a51=(a10*a47);
  a52=(a9*a45);
  a51=(a51-a52);
  a52=(a51*a10);
  a53=(a10*a26);
  a54=(a9*a20);
  a53=(a53-a54);
  a54=(a53*a9);
  a52=(a52+a54);
  a49=(a49+a52);
  a52=(a7*a49);
  a48=(a48+a52);
  a52=(a48*a8);
  a54=(a43*a30);
  a55=(a37*a29);
  a54=(a54-a55);
  a55=(a17*a10);
  a56=(a46*a9);
  a55=(a55-a56);
  a54=(a54+a55);
  a55=(a8*a54);
  a56=(a50*a30);
  a57=(a23*a29);
  a56=(a56-a57);
  a56=(a28+a56);
  a57=(a53*a10);
  a58=(a51*a9);
  a57=(a57-a58);
  a56=(a56+a57);
  a57=(a7*a56);
  a55=(a55+a57);
  a57=(a55*a7);
  a52=(a52+a57);
  a57=casadi_sq(a52);
  a55=(a55*a8);
  a48=(a48*a7);
  a55=(a55-a48);
  a48=casadi_sq(a55);
  a57=(a57+a48);
  a48=(a12*a33);
  a58=(a18*a33);
  a34=(a34*a58);
  a48=(a48+a34);
  a18=(a18*a32);
  a36=(a36*a18);
  a48=(a48+a36);
  a48=(a11+a48);
  a36=(a30*a48);
  a38=(a38*a18);
  a34=(a12*a32);
  a40=(a40*a58);
  a34=(a34+a40);
  a38=(a38-a34);
  a34=(a29*a38);
  a36=(a36+a34);
  a34=1.9000000000000000e-001;
  a40=(a34*a29);
  a37=(a37*a40);
  a36=(a36-a37);
  a34=(a34*a30);
  a43=(a43*a34);
  a36=(a36+a43);
  a43=(a10*a15);
  a37=(a9*a24);
  a43=(a43+a37);
  a37=-1.9000000000000000e-001;
  a59=(a37*a9);
  a46=(a46*a59);
  a43=(a43-a46);
  a37=(a37*a10);
  a17=(a17*a37);
  a43=(a43+a17);
  a36=(a36+a43);
  a43=(a8*a36);
  a17=(a30*a38);
  a46=(a29*a48);
  a17=(a17-a46);
  a23=(a23*a40);
  a17=(a17-a23);
  a50=(a50*a34);
  a17=(a17+a50);
  a50=(a10*a24);
  a23=(a9*a15);
  a50=(a50-a23);
  a51=(a51*a59);
  a50=(a50-a51);
  a53=(a53*a37);
  a50=(a50+a53);
  a17=(a17+a50);
  a50=(a7*a17);
  a43=(a43+a50);
  a50=casadi_sq(a43);
  a57=(a57+a50);
  a50=casadi_sq(a25);
  a57=(a57+a50);
  a50=(a12*a14);
  a53=(a10*a50);
  a51=(a12*a13);
  a23=(a9*a51);
  a53=(a53-a23);
  a23=(a8*a53);
  a46=(a9*a50);
  a60=(a10*a51);
  a46=(a46+a60);
  a60=(a7*a46);
  a23=(a23-a60);
  a60=casadi_sq(a23);
  a57=(a57+a60);
  a60=(a30*a48);
  a61=(a29*a38);
  a60=(a60+a61);
  a61=(a8*a60);
  a62=(a30*a38);
  a63=(a29*a48);
  a62=(a62-a63);
  a63=(a7*a62);
  a61=(a61+a63);
  a63=casadi_sq(a61);
  a57=(a57+a63);
  a63=(a12*a33);
  a64=(a30*a63);
  a65=(a12*a32);
  a66=(a29*a65);
  a64=(a64-a66);
  a66=(a8*a64);
  a67=(a29*a63);
  a68=(a30*a65);
  a67=(a67+a68);
  a68=(a7*a67);
  a66=(a66-a68);
  a68=casadi_sq(a66);
  a57=(a57+a68);
  a57=sqrt(a57);
  a68=(a25/a57);
  a69=arg[1]? arg[1][0] : 0;
  a70=(a37*a2);
  a71=(a8*a0);
  a72=(a7*a1);
  a71=(a71-a72);
  a72=(a9*a71);
  a70=(a70+a72);
  a0=(a7*a0);
  a1=(a8*a1);
  a0=(a0+a1);
  a1=(a10*a0);
  a70=(a70+a1);
  a1=(a11*a70);
  a72=(a2+a3);
  a1=(a1*a72);
  a73=(a31*a70);
  a74=(a10*a71);
  a75=(a59*a2);
  a74=(a74-a75);
  a75=(a9*a0);
  a74=(a74-a75);
  a73=(a73*a74);
  a1=(a1+a73);
  a73=(a31*a74);
  a73=(a73*a70);
  a1=(a1-a73);
  a73=9.8100000000000005e+000;
  a75=(a73*a7);
  a76=(a0*a2);
  a75=(a75+a76);
  a76=(a10*a75);
  a73=(a73*a8);
  a77=(a71*a2);
  a73=(a73+a77);
  a77=(a9*a73);
  a76=(a76+a77);
  a77=(a70*a3);
  a76=(a76+a77);
  a77=(a11*a76);
  a1=(a1-a77);
  a77=(a21*a72);
  a78=(a13*a74);
  a77=(a77+a78);
  a78=(a14*a70);
  a77=(a77+a78);
  a78=(a12*a77);
  a79=(a72+a4);
  a78=(a78*a79);
  a80=(a16*a77);
  a81=(a19*a72);
  a82=(a14*a74);
  a81=(a81+a82);
  a82=(a13*a70);
  a81=(a81-a82);
  a80=(a80*a81);
  a78=(a78+a80);
  a80=(a16*a81);
  a80=(a80*a77);
  a78=(a78-a80);
  a80=(a14*a76);
  a82=(a10*a73);
  a83=(a9*a75);
  a82=(a82-a83);
  a3=(a74*a3);
  a82=(a82+a3);
  a3=(a13*a82);
  a80=(a80+a3);
  a3=(a77*a4);
  a80=(a80+a3);
  a3=(a12*a80);
  a78=(a78-a3);
  a3=(a16*a79);
  a3=(a3*a77);
  a80=(a16*a80);
  a3=(a3-a80);
  a80=(a19*a3);
  a80=(a78+a80);
  a77=(a14*a82);
  a83=(a13*a76);
  a77=(a77-a83);
  a4=(a81*a4);
  a77=(a77+a4);
  a77=(a16*a77);
  a4=(a12*a79);
  a4=(a4*a79);
  a79=(a16*a79);
  a79=(a79*a81);
  a4=(a4+a79);
  a77=(a77-a4);
  a4=(a21*a77);
  a80=(a80+a4);
  a1=(a1+a80);
  a69=(a69-a1);
  a80=(a68*a69);
  a52=(a52/a57);
  a4=(a28*a2);
  a4=(a4*a0);
  a79=(a28*a75);
  a4=(a4-a79);
  a79=(a2+a5);
  a81=(a31*a79);
  a83=(a34*a2);
  a84=(a29*a71);
  a83=(a83+a84);
  a84=(a30*a0);
  a83=(a83+a84);
  a81=(a81*a83);
  a84=(a30*a75);
  a85=(a29*a73);
  a84=(a84+a85);
  a85=(a83*a5);
  a84=(a84+a85);
  a85=(a31*a84);
  a81=(a81-a85);
  a85=(a79+a6);
  a86=(a16*a85);
  a87=(a18*a79);
  a88=(a30*a71);
  a89=(a40*a2);
  a88=(a88-a89);
  a89=(a29*a0);
  a88=(a88-a89);
  a89=(a32*a88);
  a87=(a87+a89);
  a89=(a33*a83);
  a87=(a87+a89);
  a86=(a86*a87);
  a89=(a33*a84);
  a90=(a30*a73);
  a75=(a29*a75);
  a90=(a90-a75);
  a5=(a88*a5);
  a90=(a90+a5);
  a5=(a32*a90);
  a89=(a89+a5);
  a5=(a87*a6);
  a89=(a89+a5);
  a5=(a16*a89);
  a86=(a86-a5);
  a5=(a33*a86);
  a75=(a33*a90);
  a91=(a32*a84);
  a75=(a75-a91);
  a91=(a58*a79);
  a92=(a33*a88);
  a91=(a91+a92);
  a92=(a32*a83);
  a91=(a91-a92);
  a6=(a91*a6);
  a75=(a75+a6);
  a75=(a16*a75);
  a6=(a12*a85);
  a6=(a6*a85);
  a92=(a16*a85);
  a92=(a92*a91);
  a6=(a6+a92);
  a75=(a75-a6);
  a6=(a32*a75);
  a5=(a5+a6);
  a81=(a81+a5);
  a5=(a30*a81);
  a90=(a31*a90);
  a6=(a11*a79);
  a6=(a6*a79);
  a92=(a31*a79);
  a92=(a92*a88);
  a6=(a6+a92);
  a90=(a90-a6);
  a6=(a33*a75);
  a92=(a32*a86);
  a6=(a6-a92);
  a90=(a90+a6);
  a6=(a29*a90);
  a5=(a5+a6);
  a4=(a4+a5);
  a5=(a31*a72);
  a5=(a5*a70);
  a76=(a31*a76);
  a5=(a5-a76);
  a76=(a14*a3);
  a70=(a13*a77);
  a76=(a76+a70);
  a5=(a5+a76);
  a76=(a10*a5);
  a82=(a31*a82);
  a70=(a11*a72);
  a70=(a70*a72);
  a72=(a31*a72);
  a72=(a72*a74);
  a70=(a70+a72);
  a82=(a82-a70);
  a77=(a14*a77);
  a3=(a13*a3);
  a77=(a77-a3);
  a82=(a82+a77);
  a77=(a9*a82);
  a76=(a76+a77);
  a4=(a4+a76);
  a76=(a8*a4);
  a73=(a28*a73);
  a2=(a28*a2);
  a2=(a2*a71);
  a73=(a73-a2);
  a30=(a30*a90);
  a29=(a29*a81);
  a30=(a30-a29);
  a73=(a73+a30);
  a10=(a10*a82);
  a9=(a9*a5);
  a10=(a10-a9);
  a73=(a73+a10);
  a10=(a7*a73);
  a76=(a76+a10);
  a10=(a52*a76);
  a9=(a55/a57);
  a73=(a8*a73);
  a4=(a7*a4);
  a73=(a73-a4);
  a4=(a9*a73);
  a10=(a10+a4);
  a4=(a43/a57);
  a30=(a28*a0);
  a30=(a30*a71);
  a28=(a28*a71);
  a28=(a28*a0);
  a30=(a30-a28);
  a28=(a11*a83);
  a28=(a28*a79);
  a79=(a31*a83);
  a79=(a79*a88);
  a28=(a28+a79);
  a31=(a31*a88);
  a31=(a31*a83);
  a28=(a28-a31);
  a84=(a11*a84);
  a28=(a28-a84);
  a84=(a12*a87);
  a84=(a84*a85);
  a85=(a16*a87);
  a85=(a85*a91);
  a84=(a84+a85);
  a91=(a16*a91);
  a91=(a91*a87);
  a84=(a84-a91);
  a89=(a12*a89);
  a84=(a84-a89);
  a86=(a58*a86);
  a86=(a84+a86);
  a75=(a18*a75);
  a86=(a86+a75);
  a28=(a28+a86);
  a81=(a40*a81);
  a81=(a28-a81);
  a90=(a34*a90);
  a81=(a81+a90);
  a30=(a30+a81);
  a5=(a59*a5);
  a1=(a1-a5);
  a82=(a37*a82);
  a1=(a1+a82);
  a30=(a30+a1);
  a1=(a4*a30);
  a10=(a10+a1);
  a80=(a80-a10);
  a10=(a23/a57);
  a1=arg[1]? arg[1][1] : 0;
  a1=(a1-a78);
  a78=(a10*a1);
  a80=(a80+a78);
  a78=(a61/a57);
  a82=arg[1]? arg[1][2] : 0;
  a82=(a82-a28);
  a28=(a78*a82);
  a80=(a80+a28);
  a28=(a66/a57);
  a5=arg[1]? arg[1][3] : 0;
  a5=(a5-a84);
  a84=(a28*a5);
  a80=(a80+a84);
  a84=(a66*a52);
  a64=(a7*a64);
  a67=(a8*a67);
  a64=(a64+a67);
  a67=(a64*a9);
  a84=(a84-a67);
  a67=9.7228799999999997e-004;
  a81=(a12*a58);
  a81=(a67+a81);
  a63=(a40*a63);
  a63=(a81-a63);
  a65=(a34*a65);
  a63=(a63-a65);
  a65=(a63*a4);
  a84=(a84+a65);
  a65=(a81*a78);
  a84=(a84+a65);
  a65=(a67*a28);
  a84=(a84+a65);
  a65=(a84*a52);
  a66=(a66-a65);
  a65=(a55*a52);
  a56=(a8*a56);
  a54=(a7*a54);
  a56=(a56-a54);
  a56=(a56*a8);
  a49=(a8*a49);
  a41=(a7*a41);
  a49=(a49-a41);
  a49=(a49*a7);
  a56=(a56-a49);
  a49=(a56*a9);
  a65=(a65+a49);
  a17=(a8*a17);
  a36=(a7*a36);
  a17=(a17-a36);
  a36=(a17*a4);
  a65=(a65+a36);
  a27=(a8*a27);
  a22=(a7*a22);
  a27=(a27-a22);
  a22=(a27*a68);
  a65=(a65+a22);
  a53=(a7*a53);
  a46=(a8*a46);
  a53=(a53+a46);
  a46=(a53*a10);
  a65=(a65-a46);
  a8=(a8*a62);
  a7=(a7*a60);
  a8=(a8-a7);
  a7=(a8*a78);
  a65=(a65+a7);
  a7=(a64*a28);
  a65=(a65-a7);
  a7=(a65*a52);
  a55=(a55-a7);
  a7=casadi_sq(a55);
  a60=(a65*a9);
  a56=(a56-a60);
  a60=casadi_sq(a56);
  a7=(a7+a60);
  a60=(a65*a4);
  a60=(a17-a60);
  a62=casadi_sq(a60);
  a7=(a7+a62);
  a62=(a65*a68);
  a62=(a27-a62);
  a46=casadi_sq(a62);
  a7=(a7+a46);
  a46=(a65*a10);
  a46=(a53+a46);
  a22=casadi_sq(a46);
  a7=(a7+a22);
  a22=(a65*a78);
  a22=(a8-a22);
  a36=casadi_sq(a22);
  a7=(a7+a36);
  a36=(a65*a28);
  a36=(a64+a36);
  a49=casadi_sq(a36);
  a7=(a7+a49);
  a7=sqrt(a7);
  a55=(a55/a7);
  a49=(a66*a55);
  a41=(a84*a9);
  a64=(a64+a41);
  a56=(a56/a7);
  a41=(a64*a56);
  a49=(a49-a41);
  a41=(a84*a4);
  a41=(a63-a41);
  a60=(a60/a7);
  a54=(a41*a60);
  a49=(a49+a54);
  a54=(a84*a68);
  a62=(a62/a7);
  a90=(a54*a62);
  a49=(a49-a90);
  a90=(a84*a10);
  a46=(a46/a7);
  a86=(a90*a46);
  a49=(a49+a86);
  a86=(a84*a78);
  a86=(a81-a86);
  a22=(a22/a7);
  a75=(a86*a22);
  a49=(a49+a75);
  a75=(a84*a28);
  a75=(a67-a75);
  a36=(a36/a7);
  a89=(a75*a36);
  a49=(a49-a89);
  a89=(a49*a55);
  a66=(a66-a89);
  a89=(a43*a52);
  a91=(a17*a9);
  a89=(a89+a91);
  a91=1.1641900000000001e-001;
  a87=4.7131999999999999e-003;
  a85=(a12*a58);
  a85=(a67+a85);
  a31=(a16*a58);
  a31=(a12+a31);
  a58=(a31*a58);
  a85=(a85+a58);
  a58=(a16*a18);
  a18=(a58*a18);
  a85=(a85+a18);
  a85=(a87+a85);
  a18=(a40*a48);
  a18=(a85-a18);
  a83=(a34*a38);
  a18=(a18+a83);
  a83=(a31*a33);
  a88=(a58*a32);
  a83=(a83+a88);
  a83=(a11+a83);
  a35=(a40*a35);
  a83=(a83-a35);
  a39=(a34*a39);
  a83=(a83+a39);
  a83=(a83*a40);
  a18=(a18-a83);
  a58=(a58*a33);
  a31=(a31*a32);
  a58=(a58-a31);
  a42=(a40*a42);
  a58=(a58-a42);
  a44=(a34*a44);
  a58=(a58+a44);
  a58=(a58*a34);
  a18=(a18+a58);
  a91=(a91+a18);
  a18=(a12*a19);
  a18=(a67+a18);
  a58=(a16*a19);
  a58=(a12+a58);
  a44=(a58*a19);
  a18=(a18+a44);
  a16=(a16*a21);
  a21=(a16*a21);
  a18=(a18+a21);
  a87=(a87+a18);
  a18=(a59*a15);
  a18=(a87-a18);
  a21=(a37*a24);
  a18=(a18+a21);
  a21=(a58*a14);
  a44=(a16*a13);
  a21=(a21+a44);
  a11=(a11+a21);
  a45=(a59*a45);
  a11=(a11-a45);
  a47=(a37*a47);
  a11=(a11+a47);
  a11=(a11*a59);
  a18=(a18-a11);
  a16=(a16*a14);
  a58=(a58*a13);
  a16=(a16-a58);
  a20=(a59*a20);
  a16=(a16-a20);
  a26=(a37*a26);
  a16=(a16+a26);
  a16=(a16*a37);
  a18=(a18+a16);
  a91=(a91+a18);
  a18=(a91*a4);
  a89=(a89+a18);
  a15=(a59*a15);
  a15=(a87-a15);
  a24=(a37*a24);
  a15=(a15+a24);
  a24=(a15*a68);
  a89=(a89+a24);
  a12=(a12*a19);
  a12=(a67+a12);
  a59=(a59*a50);
  a59=(a12-a59);
  a37=(a37*a51);
  a59=(a59-a37);
  a37=(a59*a10);
  a89=(a89+a37);
  a40=(a40*a48);
  a40=(a85-a40);
  a34=(a34*a38);
  a40=(a40+a34);
  a34=(a40*a78);
  a89=(a89+a34);
  a34=(a63*a28);
  a89=(a89+a34);
  a34=(a89*a52);
  a43=(a43-a34);
  a34=(a43*a55);
  a38=(a89*a9);
  a17=(a17-a38);
  a38=(a17*a56);
  a34=(a34+a38);
  a38=(a89*a4);
  a91=(a91-a38);
  a38=(a91*a60);
  a34=(a34+a38);
  a38=(a89*a68);
  a38=(a15-a38);
  a48=(a38*a62);
  a34=(a34+a48);
  a48=(a89*a10);
  a48=(a59-a48);
  a37=(a48*a46);
  a34=(a34-a37);
  a37=(a89*a78);
  a37=(a40-a37);
  a51=(a37*a22);
  a34=(a34+a51);
  a51=(a89*a28);
  a63=(a63-a51);
  a51=(a63*a36);
  a34=(a34-a51);
  a51=(a34*a55);
  a43=(a43-a51);
  a51=casadi_sq(a43);
  a50=(a34*a56);
  a17=(a17-a50);
  a50=casadi_sq(a17);
  a51=(a51+a50);
  a50=(a34*a60);
  a91=(a91-a50);
  a50=casadi_sq(a91);
  a51=(a51+a50);
  a50=(a34*a62);
  a38=(a38-a50);
  a50=casadi_sq(a38);
  a51=(a51+a50);
  a50=(a34*a46);
  a48=(a48+a50);
  a50=casadi_sq(a48);
  a51=(a51+a50);
  a50=(a34*a22);
  a37=(a37-a50);
  a50=casadi_sq(a37);
  a51=(a51+a50);
  a50=(a34*a36);
  a63=(a63+a50);
  a50=casadi_sq(a63);
  a51=(a51+a50);
  a51=sqrt(a51);
  a43=(a43/a51);
  a50=(a66*a43);
  a19=(a49*a56);
  a64=(a64+a19);
  a17=(a17/a51);
  a19=(a64*a17);
  a50=(a50-a19);
  a19=(a49*a60);
  a41=(a41-a19);
  a91=(a91/a51);
  a19=(a41*a91);
  a50=(a50+a19);
  a19=(a49*a62);
  a54=(a54+a19);
  a38=(a38/a51);
  a19=(a54*a38);
  a50=(a50-a19);
  a19=(a49*a46);
  a19=(a19-a90);
  a48=(a48/a51);
  a90=(a19*a48);
  a50=(a50+a90);
  a90=(a49*a22);
  a86=(a86-a90);
  a37=(a37/a51);
  a90=(a86*a37);
  a50=(a50+a90);
  a90=(a49*a36);
  a75=(a75+a90);
  a63=(a63/a51);
  a90=(a75*a63);
  a50=(a50+a90);
  a90=(a50*a43);
  a66=(a66-a90);
  a90=(a25*a52);
  a24=(a27*a9);
  a90=(a90+a24);
  a24=(a15*a4);
  a90=(a90+a24);
  a24=(a87*a68);
  a90=(a90+a24);
  a24=(a12*a10);
  a90=(a90+a24);
  a24=(a90*a52);
  a25=(a25-a24);
  a24=(a25*a55);
  a18=(a90*a9);
  a27=(a27-a18);
  a18=(a27*a56);
  a24=(a24+a18);
  a18=(a90*a4);
  a15=(a15-a18);
  a18=(a15*a60);
  a24=(a24+a18);
  a18=(a90*a68);
  a87=(a87-a18);
  a18=(a87*a62);
  a24=(a24+a18);
  a18=(a90*a10);
  a18=(a12-a18);
  a16=(a18*a46);
  a24=(a24-a16);
  a16=(a90*a78);
  a26=(a16*a22);
  a24=(a24-a26);
  a26=(a90*a28);
  a20=(a26*a36);
  a24=(a24+a20);
  a20=(a24*a55);
  a25=(a25-a20);
  a20=(a25*a43);
  a58=(a24*a56);
  a27=(a27-a58);
  a58=(a27*a17);
  a20=(a20+a58);
  a58=(a24*a60);
  a15=(a15-a58);
  a58=(a15*a91);
  a20=(a20+a58);
  a58=(a24*a62);
  a87=(a87-a58);
  a58=(a87*a38);
  a20=(a20+a58);
  a58=(a24*a46);
  a18=(a18+a58);
  a58=(a18*a48);
  a20=(a20+a58);
  a58=(a24*a22);
  a16=(a16+a58);
  a58=(a16*a37);
  a20=(a20-a58);
  a58=(a24*a36);
  a58=(a58-a26);
  a26=(a58*a63);
  a20=(a20+a26);
  a26=(a20*a43);
  a25=(a25-a26);
  a26=casadi_sq(a25);
  a13=(a20*a17);
  a27=(a27-a13);
  a13=casadi_sq(a27);
  a26=(a26+a13);
  a13=(a20*a91);
  a15=(a15-a13);
  a13=casadi_sq(a15);
  a26=(a26+a13);
  a13=(a20*a38);
  a87=(a87-a13);
  a13=casadi_sq(a87);
  a26=(a26+a13);
  a13=(a20*a48);
  a18=(a18-a13);
  a13=casadi_sq(a18);
  a26=(a26+a13);
  a13=(a20*a37);
  a16=(a16+a13);
  a13=casadi_sq(a16);
  a26=(a26+a13);
  a13=(a20*a63);
  a58=(a58-a13);
  a13=casadi_sq(a58);
  a26=(a26+a13);
  a26=sqrt(a26);
  a25=(a25/a26);
  a13=(a66*a25);
  a14=(a50*a17);
  a64=(a64+a14);
  a27=(a27/a26);
  a14=(a64*a27);
  a13=(a13-a14);
  a14=(a50*a91);
  a41=(a41-a14);
  a15=(a15/a26);
  a14=(a41*a15);
  a13=(a13+a14);
  a14=(a50*a38);
  a54=(a54+a14);
  a87=(a87/a26);
  a14=(a54*a87);
  a13=(a13-a14);
  a14=(a50*a48);
  a19=(a19-a14);
  a18=(a18/a26);
  a14=(a19*a18);
  a13=(a13+a14);
  a14=(a50*a37);
  a86=(a86-a14);
  a16=(a16/a26);
  a14=(a86*a16);
  a13=(a13-a14);
  a14=(a50*a63);
  a75=(a75-a14);
  a58=(a58/a26);
  a14=(a75*a58);
  a13=(a13+a14);
  a14=(a13*a25);
  a66=(a66-a14);
  a14=(a23*a52);
  a11=(a53*a9);
  a14=(a14-a11);
  a11=(a59*a4);
  a14=(a14+a11);
  a11=(a12*a68);
  a14=(a14+a11);
  a11=(a67*a10);
  a14=(a14+a11);
  a11=(a14*a52);
  a23=(a23-a11);
  a11=(a23*a55);
  a47=(a14*a9);
  a53=(a53+a47);
  a47=(a53*a56);
  a11=(a11-a47);
  a47=(a14*a4);
  a59=(a59-a47);
  a47=(a59*a60);
  a11=(a11+a47);
  a47=(a14*a68);
  a12=(a12-a47);
  a47=(a12*a62);
  a11=(a11+a47);
  a47=(a14*a10);
  a67=(a67-a47);
  a47=(a67*a46);
  a11=(a11-a47);
  a47=(a14*a78);
  a45=(a47*a22);
  a11=(a11-a45);
  a45=(a14*a28);
  a21=(a45*a36);
  a11=(a11+a21);
  a21=(a11*a55);
  a23=(a23-a21);
  a21=(a23*a43);
  a44=(a11*a56);
  a53=(a53+a44);
  a44=(a53*a17);
  a21=(a21-a44);
  a44=(a11*a60);
  a59=(a59-a44);
  a44=(a59*a91);
  a21=(a21+a44);
  a44=(a11*a62);
  a12=(a12-a44);
  a44=(a12*a38);
  a21=(a21+a44);
  a44=(a11*a46);
  a67=(a67+a44);
  a44=(a67*a48);
  a21=(a21+a44);
  a44=(a11*a22);
  a47=(a47+a44);
  a44=(a47*a37);
  a21=(a21-a44);
  a44=(a11*a36);
  a44=(a44-a45);
  a45=(a44*a63);
  a21=(a21+a45);
  a45=(a21*a43);
  a23=(a23-a45);
  a45=(a23*a25);
  a42=(a21*a17);
  a53=(a53+a42);
  a42=(a53*a27);
  a45=(a45-a42);
  a42=(a21*a91);
  a59=(a59-a42);
  a42=(a59*a15);
  a45=(a45+a42);
  a42=(a21*a38);
  a12=(a12-a42);
  a42=(a12*a87);
  a45=(a45+a42);
  a42=(a21*a48);
  a67=(a67-a42);
  a42=(a67*a18);
  a45=(a45+a42);
  a42=(a21*a37);
  a47=(a47+a42);
  a42=(a47*a16);
  a45=(a45+a42);
  a42=(a21*a63);
  a44=(a44-a42);
  a42=(a44*a58);
  a45=(a45+a42);
  a42=(a45*a25);
  a23=(a23-a42);
  a42=casadi_sq(a23);
  a31=(a45*a27);
  a53=(a53+a31);
  a31=casadi_sq(a53);
  a42=(a42+a31);
  a31=(a45*a15);
  a59=(a59-a31);
  a31=casadi_sq(a59);
  a42=(a42+a31);
  a31=(a45*a87);
  a12=(a12-a31);
  a31=casadi_sq(a12);
  a42=(a42+a31);
  a31=(a45*a18);
  a67=(a67-a31);
  a31=casadi_sq(a67);
  a42=(a42+a31);
  a31=(a45*a16);
  a31=(a31-a47);
  a47=casadi_sq(a31);
  a42=(a42+a47);
  a47=(a45*a58);
  a44=(a44-a47);
  a47=casadi_sq(a44);
  a42=(a42+a47);
  a42=sqrt(a42);
  a23=(a23/a42);
  a47=(a66*a23);
  a32=(a13*a27);
  a64=(a64+a32);
  a53=(a53/a42);
  a32=(a64*a53);
  a47=(a47+a32);
  a32=(a13*a15);
  a41=(a41-a32);
  a59=(a59/a42);
  a32=(a41*a59);
  a47=(a47+a32);
  a32=(a13*a87);
  a54=(a54+a32);
  a12=(a12/a42);
  a32=(a54*a12);
  a47=(a47-a32);
  a32=(a13*a18);
  a19=(a19-a32);
  a67=(a67/a42);
  a32=(a19*a67);
  a47=(a47+a32);
  a32=(a13*a16);
  a86=(a86+a32);
  a31=(a31/a42);
  a32=(a86*a31);
  a47=(a47+a32);
  a32=(a13*a58);
  a75=(a75-a32);
  a44=(a44/a42);
  a32=(a75*a44);
  a47=(a47+a32);
  a32=(a47*a23);
  a66=(a66-a32);
  a32=(a61*a52);
  a33=(a8*a9);
  a32=(a32+a33);
  a33=(a40*a4);
  a32=(a32+a33);
  a33=(a85*a78);
  a32=(a32+a33);
  a33=(a81*a28);
  a32=(a32+a33);
  a52=(a32*a52);
  a61=(a61-a52);
  a52=(a61*a55);
  a9=(a32*a9);
  a8=(a8-a9);
  a9=(a8*a56);
  a52=(a52+a9);
  a4=(a32*a4);
  a40=(a40-a4);
  a4=(a40*a60);
  a52=(a52+a4);
  a68=(a32*a68);
  a4=(a68*a62);
  a52=(a52-a4);
  a10=(a32*a10);
  a4=(a10*a46);
  a52=(a52+a4);
  a78=(a32*a78);
  a85=(a85-a78);
  a78=(a85*a22);
  a52=(a52+a78);
  a28=(a32*a28);
  a81=(a81-a28);
  a28=(a81*a36);
  a52=(a52-a28);
  a28=(a52*a55);
  a61=(a61-a28);
  a28=(a61*a43);
  a78=(a52*a56);
  a8=(a8-a78);
  a78=(a8*a17);
  a28=(a28+a78);
  a78=(a52*a60);
  a40=(a40-a78);
  a78=(a40*a91);
  a28=(a28+a78);
  a78=(a52*a62);
  a68=(a68+a78);
  a78=(a68*a38);
  a28=(a28-a78);
  a78=(a52*a46);
  a78=(a78-a10);
  a10=(a78*a48);
  a28=(a28+a10);
  a10=(a52*a22);
  a85=(a85-a10);
  a10=(a85*a37);
  a28=(a28+a10);
  a10=(a52*a36);
  a81=(a81+a10);
  a10=(a81*a63);
  a28=(a28+a10);
  a10=(a28*a43);
  a61=(a61-a10);
  a10=(a61*a25);
  a4=(a28*a17);
  a8=(a8-a4);
  a4=(a8*a27);
  a10=(a10+a4);
  a4=(a28*a91);
  a40=(a40-a4);
  a4=(a40*a15);
  a10=(a10+a4);
  a4=(a28*a38);
  a68=(a68+a4);
  a4=(a68*a87);
  a10=(a10-a4);
  a4=(a28*a48);
  a78=(a78-a4);
  a4=(a78*a18);
  a10=(a10+a4);
  a4=(a28*a37);
  a85=(a85-a4);
  a4=(a85*a16);
  a10=(a10-a4);
  a4=(a28*a63);
  a81=(a81-a4);
  a4=(a81*a58);
  a10=(a10+a4);
  a4=(a10*a25);
  a61=(a61-a4);
  a4=(a61*a23);
  a9=(a10*a27);
  a8=(a8-a9);
  a9=(a8*a53);
  a4=(a4-a9);
  a9=(a10*a15);
  a40=(a40-a9);
  a9=(a40*a59);
  a4=(a4+a9);
  a9=(a10*a87);
  a68=(a68+a9);
  a9=(a68*a12);
  a4=(a4-a9);
  a9=(a10*a18);
  a78=(a78-a9);
  a9=(a78*a67);
  a4=(a4+a9);
  a9=(a10*a16);
  a85=(a85+a9);
  a9=(a85*a31);
  a4=(a4+a9);
  a9=(a10*a58);
  a81=(a81-a9);
  a9=(a81*a44);
  a4=(a4+a9);
  a9=(a4*a23);
  a61=(a61-a9);
  a9=casadi_sq(a61);
  a33=(a4*a53);
  a8=(a8+a33);
  a33=casadi_sq(a8);
  a9=(a9+a33);
  a33=(a4*a59);
  a40=(a40-a33);
  a33=casadi_sq(a40);
  a9=(a9+a33);
  a33=(a4*a12);
  a68=(a68+a33);
  a33=casadi_sq(a68);
  a9=(a9+a33);
  a33=(a4*a67);
  a78=(a78-a33);
  a33=casadi_sq(a78);
  a9=(a9+a33);
  a33=(a4*a31);
  a85=(a85-a33);
  a33=casadi_sq(a85);
  a9=(a9+a33);
  a33=(a4*a44);
  a81=(a81-a33);
  a33=casadi_sq(a81);
  a9=(a9+a33);
  a9=sqrt(a9);
  a61=(a61/a9);
  a33=(a66*a61);
  a83=(a47*a53);
  a83=(a83-a64);
  a8=(a8/a9);
  a64=(a83*a8);
  a33=(a33+a64);
  a64=(a47*a59);
  a41=(a41-a64);
  a40=(a40/a9);
  a64=(a41*a40);
  a33=(a33+a64);
  a64=(a47*a12);
  a54=(a54+a64);
  a68=(a68/a9);
  a64=(a54*a68);
  a33=(a33+a64);
  a64=(a47*a67);
  a19=(a19-a64);
  a78=(a78/a9);
  a64=(a19*a78);
  a33=(a33+a64);
  a64=(a47*a31);
  a86=(a86-a64);
  a85=(a85/a9);
  a64=(a86*a85);
  a33=(a33+a64);
  a64=(a47*a44);
  a75=(a75-a64);
  a81=(a81/a9);
  a64=(a75*a81);
  a33=(a33+a64);
  a64=(a33*a68);
  a64=(a64-a54);
  a54=(a33*a61);
  a66=(a66-a54);
  a54=casadi_sq(a66);
  a39=(a33*a8);
  a83=(a83-a39);
  a39=casadi_sq(a83);
  a54=(a54+a39);
  a39=(a33*a40);
  a41=(a41-a39);
  a39=casadi_sq(a41);
  a54=(a54+a39);
  a39=casadi_sq(a64);
  a54=(a54+a39);
  a39=(a33*a78);
  a19=(a19-a39);
  a39=casadi_sq(a19);
  a54=(a54+a39);
  a39=(a33*a85);
  a86=(a86-a39);
  a39=casadi_sq(a86);
  a54=(a54+a39);
  a39=(a33*a81);
  a75=(a75-a39);
  a39=casadi_sq(a75);
  a54=(a54+a39);
  a54=sqrt(a54);
  a64=(a64/a54);
  a64=(a64*a69);
  a66=(a66/a54);
  a66=(a66*a76);
  a83=(a83/a54);
  a83=(a83*a73);
  a66=(a66+a83);
  a41=(a41/a54);
  a41=(a41*a30);
  a66=(a66+a41);
  a64=(a64-a66);
  a19=(a19/a54);
  a19=(a19*a1);
  a64=(a64+a19);
  a86=(a86/a54);
  a86=(a86*a82);
  a64=(a64+a86);
  a75=(a75/a54);
  a75=(a75*a5);
  a64=(a64+a75);
  a64=(a64/a54);
  a84=(a84*a64);
  a80=(a80-a84);
  a78=(a78*a1);
  a61=(a61*a76);
  a8=(a8*a73);
  a61=(a61+a8);
  a40=(a40*a30);
  a61=(a61+a40);
  a68=(a68*a69);
  a61=(a61+a68);
  a78=(a78-a61);
  a85=(a85*a82);
  a78=(a78+a85);
  a81=(a81*a5);
  a78=(a78+a81);
  a33=(a33*a64);
  a78=(a78-a33);
  a78=(a78/a9);
  a32=(a32*a78);
  a80=(a80-a32);
  a53=(a53*a73);
  a23=(a23*a76);
  a53=(a53-a23);
  a59=(a59*a30);
  a53=(a53-a59);
  a12=(a12*a69);
  a53=(a53+a12);
  a67=(a67*a1);
  a53=(a53+a67);
  a31=(a31*a82);
  a53=(a53+a31);
  a44=(a44*a5);
  a53=(a53+a44);
  a47=(a47*a64);
  a53=(a53-a47);
  a4=(a4*a78);
  a53=(a53-a4);
  a53=(a53/a42);
  a14=(a14*a53);
  a80=(a80-a14);
  a87=(a87*a69);
  a25=(a25*a76);
  a27=(a27*a73);
  a25=(a25+a27);
  a15=(a15*a30);
  a25=(a25+a15);
  a87=(a87-a25);
  a18=(a18*a1);
  a87=(a87+a18);
  a16=(a16*a82);
  a87=(a87-a16);
  a58=(a58*a5);
  a87=(a87+a58);
  a13=(a13*a64);
  a87=(a87-a13);
  a10=(a10*a78);
  a87=(a87-a10);
  a45=(a45*a53);
  a87=(a87-a45);
  a87=(a87/a26);
  a90=(a90*a87);
  a80=(a80-a90);
  a38=(a38*a69);
  a43=(a43*a76);
  a17=(a17*a73);
  a43=(a43+a17);
  a91=(a91*a30);
  a43=(a43+a91);
  a38=(a38-a43);
  a48=(a48*a1);
  a38=(a38+a48);
  a37=(a37*a82);
  a38=(a38+a37);
  a63=(a63*a5);
  a38=(a38+a63);
  a50=(a50*a64);
  a38=(a38-a50);
  a28=(a28*a78);
  a38=(a38-a28);
  a21=(a21*a53);
  a38=(a38-a21);
  a20=(a20*a87);
  a38=(a38-a20);
  a38=(a38/a51);
  a89=(a89*a38);
  a80=(a80-a89);
  a62=(a62*a69);
  a55=(a55*a76);
  a56=(a56*a73);
  a55=(a55+a56);
  a60=(a60*a30);
  a55=(a55+a60);
  a62=(a62-a55);
  a46=(a46*a1);
  a62=(a62-a46);
  a22=(a22*a82);
  a62=(a62+a22);
  a36=(a36*a5);
  a62=(a62-a36);
  a49=(a49*a64);
  a62=(a62-a49);
  a52=(a52*a78);
  a62=(a62-a52);
  a11=(a11*a53);
  a62=(a62-a11);
  a24=(a24*a87);
  a62=(a62-a24);
  a34=(a34*a38);
  a62=(a62-a34);
  a62=(a62/a7);
  a65=(a65*a62);
  a80=(a80-a65);
  a80=(a80/a57);
  if (res[0]!=0) res[0][7]=a80;
  if (res[0]!=0) res[0][8]=a62;
  if (res[0]!=0) res[0][9]=a38;
  if (res[0]!=0) res[0][10]=a87;
  if (res[0]!=0) res[0][11]=a53;
  if (res[0]!=0) res[0][12]=a78;
  if (res[0]!=0) res[0][13]=a64;
  a64=0.;
  if (res[1]!=0) res[1][0]=a64;
  if (res[1]!=0) res[1][1]=a64;
  if (res[1]!=0) res[1][2]=a64;
  if (res[1]!=0) res[1][3]=a64;
  return 0;
}

CASADI_SYMBOL_EXPORT int Dyn_FL(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int Dyn_FL_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int Dyn_FL_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Dyn_FL_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int Dyn_FL_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Dyn_FL_release(int mem) {
}

CASADI_SYMBOL_EXPORT void Dyn_FL_incref(void) {
}

CASADI_SYMBOL_EXPORT void Dyn_FL_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int Dyn_FL_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int Dyn_FL_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_real Dyn_FL_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Dyn_FL_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Dyn_FL_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Dyn_FL_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Dyn_FL_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int Dyn_FL_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
