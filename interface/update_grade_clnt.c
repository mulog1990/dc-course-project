/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "update_grade.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

char *
updategrade_1(StudentSt *argp, CLIENT *clnt)
{
	static char clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, UPDATEGRADE,
		(xdrproc_t) xdr_StudentSt, (caddr_t) argp,
		(xdrproc_t) xdr_char, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
