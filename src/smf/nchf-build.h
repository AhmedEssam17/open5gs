#ifndef SMF_NCHF_BUILD_H
#define SMF_NCHF_BUILD_H

#include "context.h"

#ifdef __cplusplus
extern "C" {
#endif

ogs_sbi_request_t *smf_nchf_build_get(smf_sess_t *sess, void *data);
ogs_sbi_request_t *smf_nchf_build_report(smf_sess_t *sess, void *data);
bool smf_nchf_build_and_send(ogs_sbi_service_type_e service_type, 
                ogs_sbi_request_t *(*build)(smf_sess_t *sess, void *data), smf_sess_t *sess, int state, void *data);

#ifdef __cplusplus
}
#endif

#endif /* SMF_NCHF_BUILD_H */