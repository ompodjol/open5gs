/*
 * dnn_upf_info_item.h
 *
 *
 */

#ifndef _OpenAPI_dnn_upf_info_item_H_
#define _OpenAPI_dnn_upf_info_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "pdu_session_type.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_dnn_upf_info_item_s OpenAPI_dnn_upf_info_item_t;
typedef struct OpenAPI_dnn_upf_info_item_s {
    char *dnn;
    OpenAPI_list_t *dnai_list;
    OpenAPI_list_t *pdu_session_types;
} OpenAPI_dnn_upf_info_item_t;

OpenAPI_dnn_upf_info_item_t *OpenAPI_dnn_upf_info_item_create(
    char *dnn,
    OpenAPI_list_t *dnai_list,
    OpenAPI_list_t *pdu_session_types
    );
void OpenAPI_dnn_upf_info_item_free(OpenAPI_dnn_upf_info_item_t *dnn_upf_info_item);
OpenAPI_dnn_upf_info_item_t *OpenAPI_dnn_upf_info_item_parseFromJSON(cJSON *dnn_upf_info_itemJSON);
cJSON *OpenAPI_dnn_upf_info_item_convertToJSON(OpenAPI_dnn_upf_info_item_t *dnn_upf_info_item);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_dnn_upf_info_item_H_ */

