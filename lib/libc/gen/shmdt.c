#if defined(LIBC_SCCS) && !defined(lint)
static char *rcsid = "$FreeBSD: src/lib/libc/gen/shmdt.c,v 1.4 1999/08/27 23:58:57 peter Exp $";
#endif /* LIBC_SCCS and not lint */

#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#if __STDC__
int shmdt(void *shmaddr)
#else
int shmdt(shmaddr)
	void *shmaddr;
#endif
{
	return (shmsys(2, shmaddr));
}
