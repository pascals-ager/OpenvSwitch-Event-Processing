/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#ifndef NBREC_IDL_HEADER
#define NBREC_IDL_HEADER 1

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "ovsdb-data.h"
#include "ovsdb-idl-provider.h"
#include "smap.h"
#include "uuid.h"

/* ACL table. */
struct nbrec_acl {
	struct ovsdb_idl_row header_;

	/* action column. */
	char *action;	/* Always nonnull. */

	/* direction column. */
	char *direction;	/* Always nonnull. */

	/* external_ids column. */
	struct smap external_ids;

	/* log column. */
	bool log;

	/* match column. */
	char *match;	/* Always nonnull. */

	/* priority column. */
	int64_t priority;
};

enum nbrec_acl_column_id {
    NBREC_ACL_COL_ACTION,
    NBREC_ACL_COL_DIRECTION,
    NBREC_ACL_COL_EXTERNAL_IDS,
    NBREC_ACL_COL_LOG,
    NBREC_ACL_COL_MATCH,
    NBREC_ACL_COL_PRIORITY,
    NBREC_ACL_N_COLUMNS
};

#define nbrec_acl_col_direction (nbrec_acl_columns[NBREC_ACL_COL_DIRECTION])
#define nbrec_acl_col_log (nbrec_acl_columns[NBREC_ACL_COL_LOG])
#define nbrec_acl_col_priority (nbrec_acl_columns[NBREC_ACL_COL_PRIORITY])
#define nbrec_acl_col_action (nbrec_acl_columns[NBREC_ACL_COL_ACTION])
#define nbrec_acl_col_external_ids (nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS])
#define nbrec_acl_col_match (nbrec_acl_columns[NBREC_ACL_COL_MATCH])

extern struct ovsdb_idl_column nbrec_acl_columns[NBREC_ACL_N_COLUMNS];

const struct nbrec_acl *nbrec_acl_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_acl *nbrec_acl_first(const struct ovsdb_idl *);
const struct nbrec_acl *nbrec_acl_next(const struct nbrec_acl *);
#define NBREC_ACL_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_acl_first(IDL); \
             (ROW); \
             (ROW) = nbrec_acl_next(ROW))
