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

# include <inttypes.h>
# include <string.h>
# include "../platform/stdio.h"
# include "kaa_logging_gen.h"
# include "../avro_src/avro/io.h"
# include "../avro_src/encoding.h"
# include "../utilities/kaa_mem.h"

/*
 * AUTO-GENERATED CODE
 */



static void kaa_logging_payload_destroy(void *data)
{
    if (data) {
        kaa_logging_payload_t *record = (kaa_logging_payload_t *)data;

        kaa_string_destroy(record->monoff);
        kaa_string_destroy(record->monoffcount);
        kaa_string_destroy(record->mgpslat);
        kaa_string_destroy(record->mgpslong);
        kaa_string_destroy(record->msensor);
        kaa_string_destroy(record->mtsensor);
        kaa_string_destroy(record->mpotv);
        kaa_string_destroy(record->mlightonoff);
        kaa_string_destroy(record->msgtimev);
        kaa_data_destroy(record);
    }
}

static void kaa_logging_payload_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        kaa_logging_payload_t *record = (kaa_logging_payload_t *)data;

        kaa_string_serialize(writer, record->monoff);
        kaa_string_serialize(writer, record->monoffcount);
        kaa_string_serialize(writer, record->mgpslat);
        kaa_string_serialize(writer, record->mgpslong);
        kaa_string_serialize(writer, record->msensor);
        kaa_string_serialize(writer, record->mtsensor);
        kaa_string_serialize(writer, record->mpotv);
        kaa_string_serialize(writer, record->mlightonoff);
        kaa_string_serialize(writer, record->msgtimev);
    }
}

static size_t kaa_logging_payload_get_size(void *data)
{
    if (data) {
        size_t record_size = 0;
        kaa_logging_payload_t *record = (kaa_logging_payload_t *)data;

        record_size += kaa_string_get_size(record->monoff);
        record_size += kaa_string_get_size(record->monoffcount);
        record_size += kaa_string_get_size(record->mgpslat);
        record_size += kaa_string_get_size(record->mgpslong);
        record_size += kaa_string_get_size(record->msensor);
        record_size += kaa_string_get_size(record->mtsensor);
        record_size += kaa_string_get_size(record->mpotv);
        record_size += kaa_string_get_size(record->mlightonoff);
        record_size += kaa_string_get_size(record->msgtimev);

        return record_size;
    }

    return 0;
}

kaa_logging_payload_t *kaa_logging_payload_create(void)
{
    kaa_logging_payload_t *record = 
            (kaa_logging_payload_t *)KAA_CALLOC(1, sizeof(kaa_logging_payload_t));

    if (record) {
        record->serialize = kaa_logging_payload_serialize;
        record->get_size = kaa_logging_payload_get_size;
        record->destroy = kaa_logging_payload_destroy;
    }

    return record;
}

kaa_logging_payload_t *kaa_logging_payload_deserialize(avro_reader_t reader)
{
    kaa_logging_payload_t *record = 
            (kaa_logging_payload_t *)KAA_MALLOC(sizeof(kaa_logging_payload_t));

    if (record) {
        record->serialize = kaa_logging_payload_serialize;
        record->get_size = kaa_logging_payload_get_size;
        record->destroy = kaa_logging_payload_destroy;

        record->monoff = kaa_string_deserialize(reader);
        record->monoffcount = kaa_string_deserialize(reader);
        record->mgpslat = kaa_string_deserialize(reader);
        record->mgpslong = kaa_string_deserialize(reader);
        record->msensor = kaa_string_deserialize(reader);
        record->mtsensor = kaa_string_deserialize(reader);
        record->mpotv = kaa_string_deserialize(reader);
        record->mlightonoff = kaa_string_deserialize(reader);
        record->msgtimev = kaa_string_deserialize(reader);
    }

    return record;
}



static void kaa_logging_device_data_destroy(void *data)
{
    if (data) {
        kaa_logging_device_data_t *record = (kaa_logging_device_data_t *)data;

        kaa_string_destroy(record->channel);
        if (record->message && record->message->destroy) {
            record->message->destroy(record->message);
        }
        kaa_data_destroy(record);
    }
}

static void kaa_logging_device_data_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        kaa_logging_device_data_t *record = (kaa_logging_device_data_t *)data;

        kaa_string_serialize(writer, record->channel);
        record->message->serialize(writer, record->message);
    }
}

static size_t kaa_logging_device_data_get_size(void *data)
{
    if (data) {
        size_t record_size = 0;
        kaa_logging_device_data_t *record = (kaa_logging_device_data_t *)data;

        record_size += kaa_string_get_size(record->channel);
        record_size += record->message->get_size(record->message);

        return record_size;
    }

    return 0;
}

kaa_logging_device_data_t *kaa_logging_device_data_create(void)
{
    kaa_logging_device_data_t *record = 
            (kaa_logging_device_data_t *)KAA_CALLOC(1, sizeof(kaa_logging_device_data_t));

    if (record) {
        record->serialize = kaa_logging_device_data_serialize;
        record->get_size = kaa_logging_device_data_get_size;
        record->destroy = kaa_logging_device_data_destroy;
    }

    return record;
}

kaa_logging_device_data_t *kaa_logging_device_data_deserialize(avro_reader_t reader)
{
    kaa_logging_device_data_t *record = 
            (kaa_logging_device_data_t *)KAA_MALLOC(sizeof(kaa_logging_device_data_t));

    if (record) {
        record->serialize = kaa_logging_device_data_serialize;
        record->get_size = kaa_logging_device_data_get_size;
        record->destroy = kaa_logging_device_data_destroy;

        record->channel = kaa_string_deserialize(reader);
        record->message = kaa_logging_payload_deserialize(reader);
    }

    return record;
}

