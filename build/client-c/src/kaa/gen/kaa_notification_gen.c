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
# include "kaa_notification_gen.h"
# include "../avro_src/avro/io.h"
# include "../avro_src/encoding.h"
# include "../utilities/kaa_mem.h"

/*
 * AUTO-GENERATED CODE
 */



# ifndef KAA_NOTIFICATION_UNION_STRING_OR_NULL_C_
# define KAA_NOTIFICATION_UNION_STRING_OR_NULL_C_
static void kaa_notification_union_string_or_null_destroy(void *data)
{
    if (data) {
        kaa_union_t *kaa_union = (kaa_union_t *)data;

        switch (kaa_union->type) {
        case KAA_NOTIFICATION_UNION_STRING_OR_NULL_BRANCH_0:
        {
            if (kaa_union->data) {
                kaa_string_destroy(kaa_union->data);
            }
            break;
        }
        default:
            break;
        }

        kaa_data_destroy(kaa_union);
    }
}

static size_t kaa_notification_union_string_or_null_get_size(void *data)
{
    if (data) {
        kaa_union_t *kaa_union = (kaa_union_t *)data;
        size_t union_size = avro_long_get_size(kaa_union->type);

        switch (kaa_union->type) {
        case KAA_NOTIFICATION_UNION_STRING_OR_NULL_BRANCH_0:
        {
            if (kaa_union->data) {
                union_size += kaa_string_get_size(kaa_union->data);
            }
            break;
        }
        default:
            break;
        }

        return union_size;
    }

    return 0;
}

static void kaa_notification_union_string_or_null_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        kaa_union_t *kaa_union = (kaa_union_t *)data;
        avro_binary_encoding.write_long(writer, kaa_union->type);

        switch (kaa_union->type) {
        case KAA_NOTIFICATION_UNION_STRING_OR_NULL_BRANCH_0:
        {
            if (kaa_union->data) {
                kaa_string_serialize(writer, kaa_union->data);
            }
            break;
        }
        default:
            break;
        }
    }
}
static kaa_union_t *kaa_notification_union_string_or_null_create(void)
{
    kaa_union_t *kaa_union = KAA_CALLOC(1, sizeof(kaa_union_t));

    if (kaa_union) {
        kaa_union->serialize = kaa_notification_union_string_or_null_serialize;
        kaa_union->get_size = kaa_notification_union_string_or_null_get_size;
        kaa_union->destroy = kaa_notification_union_string_or_null_destroy;
    }

    return kaa_union; 
}

kaa_union_t *kaa_notification_union_string_or_null_branch_0_create(void)
{
    kaa_union_t *kaa_union = kaa_notification_union_string_or_null_create();
    if (kaa_union) {
        kaa_union->type = KAA_NOTIFICATION_UNION_STRING_OR_NULL_BRANCH_0;
    }
    return kaa_union;
}

kaa_union_t *kaa_notification_union_string_or_null_branch_1_create(void)
{
    kaa_union_t *kaa_union = kaa_notification_union_string_or_null_create();
    if (kaa_union) {
        kaa_union->type = KAA_NOTIFICATION_UNION_STRING_OR_NULL_BRANCH_1;
    }
    return kaa_union;
}

kaa_union_t *kaa_notification_union_string_or_null_deserialize(avro_reader_t reader)
{
    kaa_union_t *kaa_union = kaa_notification_union_string_or_null_create();

    if (kaa_union) {
        int64_t branch;
        avro_binary_encoding.read_long(reader, &branch);
        kaa_union->type = branch;

        switch (kaa_union->type) {
        case KAA_NOTIFICATION_UNION_STRING_OR_NULL_BRANCH_0: {
            kaa_union->data = kaa_string_deserialize(reader);
            break;
        }
        default:
            break;
        }
    }

    return kaa_union;
}
# endif // KAA_NOTIFICATION_UNION_STRING_OR_NULL_C_



static void kaa_notification_sample_notification_destroy(void *data)
{
    if (data) {
        kaa_notification_sample_notification_t *record = (kaa_notification_sample_notification_t *)data;

        if (record->message && record->message->destroy) {
            record->message->destroy(record->message);
        }
        kaa_data_destroy(record);
    }
}

static void kaa_notification_sample_notification_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        kaa_notification_sample_notification_t *record = (kaa_notification_sample_notification_t *)data;

        record->message->serialize(writer, record->message);
    }
}

static size_t kaa_notification_sample_notification_get_size(void *data)
{
    if (data) {
        size_t record_size = 0;
        kaa_notification_sample_notification_t *record = (kaa_notification_sample_notification_t *)data;

        record_size += record->message->get_size(record->message);

        return record_size;
    }

    return 0;
}

kaa_notification_sample_notification_t *kaa_notification_sample_notification_create(void)
{
    kaa_notification_sample_notification_t *record = 
            (kaa_notification_sample_notification_t *)KAA_CALLOC(1, sizeof(kaa_notification_sample_notification_t));

    if (record) {
        record->serialize = kaa_notification_sample_notification_serialize;
        record->get_size = kaa_notification_sample_notification_get_size;
        record->destroy = kaa_notification_sample_notification_destroy;
    }

    return record;
}

kaa_notification_sample_notification_t *kaa_notification_sample_notification_deserialize(avro_reader_t reader)
{
    kaa_notification_sample_notification_t *record = 
            (kaa_notification_sample_notification_t *)KAA_MALLOC(sizeof(kaa_notification_sample_notification_t));

    if (record) {
        record->serialize = kaa_notification_sample_notification_serialize;
        record->get_size = kaa_notification_sample_notification_get_size;
        record->destroy = kaa_notification_sample_notification_destroy;

        record->message = kaa_notification_union_string_or_null_deserialize(reader);
    }

    return record;
}

