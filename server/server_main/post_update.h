/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "server_main.h"

#ifndef _POST_UPDATE_H_RPCGEN
#define _POST_UPDATE_H_RPCGEN

#include <rpc/rpc.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
struct StudentSt {
	int student_id;
	char grade;
	struct StudentSt *next;
};*/

//typedef struct StudentSt StudentSt;



#define POSTUPDATE_PROG 0x20481024
#define POSTUPDATE_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define POSTUPDATE 1
extern  int * postupdate_1(StudentSt *, CLIENT *);
extern  int * postupdate_1_svc(StudentSt *, struct svc_req *);
extern int postupdate_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define POSTUPDATE 1
extern  int * postupdate_1();
extern  int * postupdate_1_svc();
extern int postupdate_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_StudentSt (XDR *, StudentSt*);

#else /* K&R C */
extern bool_t xdr_StudentSt ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_POST_UPDATE_H_RPCGEN */
