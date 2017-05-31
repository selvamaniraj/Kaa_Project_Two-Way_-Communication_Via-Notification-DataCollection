/*
 * Copyright 2014-2016 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

# ifndef KAA_LOGGING_GEN_H_
# define KAA_LOGGING_GEN_H_

# include "../kaa_common_schema.h"
# include "../collections/kaa_list.h"

# ifdef __cplusplus
extern "C" {
# endif



typedef struct {
    kaa_string_t * monoff;
    kaa_string_t * monoffcount;
    kaa_string_t * mgpslat;
    kaa_string_t * mgpslong;
    kaa_string_t * msensor;
    kaa_string_t * mtsensor;
    kaa_string_t * mpotv;
    kaa_string_t * mlightonoff;
    kaa_string_t * msgtimev;

    serialize_fn serialize;
    get_size_fn  get_size;
    destroy_fn   destroy;
} kaa_logging_payload_t;

kaa_logging_payload_t *kaa_logging_payload_create(void);
kaa_logging_payload_t *kaa_logging_payload_deserialize(avro_reader_t reader);



typedef struct {
    kaa_string_t * channel;
    kaa_logging_payload_t * message;

    serialize_fn serialize;
    get_size_fn  get_size;
    destroy_fn   destroy;
} kaa_logging_device_data_t;

kaa_logging_device_data_t *kaa_logging_device_data_create(void);
kaa_logging_device_data_t *kaa_logging_device_data_deserialize(avro_reader_t reader);

#ifdef __cplusplus
}      /* extern "C" */
#endif
#endif