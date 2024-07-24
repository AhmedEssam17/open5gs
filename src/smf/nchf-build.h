#ifndef SMF_NCHF_BUILD_H
#define SMF_NCHF_BUILD_H

#include "context.h"

#ifdef __cplusplus
extern "C" {
#endif

ogs_sbi_request_t *smf_nchf_build_get(smf_sess_t *sess, void *data);

#ifdef __cplusplus
}
#endif

#endif /* SMF_NCHF_BUILD_H */