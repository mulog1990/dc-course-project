/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "post_failure.h"


void
postfailure_prog_1(char *host, int arg)
{
	CLIENT *clnt;
	void  *result_1;
	int  postfailure_1_arg = arg;

#ifndef	DEBUG
	clnt = clnt_create (host, POSTFAILURE_PROG, POSTFAILURE_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = postfailure_1(&postfailure_1_arg, clnt);
	if (result_1 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}

void post_failure(char* host, int arg) {
    postfailure_prog_1(host, arg);
}

/*
int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	postfailure_prog_1 (host);
exit (0);
}*/
