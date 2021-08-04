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
  #define CASADI_PREFIX(ID) Imp_B_ ## ID
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

/* Imp_B:(i0[14])->(o0[14],o1[4]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a12, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a13, a130, a131, a132, a133, a134, a135, a136, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=arg[0]? arg[0][0] : 0;
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0]? arg[0][1] : 0;
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0]? arg[0][2] : 0;
  if (res[0]!=0) res[0][2]=a0;
  a1=arg[0]? arg[0][3] : 0;
  if (res[0]!=0) res[0][3]=a1;
  a2=arg[0]? arg[0][4] : 0;
  if (res[0]!=0) res[0][4]=a2;
  a3=arg[0]? arg[0][5] : 0;
  if (res[0]!=0) res[0][5]=a3;
  a4=arg[0]? arg[0][6] : 0;
  if (res[0]!=0) res[0][6]=a4;
  a5=cos(a0);
  a6=5.4600000000000000e+000;
  a7=cos(a3);
  a8=1.2680000000000000e+000;
  a9=1.2800000000000000e-001;
  a10=cos(a4);
  a11=(a9*a10);
  a12=(a11*a10);
  a13=sin(a4);
  a14=(a9*a13);
  a15=(a14*a13);
  a12=(a12+a15);
  a12=(a8+a12);
  a15=(a7*a12);
  a16=sin(a3);
  a17=(a9*a10);
  a18=(a17*a13);
  a19=(a9*a13);
  a20=(a19*a10);
  a18=(a18-a20);
  a20=(a16*a18);
  a15=(a15+a20);
  a20=(a15*a7);
  a21=(a14*a10);
  a22=(a11*a13);
  a21=(a21-a22);
  a22=(a7*a21);
  a23=(a19*a13);
  a24=(a17*a10);
  a23=(a23+a24);
  a23=(a8+a23);
  a24=(a16*a23);
  a22=(a22+a24);
  a24=(a22*a16);
  a20=(a20+a24);
  a20=(a6+a20);
  a24=cos(a1);
  a25=cos(a2);
  a26=(a9*a25);
  a27=(a26*a25);
  a2=sin(a2);
  a28=(a9*a2);
  a29=(a28*a2);
  a27=(a27+a29);
  a27=(a8+a27);
  a29=(a24*a27);
  a1=sin(a1);
  a30=(a9*a25);
  a31=(a30*a2);
  a32=(a9*a2);
  a33=(a32*a25);
  a31=(a31-a33);
  a33=(a1*a31);
  a29=(a29+a33);
  a33=(a29*a24);
  a34=(a28*a25);
  a35=(a26*a2);
  a34=(a34-a35);
  a35=(a24*a34);
  a36=(a32*a2);
  a37=(a30*a25);
  a36=(a36+a37);
  a8=(a8+a36);
  a36=(a1*a8);
  a35=(a35+a36);
  a36=(a35*a1);
  a33=(a33+a36);
  a20=(a20+a33);
  a33=(a5*a20);
  a36=sin(a0);
  a37=(a7*a18);
  a38=(a16*a12);
  a37=(a37-a38);
  a38=(a37*a7);
  a39=(a7*a23);
  a40=(a16*a21);
  a39=(a39-a40);
  a40=(a39*a16);
  a38=(a38+a40);
  a40=(a24*a31);
  a41=(a1*a27);
  a40=(a40-a41);
  a41=(a40*a24);
  a42=(a24*a8);
  a43=(a1*a34);
  a42=(a42-a43);
  a43=(a42*a1);
  a41=(a41+a43);
  a38=(a38+a41);
  a41=(a36*a38);
  a33=(a33+a41);
  a41=(a33*a5);
  a43=(a22*a7);
  a44=(a15*a16);
  a43=(a43-a44);
  a44=(a35*a24);
  a45=(a29*a1);
  a44=(a44-a45);
  a43=(a43+a44);
  a44=(a5*a43);
  a45=(a39*a7);
  a46=(a37*a16);
  a45=(a45-a46);
  a6=(a6+a45);
  a45=(a42*a24);
  a46=(a40*a1);
  a45=(a45-a46);
  a6=(a6+a45);
  a45=(a36*a6);
  a44=(a44+a45);
  a45=(a44*a36);
  a41=(a41+a45);
  a45=-1.;
  a46=1.;
  a47=-1.9500000000000001e-001;
  a48=cos(a4);
  a49=cos(a3);
  a50=cos(a0);
  a51=(a49*a50);
  a52=sin(a3);
  a53=sin(a0);
  a54=(a52*a53);
  a51=(a51-a54);
  a54=(a48*a51);
  a55=sin(a4);
  a56=cos(a3);
  a57=(a56*a53);
  a58=sin(a3);
  a50=(a58*a50);
  a57=(a57+a50);
  a57=(a55*a57);
  a54=(a54-a57);
  a54=(a47*a54);
  a57=-2.0899999999999999e-001;
  a51=(a57*a51);
  a50=-1.9000000000000000e-001;
  a53=(a50*a53);
  a51=(a51-a53);
  a54=(a54+a51);
  a51=casadi_sq(a54);
  a51=(a46+a51);
  a53=cos(a0);
  a59=cos(a3);
  a60=(a53*a59);
  a61=sin(a0);
  a62=sin(a3);
  a63=(a61*a62);
  a60=(a60-a63);
  a63=(a48*a60);
  a64=sin(a3);
  a65=(a53*a64);
  a3=cos(a3);
  a66=(a61*a3);
  a65=(a65+a66);
  a65=(a55*a65);
  a63=(a63-a65);
  a63=(a47*a63);
  a60=(a57*a60);
  a63=(a63+a60);
  a60=casadi_sq(a63);
  a51=(a51+a60);
  a60=(a53*a56);
  a65=(a61*a58);
  a60=(a60-a65);
  a65=cos(a4);
  a60=(a60*a65);
  a53=(a53*a52);
  a61=(a61*a49);
  a53=(a53+a61);
  a4=sin(a4);
  a53=(a53*a4);
  a60=(a60-a53);
  a60=(a47*a60);
  a53=casadi_sq(a60);
  a51=(a51+a53);
  a51=sqrt(a51);
  a53=(a45/a51);
  a61=(a41*a53);
  a66=-2.5360000000000001e-002;
  a67=-7.8079999999999998e-003;
  a68=(a67*a10);
  a69=(a57*a10);
  a11=(a11*a69);
  a68=(a68+a11);
  a11=(a57*a13);
  a14=(a14*a11);
  a68=(a68+a14);
  a68=(a66+a68);
  a14=(a7*a68);
  a17=(a17*a11);
  a70=(a67*a13);
  a19=(a19*a69);
  a70=(a70+a19);
  a17=(a17-a70);
  a70=(a16*a17);
  a14=(a14+a70);
  a70=1.9000000000000000e-001;
  a19=(a70*a16);
  a15=(a15*a19);
  a14=(a14-a15);
  a70=(a70*a7);
  a22=(a22*a70);
  a14=(a14+a22);
  a22=(a67*a25);
  a15=(a57*a25);
  a26=(a26*a15);
  a22=(a22+a26);
  a26=(a57*a2);
  a28=(a28*a26);
  a22=(a22+a28);
  a22=(a66+a22);
  a28=(a24*a22);
  a30=(a30*a26);
  a71=(a67*a2);
  a32=(a32*a15);
  a71=(a71+a32);
  a30=(a30-a71);
  a71=(a1*a30);
  a28=(a28+a71);
  a71=(a50*a1);
  a29=(a29*a71);
  a28=(a28-a29);
  a29=(a50*a24);
  a35=(a35*a29);
  a28=(a28+a35);
  a14=(a14+a28);
  a28=(a5*a14);
  a35=(a7*a17);
  a32=(a16*a68);
  a35=(a35-a32);
  a37=(a37*a19);
  a35=(a35-a37);
  a39=(a39*a70);
  a35=(a35+a39);
  a39=(a24*a30);
  a37=(a1*a22);
  a39=(a39-a37);
  a40=(a40*a71);
  a39=(a39-a40);
  a42=(a42*a29);
  a39=(a39+a42);
  a35=(a35+a39);
  a39=(a36*a35);
  a28=(a28+a39);
  a39=(a54/a51);
  a42=(a28*a39);
  a61=(a61-a42);
  a42=(a7*a68);
  a40=(a16*a17);
  a42=(a42+a40);
  a40=(a5*a42);
  a37=(a7*a17);
  a32=(a16*a68);
  a37=(a37-a32);
  a32=(a36*a37);
  a40=(a40+a32);
  a32=(a63/a51);
  a72=(a40*a32);
  a61=(a61-a72);
  a72=(a67*a10);
  a73=(a7*a72);
  a74=(a67*a13);
  a75=(a16*a74);
  a73=(a73-a75);
  a75=(a5*a73);
  a16=(a16*a72);
  a7=(a7*a74);
  a16=(a16+a7);
  a7=(a36*a16);
  a75=(a75-a7);
  a7=(a60/a51);
  a76=(a75*a7);
  a61=(a61-a76);
  a76=(a61*a53);
  a76=(a41-a76);
  a77=sin(a0);
  a78=(a49*a77);
  a79=cos(a0);
  a80=(a52*a79);
  a78=(a78+a80);
  a80=(a48*a78);
  a81=(a56*a79);
  a77=(a58*a77);
  a81=(a81-a77);
  a81=(a55*a81);
  a80=(a80+a81);
  a80=(a47*a80);
  a78=(a57*a78);
  a50=(a50*a79);
  a78=(a78+a50);
  a80=(a80+a78);
  a78=(a80*a39);
  a50=cos(a0);
  a62=(a50*a62);
  a0=sin(a0);
  a59=(a0*a59);
  a62=(a62+a59);
  a48=(a48*a62);
  a3=(a50*a3);
  a64=(a0*a64);
  a3=(a3-a64);
  a55=(a55*a3);
  a48=(a48+a55);
  a48=(a47*a48);
  a57=(a57*a62);
  a48=(a48+a57);
  a57=(a48*a32);
  a78=(a78+a57);
  a49=(a50*a49);
  a52=(a0*a52);
  a49=(a49-a52);
  a49=(a49*a4);
  a0=(a0*a56);
  a50=(a50*a58);
  a0=(a0+a50);
  a0=(a0*a65);
  a49=(a49+a0);
  a47=(a47*a49);
  a49=(a47*a7);
  a78=(a78+a49);
  a49=(a78*a53);
  a0=casadi_sq(a49);
  a0=(a0+a46);
  a65=(a78*a39);
  a65=(a80-a65);
  a50=casadi_sq(a65);
  a0=(a0+a50);
  a50=(a78*a32);
  a50=(a48-a50);
  a58=casadi_sq(a50);
  a0=(a0+a58);
  a58=(a78*a7);
  a58=(a47-a58);
  a56=casadi_sq(a58);
  a0=(a0+a56);
  a0=sqrt(a0);
  a49=(a49/a0);
  a56=(a76*a49);
  a44=(a44*a5);
  a33=(a33*a36);
  a44=(a44-a33);
  a45=(a45/a0);
  a33=(a44*a45);
  a56=(a56+a33);
  a33=(a61*a39);
  a33=(a28+a33);
  a65=(a65/a0);
  a4=(a33*a65);
  a56=(a56+a4);
  a4=(a61*a32);
  a4=(a40+a4);
  a50=(a50/a0);
  a52=(a4*a50);
  a56=(a56+a52);
  a52=(a61*a7);
  a52=(a75+a52);
  a58=(a58/a0);
  a57=(a52*a58);
  a56=(a56+a57);
  a57=(a56*a49);
  a76=(a76-a57);
  a57=(a28*a53);
  a62=1.1641900000000001e-001;
  a55=4.7131999999999999e-003;
  a3=9.7228799999999997e-004;
  a64=(a67*a69);
  a64=(a3+a64);
  a59=(a9*a69);
  a59=(a67+a59);
  a79=(a59*a69);
  a64=(a64+a79);
  a79=(a9*a11);
  a11=(a79*a11);
  a64=(a64+a11);
  a64=(a55+a64);
  a11=(a19*a68);
  a11=(a64-a11);
  a81=(a70*a17);
  a11=(a11+a81);
  a81=(a59*a10);
  a77=(a79*a13);
  a81=(a81+a77);
  a81=(a66+a81);
  a12=(a19*a12);
  a81=(a81-a12);
  a18=(a70*a18);
  a81=(a81+a18);
  a81=(a81*a19);
  a11=(a11-a81);
  a79=(a79*a10);
  a59=(a59*a13);
  a79=(a79-a59);
  a21=(a19*a21);
  a79=(a79-a21);
  a23=(a70*a23);
  a79=(a79+a23);
  a79=(a79*a70);
  a11=(a11+a79);
  a62=(a62+a11);
  a11=(a67*a15);
  a11=(a3+a11);
  a79=(a9*a15);
  a79=(a67+a79);
  a23=(a79*a15);
  a11=(a11+a23);
  a9=(a9*a26);
  a26=(a9*a26);
  a11=(a11+a26);
  a55=(a55+a11);
  a11=(a71*a22);
  a11=(a55-a11);
  a26=(a29*a30);
  a11=(a11+a26);
  a26=(a79*a25);
  a23=(a9*a2);
  a26=(a26+a23);
  a66=(a66+a26);
  a27=(a71*a27);
  a66=(a66-a27);
  a31=(a29*a31);
  a66=(a66+a31);
  a66=(a66*a71);
  a11=(a11-a66);
  a9=(a9*a25);
  a79=(a79*a2);
  a9=(a9-a79);
  a34=(a71*a34);
  a9=(a9-a34);
  a8=(a29*a8);
  a9=(a9+a8);
  a9=(a9*a29);
  a11=(a11+a9);
  a62=(a62+a11);
  a11=(a62*a39);
  a57=(a57-a11);
  a68=(a19*a68);
  a68=(a64-a68);
  a17=(a70*a17);
  a68=(a68+a17);
  a17=(a68*a32);
  a57=(a57-a17);
  a69=(a67*a69);
  a69=(a3+a69);
  a19=(a19*a72);
  a19=(a69-a19);
  a70=(a70*a74);
  a19=(a19-a70);
  a70=(a19*a7);
  a57=(a57-a70);
  a70=(a57*a53);
  a70=(a28-a70);
  a74=(a70*a49);
  a35=(a5*a35);
  a14=(a36*a14);
  a35=(a35-a14);
  a14=(a35*a45);
  a74=(a74+a14);
  a14=(a57*a39);
  a14=(a62+a14);
  a72=(a14*a65);
  a74=(a74+a72);
  a72=(a57*a32);
  a72=(a68+a72);
  a17=(a72*a50);
  a74=(a74+a17);
  a17=(a57*a7);
  a17=(a19+a17);
  a11=(a17*a58);
  a74=(a74+a11);
  a11=(a74*a49);
  a70=(a70-a11);
  a11=casadi_sq(a70);
  a9=(a74*a45);
  a9=(a35-a9);
  a8=casadi_sq(a9);
  a11=(a11+a8);
  a8=(a74*a65);
  a14=(a14-a8);
  a8=casadi_sq(a14);
  a11=(a11+a8);
  a8=(a71*a22);
  a8=(a55-a8);
  a34=(a29*a30);
  a8=(a8+a34);
  a34=casadi_sq(a8);
  a11=(a11+a34);
  a15=(a67*a15);
  a15=(a3+a15);
  a25=(a67*a25);
  a71=(a71*a25);
  a71=(a15-a71);
  a67=(a67*a2);
  a29=(a29*a67);
  a71=(a71-a29);
  a29=casadi_sq(a71);
  a11=(a11+a29);
  a29=(a74*a50);
  a72=(a72-a29);
  a29=casadi_sq(a72);
  a11=(a11+a29);
  a29=(a74*a58);
  a17=(a17-a29);
  a29=casadi_sq(a17);
  a11=(a11+a29);
  a29=casadi_sq(a54);
  a11=(a11+a29);
  a29=casadi_sq(a80);
  a11=(a11+a29);
  a11=sqrt(a11);
  a70=(a70/a11);
  a29=(a76*a70);
  a2=(a56*a45);
  a2=(a44-a2);
  a9=(a9/a11);
  a34=(a2*a9);
  a29=(a29+a34);
  a34=(a56*a65);
  a33=(a33-a34);
  a14=(a14/a11);
  a34=(a33*a14);
  a29=(a29+a34);
  a34=(a24*a22);
  a79=(a1*a30);
  a34=(a34+a79);
  a79=(a5*a34);
  a30=(a24*a30);
  a22=(a1*a22);
  a30=(a30-a22);
  a22=(a36*a30);
  a79=(a79+a22);
  a22=(a8/a11);
  a66=(a79*a22);
  a29=(a29+a66);
  a66=(a24*a25);
  a31=(a1*a67);
  a66=(a66-a31);
  a31=(a5*a66);
  a1=(a1*a25);
  a24=(a24*a67);
  a1=(a1+a24);
  a24=(a36*a1);
  a31=(a31-a24);
  a24=(a71/a11);
  a67=(a31*a24);
  a29=(a29+a67);
  a67=(a56*a50);
  a4=(a4-a67);
  a72=(a72/a11);
  a67=(a4*a72);
  a29=(a29+a67);
  a67=(a56*a58);
  a52=(a52-a67);
  a17=(a17/a11);
  a67=(a52*a17);
  a29=(a29+a67);
  a54=(a54/a11);
  a29=(a29+a54);
  a67=(a29*a70);
  a76=(a76-a67);
  a67=(a79*a53);
  a25=(a8*a39);
  a67=(a67-a25);
  a25=(a67*a53);
  a25=(a79-a25);
  a27=(a25*a49);
  a30=(a5*a30);
  a34=(a36*a34);
  a30=(a30-a34);
  a34=(a30*a45);
  a27=(a27+a34);
  a34=(a67*a39);
  a34=(a8+a34);
  a26=(a34*a65);
  a27=(a27+a26);
  a26=(a67*a32);
  a23=(a26*a50);
  a27=(a27+a23);
  a23=(a67*a7);
  a21=(a23*a58);
  a27=(a27+a21);
  a21=(a27*a49);
  a25=(a25-a21);
  a21=(a25*a70);
  a59=(a27*a45);
  a59=(a30-a59);
  a13=(a59*a9);
  a21=(a21+a13);
  a13=(a27*a65);
  a34=(a34-a13);
  a13=(a34*a14);
  a21=(a21+a13);
  a13=(a55*a22);
  a21=(a21+a13);
  a13=(a15*a24);
  a21=(a21+a13);
  a13=(a27*a50);
  a26=(a26-a13);
  a13=(a26*a72);
  a21=(a21+a13);
  a13=(a27*a58);
  a23=(a23-a13);
  a13=(a23*a17);
  a21=(a21+a13);
  a13=(a21*a70);
  a25=(a25-a13);
  a13=casadi_sq(a25);
  a10=(a21*a9);
  a59=(a59-a10);
  a10=casadi_sq(a59);
  a13=(a13+a10);
  a10=(a21*a14);
  a34=(a34-a10);
  a10=casadi_sq(a34);
  a13=(a13+a10);
  a10=(a21*a22);
  a10=(a55-a10);
  a81=casadi_sq(a10);
  a13=(a13+a81);
  a81=(a21*a24);
  a81=(a15-a81);
  a18=casadi_sq(a81);
  a13=(a13+a18);
  a18=(a21*a72);
  a26=(a26-a18);
  a18=casadi_sq(a26);
  a13=(a13+a18);
  a18=(a21*a17);
  a23=(a23-a18);
  a18=casadi_sq(a23);
  a13=(a13+a18);
  a18=(a21*a54);
  a12=casadi_sq(a18);
  a13=(a13+a12);
  a80=(a80/a11);
  a12=(a21*a80);
  a77=casadi_sq(a12);
  a13=(a13+a77);
  a13=sqrt(a13);
  a25=(a25/a13);
  a77=(a76*a25);
  a82=(a29*a9);
  a2=(a2-a82);
  a59=(a59/a13);
  a82=(a2*a59);
  a77=(a77+a82);
  a82=(a29*a14);
  a33=(a33-a82);
  a34=(a34/a13);
  a82=(a33*a34);
  a77=(a77+a82);
  a82=(a29*a22);
  a82=(a79-a82);
  a10=(a10/a13);
  a83=(a82*a10);
  a77=(a77+a83);
  a83=(a29*a24);
  a83=(a31-a83);
  a81=(a81/a13);
  a84=(a83*a81);
  a77=(a77+a84);
  a84=(a29*a72);
  a4=(a4-a84);
  a26=(a26/a13);
  a84=(a4*a26);
  a77=(a77+a84);
  a84=(a29*a17);
  a52=(a52-a84);
  a23=(a23/a13);
  a84=(a52*a23);
  a77=(a77+a84);
  a84=(a29*a54);
  a84=(a46-a84);
  a18=(a18/a13);
  a85=(a84*a18);
  a77=(a77-a85);
  a85=(a29*a80);
  a12=(a12/a13);
  a86=(a85*a12);
  a77=(a77+a86);
  a86=(a77*a25);
  a76=(a76-a86);
  a86=(a31*a53);
  a87=(a71*a39);
  a86=(a86-a87);
  a87=(a86*a53);
  a87=(a31-a87);
  a88=(a87*a49);
  a66=(a36*a66);
  a1=(a5*a1);
  a66=(a66+a1);
  a1=(a66*a45);
  a88=(a88-a1);
  a1=(a86*a39);
  a1=(a71+a1);
  a89=(a1*a65);
  a88=(a88+a89);
  a89=(a86*a32);
  a90=(a89*a50);
  a88=(a88+a90);
  a90=(a86*a7);
  a91=(a90*a58);
  a88=(a88+a91);
  a91=(a88*a49);
  a87=(a87-a91);
  a91=(a87*a70);
  a92=(a88*a45);
  a92=(a66+a92);
  a93=(a92*a9);
  a91=(a91-a93);
  a93=(a88*a65);
  a1=(a1-a93);
  a93=(a1*a14);
  a91=(a91+a93);
  a93=(a15*a22);
  a91=(a91+a93);
  a93=(a3*a24);
  a91=(a91+a93);
  a93=(a88*a50);
  a89=(a89-a93);
  a93=(a89*a72);
  a91=(a91+a93);
  a93=(a88*a58);
  a90=(a90-a93);
  a93=(a90*a17);
  a91=(a91+a93);
  a93=(a91*a70);
  a87=(a87-a93);
  a93=(a87*a25);
  a94=(a91*a9);
  a92=(a92+a94);
  a94=(a92*a59);
  a93=(a93-a94);
  a94=(a91*a14);
  a1=(a1-a94);
  a94=(a1*a34);
  a93=(a93+a94);
  a94=(a91*a22);
  a94=(a15-a94);
  a95=(a94*a10);
  a93=(a93+a95);
  a95=(a91*a24);
  a95=(a3-a95);
  a96=(a95*a81);
  a93=(a93+a96);
  a96=(a91*a72);
  a89=(a89-a96);
  a96=(a89*a26);
  a93=(a93+a96);
  a96=(a91*a17);
  a90=(a90-a96);
  a96=(a90*a23);
  a93=(a93+a96);
  a96=(a91*a54);
  a97=(a96*a18);
  a93=(a93+a97);
  a97=(a91*a80);
  a98=(a97*a12);
  a93=(a93+a98);
  a98=(a93*a25);
  a87=(a87-a98);
  a98=casadi_sq(a87);
  a99=(a93*a59);
  a92=(a92+a99);
  a99=casadi_sq(a92);
  a98=(a98+a99);
  a99=(a93*a34);
  a1=(a1-a99);
  a99=casadi_sq(a1);
  a98=(a98+a99);
  a99=(a93*a10);
  a94=(a94-a99);
  a99=casadi_sq(a94);
  a98=(a98+a99);
  a99=(a93*a81);
  a95=(a95-a99);
  a99=casadi_sq(a95);
  a98=(a98+a99);
  a99=(a93*a26);
  a89=(a89-a99);
  a99=casadi_sq(a89);
  a98=(a98+a99);
  a99=(a93*a23);
  a90=(a90-a99);
  a99=casadi_sq(a90);
  a98=(a98+a99);
  a99=(a93*a18);
  a99=(a99-a96);
  a96=casadi_sq(a99);
  a98=(a98+a96);
  a96=(a93*a12);
  a97=(a97-a96);
  a96=casadi_sq(a97);
  a98=(a98+a96);
  a98=sqrt(a98);
  a87=(a87/a98);
  a96=(a76*a87);
  a100=(a77*a59);
  a2=(a2-a100);
  a92=(a92/a98);
  a100=(a2*a92);
  a96=(a96-a100);
  a100=(a77*a34);
  a33=(a33-a100);
  a1=(a1/a98);
  a100=(a33*a1);
  a96=(a96+a100);
  a100=(a77*a10);
  a82=(a82-a100);
  a94=(a94/a98);
  a100=(a82*a94);
  a96=(a96+a100);
  a100=(a77*a81);
  a83=(a83-a100);
  a95=(a95/a98);
  a100=(a83*a95);
  a96=(a96+a100);
  a100=(a77*a26);
  a4=(a4-a100);
  a89=(a89/a98);
  a100=(a4*a89);
  a96=(a96+a100);
  a100=(a77*a23);
  a52=(a52-a100);
  a90=(a90/a98);
  a100=(a52*a90);
  a96=(a96+a100);
  a100=(a77*a18);
  a84=(a84+a100);
  a99=(a99/a98);
  a100=(a84*a99);
  a96=(a96+a100);
  a100=(a77*a12);
  a85=(a85-a100);
  a97=(a97/a98);
  a100=(a85*a97);
  a96=(a96+a100);
  a100=(a96*a87);
  a76=(a76-a100);
  a100=(a40*a53);
  a101=(a68*a39);
  a100=(a100-a101);
  a101=(a64*a32);
  a100=(a100-a101);
  a101=(a69*a7);
  a100=(a100-a101);
  a101=(a100*a53);
  a101=(a40-a101);
  a102=(a101*a49);
  a37=(a5*a37);
  a42=(a36*a42);
  a37=(a37-a42);
  a42=(a37*a45);
  a102=(a102+a42);
  a42=(a100*a39);
  a42=(a68+a42);
  a103=(a42*a65);
  a102=(a102+a103);
  a103=(a100*a32);
  a103=(a64+a103);
  a104=(a103*a50);
  a102=(a102+a104);
  a104=(a100*a7);
  a104=(a69+a104);
  a105=(a104*a58);
  a102=(a102+a105);
  a105=(a102*a49);
  a101=(a101-a105);
  a105=(a101*a70);
  a106=(a102*a45);
  a106=(a37-a106);
  a107=(a106*a9);
  a105=(a105+a107);
  a107=(a102*a65);
  a42=(a42-a107);
  a107=(a42*a14);
  a105=(a105+a107);
  a107=(a102*a50);
  a103=(a103-a107);
  a107=(a103*a72);
  a105=(a105+a107);
  a107=(a102*a58);
  a104=(a104-a107);
  a107=(a104*a17);
  a105=(a105+a107);
  a107=(a63*a54);
  a105=(a105+a107);
  a107=(a48*a80);
  a105=(a105+a107);
  a107=(a105*a70);
  a101=(a101-a107);
  a107=(a101*a25);
  a108=(a105*a9);
  a106=(a106-a108);
  a108=(a106*a59);
  a107=(a107+a108);
  a108=(a105*a14);
  a42=(a42-a108);
  a108=(a42*a34);
  a107=(a107+a108);
  a108=(a105*a22);
  a109=(a108*a10);
  a107=(a107-a109);
  a109=(a105*a24);
  a110=(a109*a81);
  a107=(a107-a110);
  a110=(a105*a72);
  a103=(a103-a110);
  a110=(a103*a26);
  a107=(a107+a110);
  a110=(a105*a17);
  a104=(a104-a110);
  a110=(a104*a23);
  a107=(a107+a110);
  a110=(a105*a54);
  a63=(a63-a110);
  a110=(a63*a18);
  a107=(a107-a110);
  a110=(a105*a80);
  a110=(a110-a48);
  a48=(a110*a12);
  a107=(a107+a48);
  a48=(a107*a25);
  a101=(a101-a48);
  a48=(a101*a87);
  a111=(a107*a59);
  a106=(a106-a111);
  a111=(a106*a92);
  a48=(a48-a111);
  a111=(a107*a34);
  a42=(a42-a111);
  a111=(a42*a1);
  a48=(a48+a111);
  a111=(a107*a10);
  a108=(a108+a111);
  a111=(a108*a94);
  a48=(a48-a111);
  a111=(a107*a81);
  a109=(a109+a111);
  a111=(a109*a95);
  a48=(a48-a111);
  a111=(a107*a26);
  a103=(a103-a111);
  a111=(a103*a89);
  a48=(a48+a111);
  a111=(a107*a23);
  a104=(a104-a111);
  a111=(a104*a90);
  a48=(a48+a111);
  a111=(a107*a18);
  a63=(a63+a111);
  a111=(a63*a99);
  a48=(a48+a111);
  a111=(a107*a12);
  a110=(a110-a111);
  a111=(a110*a97);
  a48=(a48+a111);
  a111=(a48*a87);
  a101=(a101-a111);
  a111=casadi_sq(a101);
  a112=(a48*a92);
  a106=(a106+a112);
  a112=casadi_sq(a106);
  a111=(a111+a112);
  a112=(a48*a1);
  a42=(a42-a112);
  a112=casadi_sq(a42);
  a111=(a111+a112);
  a112=(a48*a94);
  a108=(a108+a112);
  a112=casadi_sq(a108);
  a111=(a111+a112);
  a112=(a48*a95);
  a109=(a109+a112);
  a112=casadi_sq(a109);
  a111=(a111+a112);
  a112=(a48*a89);
  a103=(a103-a112);
  a112=casadi_sq(a103);
  a111=(a111+a112);
  a112=(a48*a90);
  a104=(a104-a112);
  a112=casadi_sq(a104);
  a111=(a111+a112);
  a112=(a48*a99);
  a63=(a63-a112);
  a112=casadi_sq(a63);
  a111=(a111+a112);
  a112=(a48*a97);
  a110=(a110-a112);
  a112=casadi_sq(a110);
  a111=(a111+a112);
  a111=sqrt(a111);
  a101=(a101/a111);
  a112=(a76*a101);
  a113=(a96*a92);
  a2=(a2+a113);
  a106=(a106/a111);
  a113=(a2*a106);
  a112=(a112+a113);
  a113=(a96*a1);
  a33=(a33-a113);
  a42=(a42/a111);
  a113=(a33*a42);
  a112=(a112+a113);
  a113=(a96*a94);
  a82=(a82-a113);
  a108=(a108/a111);
  a113=(a82*a108);
  a112=(a112-a113);
  a113=(a96*a95);
  a83=(a83-a113);
  a109=(a109/a111);
  a113=(a83*a109);
  a112=(a112-a113);
  a113=(a96*a89);
  a4=(a4-a113);
  a103=(a103/a111);
  a113=(a4*a103);
  a112=(a112+a113);
  a113=(a96*a90);
  a52=(a52-a113);
  a104=(a104/a111);
  a113=(a52*a104);
  a112=(a112+a113);
  a113=(a96*a99);
  a84=(a84-a113);
  a63=(a63/a111);
  a113=(a84*a63);
  a112=(a112+a113);
  a113=(a96*a97);
  a85=(a85-a113);
  a110=(a110/a111);
  a113=(a85*a110);
  a112=(a112+a113);
  a113=(a112*a101);
  a76=(a76-a113);
  a113=(a75*a53);
  a114=(a19*a39);
  a113=(a113-a114);
  a114=(a69*a32);
  a113=(a113-a114);
  a114=(a3*a7);
  a113=(a113-a114);
  a114=(a113*a53);
  a114=(a75-a114);
  a115=(a114*a49);
  a73=(a36*a73);
  a16=(a5*a16);
  a73=(a73+a16);
  a16=(a73*a45);
  a115=(a115-a16);
  a16=(a113*a39);
  a16=(a19+a16);
  a116=(a16*a65);
  a115=(a115+a116);
  a116=(a113*a32);
  a116=(a69+a116);
  a117=(a116*a50);
  a115=(a115+a117);
  a117=(a113*a7);
  a117=(a3+a117);
  a118=(a117*a58);
  a115=(a115+a118);
  a118=(a115*a49);
  a114=(a114-a118);
  a118=(a114*a70);
  a119=(a115*a45);
  a119=(a73+a119);
  a120=(a119*a9);
  a118=(a118-a120);
  a120=(a115*a65);
  a16=(a16-a120);
  a120=(a16*a14);
  a118=(a118+a120);
  a120=(a115*a50);
  a116=(a116-a120);
  a120=(a116*a72);
  a118=(a118+a120);
  a120=(a115*a58);
  a117=(a117-a120);
  a120=(a117*a17);
  a118=(a118+a120);
  a120=(a60*a54);
  a118=(a118+a120);
  a120=(a47*a80);
  a118=(a118+a120);
  a120=(a118*a70);
  a114=(a114-a120);
  a120=(a114*a25);
  a121=(a118*a9);
  a119=(a119+a121);
  a121=(a119*a59);
  a120=(a120-a121);
  a121=(a118*a14);
  a16=(a16-a121);
  a121=(a16*a34);
  a120=(a120+a121);
  a121=(a118*a22);
  a122=(a121*a10);
  a120=(a120-a122);
  a122=(a118*a24);
  a123=(a122*a81);
  a120=(a120-a123);
  a123=(a118*a72);
  a116=(a116-a123);
  a123=(a116*a26);
  a120=(a120+a123);
  a123=(a118*a17);
  a117=(a117-a123);
  a123=(a117*a23);
  a120=(a120+a123);
  a123=(a118*a54);
  a60=(a60-a123);
  a123=(a60*a18);
  a120=(a120-a123);
  a123=(a118*a80);
  a123=(a123-a47);
  a47=(a123*a12);
  a120=(a120+a47);
  a47=(a120*a25);
  a114=(a114-a47);
  a47=(a114*a87);
  a124=(a120*a59);
  a119=(a119+a124);
  a124=(a119*a92);
  a47=(a47+a124);
  a124=(a120*a34);
  a16=(a16-a124);
  a124=(a16*a1);
  a47=(a47+a124);
  a124=(a120*a10);
  a121=(a121+a124);
  a124=(a121*a94);
  a47=(a47-a124);
  a124=(a120*a81);
  a122=(a122+a124);
  a124=(a122*a95);
  a47=(a47-a124);
  a124=(a120*a26);
  a116=(a116-a124);
  a124=(a116*a89);
  a47=(a47+a124);
  a124=(a120*a23);
  a117=(a117-a124);
  a124=(a117*a90);
  a47=(a47+a124);
  a124=(a120*a18);
  a60=(a60+a124);
  a124=(a60*a99);
  a47=(a47+a124);
  a124=(a120*a12);
  a123=(a123-a124);
  a124=(a123*a97);
  a47=(a47+a124);
  a124=(a47*a87);
  a114=(a114-a124);
  a124=(a114*a101);
  a125=(a47*a92);
  a125=(a125-a119);
  a119=(a125*a106);
  a124=(a124+a119);
  a119=(a47*a1);
  a16=(a16-a119);
  a119=(a16*a42);
  a124=(a124+a119);
  a119=(a47*a94);
  a121=(a121+a119);
  a119=(a121*a108);
  a124=(a124+a119);
  a119=(a47*a95);
  a122=(a122+a119);
  a119=(a122*a109);
  a124=(a124+a119);
  a119=(a47*a89);
  a116=(a116-a119);
  a119=(a116*a103);
  a124=(a124+a119);
  a119=(a47*a90);
  a117=(a117-a119);
  a119=(a117*a104);
  a124=(a124+a119);
  a119=(a47*a99);
  a60=(a60-a119);
  a119=(a60*a63);
  a124=(a124+a119);
  a119=(a47*a97);
  a123=(a123-a119);
  a119=(a123*a110);
  a124=(a124+a119);
  a119=(a124*a101);
  a114=(a114-a119);
  a119=casadi_sq(a114);
  a126=(a124*a106);
  a125=(a125-a126);
  a126=casadi_sq(a125);
  a119=(a119+a126);
  a126=(a124*a42);
  a16=(a16-a126);
  a126=casadi_sq(a16);
  a119=(a119+a126);
  a126=(a124*a108);
  a126=(a126-a121);
  a121=casadi_sq(a126);
  a119=(a119+a121);
  a121=(a124*a109);
  a121=(a121-a122);
  a122=casadi_sq(a121);
  a119=(a119+a122);
  a122=(a124*a103);
  a116=(a116-a122);
  a122=casadi_sq(a116);
  a119=(a119+a122);
  a122=(a124*a104);
  a117=(a117-a122);
  a122=casadi_sq(a117);
  a119=(a119+a122);
  a122=(a124*a63);
  a60=(a60-a122);
  a122=casadi_sq(a60);
  a119=(a119+a122);
  a122=(a124*a110);
  a123=(a123-a122);
  a122=casadi_sq(a123);
  a119=(a119+a122);
  a119=sqrt(a119);
  a114=(a114/a119);
  a122=(a76*a114);
  a127=(a112*a106);
  a2=(a2-a127);
  a125=(a125/a119);
  a127=(a2*a125);
  a122=(a122+a127);
  a127=(a112*a42);
  a33=(a33-a127);
  a16=(a16/a119);
  a127=(a33*a16);
  a122=(a122+a127);
  a127=(a112*a108);
  a82=(a82+a127);
  a126=(a126/a119);
  a127=(a82*a126);
  a122=(a122+a127);
  a127=(a112*a109);
  a83=(a83+a127);
  a121=(a121/a119);
  a127=(a83*a121);
  a122=(a122+a127);
  a127=(a112*a103);
  a4=(a4-a127);
  a116=(a116/a119);
  a127=(a4*a116);
  a122=(a122+a127);
  a127=(a112*a104);
  a52=(a52-a127);
  a117=(a117/a119);
  a127=(a52*a117);
  a122=(a122+a127);
  a127=(a112*a63);
  a84=(a84-a127);
  a60=(a60/a119);
  a127=(a84*a60);
  a122=(a122+a127);
  a127=(a112*a110);
  a85=(a85-a127);
  a123=(a123/a119);
  a127=(a85*a123);
  a122=(a122+a127);
  a127=(a122*a114);
  a76=(a76-a127);
  a127=casadi_sq(a76);
  a128=(a122*a125);
  a2=(a2-a128);
  a128=casadi_sq(a2);
  a127=(a127+a128);
  a128=(a122*a16);
  a33=(a33-a128);
  a128=casadi_sq(a33);
  a127=(a127+a128);
  a128=(a122*a126);
  a82=(a82-a128);
  a128=casadi_sq(a82);
  a127=(a127+a128);
  a128=(a122*a121);
  a83=(a83-a128);
  a128=casadi_sq(a83);
  a127=(a127+a128);
  a128=(a122*a116);
  a4=(a4-a128);
  a128=casadi_sq(a4);
  a127=(a127+a128);
  a128=(a122*a117);
  a52=(a52-a128);
  a128=casadi_sq(a52);
  a127=(a127+a128);
  a128=(a122*a60);
  a84=(a84-a128);
  a128=casadi_sq(a84);
  a127=(a127+a128);
  a128=(a122*a123);
  a85=(a85-a128);
  a128=casadi_sq(a85);
  a127=(a127+a128);
  a127=sqrt(a127);
  a76=(a76/a127);
  a128=arg[0]? arg[0][7] : 0;
  a41=(a41*a128);
  a129=arg[0]? arg[0][8] : 0;
  a130=(a44*a129);
  a41=(a41+a130);
  a130=arg[0]? arg[0][9] : 0;
  a131=(a28*a130);
  a41=(a41+a131);
  a131=arg[0]? arg[0][10] : 0;
  a132=(a79*a131);
  a41=(a41+a132);
  a132=arg[0]? arg[0][11] : 0;
  a133=(a31*a132);
  a41=(a41+a133);
  a133=arg[0]? arg[0][12] : 0;
  a134=(a40*a133);
  a41=(a41+a134);
  a134=arg[0]? arg[0][13] : 0;
  a135=(a75*a134);
  a41=(a41+a135);
  a135=(a76*a41);
  a2=(a2/a127);
  a136=(a44*a128);
  a6=(a5*a6);
  a43=(a36*a43);
  a6=(a6-a43);
  a6=(a6*a5);
  a5=(a5*a38);
  a20=(a36*a20);
  a5=(a5-a20);
  a5=(a5*a36);
  a6=(a6-a5);
  a5=(a6*a129);
  a136=(a136+a5);
  a5=(a35*a130);
  a136=(a136+a5);
  a5=(a30*a131);
  a136=(a136+a5);
  a5=(a66*a132);
  a136=(a136-a5);
  a5=(a37*a133);
  a136=(a136+a5);
  a5=(a73*a134);
  a136=(a136-a5);
  a5=(a2*a136);
  a135=(a135+a5);
  a33=(a33/a127);
  a28=(a28*a128);
  a5=(a35*a129);
  a28=(a28+a5);
  a62=(a62*a130);
  a28=(a28+a62);
  a62=(a8*a131);
  a28=(a28+a62);
  a62=(a71*a132);
  a28=(a28+a62);
  a62=(a68*a133);
  a28=(a28+a62);
  a62=(a19*a134);
  a28=(a28+a62);
  a62=(a33*a28);
  a135=(a135+a62);
  a82=(a82/a127);
  a79=(a79*a128);
  a62=(a30*a129);
  a79=(a79+a62);
  a8=(a8*a130);
  a79=(a79+a8);
  a55=(a55*a131);
  a79=(a79+a55);
  a55=(a15*a132);
  a79=(a79+a55);
  a55=(a82*a79);
  a135=(a135+a55);
  a83=(a83/a127);
  a31=(a31*a128);
  a55=(a66*a129);
  a31=(a31-a55);
  a71=(a71*a130);
  a31=(a31+a71);
  a15=(a15*a131);
  a31=(a31+a15);
  a132=(a3*a132);
  a31=(a31+a132);
  a132=(a83*a31);
  a135=(a135+a132);
  a4=(a4/a127);
  a40=(a40*a128);
  a132=(a37*a129);
  a40=(a40+a132);
  a68=(a68*a130);
  a40=(a40+a68);
  a64=(a64*a133);
  a40=(a40+a64);
  a64=(a69*a134);
  a40=(a40+a64);
  a64=(a4*a40);
  a135=(a135+a64);
  a52=(a52/a127);
  a75=(a75*a128);
  a129=(a73*a129);
  a75=(a75-a129);
  a19=(a19*a130);
  a75=(a75+a19);
  a69=(a69*a133);
  a75=(a75+a69);
  a3=(a3*a134);
  a75=(a75+a3);
  a3=(a52*a75);
  a135=(a135+a3);
  a3=(a44*a53);
  a134=(a35*a39);
  a3=(a3-a134);
  a134=(a37*a32);
  a3=(a3-a134);
  a134=(a73*a7);
  a3=(a3+a134);
  a134=(a3*a53);
  a44=(a44-a134);
  a134=(a44*a49);
  a69=(a6*a45);
  a134=(a134+a69);
  a69=(a3*a39);
  a35=(a35+a69);
  a69=(a35*a65);
  a134=(a134+a69);
  a69=(a3*a32);
  a37=(a37+a69);
  a69=(a37*a50);
  a134=(a134+a69);
  a69=(a3*a7);
  a69=(a69-a73);
  a73=(a69*a58);
  a134=(a134+a73);
  a73=(a134*a49);
  a44=(a44-a73);
  a73=(a44*a70);
  a133=(a134*a45);
  a6=(a6-a133);
  a133=(a6*a9);
  a73=(a73+a133);
  a133=(a134*a65);
  a35=(a35-a133);
  a133=(a35*a14);
  a73=(a73+a133);
  a133=(a30*a22);
  a73=(a73+a133);
  a133=(a66*a24);
  a73=(a73-a133);
  a133=(a134*a50);
  a37=(a37-a133);
  a133=(a37*a72);
  a73=(a73+a133);
  a133=(a134*a58);
  a69=(a69-a133);
  a133=(a69*a17);
  a73=(a73+a133);
  a73=(a73-a80);
  a133=(a73*a70);
  a44=(a44-a133);
  a133=(a44*a25);
  a19=(a73*a9);
  a6=(a6-a19);
  a19=(a6*a59);
  a133=(a133+a19);
  a19=(a73*a14);
  a35=(a35-a19);
  a19=(a35*a34);
  a133=(a133+a19);
  a19=(a73*a22);
  a30=(a30-a19);
  a19=(a30*a10);
  a133=(a133+a19);
  a19=(a73*a24);
  a66=(a66+a19);
  a19=(a66*a81);
  a133=(a133-a19);
  a19=(a73*a72);
  a37=(a37-a19);
  a19=(a37*a26);
  a133=(a133+a19);
  a19=(a73*a17);
  a69=(a69-a19);
  a19=(a69*a23);
  a133=(a133+a19);
  a54=(a73*a54);
  a19=(a54*a18);
  a133=(a133+a19);
  a80=(a73*a80);
  a46=(a46+a80);
  a80=(a46*a12);
  a133=(a133+a80);
  a80=(a133*a25);
  a44=(a44-a80);
  a80=(a44*a87);
  a19=(a133*a59);
  a6=(a6-a19);
  a19=(a6*a92);
  a80=(a80-a19);
  a19=(a133*a34);
  a35=(a35-a19);
  a19=(a35*a1);
  a80=(a80+a19);
  a19=(a133*a10);
  a30=(a30-a19);
  a19=(a30*a94);
  a80=(a80+a19);
  a19=(a133*a81);
  a66=(a66+a19);
  a19=(a66*a95);
  a80=(a80-a19);
  a19=(a133*a26);
  a37=(a37-a19);
  a19=(a37*a89);
  a80=(a80+a19);
  a19=(a133*a23);
  a69=(a69-a19);
  a19=(a69*a90);
  a80=(a80+a19);
  a18=(a133*a18);
  a18=(a18-a54);
  a54=(a18*a99);
  a80=(a80+a54);
  a12=(a133*a12);
  a46=(a46-a12);
  a12=(a46*a97);
  a80=(a80+a12);
  a12=(a80*a87);
  a44=(a44-a12);
  a12=(a44*a101);
  a54=(a80*a92);
  a6=(a6+a54);
  a54=(a6*a106);
  a12=(a12+a54);
  a54=(a80*a1);
  a35=(a35-a54);
  a54=(a35*a42);
  a12=(a12+a54);
  a54=(a80*a94);
  a30=(a30-a54);
  a54=(a30*a108);
  a12=(a12-a54);
  a54=(a80*a95);
  a66=(a66+a54);
  a54=(a66*a109);
  a12=(a12+a54);
  a54=(a80*a89);
  a37=(a37-a54);
  a54=(a37*a103);
  a12=(a12+a54);
  a54=(a80*a90);
  a69=(a69-a54);
  a54=(a69*a104);
  a12=(a12+a54);
  a99=(a80*a99);
  a18=(a18-a99);
  a99=(a18*a63);
  a12=(a12+a99);
  a97=(a80*a97);
  a46=(a46-a97);
  a97=(a46*a110);
  a12=(a12+a97);
  a97=(a12*a101);
  a44=(a44-a97);
  a97=(a44*a114);
  a99=(a12*a106);
  a6=(a6-a99);
  a99=(a6*a125);
  a97=(a97+a99);
  a99=(a12*a42);
  a35=(a35-a99);
  a99=(a35*a16);
  a97=(a97+a99);
  a99=(a12*a108);
  a30=(a30+a99);
  a99=(a30*a126);
  a97=(a97+a99);
  a99=(a12*a109);
  a99=(a99-a66);
  a66=(a99*a121);
  a97=(a97+a66);
  a66=(a12*a103);
  a37=(a37-a66);
  a66=(a37*a116);
  a97=(a97+a66);
  a66=(a12*a104);
  a69=(a69-a66);
  a66=(a69*a117);
  a97=(a97+a66);
  a63=(a12*a63);
  a18=(a18-a63);
  a63=(a18*a60);
  a97=(a97+a63);
  a110=(a12*a110);
  a46=(a46-a110);
  a110=(a46*a123);
  a97=(a97+a110);
  a110=(a97*a114);
  a44=(a44-a110);
  a110=(a44*a76);
  a63=(a97*a125);
  a6=(a6-a63);
  a63=(a6*a2);
  a110=(a110+a63);
  a63=(a97*a16);
  a35=(a35-a63);
  a63=(a35*a33);
  a110=(a110+a63);
  a63=(a97*a126);
  a30=(a30-a63);
  a63=(a30*a82);
  a110=(a110+a63);
  a63=(a97*a121);
  a99=(a99-a63);
  a63=(a99*a83);
  a110=(a110+a63);
  a63=(a97*a116);
  a37=(a37-a63);
  a63=(a37*a4);
  a110=(a110+a63);
  a63=(a97*a117);
  a69=(a69-a63);
  a63=(a69*a52);
  a110=(a110+a63);
  a60=(a97*a60);
  a18=(a18-a60);
  a84=(a84/a127);
  a60=(a18*a84);
  a110=(a110+a60);
  a123=(a97*a123);
  a46=(a46-a123);
  a85=(a85/a127);
  a123=(a46*a85);
  a110=(a110+a123);
  a76=(a110*a76);
  a44=(a44-a76);
  a76=casadi_sq(a44);
  a2=(a110*a2);
  a6=(a6-a2);
  a2=casadi_sq(a6);
  a76=(a76+a2);
  a33=(a110*a33);
  a35=(a35-a33);
  a33=casadi_sq(a35);
  a76=(a76+a33);
  a82=(a110*a82);
  a30=(a30-a82);
  a82=casadi_sq(a30);
  a76=(a76+a82);
  a83=(a110*a83);
  a99=(a99-a83);
  a83=casadi_sq(a99);
  a76=(a76+a83);
  a4=(a110*a4);
  a37=(a37-a4);
  a4=casadi_sq(a37);
  a76=(a76+a4);
  a52=(a110*a52);
  a69=(a69-a52);
  a52=casadi_sq(a69);
  a76=(a76+a52);
  a84=(a110*a84);
  a18=(a18-a84);
  a18=casadi_sq(a18);
  a76=(a76+a18);
  a85=(a110*a85);
  a46=(a46-a85);
  a46=casadi_sq(a46);
  a76=(a76+a46);
  a76=sqrt(a76);
  a44=(a44/a76);
  a44=(a44*a41);
  a6=(a6/a76);
  a6=(a6*a136);
  a44=(a44+a6);
  a35=(a35/a76);
  a35=(a35*a28);
  a44=(a44+a35);
  a30=(a30/a76);
  a30=(a30*a79);
  a44=(a44+a30);
  a99=(a99/a76);
  a99=(a99*a31);
  a44=(a44+a99);
  a37=(a37/a76);
  a37=(a37*a40);
  a44=(a44+a37);
  a69=(a69/a76);
  a69=(a69*a75);
  a44=(a44+a69);
  a44=(a44/a76);
  a110=(a110*a44);
  a135=(a135-a110);
  a135=(a135/a127);
  if (res[0]!=0) res[0][7]=a135;
  if (res[0]!=0) res[0][8]=a44;
  a70=(a70*a41);
  a9=(a9*a136);
  a70=(a70+a9);
  a14=(a14*a28);
  a70=(a70+a14);
  a22=(a22*a79);
  a70=(a70+a22);
  a24=(a24*a31);
  a70=(a70+a24);
  a72=(a72*a40);
  a70=(a70+a72);
  a17=(a17*a75);
  a70=(a70+a17);
  a73=(a73*a44);
  a70=(a70-a73);
  a29=(a29*a135);
  a70=(a70-a29);
  a114=(a114*a41);
  a125=(a125*a136);
  a114=(a114+a125);
  a16=(a16*a28);
  a114=(a114+a16);
  a126=(a126*a79);
  a114=(a114+a126);
  a121=(a121*a31);
  a114=(a114+a121);
  a116=(a116*a40);
  a114=(a114+a116);
  a117=(a117*a75);
  a114=(a114+a117);
  a97=(a97*a44);
  a114=(a114-a97);
  a122=(a122*a135);
  a114=(a114-a122);
  a114=(a114/a119);
  a118=(a118*a114);
  a70=(a70-a118);
  a101=(a101*a41);
  a106=(a106*a136);
  a101=(a101+a106);
  a42=(a42*a28);
  a101=(a101+a42);
  a108=(a108*a79);
  a101=(a101-a108);
  a109=(a109*a31);
  a101=(a101-a109);
  a103=(a103*a40);
  a101=(a101+a103);
  a104=(a104*a75);
  a101=(a101+a104);
  a12=(a12*a44);
  a101=(a101-a12);
  a112=(a112*a135);
  a101=(a101-a112);
  a124=(a124*a114);
  a101=(a101-a124);
  a101=(a101/a111);
  a105=(a105*a101);
  a70=(a70-a105);
  a87=(a87*a41);
  a92=(a92*a136);
  a87=(a87-a92);
  a1=(a1*a28);
  a87=(a87+a1);
  a94=(a94*a79);
  a87=(a87+a94);
  a95=(a95*a31);
  a87=(a87+a95);
  a89=(a89*a40);
  a87=(a87+a89);
  a90=(a90*a75);
  a87=(a87+a90);
  a80=(a80*a44);
  a87=(a87-a80);
  a96=(a96*a135);
  a87=(a87-a96);
  a47=(a47*a114);
  a87=(a87-a47);
  a48=(a48*a101);
  a87=(a87-a48);
  a87=(a87/a98);
  a91=(a91*a87);
  a70=(a70-a91);
  a25=(a25*a41);
  a59=(a59*a136);
  a25=(a25+a59);
  a34=(a34*a28);
  a25=(a25+a34);
  a10=(a10*a79);
  a25=(a25+a10);
  a81=(a81*a31);
  a25=(a25+a81);
  a26=(a26*a40);
  a25=(a25+a26);
  a23=(a23*a75);
  a25=(a25+a23);
  a133=(a133*a44);
  a25=(a25-a133);
  a77=(a77*a135);
  a25=(a25-a77);
  a120=(a120*a114);
  a25=(a25-a120);
  a107=(a107*a101);
  a25=(a25-a107);
  a93=(a93*a87);
  a25=(a25-a93);
  a25=(a25/a13);
  a21=(a21*a25);
  a70=(a70-a21);
  a70=(a70/a11);
  if (res[0]!=0) res[0][9]=a70;
  if (res[0]!=0) res[0][10]=a25;
  if (res[0]!=0) res[0][11]=a87;
  if (res[0]!=0) res[0][12]=a101;
  if (res[0]!=0) res[0][13]=a114;
  a11=0.;
  if (res[1]!=0) res[1][0]=a11;
  if (res[1]!=0) res[1][1]=a11;
  a53=(a53*a41);
  a39=(a39*a28);
  a53=(a53-a39);
  a32=(a32*a40);
  a53=(a53-a32);
  a7=(a7*a75);
  a53=(a53-a7);
  a3=(a3*a44);
  a53=(a53-a3);
  a61=(a61*a135);
  a53=(a53-a61);
  a113=(a113*a114);
  a53=(a53-a113);
  a100=(a100*a101);
  a53=(a53-a100);
  a86=(a86*a87);
  a53=(a53-a86);
  a67=(a67*a25);
  a53=(a53-a67);
  a57=(a57*a70);
  a53=(a53-a57);
  a49=(a49*a41);
  a45=(a45*a136);
  a49=(a49+a45);
  a65=(a65*a28);
  a49=(a49+a65);
  a50=(a50*a40);
  a49=(a49+a50);
  a58=(a58*a75);
  a49=(a49+a58);
  a134=(a134*a44);
  a49=(a49-a134);
  a56=(a56*a135);
  a49=(a49-a56);
  a115=(a115*a114);
  a49=(a49-a115);
  a102=(a102*a101);
  a49=(a49-a102);
  a88=(a88*a87);
  a49=(a49-a88);
  a27=(a27*a25);
  a49=(a49-a27);
  a74=(a74*a70);
  a49=(a49-a74);
  a49=(a49/a0);
  a78=(a78*a49);
  a53=(a53+a78);
  a53=(a53/a51);
  if (res[1]!=0) res[1][2]=a53;
  if (res[1]!=0) res[1][3]=a49;
  return 0;
}

CASADI_SYMBOL_EXPORT int Imp_B(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int Imp_B_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int Imp_B_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Imp_B_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int Imp_B_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void Imp_B_release(int mem) {
}

CASADI_SYMBOL_EXPORT void Imp_B_incref(void) {
}

CASADI_SYMBOL_EXPORT void Imp_B_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int Imp_B_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int Imp_B_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_real Imp_B_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Imp_B_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* Imp_B_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Imp_B_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* Imp_B_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int Imp_B_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
