#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/_chargingdata__charging_data_ref__update_post_400_response.h"
#include "../model/charging_data_request.h"
#include "../model/charging_data_response.h"
#include "../model/one_of_problem_details_charging_data_response.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


void
DefaultAPI_chargingdataChargingDataRefReleasePost(apiClient_t *apiClient, char * ChargingDataRef , charging_data_request_t * charging_data_request );


charging_data_response_t*
DefaultAPI_chargingdataChargingDataRefUpdatePost(apiClient_t *apiClient, char * ChargingDataRef , charging_data_request_t * charging_data_request );


charging_data_response_t*
DefaultAPI_chargingdataPost(apiClient_t *apiClient, charging_data_request_t * charging_data_request );


