#ifndef SMF_NCHF_HANDLER_H
#define SMF_NCHF_HANDLER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "context.h"
#include "nchf-build.h"

bool smf_nchf_handle_get(smf_sess_t *sess, int state, ogs_sbi_message_t *recvmsg);

#ifdef __cplusplus
}
#endif

#endif /* SMF_NCHF_HANDLER_H */