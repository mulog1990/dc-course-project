/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "update_grade.h"

bool_t
xdr_StudentSt (XDR *xdrs, StudentSt *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->student_id))
		 return FALSE;
	 if (!xdr_char (xdrs, &objp->grade))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (StudentSt), (xdrproc_t) xdr_StudentSt))
		 return FALSE;
	return TRUE;
}