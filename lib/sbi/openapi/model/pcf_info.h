/*
 * pcf_info.h
 *
 *
 */

#ifndef _OpenAPI_pcf_info_H_
#define _OpenAPI_pcf_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "identity_range.h"
#include "supi_range.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_pcf_info_s OpenAPI_pcf_info_t;
typedef struct OpenAPI_pcf_info_s {
    char *group_id;
    OpenAPI_list_t *dnn_list;
    OpenAPI_list_t *supi_ranges;
    OpenAPI_list_t *gpsi_ranges;
    char *rx_diam_host;
    char *rx_diam_realm;
} OpenAPI_pcf_info_t;

OpenAPI_pcf_info_t *OpenAPI_pcf_info_create(
    char *group_id,
    OpenAPI_list_t *dnn_list,
    OpenAPI_list_t *supi_ranges,
    OpenAPI_list_t *gpsi_ranges,
    char *rx_diam_host,
    char *rx_diam_realm
    );
void OpenAPI_pcf_info_free(OpenAPI_pcf_info_t *pcf_info);
OpenAPI_pcf_info_t *OpenAPI_pcf_info_parseFromJSON(cJSON *pcf_infoJSON);
cJSON *OpenAPI_pcf_info_convertToJSON(OpenAPI_pcf_info_t *pcf_info);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_pcf_info_H_ */