#define NBREC_ACL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_acl_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_acl_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_acl_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_acl_row_get_seqno(const struct nbrec_acl *row, enum ovsdb_idl_change change);
const struct nbrec_acl *nbrec_acl_track_get_first(const struct ovsdb_idl *);
const struct nbrec_acl *nbrec_acl_track_get_next(const struct nbrec_acl *);
#define NBREC_ACL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_acl_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_acl_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_acl_is_new(const struct nbrec_acl *row)
{
    return nbrec_acl_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_acl_is_deleted(const struct nbrec_acl *row)
{
    return nbrec_acl_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_acl_init(struct nbrec_acl *);
void nbrec_acl_delete(const struct nbrec_acl *);
struct nbrec_acl *nbrec_acl_insert(struct ovsdb_idl_txn *);
bool nbrec_acl_is_updated(const struct nbrec_acl *, enum nbrec_acl_column_id);

void nbrec_acl_verify_action(const struct nbrec_acl *);
void nbrec_acl_verify_direction(const struct nbrec_acl *);
void nbrec_acl_verify_external_ids(const struct nbrec_acl *);
void nbrec_acl_verify_log(const struct nbrec_acl *);
void nbrec_acl_verify_match(const struct nbrec_acl *);
void nbrec_acl_verify_priority(const struct nbrec_acl *);

const struct ovsdb_datum *nbrec_acl_get_action(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_direction(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_external_ids(const struct nbrec_acl *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_acl_get_log(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_match(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_priority(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);

void nbrec_acl_set_action(const struct nbrec_acl *, const char *action);
void nbrec_acl_set_direction(const struct nbrec_acl *, const char *direction);
void nbrec_acl_set_external_ids(const struct nbrec_acl *, const struct smap *);
void nbrec_acl_set_log(const struct nbrec_acl *, bool log);
void nbrec_acl_set_match(const struct nbrec_acl *, const char *match);
void nbrec_acl_set_priority(const struct nbrec_acl *, int64_t priority);

void nbrec_acl_add_clause_action(struct ovsdb_idl *idl, enum ovsdb_function function, const char *action);
void nbrec_acl_add_clause_direction(struct ovsdb_idl *idl, enum ovsdb_function function, const char *direction);
void nbrec_acl_update_external_ids_setkey(const struct nbrec_acl *,  const char *, const char *);
void nbrec_acl_update_external_ids_delkey(const struct nbrec_acl *,  const char *);
void nbrec_acl_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_acl_add_clause_log(struct ovsdb_idl *idl, enum ovsdb_function function, bool log);
void nbrec_acl_add_clause_match(struct ovsdb_idl *idl, enum ovsdb_function function, const char *match);
void nbrec_acl_add_clause_priority(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t priority);
void nbrec_acl_add_clause_true(struct ovsdb_idl *idl);
void nbrec_acl_add_clause_false(struct ovsdb_idl *idl);

void nbrec_acl_remove_clause_action(struct ovsdb_idl *idl, enum ovsdb_function function, const char *action);
void nbrec_acl_remove_clause_direction(struct ovsdb_idl *idl, enum ovsdb_function function, const char *direction);
void nbrec_acl_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_acl_remove_clause_log(struct ovsdb_idl *idl, enum ovsdb_function function, bool log);
void nbrec_acl_remove_clause_match(struct ovsdb_idl *idl, enum ovsdb_function function, const char *match);
void nbrec_acl_remove_clause_priority(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t priority);
void nbrec_acl_remove_clause_true(struct ovsdb_idl *idl);
void nbrec_acl_remove_clause_false(struct ovsdb_idl *idl);


/* Address_Set table. */
struct nbrec_address_set {
	struct ovsdb_idl_row header_;

	/* addresses column. */
	char **addresses;
	size_t n_addresses;

	/* external_ids column. */
	struct smap external_ids;

	/* name column. */
	char *name;	/* Always nonnull. */
};

enum nbrec_address_set_column_id {
    NBREC_ADDRESS_SET_COL_ADDRESSES,
    NBREC_ADDRESS_SET_COL_EXTERNAL_IDS,
    NBREC_ADDRESS_SET_COL_NAME,
    NBREC_ADDRESS_SET_N_COLUMNS
};

#define nbrec_address_set_col_external_ids (nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_EXTERNAL_IDS])
#define nbrec_address_set_col_addresses (nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_ADDRESSES])
#define nbrec_address_set_col_name (nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_NAME])

extern struct ovsdb_idl_column nbrec_address_set_columns[NBREC_ADDRESS_SET_N_COLUMNS];

const struct nbrec_address_set *nbrec_address_set_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_address_set *nbrec_address_set_first(const struct ovsdb_idl *);
const struct nbrec_address_set *nbrec_address_set_next(const struct nbrec_address_set *);
#define NBREC_ADDRESS_SET_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_address_set_first(IDL); \
             (ROW); \
             (ROW) = nbrec_address_set_next(ROW))
#define NBREC_ADDRESS_SET_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_address_set_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_address_set_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_address_set_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_address_set_row_get_seqno(const struct nbrec_address_set *row, enum ovsdb_idl_change change);
const struct nbrec_address_set *nbrec_address_set_track_get_first(const struct ovsdb_idl *);
const struct nbrec_address_set *nbrec_address_set_track_get_next(const struct nbrec_address_set *);
#define NBREC_ADDRESS_SET_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_address_set_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_address_set_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_address_set_is_new(const struct nbrec_address_set *row)
{
    return nbrec_address_set_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_address_set_is_deleted(const struct nbrec_address_set *row)
{
    return nbrec_address_set_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_address_set_init(struct nbrec_address_set *);
void nbrec_address_set_delete(const struct nbrec_address_set *);
struct nbrec_address_set *nbrec_address_set_insert(struct ovsdb_idl_txn *);
bool nbrec_address_set_is_updated(const struct nbrec_address_set *, enum nbrec_address_set_column_id);

void nbrec_address_set_verify_addresses(const struct nbrec_address_set *);
void nbrec_address_set_verify_external_ids(const struct nbrec_address_set *);
void nbrec_address_set_verify_name(const struct nbrec_address_set *);

const struct ovsdb_datum *nbrec_address_set_get_addresses(const struct nbrec_address_set *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_address_set_get_external_ids(const struct nbrec_address_set *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_address_set_get_name(const struct nbrec_address_set *, enum ovsdb_atomic_type key_type);

void nbrec_address_set_set_addresses(const struct nbrec_address_set *, const char **addresses, size_t n_addresses);
void nbrec_address_set_set_external_ids(const struct nbrec_address_set *, const struct smap *);
void nbrec_address_set_set_name(const struct nbrec_address_set *, const char *name);

void nbrec_address_set_update_addresses_addvalue(const struct nbrec_address_set *,  const char *);
void nbrec_address_set_update_addresses_delvalue(const struct nbrec_address_set *,  const char *);
void nbrec_address_set_add_clause_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char **addresses, size_t n_addresses);
void nbrec_address_set_update_external_ids_setkey(const struct nbrec_address_set *,  const char *, const char *);
void nbrec_address_set_update_external_ids_delkey(const struct nbrec_address_set *,  const char *);
void nbrec_address_set_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_address_set_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name);
void nbrec_address_set_add_clause_true(struct ovsdb_idl *idl);
void nbrec_address_set_add_clause_false(struct ovsdb_idl *idl);

void nbrec_address_set_remove_clause_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char **addresses, size_t n_addresses);
void nbrec_address_set_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_address_set_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name);
void nbrec_address_set_remove_clause_true(struct ovsdb_idl *idl);
void nbrec_address_set_remove_clause_false(struct ovsdb_idl *idl);


/* DHCP_Options table. */
struct nbrec_dhcp_options {
	struct ovsdb_idl_row header_;

	/* cidr column. */
	char *cidr;	/* Always nonnull. */

	/* external_ids column. */
	struct smap external_ids;

	/* options column. */
	struct smap options;
};

enum nbrec_dhcp_options_column_id {
    NBREC_DHCP_OPTIONS_COL_CIDR,
    NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS,
    NBREC_DHCP_OPTIONS_COL_OPTIONS,
    NBREC_DHCP_OPTIONS_N_COLUMNS
};

#define nbrec_dhcp_options_col_cidr (nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_CIDR])
#define nbrec_dhcp_options_col_external_ids (nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS])
#define nbrec_dhcp_options_col_options (nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_OPTIONS])

extern struct ovsdb_idl_column nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_N_COLUMNS];

const struct nbrec_dhcp_options *nbrec_dhcp_options_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_dhcp_options *nbrec_dhcp_options_first(const struct ovsdb_idl *);
const struct nbrec_dhcp_options *nbrec_dhcp_options_next(const struct nbrec_dhcp_options *);
#define NBREC_DHCP_OPTIONS_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_dhcp_options_first(IDL); \
             (ROW); \
             (ROW) = nbrec_dhcp_options_next(ROW))
#define NBREC_DHCP_OPTIONS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_dhcp_options_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_dhcp_options_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_dhcp_options_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_dhcp_options_row_get_seqno(const struct nbrec_dhcp_options *row, enum ovsdb_idl_change change);
const struct nbrec_dhcp_options *nbrec_dhcp_options_track_get_first(const struct ovsdb_idl *);
const struct nbrec_dhcp_options *nbrec_dhcp_options_track_get_next(const struct nbrec_dhcp_options *);
#define NBREC_DHCP_OPTIONS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_dhcp_options_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_dhcp_options_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_dhcp_options_is_new(const struct nbrec_dhcp_options *row)
{
    return nbrec_dhcp_options_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_dhcp_options_is_deleted(const struct nbrec_dhcp_options *row)
{
    return nbrec_dhcp_options_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_dhcp_options_init(struct nbrec_dhcp_options *);
void nbrec_dhcp_options_delete(const struct nbrec_dhcp_options *);
struct nbrec_dhcp_options *nbrec_dhcp_options_insert(struct ovsdb_idl_txn *);
bool nbrec_dhcp_options_is_updated(const struct nbrec_dhcp_options *, enum nbrec_dhcp_options_column_id);

void nbrec_dhcp_options_verify_cidr(const struct nbrec_dhcp_options *);
void nbrec_dhcp_options_verify_external_ids(const struct nbrec_dhcp_options *);
void nbrec_dhcp_options_verify_options(const struct nbrec_dhcp_options *);

const struct ovsdb_datum *nbrec_dhcp_options_get_cidr(const struct nbrec_dhcp_options *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_dhcp_options_get_external_ids(const struct nbrec_dhcp_options *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_dhcp_options_get_options(const struct nbrec_dhcp_options *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);

void nbrec_dhcp_options_set_cidr(const struct nbrec_dhcp_options *, const char *cidr);
void nbrec_dhcp_options_set_external_ids(const struct nbrec_dhcp_options *, const struct smap *);
void nbrec_dhcp_options_set_options(const struct nbrec_dhcp_options *, const struct smap *);

void nbrec_dhcp_options_add_clause_cidr(struct ovsdb_idl *idl, enum ovsdb_function function, const char *cidr);
void nbrec_dhcp_options_update_external_ids_setkey(const struct nbrec_dhcp_options *,  const char *, const char *);
void nbrec_dhcp_options_update_external_ids_delkey(const struct nbrec_dhcp_options *,  const char *);
void nbrec_dhcp_options_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_dhcp_options_update_options_setkey(const struct nbrec_dhcp_options *,  const char *, const char *);
void nbrec_dhcp_options_update_options_delkey(const struct nbrec_dhcp_options *,  const char *);
void nbrec_dhcp_options_add_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_dhcp_options_add_clause_true(struct ovsdb_idl *idl);
void nbrec_dhcp_options_add_clause_false(struct ovsdb_idl *idl);

void nbrec_dhcp_options_remove_clause_cidr(struct ovsdb_idl *idl, enum ovsdb_function function, const char *cidr);
void nbrec_dhcp_options_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_dhcp_options_remove_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_dhcp_options_remove_clause_true(struct ovsdb_idl *idl);
void nbrec_dhcp_options_remove_clause_false(struct ovsdb_idl *idl);


/* Load_Balancer table. */
struct nbrec_load_balancer {
	struct ovsdb_idl_row header_;

	/* external_ids column. */
	struct smap external_ids;

	/* protocol column. */
	char *protocol;

	/* vips column. */
	struct smap vips;
};

enum nbrec_load_balancer_column_id {
    NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS,
    NBREC_LOAD_BALANCER_COL_PROTOCOL,
    NBREC_LOAD_BALANCER_COL_VIPS,
    NBREC_LOAD_BALANCER_N_COLUMNS
};

#define nbrec_load_balancer_col_protocol (nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_PROTOCOL])
#define nbrec_load_balancer_col_external_ids (nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS])
#define nbrec_load_balancer_col_vips (nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_VIPS])

extern struct ovsdb_idl_column nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_N_COLUMNS];

const struct nbrec_load_balancer *nbrec_load_balancer_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_load_balancer *nbrec_load_balancer_first(const struct ovsdb_idl *);
const struct nbrec_load_balancer *nbrec_load_balancer_next(const struct nbrec_load_balancer *);
#define NBREC_LOAD_BALANCER_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_load_balancer_first(IDL); \
             (ROW); \
             (ROW) = nbrec_load_balancer_next(ROW))
#define NBREC_LOAD_BALANCER_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_load_balancer_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_load_balancer_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_load_balancer_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_load_balancer_row_get_seqno(const struct nbrec_load_balancer *row, enum ovsdb_idl_change change);
const struct nbrec_load_balancer *nbrec_load_balancer_track_get_first(const struct ovsdb_idl *);
const struct nbrec_load_balancer *nbrec_load_balancer_track_get_next(const struct nbrec_load_balancer *);
#define NBREC_LOAD_BALANCER_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_load_balancer_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_load_balancer_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_load_balancer_is_new(const struct nbrec_load_balancer *row)
{
    return nbrec_load_balancer_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_load_balancer_is_deleted(const struct nbrec_load_balancer *row)
{
    return nbrec_load_balancer_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_load_balancer_init(struct nbrec_load_balancer *);
void nbrec_load_balancer_delete(const struct nbrec_load_balancer *);
struct nbrec_load_balancer *nbrec_load_balancer_insert(struct ovsdb_idl_txn *);
bool nbrec_load_balancer_is_updated(const struct nbrec_load_balancer *, enum nbrec_load_balancer_column_id);

void nbrec_load_balancer_verify_external_ids(const struct nbrec_load_balancer *);
void nbrec_load_balancer_verify_protocol(const struct nbrec_load_balancer *);
void nbrec_load_balancer_verify_vips(const struct nbrec_load_balancer *);

const struct ovsdb_datum *nbrec_load_balancer_get_external_ids(const struct nbrec_load_balancer *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_load_balancer_get_protocol(const struct nbrec_load_balancer *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_load_balancer_get_vips(const struct nbrec_load_balancer *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);

void nbrec_load_balancer_set_external_ids(const struct nbrec_load_balancer *, const struct smap *);
void nbrec_load_balancer_set_protocol(const struct nbrec_load_balancer *, const char *protocol);
void nbrec_load_balancer_set_vips(const struct nbrec_load_balancer *, const struct smap *);

void nbrec_load_balancer_update_external_ids_setkey(const struct nbrec_load_balancer *,  const char *, const char *);
void nbrec_load_balancer_update_external_ids_delkey(const struct nbrec_load_balancer *,  const char *);
void nbrec_load_balancer_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_load_balancer_update_protocol_addvalue(const struct nbrec_load_balancer *,  const char *);
void nbrec_load_balancer_update_protocol_delvalue(const struct nbrec_load_balancer *,  const char *);
void nbrec_load_balancer_add_clause_protocol(struct ovsdb_idl *idl, enum ovsdb_function function, const char *protocol);
void nbrec_load_balancer_update_vips_setkey(const struct nbrec_load_balancer *,  const char *, const char *);
void nbrec_load_balancer_update_vips_delkey(const struct nbrec_load_balancer *,  const char *);
void nbrec_load_balancer_add_clause_vips(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_load_balancer_add_clause_true(struct ovsdb_idl *idl);
void nbrec_load_balancer_add_clause_false(struct ovsdb_idl *idl);

void nbrec_load_balancer_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_load_balancer_remove_clause_protocol(struct ovsdb_idl *idl, enum ovsdb_function function, const char *protocol);
void nbrec_load_balancer_remove_clause_vips(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_load_balancer_remove_clause_true(struct ovsdb_idl *idl);
void nbrec_load_balancer_remove_clause_false(struct ovsdb_idl *idl);


/* Logical_Router table. */
struct nbrec_logical_router {
	struct ovsdb_idl_row header_;

	/* enabled column. */
	bool *enabled;
	size_t n_enabled;

	/* external_ids column. */
	struct smap external_ids;

	/* load_balancer column. */
	struct nbrec_load_balancer **load_balancer;
	size_t n_load_balancer;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* nat column. */
	struct nbrec_nat **nat;
	size_t n_nat;

	/* options column. */
	struct smap options;

	/* ports column. */
	struct nbrec_logical_router_port **ports;
	size_t n_ports;

	/* static_routes column. */
	struct nbrec_logical_router_static_route **static_routes;
	size_t n_static_routes;
};

enum nbrec_logical_router_column_id {
    NBREC_LOGICAL_ROUTER_COL_ENABLED,
    NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER,
    NBREC_LOGICAL_ROUTER_COL_NAME,
    NBREC_LOGICAL_ROUTER_COL_NAT,
    NBREC_LOGICAL_ROUTER_COL_OPTIONS,
    NBREC_LOGICAL_ROUTER_COL_PORTS,
    NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES,
    NBREC_LOGICAL_ROUTER_N_COLUMNS
};

#define nbrec_logical_router_col_load_balancer (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER])
#define nbrec_logical_router_col_name (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAME])
#define nbrec_logical_router_col_static_routes (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES])
#define nbrec_logical_router_col_enabled (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_ENABLED])
#define nbrec_logical_router_col_options (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_OPTIONS])
#define nbrec_logical_router_col_nat (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAT])
#define nbrec_logical_router_col_external_ids (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS])
#define nbrec_logical_router_col_ports (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_PORTS])

extern struct ovsdb_idl_column nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_N_COLUMNS];

const struct nbrec_logical_router *nbrec_logical_router_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_router *nbrec_logical_router_first(const struct ovsdb_idl *);
const struct nbrec_logical_router *nbrec_logical_router_next(const struct nbrec_logical_router *);
#define NBREC_LOGICAL_ROUTER_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_next(ROW))
#define NBREC_LOGICAL_ROUTER_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_router_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_router_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_router_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_router_row_get_seqno(const struct nbrec_logical_router *row, enum ovsdb_idl_change change);
const struct nbrec_logical_router *nbrec_logical_router_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_router *nbrec_logical_router_track_get_next(const struct nbrec_logical_router *);
#define NBREC_LOGICAL_ROUTER_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_logical_router_is_new(const struct nbrec_logical_router *row)
{
    return nbrec_logical_router_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_logical_router_is_deleted(const struct nbrec_logical_router *row)
{
    return nbrec_logical_router_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_logical_router_init(struct nbrec_logical_router *);
void nbrec_logical_router_delete(const struct nbrec_logical_router *);
struct nbrec_logical_router *nbrec_logical_router_insert(struct ovsdb_idl_txn *);
bool nbrec_logical_router_is_updated(const struct nbrec_logical_router *, enum nbrec_logical_router_column_id);

void nbrec_logical_router_verify_enabled(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_external_ids(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_load_balancer(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_name(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_nat(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_options(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_ports(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_static_routes(const struct nbrec_logical_router *);

const struct ovsdb_datum *nbrec_logical_router_get_enabled(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_external_ids(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_router_get_load_balancer(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_name(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_nat(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_options(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_router_get_ports(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_static_routes(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);

void nbrec_logical_router_set_enabled(const struct nbrec_logical_router *, const bool *enabled, size_t n_enabled);
void nbrec_logical_router_set_external_ids(const struct nbrec_logical_router *, const struct smap *);
void nbrec_logical_router_set_load_balancer(const struct nbrec_logical_router *, struct nbrec_load_balancer **load_balancer, size_t n_load_balancer);
void nbrec_logical_router_set_name(const struct nbrec_logical_router *, const char *name);
void nbrec_logical_router_set_nat(const struct nbrec_logical_router *, struct nbrec_nat **nat, size_t n_nat);
void nbrec_logical_router_set_options(const struct nbrec_logical_router *, const struct smap *);
void nbrec_logical_router_set_ports(const struct nbrec_logical_router *, struct nbrec_logical_router_port **ports, size_t n_ports);
void nbrec_logical_router_set_static_routes(const struct nbrec_logical_router *, struct nbrec_logical_router_static_route **static_routes, size_t n_static_routes);

void nbrec_logical_router_update_enabled_addvalue(const struct nbrec_logical_router *,  bool );
void nbrec_logical_router_update_enabled_delvalue(const struct nbrec_logical_router *,  bool );
void nbrec_logical_router_add_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled);
void nbrec_logical_router_update_external_ids_setkey(const struct nbrec_logical_router *,  const char *, const char *);
void nbrec_logical_router_update_external_ids_delkey(const struct nbrec_logical_router *,  const char *);
void nbrec_logical_router_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_router_update_load_balancer_addvalue(const struct nbrec_logical_router *,  const struct nbrec_load_balancer *);
void nbrec_logical_router_update_load_balancer_delvalue(const struct nbrec_logical_router *,  const struct nbrec_load_balancer *);
void nbrec_logical_router_add_clause_load_balancer(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer);
void nbrec_logical_router_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name);
void nbrec_logical_router_update_nat_addvalue(const struct nbrec_logical_router *,  const struct nbrec_nat *);
void nbrec_logical_router_update_nat_delvalue(const struct nbrec_logical_router *,  const struct nbrec_nat *);
void nbrec_logical_router_add_clause_nat(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **nat, size_t n_nat);
void nbrec_logical_router_update_options_setkey(const struct nbrec_logical_router *,  const char *, const char *);
void nbrec_logical_router_update_options_delkey(const struct nbrec_logical_router *,  const char *);
void nbrec_logical_router_add_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_router_update_ports_addvalue(const struct nbrec_logical_router *,  const struct nbrec_logical_router_port *);
void nbrec_logical_router_update_ports_delvalue(const struct nbrec_logical_router *,  const struct nbrec_logical_router_port *);
void nbrec_logical_router_add_clause_ports(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **ports, size_t n_ports);
void nbrec_logical_router_update_static_routes_addvalue(const struct nbrec_logical_router *,  const struct nbrec_logical_router_static_route *);
void nbrec_logical_router_update_static_routes_delvalue(const struct nbrec_logical_router *,  const struct nbrec_logical_router_static_route *);
void nbrec_logical_router_add_clause_static_routes(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **static_routes, size_t n_static_routes);
void nbrec_logical_router_add_clause_true(struct ovsdb_idl *idl);
void nbrec_logical_router_add_clause_false(struct ovsdb_idl *idl);

void nbrec_logical_router_remove_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled);
void nbrec_logical_router_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_router_remove_clause_load_balancer(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer);
void nbrec_logical_router_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name);
void nbrec_logical_router_remove_clause_nat(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **nat, size_t n_nat);
void nbrec_logical_router_remove_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_router_remove_clause_ports(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **ports, size_t n_ports);
void nbrec_logical_router_remove_clause_static_routes(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **static_routes, size_t n_static_routes);
void nbrec_logical_router_remove_clause_true(struct ovsdb_idl *idl);
void nbrec_logical_router_remove_clause_false(struct ovsdb_idl *idl);


/* Logical_Router_Port table. */
struct nbrec_logical_router_port {
	struct ovsdb_idl_row header_;

	/* enabled column. */
	bool *enabled;
	size_t n_enabled;

	/* external_ids column. */
	struct smap external_ids;

	/* mac column. */
	char *mac;	/* Always nonnull. */

	/* name column. */
	char *name;	/* Always nonnull. */

	/* networks column. */
	char **networks;
	size_t n_networks;

	/* peer column. */
	char *peer;
};

enum nbrec_logical_router_port_column_id {
    NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED,
    NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_ROUTER_PORT_COL_MAC,
    NBREC_LOGICAL_ROUTER_PORT_COL_NAME,
    NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS,
    NBREC_LOGICAL_ROUTER_PORT_COL_PEER,
    NBREC_LOGICAL_ROUTER_PORT_N_COLUMNS
};

#define nbrec_logical_router_port_col_name (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NAME])
#define nbrec_logical_router_port_col_enabled (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED])
#define nbrec_logical_router_port_col_mac (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_MAC])
#define nbrec_logical_router_port_col_peer (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_PEER])
#define nbrec_logical_router_port_col_external_ids (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS])
#define nbrec_logical_router_port_col_networks (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS])

extern struct ovsdb_idl_column nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_N_COLUMNS];

const struct nbrec_logical_router_port *nbrec_logical_router_port_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_first(const struct ovsdb_idl *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_next(const struct nbrec_logical_router_port *);
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_port_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_port_next(ROW))
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_router_port_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_router_port_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_router_port_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_router_port_row_get_seqno(const struct nbrec_logical_router_port *row, enum ovsdb_idl_change change);
const struct nbrec_logical_router_port *nbrec_logical_router_port_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_track_get_next(const struct nbrec_logical_router_port *);
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_port_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_port_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_logical_router_port_is_new(const struct nbrec_logical_router_port *row)
{
    return nbrec_logical_router_port_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_logical_router_port_is_deleted(const struct nbrec_logical_router_port *row)
{
    return nbrec_logical_router_port_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_logical_router_port_init(struct nbrec_logical_router_port *);
void nbrec_logical_router_port_delete(const struct nbrec_logical_router_port *);
struct nbrec_logical_router_port *nbrec_logical_router_port_insert(struct ovsdb_idl_txn *);
bool nbrec_logical_router_port_is_updated(const struct nbrec_logical_router_port *, enum nbrec_logical_router_port_column_id);

void nbrec_logical_router_port_verify_enabled(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_external_ids(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_mac(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_name(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_networks(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_peer(const struct nbrec_logical_router_port *);

const struct ovsdb_datum *nbrec_logical_router_port_get_enabled(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_external_ids(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_mac(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_name(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_networks(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_peer(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);

void nbrec_logical_router_port_set_enabled(const struct nbrec_logical_router_port *, const bool *enabled, size_t n_enabled);
void nbrec_logical_router_port_set_external_ids(const struct nbrec_logical_router_port *, const struct smap *);
void nbrec_logical_router_port_set_mac(const struct nbrec_logical_router_port *, const char *mac);
void nbrec_logical_router_port_set_name(const struct nbrec_logical_router_port *, const char *name);
void nbrec_logical_router_port_set_networks(const struct nbrec_logical_router_port *, const char **networks, size_t n_networks);
void nbrec_logical_router_port_set_peer(const struct nbrec_logical_router_port *, const char *peer);

void nbrec_logical_router_port_update_enabled_addvalue(const struct nbrec_logical_router_port *,  bool );
void nbrec_logical_router_port_update_enabled_delvalue(const struct nbrec_logical_router_port *,  bool );
void nbrec_logical_router_port_add_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled);
void nbrec_logical_router_port_update_external_ids_setkey(const struct nbrec_logical_router_port *,  const char *, const char *);
void nbrec_logical_router_port_update_external_ids_delkey(const struct nbrec_logical_router_port *,  const char *);
void nbrec_logical_router_port_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_router_port_add_clause_mac(struct ovsdb_idl *idl, enum ovsdb_function function, const char *mac);
void nbrec_logical_router_port_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name);
void nbrec_logical_router_port_update_networks_addvalue(const struct nbrec_logical_router_port *,  const char *);
void nbrec_logical_router_port_update_networks_delvalue(const struct nbrec_logical_router_port *,  const char *);
void nbrec_logical_router_port_add_clause_networks(struct ovsdb_idl *idl, enum ovsdb_function function, const char **networks, size_t n_networks);
void nbrec_logical_router_port_update_peer_addvalue(const struct nbrec_logical_router_port *,  const char *);
void nbrec_logical_router_port_update_peer_delvalue(const struct nbrec_logical_router_port *,  const char *);
void nbrec_logical_router_port_add_clause_peer(struct ovsdb_idl *idl, enum ovsdb_function function, const char *peer);
void nbrec_logical_router_port_add_clause_true(struct ovsdb_idl *idl);
void nbrec_logical_router_port_add_clause_false(struct ovsdb_idl *idl);

void nbrec_logical_router_port_remove_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled);
void nbrec_logical_router_port_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_router_port_remove_clause_mac(struct ovsdb_idl *idl, enum ovsdb_function function, const char *mac);
void nbrec_logical_router_port_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name);
void nbrec_logical_router_port_remove_clause_networks(struct ovsdb_idl *idl, enum ovsdb_function function, const char **networks, size_t n_networks);
void nbrec_logical_router_port_remove_clause_peer(struct ovsdb_idl *idl, enum ovsdb_function function, const char *peer);
void nbrec_logical_router_port_remove_clause_true(struct ovsdb_idl *idl);
void nbrec_logical_router_port_remove_clause_false(struct ovsdb_idl *idl);


/* Logical_Router_Static_Route table. */
struct nbrec_logical_router_static_route {
	struct ovsdb_idl_row header_;

	/* ip_prefix column. */
	char *ip_prefix;	/* Always nonnull. */

	/* nexthop column. */
	char *nexthop;	/* Always nonnull. */

	/* output_port column. */
	char *output_port;
};

enum nbrec_logical_router_static_route_column_id {
    NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_IP_PREFIX,
    NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_NEXTHOP,
    NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT,
    NBREC_LOGICAL_ROUTER_STATIC_ROUTE_N_COLUMNS
};

#define nbrec_logical_router_static_route_col_output_port (nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT])
#define nbrec_logical_router_static_route_col_ip_prefix (nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_IP_PREFIX])
#define nbrec_logical_router_static_route_col_nexthop (nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_NEXTHOP])

extern struct ovsdb_idl_column nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_N_COLUMNS];

const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_first(const struct ovsdb_idl *);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_next(const struct nbrec_logical_router_static_route *);
#define NBREC_LOGICAL_ROUTER_STATIC_ROUTE_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_static_route_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_static_route_next(ROW))
#define NBREC_LOGICAL_ROUTER_STATIC_ROUTE_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_router_static_route_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_router_static_route_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_router_static_route_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_router_static_route_row_get_seqno(const struct nbrec_logical_router_static_route *row, enum ovsdb_idl_change change);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_track_get_next(const struct nbrec_logical_router_static_route *);
#define NBREC_LOGICAL_ROUTER_STATIC_ROUTE_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_static_route_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_static_route_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_logical_router_static_route_is_new(const struct nbrec_logical_router_static_route *row)
{
    return nbrec_logical_router_static_route_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_logical_router_static_route_is_deleted(const struct nbrec_logical_router_static_route *row)
{
    return nbrec_logical_router_static_route_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_logical_router_static_route_init(struct nbrec_logical_router_static_route *);
void nbrec_logical_router_static_route_delete(const struct nbrec_logical_router_static_route *);
struct nbrec_logical_router_static_route *nbrec_logical_router_static_route_insert(struct ovsdb_idl_txn *);
bool nbrec_logical_router_static_route_is_updated(const struct nbrec_logical_router_static_route *, enum nbrec_logical_router_static_route_column_id);

void nbrec_logical_router_static_route_verify_ip_prefix(const struct nbrec_logical_router_static_route *);
void nbrec_logical_router_static_route_verify_nexthop(const struct nbrec_logical_router_static_route *);
void nbrec_logical_router_static_route_verify_output_port(const struct nbrec_logical_router_static_route *);

const struct ovsdb_datum *nbrec_logical_router_static_route_get_ip_prefix(const struct nbrec_logical_router_static_route *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_static_route_get_nexthop(const struct nbrec_logical_router_static_route *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_static_route_get_output_port(const struct nbrec_logical_router_static_route *, enum ovsdb_atomic_type key_type);

void nbrec_logical_router_static_route_set_ip_prefix(const struct nbrec_logical_router_static_route *, const char *ip_prefix);
void nbrec_logical_router_static_route_set_nexthop(const struct nbrec_logical_router_static_route *, const char *nexthop);
void nbrec_logical_router_static_route_set_output_port(const struct nbrec_logical_router_static_route *, const char *output_port);

void nbrec_logical_router_static_route_add_clause_ip_prefix(struct ovsdb_idl *idl, enum ovsdb_function function, const char *ip_prefix);
void nbrec_logical_router_static_route_add_clause_nexthop(struct ovsdb_idl *idl, enum ovsdb_function function, const char *nexthop);
void nbrec_logical_router_static_route_update_output_port_addvalue(const struct nbrec_logical_router_static_route *,  const char *);
void nbrec_logical_router_static_route_update_output_port_delvalue(const struct nbrec_logical_router_static_route *,  const char *);
void nbrec_logical_router_static_route_add_clause_output_port(struct ovsdb_idl *idl, enum ovsdb_function function, const char *output_port);
void nbrec_logical_router_static_route_add_clause_true(struct ovsdb_idl *idl);
void nbrec_logical_router_static_route_add_clause_false(struct ovsdb_idl *idl);

void nbrec_logical_router_static_route_remove_clause_ip_prefix(struct ovsdb_idl *idl, enum ovsdb_function function, const char *ip_prefix);
void nbrec_logical_router_static_route_remove_clause_nexthop(struct ovsdb_idl *idl, enum ovsdb_function function, const char *nexthop);
void nbrec_logical_router_static_route_remove_clause_output_port(struct ovsdb_idl *idl, enum ovsdb_function function, const char *output_port);
void nbrec_logical_router_static_route_remove_clause_true(struct ovsdb_idl *idl);
void nbrec_logical_router_static_route_remove_clause_false(struct ovsdb_idl *idl);


/* Logical_Switch table. */
struct nbrec_logical_switch {
	struct ovsdb_idl_row header_;

	/* acls column. */
	struct nbrec_acl **acls;
	size_t n_acls;

	/* external_ids column. */
	struct smap external_ids;

	/* load_balancer column. */
	struct nbrec_load_balancer **load_balancer;
	size_t n_load_balancer;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* other_config column. */
	struct smap other_config;

	/* ports column. */
	struct nbrec_logical_switch_port **ports;
	size_t n_ports;
};

enum nbrec_logical_switch_column_id {
    NBREC_LOGICAL_SWITCH_COL_ACLS,
    NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER,
    NBREC_LOGICAL_SWITCH_COL_NAME,
    NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG,
    NBREC_LOGICAL_SWITCH_COL_PORTS,
    NBREC_LOGICAL_SWITCH_N_COLUMNS
};

#define nbrec_logical_switch_col_load_balancer (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER])
#define nbrec_logical_switch_col_name (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_NAME])
#define nbrec_logical_switch_col_other_config (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG])
#define nbrec_logical_switch_col_acls (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_ACLS])
#define nbrec_logical_switch_col_external_ids (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS])
#define nbrec_logical_switch_col_ports (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_PORTS])

extern struct ovsdb_idl_column nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_N_COLUMNS];

const struct nbrec_logical_switch *nbrec_logical_switch_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_switch *nbrec_logical_switch_first(const struct ovsdb_idl *);
const struct nbrec_logical_switch *nbrec_logical_switch_next(const struct nbrec_logical_switch *);
#define NBREC_LOGICAL_SWITCH_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_switch_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_switch_next(ROW))
#define NBREC_LOGICAL_SWITCH_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_switch_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_switch_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_switch_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_switch_row_get_seqno(const struct nbrec_logical_switch *row, enum ovsdb_idl_change change);
const struct nbrec_logical_switch *nbrec_logical_switch_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_switch *nbrec_logical_switch_track_get_next(const struct nbrec_logical_switch *);
#define NBREC_LOGICAL_SWITCH_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_switch_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_switch_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_logical_switch_is_new(const struct nbrec_logical_switch *row)
{
    return nbrec_logical_switch_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_logical_switch_is_deleted(const struct nbrec_logical_switch *row)
{
    return nbrec_logical_switch_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_logical_switch_init(struct nbrec_logical_switch *);
void nbrec_logical_switch_delete(const struct nbrec_logical_switch *);
struct nbrec_logical_switch *nbrec_logical_switch_insert(struct ovsdb_idl_txn *);
bool nbrec_logical_switch_is_updated(const struct nbrec_logical_switch *, enum nbrec_logical_switch_column_id);

void nbrec_logical_switch_verify_acls(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_external_ids(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_load_balancer(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_name(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_other_config(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_ports(const struct nbrec_logical_switch *);

const struct ovsdb_datum *nbrec_logical_switch_get_acls(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_get_external_ids(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_switch_get_load_balancer(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_get_name(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_get_other_config(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_switch_get_ports(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);

void nbrec_logical_switch_set_acls(const struct nbrec_logical_switch *, struct nbrec_acl **acls, size_t n_acls);
void nbrec_logical_switch_set_external_ids(const struct nbrec_logical_switch *, const struct smap *);
void nbrec_logical_switch_set_load_balancer(const struct nbrec_logical_switch *, struct nbrec_load_balancer **load_balancer, size_t n_load_balancer);
void nbrec_logical_switch_set_name(const struct nbrec_logical_switch *, const char *name);
void nbrec_logical_switch_set_other_config(const struct nbrec_logical_switch *, const struct smap *);
void nbrec_logical_switch_set_ports(const struct nbrec_logical_switch *, struct nbrec_logical_switch_port **ports, size_t n_ports);

void nbrec_logical_switch_update_acls_addvalue(const struct nbrec_logical_switch *,  const struct nbrec_acl *);
void nbrec_logical_switch_update_acls_delvalue(const struct nbrec_logical_switch *,  const struct nbrec_acl *);
void nbrec_logical_switch_add_clause_acls(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **acls, size_t n_acls);
void nbrec_logical_switch_update_external_ids_setkey(const struct nbrec_logical_switch *,  const char *, const char *);
void nbrec_logical_switch_update_external_ids_delkey(const struct nbrec_logical_switch *,  const char *);
void nbrec_logical_switch_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_update_load_balancer_addvalue(const struct nbrec_logical_switch *,  const struct nbrec_load_balancer *);
void nbrec_logical_switch_update_load_balancer_delvalue(const struct nbrec_logical_switch *,  const struct nbrec_load_balancer *);
void nbrec_logical_switch_add_clause_load_balancer(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer);
void nbrec_logical_switch_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name);
void nbrec_logical_switch_update_other_config_setkey(const struct nbrec_logical_switch *,  const char *, const char *);
void nbrec_logical_switch_update_other_config_delkey(const struct nbrec_logical_switch *,  const char *);
void nbrec_logical_switch_add_clause_other_config(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_update_ports_addvalue(const struct nbrec_logical_switch *,  const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_update_ports_delvalue(const struct nbrec_logical_switch *,  const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_add_clause_ports(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **ports, size_t n_ports);
void nbrec_logical_switch_add_clause_true(struct ovsdb_idl *idl);
void nbrec_logical_switch_add_clause_false(struct ovsdb_idl *idl);

void nbrec_logical_switch_remove_clause_acls(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **acls, size_t n_acls);
void nbrec_logical_switch_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_remove_clause_load_balancer(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer);
void nbrec_logical_switch_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name);
void nbrec_logical_switch_remove_clause_other_config(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_remove_clause_ports(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **ports, size_t n_ports);
void nbrec_logical_switch_remove_clause_true(struct ovsdb_idl *idl);
void nbrec_logical_switch_remove_clause_false(struct ovsdb_idl *idl);


/* Logical_Switch_Port table. */
struct nbrec_logical_switch_port {
	struct ovsdb_idl_row header_;

	/* addresses column. */
	char **addresses;
	size_t n_addresses;

	/* dhcpv4_options column. */
	struct nbrec_dhcp_options *dhcpv4_options;

	/* dhcpv6_options column. */
	struct nbrec_dhcp_options *dhcpv6_options;

	/* dynamic_addresses column. */
	char *dynamic_addresses;

	/* enabled column. */
	bool *enabled;
	size_t n_enabled;

	/* external_ids column. */
	struct smap external_ids;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* options column. */
	struct smap options;

	/* parent_name column. */
	char *parent_name;

	/* port_security column. */
	char **port_security;
	size_t n_port_security;

	/* tag column. */
	int64_t *tag;
	size_t n_tag;

	/* tag_request column. */
	int64_t *tag_request;
	size_t n_tag_request;

	/* type column. */
	char *type;	/* Always nonnull. */

	/* up column. */
	bool *up;
	size_t n_up;
};

enum nbrec_logical_switch_port_column_id {
    NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES,
    NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS,
    NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS,
    NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES,
    NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED,
    NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_SWITCH_PORT_COL_NAME,
    NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS,
    NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME,
    NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY,
    NBREC_LOGICAL_SWITCH_PORT_COL_TAG,
    NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST,
    NBREC_LOGICAL_SWITCH_PORT_COL_TYPE,
    NBREC_LOGICAL_SWITCH_PORT_COL_UP,
    NBREC_LOGICAL_SWITCH_PORT_N_COLUMNS
};

#define nbrec_logical_switch_port_col_parent_name (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME])
#define nbrec_logical_switch_port_col_addresses (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES])
#define nbrec_logical_switch_port_col_enabled (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED])
#define nbrec_logical_switch_port_col_up (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_UP])
#define nbrec_logical_switch_port_col_port_security (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY])
#define nbrec_logical_switch_port_col_dhcpv6_options (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS])
#define nbrec_logical_switch_port_col_tag_request (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST])
#define nbrec_logical_switch_port_col_dynamic_addresses (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES])
#define nbrec_logical_switch_port_col_external_ids (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS])
#define nbrec_logical_switch_port_col_tag (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG])
#define nbrec_logical_switch_port_col_type (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TYPE])
#define nbrec_logical_switch_port_col_options (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS])
#define nbrec_logical_switch_port_col_dhcpv4_options (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS])
#define nbrec_logical_switch_port_col_name (nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_NAME])

extern struct ovsdb_idl_column nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_N_COLUMNS];

const struct nbrec_logical_switch_port *nbrec_logical_switch_port_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_first(const struct ovsdb_idl *);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_next(const struct nbrec_logical_switch_port *);
#define NBREC_LOGICAL_SWITCH_PORT_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_switch_port_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_switch_port_next(ROW))
#define NBREC_LOGICAL_SWITCH_PORT_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_switch_port_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_switch_port_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_switch_port_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_switch_port_row_get_seqno(const struct nbrec_logical_switch_port *row, enum ovsdb_idl_change change);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_switch_port *nbrec_logical_switch_port_track_get_next(const struct nbrec_logical_switch_port *);
#define NBREC_LOGICAL_SWITCH_PORT_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_switch_port_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_switch_port_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_logical_switch_port_is_new(const struct nbrec_logical_switch_port *row)
{
    return nbrec_logical_switch_port_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_logical_switch_port_is_deleted(const struct nbrec_logical_switch_port *row)
{
    return nbrec_logical_switch_port_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_logical_switch_port_init(struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_delete(const struct nbrec_logical_switch_port *);
struct nbrec_logical_switch_port *nbrec_logical_switch_port_insert(struct ovsdb_idl_txn *);
bool nbrec_logical_switch_port_is_updated(const struct nbrec_logical_switch_port *, enum nbrec_logical_switch_port_column_id);

void nbrec_logical_switch_port_verify_addresses(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_dhcpv4_options(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_dhcpv6_options(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_dynamic_addresses(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_enabled(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_external_ids(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_name(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_options(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_parent_name(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_port_security(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_tag(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_tag_request(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_type(const struct nbrec_logical_switch_port *);
void nbrec_logical_switch_port_verify_up(const struct nbrec_logical_switch_port *);

const struct ovsdb_datum *nbrec_logical_switch_port_get_addresses(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_dhcpv4_options(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_dhcpv6_options(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_dynamic_addresses(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_enabled(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_external_ids(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_name(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_options(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_parent_name(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_port_security(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_tag(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_tag_request(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_type(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_port_get_up(const struct nbrec_logical_switch_port *, enum ovsdb_atomic_type key_type);

void nbrec_logical_switch_port_set_addresses(const struct nbrec_logical_switch_port *, const char **addresses, size_t n_addresses);
void nbrec_logical_switch_port_set_dhcpv4_options(const struct nbrec_logical_switch_port *, const struct nbrec_dhcp_options *dhcpv4_options);
void nbrec_logical_switch_port_set_dhcpv6_options(const struct nbrec_logical_switch_port *, const struct nbrec_dhcp_options *dhcpv6_options);
void nbrec_logical_switch_port_set_dynamic_addresses(const struct nbrec_logical_switch_port *, const char *dynamic_addresses);
void nbrec_logical_switch_port_set_enabled(const struct nbrec_logical_switch_port *, const bool *enabled, size_t n_enabled);
void nbrec_logical_switch_port_set_external_ids(const struct nbrec_logical_switch_port *, const struct smap *);
void nbrec_logical_switch_port_set_name(const struct nbrec_logical_switch_port *, const char *name);
void nbrec_logical_switch_port_set_options(const struct nbrec_logical_switch_port *, const struct smap *);
void nbrec_logical_switch_port_set_parent_name(const struct nbrec_logical_switch_port *, const char *parent_name);
void nbrec_logical_switch_port_set_port_security(const struct nbrec_logical_switch_port *, const char **port_security, size_t n_port_security);
void nbrec_logical_switch_port_set_tag(const struct nbrec_logical_switch_port *, const int64_t *tag, size_t n_tag);
void nbrec_logical_switch_port_set_tag_request(const struct nbrec_logical_switch_port *, const int64_t *tag_request, size_t n_tag_request);
void nbrec_logical_switch_port_set_type(const struct nbrec_logical_switch_port *, const char *type);
void nbrec_logical_switch_port_set_up(const struct nbrec_logical_switch_port *, const bool *up, size_t n_up);

void nbrec_logical_switch_port_update_addresses_addvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_update_addresses_delvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char **addresses, size_t n_addresses);
void nbrec_logical_switch_port_update_dhcpv4_options_addvalue(const struct nbrec_logical_switch_port *,  const struct nbrec_dhcp_options *);
void nbrec_logical_switch_port_update_dhcpv4_options_delvalue(const struct nbrec_logical_switch_port *,  const struct nbrec_dhcp_options *);
void nbrec_logical_switch_port_add_clause_dhcpv4_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *dhcpv4_options);
void nbrec_logical_switch_port_update_dhcpv6_options_addvalue(const struct nbrec_logical_switch_port *,  const struct nbrec_dhcp_options *);
void nbrec_logical_switch_port_update_dhcpv6_options_delvalue(const struct nbrec_logical_switch_port *,  const struct nbrec_dhcp_options *);
void nbrec_logical_switch_port_add_clause_dhcpv6_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *dhcpv6_options);
void nbrec_logical_switch_port_update_dynamic_addresses_addvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_update_dynamic_addresses_delvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_dynamic_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char *dynamic_addresses);
void nbrec_logical_switch_port_update_enabled_addvalue(const struct nbrec_logical_switch_port *,  bool );
void nbrec_logical_switch_port_update_enabled_delvalue(const struct nbrec_logical_switch_port *,  bool );
void nbrec_logical_switch_port_add_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled);
void nbrec_logical_switch_port_update_external_ids_setkey(const struct nbrec_logical_switch_port *,  const char *, const char *);
void nbrec_logical_switch_port_update_external_ids_delkey(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_port_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name);
void nbrec_logical_switch_port_update_options_setkey(const struct nbrec_logical_switch_port *,  const char *, const char *);
void nbrec_logical_switch_port_update_options_delkey(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_port_update_parent_name_addvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_update_parent_name_delvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_parent_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *parent_name);
void nbrec_logical_switch_port_update_port_security_addvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_update_port_security_delvalue(const struct nbrec_logical_switch_port *,  const char *);
void nbrec_logical_switch_port_add_clause_port_security(struct ovsdb_idl *idl, enum ovsdb_function function, const char **port_security, size_t n_port_security);
void nbrec_logical_switch_port_update_tag_addvalue(const struct nbrec_logical_switch_port *,  int64_t );
void nbrec_logical_switch_port_update_tag_delvalue(const struct nbrec_logical_switch_port *,  int64_t );
void nbrec_logical_switch_port_add_clause_tag(struct ovsdb_idl *idl, enum ovsdb_function function, const int64_t *tag, size_t n_tag);
void nbrec_logical_switch_port_update_tag_request_addvalue(const struct nbrec_logical_switch_port *,  int64_t );
void nbrec_logical_switch_port_update_tag_request_delvalue(const struct nbrec_logical_switch_port *,  int64_t );
void nbrec_logical_switch_port_add_clause_tag_request(struct ovsdb_idl *idl, enum ovsdb_function function, const int64_t *tag_request, size_t n_tag_request);
void nbrec_logical_switch_port_add_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type);
void nbrec_logical_switch_port_update_up_addvalue(const struct nbrec_logical_switch_port *,  bool );
void nbrec_logical_switch_port_update_up_delvalue(const struct nbrec_logical_switch_port *,  bool );
void nbrec_logical_switch_port_add_clause_up(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *up, size_t n_up);
void nbrec_logical_switch_port_add_clause_true(struct ovsdb_idl *idl);
void nbrec_logical_switch_port_add_clause_false(struct ovsdb_idl *idl);

void nbrec_logical_switch_port_remove_clause_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char **addresses, size_t n_addresses);
void nbrec_logical_switch_port_remove_clause_dhcpv4_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *dhcpv4_options);
void nbrec_logical_switch_port_remove_clause_dhcpv6_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *dhcpv6_options);
void nbrec_logical_switch_port_remove_clause_dynamic_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char *dynamic_addresses);
void nbrec_logical_switch_port_remove_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled);
void nbrec_logical_switch_port_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_port_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name);
void nbrec_logical_switch_port_remove_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_logical_switch_port_remove_clause_parent_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *parent_name);
void nbrec_logical_switch_port_remove_clause_port_security(struct ovsdb_idl *idl, enum ovsdb_function function, const char **port_security, size_t n_port_security);
void nbrec_logical_switch_port_remove_clause_tag(struct ovsdb_idl *idl, enum ovsdb_function function, const int64_t *tag, size_t n_tag);
void nbrec_logical_switch_port_remove_clause_tag_request(struct ovsdb_idl *idl, enum ovsdb_function function, const int64_t *tag_request, size_t n_tag_request);
void nbrec_logical_switch_port_remove_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type);
void nbrec_logical_switch_port_remove_clause_up(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *up, size_t n_up);
void nbrec_logical_switch_port_remove_clause_true(struct ovsdb_idl *idl);
void nbrec_logical_switch_port_remove_clause_false(struct ovsdb_idl *idl);


/* NAT table. */
struct nbrec_nat {
	struct ovsdb_idl_row header_;

	/* external_ip column. */
	char *external_ip;	/* Always nonnull. */

	/* logical_ip column. */
	char *logical_ip;	/* Always nonnull. */

	/* type column. */
	char *type;	/* Always nonnull. */
};

enum nbrec_nat_column_id {
    NBREC_NAT_COL_EXTERNAL_IP,
    NBREC_NAT_COL_LOGICAL_IP,
    NBREC_NAT_COL_TYPE,
    NBREC_NAT_N_COLUMNS
};

#define nbrec_nat_col_external_ip (nbrec_nat_columns[NBREC_NAT_COL_EXTERNAL_IP])
#define nbrec_nat_col_type (nbrec_nat_columns[NBREC_NAT_COL_TYPE])
#define nbrec_nat_col_logical_ip (nbrec_nat_columns[NBREC_NAT_COL_LOGICAL_IP])

extern struct ovsdb_idl_column nbrec_nat_columns[NBREC_NAT_N_COLUMNS];

const struct nbrec_nat *nbrec_nat_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_nat *nbrec_nat_first(const struct ovsdb_idl *);
const struct nbrec_nat *nbrec_nat_next(const struct nbrec_nat *);
#define NBREC_NAT_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_nat_first(IDL); \
             (ROW); \
             (ROW) = nbrec_nat_next(ROW))
#define NBREC_NAT_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_nat_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_nat_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_nat_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_nat_row_get_seqno(const struct nbrec_nat *row, enum ovsdb_idl_change change);
const struct nbrec_nat *nbrec_nat_track_get_first(const struct ovsdb_idl *);
const struct nbrec_nat *nbrec_nat_track_get_next(const struct nbrec_nat *);
#define NBREC_NAT_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_nat_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_nat_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_nat_is_new(const struct nbrec_nat *row)
{
    return nbrec_nat_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_nat_is_deleted(const struct nbrec_nat *row)
{
    return nbrec_nat_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_nat_init(struct nbrec_nat *);
void nbrec_nat_delete(const struct nbrec_nat *);
struct nbrec_nat *nbrec_nat_insert(struct ovsdb_idl_txn *);
bool nbrec_nat_is_updated(const struct nbrec_nat *, enum nbrec_nat_column_id);

void nbrec_nat_verify_external_ip(const struct nbrec_nat *);
void nbrec_nat_verify_logical_ip(const struct nbrec_nat *);
void nbrec_nat_verify_type(const struct nbrec_nat *);

const struct ovsdb_datum *nbrec_nat_get_external_ip(const struct nbrec_nat *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nat_get_logical_ip(const struct nbrec_nat *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nat_get_type(const struct nbrec_nat *, enum ovsdb_atomic_type key_type);

void nbrec_nat_set_external_ip(const struct nbrec_nat *, const char *external_ip);
void nbrec_nat_set_logical_ip(const struct nbrec_nat *, const char *logical_ip);
void nbrec_nat_set_type(const struct nbrec_nat *, const char *type);

void nbrec_nat_add_clause_external_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *external_ip);
void nbrec_nat_add_clause_logical_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *logical_ip);
void nbrec_nat_add_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type);
void nbrec_nat_add_clause_true(struct ovsdb_idl *idl);
void nbrec_nat_add_clause_false(struct ovsdb_idl *idl);

void nbrec_nat_remove_clause_external_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *external_ip);
void nbrec_nat_remove_clause_logical_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *logical_ip);
void nbrec_nat_remove_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type);
void nbrec_nat_remove_clause_true(struct ovsdb_idl *idl);
void nbrec_nat_remove_clause_false(struct ovsdb_idl *idl);


/* NB_Global table. */
struct nbrec_nb_global {
	struct ovsdb_idl_row header_;

	/* external_ids column. */
	struct smap external_ids;

	/* hv_cfg column. */
	int64_t hv_cfg;

	/* nb_cfg column. */
	int64_t nb_cfg;

	/* sb_cfg column. */
	int64_t sb_cfg;
};

enum nbrec_nb_global_column_id {
    NBREC_NB_GLOBAL_COL_EXTERNAL_IDS,
    NBREC_NB_GLOBAL_COL_HV_CFG,
    NBREC_NB_GLOBAL_COL_NB_CFG,
    NBREC_NB_GLOBAL_COL_SB_CFG,
    NBREC_NB_GLOBAL_N_COLUMNS
};

#define nbrec_nb_global_col_external_ids (nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_EXTERNAL_IDS])
#define nbrec_nb_global_col_nb_cfg (nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_NB_CFG])
#define nbrec_nb_global_col_sb_cfg (nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_SB_CFG])
#define nbrec_nb_global_col_hv_cfg (nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_HV_CFG])

extern struct ovsdb_idl_column nbrec_nb_global_columns[NBREC_NB_GLOBAL_N_COLUMNS];

const struct nbrec_nb_global *nbrec_nb_global_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_nb_global *nbrec_nb_global_first(const struct ovsdb_idl *);
const struct nbrec_nb_global *nbrec_nb_global_next(const struct nbrec_nb_global *);
#define NBREC_NB_GLOBAL_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_nb_global_first(IDL); \
             (ROW); \
             (ROW) = nbrec_nb_global_next(ROW))
#define NBREC_NB_GLOBAL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_nb_global_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_nb_global_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_nb_global_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_nb_global_row_get_seqno(const struct nbrec_nb_global *row, enum ovsdb_idl_change change);
const struct nbrec_nb_global *nbrec_nb_global_track_get_first(const struct ovsdb_idl *);
const struct nbrec_nb_global *nbrec_nb_global_track_get_next(const struct nbrec_nb_global *);
#define NBREC_NB_GLOBAL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_nb_global_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_nb_global_track_get_next(ROW))

/* Returns true if 'row' was inserted since the last change tracking reset. */
static inline bool nbrec_nb_global_is_new(const struct nbrec_nb_global *row)
{
    return nbrec_nb_global_row_get_seqno(row, OVSDB_IDL_CHANGE_MODIFY) == 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset. */
static inline bool nbrec_nb_global_is_deleted(const struct nbrec_nb_global *row)
{
    return nbrec_nb_global_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void nbrec_nb_global_init(struct nbrec_nb_global *);
void nbrec_nb_global_delete(const struct nbrec_nb_global *);
struct nbrec_nb_global *nbrec_nb_global_insert(struct ovsdb_idl_txn *);
bool nbrec_nb_global_is_updated(const struct nbrec_nb_global *, enum nbrec_nb_global_column_id);

void nbrec_nb_global_verify_external_ids(const struct nbrec_nb_global *);
void nbrec_nb_global_verify_hv_cfg(const struct nbrec_nb_global *);
void nbrec_nb_global_verify_nb_cfg(const struct nbrec_nb_global *);
void nbrec_nb_global_verify_sb_cfg(const struct nbrec_nb_global *);

const struct ovsdb_datum *nbrec_nb_global_get_external_ids(const struct nbrec_nb_global *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_nb_global_get_hv_cfg(const struct nbrec_nb_global *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nb_global_get_nb_cfg(const struct nbrec_nb_global *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_nb_global_get_sb_cfg(const struct nbrec_nb_global *, enum ovsdb_atomic_type key_type);

void nbrec_nb_global_set_external_ids(const struct nbrec_nb_global *, const struct smap *);
void nbrec_nb_global_set_hv_cfg(const struct nbrec_nb_global *, int64_t hv_cfg);
void nbrec_nb_global_set_nb_cfg(const struct nbrec_nb_global *, int64_t nb_cfg);
void nbrec_nb_global_set_sb_cfg(const struct nbrec_nb_global *, int64_t sb_cfg);

void nbrec_nb_global_update_external_ids_setkey(const struct nbrec_nb_global *,  const char *, const char *);
void nbrec_nb_global_update_external_ids_delkey(const struct nbrec_nb_global *,  const char *);
void nbrec_nb_global_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_nb_global_add_clause_hv_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t hv_cfg);
void nbrec_nb_global_add_clause_nb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t nb_cfg);
void nbrec_nb_global_add_clause_sb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t sb_cfg);
void nbrec_nb_global_add_clause_true(struct ovsdb_idl *idl);
void nbrec_nb_global_add_clause_false(struct ovsdb_idl *idl);

void nbrec_nb_global_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *);
void nbrec_nb_global_remove_clause_hv_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t hv_cfg);
void nbrec_nb_global_remove_clause_nb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t nb_cfg);
void nbrec_nb_global_remove_clause_sb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t sb_cfg);
void nbrec_nb_global_remove_clause_true(struct ovsdb_idl *idl);
void nbrec_nb_global_remove_clause_false(struct ovsdb_idl *idl);


enum nbrec_table_id {
    NBREC_TABLE_ACL,
    NBREC_TABLE_ADDRESS_SET,
    NBREC_TABLE_DHCP_OPTIONS,
    NBREC_TABLE_LOAD_BALANCER,
    NBREC_TABLE_LOGICAL_ROUTER,
    NBREC_TABLE_LOGICAL_ROUTER_PORT,
    NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE,
    NBREC_TABLE_LOGICAL_SWITCH,
    NBREC_TABLE_LOGICAL_SWITCH_PORT,
    NBREC_TABLE_NAT,
    NBREC_TABLE_NB_GLOBAL,
    NBREC_N_TABLES
};

#define nbrec_table_load_balancer (nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER])
#define nbrec_table_logical_switch_port (nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT])
#define nbrec_table_address_set (nbrec_table_classes[NBREC_TABLE_ADDRESS_SET])
#define nbrec_table_nb_global (nbrec_table_classes[NBREC_TABLE_NB_GLOBAL])
#define nbrec_table_logical_switch (nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH])
#define nbrec_table_logical_router_static_route (nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE])
#define nbrec_table_logical_router_port (nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT])
#define nbrec_table_logical_router (nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER])
#define nbrec_table_acl (nbrec_table_classes[NBREC_TABLE_ACL])
#define nbrec_table_nat (nbrec_table_classes[NBREC_TABLE_NAT])
#define nbrec_table_dhcp_options (nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS])

extern struct ovsdb_idl_table_class nbrec_table_classes[NBREC_N_TABLES];

extern struct ovsdb_idl_class nbrec_idl_class;

void nbrec_init(void);

const char * nbrec_get_db_version(void);

#endif /* NBREC_IDL_HEADER */
