/* cddmlio.h: Header file for MathLink/IO cddmlio.c 
   written by Komei Fukuda, fukuda@ifor.math.ethz.ch
   Version 0.91, Sept. 15, 2000
*/

/* cddlib.c : C-Implementation of the double description method for
   computing all vertices and extreme rays of the polyhedron 
   P= {x :  b - A x >= 0}.  
   Please read COPYING (GNU General Public Licence) and
   the manual cddman.tex for detail.
*/

#ifndef  __CDDMLIO_H
#define  __CDDMLIO_H
#endif  /* __CDDMLIO_H */

#ifndef  __CDD_H
#include "cdd.h"
#endif  /* __CDD_H */

/* ---------- FUNCTIONS MEANT TO BE PUBLIC ---------- */

/* basic IO */

void dd_MLWriteAmatrix(dd_Amatrix, long, long);
void dd_MLWriteMatrix(dd_MatrixPtr);
void dd_MLWriteSet(set_type);
void dd_MLWriteSetFamily(dd_SetFamilyPtr);
void dd_MLWriteError(dd_PolyhedraPtr);

/* end of cddmlio.h */
