/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#include <config.h>
#include "ovn/lib/ovn-nb-idl.h"
#include <limits.h>
#include "ovs-thread.h"
#include "ovsdb-data.h"
#include "ovsdb-error.h"
#include "util.h"

#ifdef __CHECKER__
/* Sparse dislikes sizeof(bool) ("warning: expression using sizeof bool"). */
enum { sizeof_bool = 1 };
#else
enum { sizeof_bool = sizeof(bool) };
#endif

static bool inited;


static struct nbrec_acl *
nbrec_acl_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_acl, header_) : NULL;
}

static struct nbrec_address_set *
nbrec_address_set_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_address_set, header_) : NULL;
}

static struct nbrec_dhcp_options *
nbrec_dhcp_options_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_dhcp_options, header_) : NULL;
}

static struct nbrec_load_balancer *
nbrec_load_balancer_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_load_balancer, header_) : NULL;
}

static struct nbrec_logical_router *
nbrec_logical_router_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_router, header_) : NULL;
}

static struct nbrec_logical_router_port *
nbrec_logical_router_port_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_router_port, header_) : NULL;
}

static struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_router_static_route, header_) : NULL;
}

static struct nbrec_logical_switch *
nbrec_logical_switch_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_switch, header_) : NULL;
}

static struct nbrec_logical_switch_port *
nbrec_logical_switch_port_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_switch_port, header_) : NULL;
}

static struct nbrec_nat *
nbrec_nat_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_nat, header_) : NULL;
}

static struct nbrec_nb_global *
nbrec_nb_global_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_nb_global, header_) : NULL;
}

/* ACL table. */

static void
nbrec_acl_parse_action(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->action = datum->keys[0].string;
    } else {
        row->action = "";
    }
}

static void
nbrec_acl_parse_direction(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->direction = datum->keys[0].string;
    } else {
        row->direction = "";
    }
}

static void
nbrec_acl_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_acl_parse_log(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->log = datum->keys[0].boolean;
    } else {
        row->log = false;
    }
}

static void
nbrec_acl_parse_match(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->match = datum->keys[0].string;
    } else {
        row->match = "";
    }
}

static void
nbrec_acl_parse_priority(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->priority = datum->keys[0].integer;
    } else {
        row->priority = 0;
    }
}

static void
nbrec_acl_unparse_action(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_direction(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_acl_unparse_log(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_match(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_priority(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_init__(struct ovsdb_idl_row *row)
{
    nbrec_acl_init(nbrec_acl_cast(row));
}

/* Clears the contents of 'row' in table "ACL". */
void
nbrec_acl_init(struct nbrec_acl *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "ACL" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_acl *
nbrec_acl_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_acl_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_ACL], uuid));
}

/* Returns a row in table "ACL" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_acl *
nbrec_acl_first(const struct ovsdb_idl *idl)
{
    return nbrec_acl_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_ACL]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_acl *
nbrec_acl_next(const struct nbrec_acl *row)
{
    return nbrec_acl_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_acl_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_ACL]);
}

unsigned int nbrec_acl_row_get_seqno(const struct nbrec_acl *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_acl *
nbrec_acl_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_acl_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_ACL]));
}

const struct nbrec_acl
*nbrec_acl_track_get_next(const struct nbrec_acl *row)
{
    return nbrec_acl_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "ACL".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_delete(const struct nbrec_acl *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "ACL" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_acl *
nbrec_acl_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_acl_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_ACL], NULL));
}

bool
nbrec_acl_is_updated(const struct nbrec_acl *row, enum nbrec_acl_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_acl_columns[column]);
}

/* Causes the original contents of column "action" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "action" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "action" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "action" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "action" has already been modified (with
 *     nbrec_acl_set_action()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_action() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_action(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_ACTION]);
}

/* Causes the original contents of column "direction" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "direction" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "direction" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "direction" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "direction" has already been modified (with
 *     nbrec_acl_set_direction()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_direction() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_direction(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_DIRECTION]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_acl_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_external_ids(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "log" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "log" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "log" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "log" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "log" has already been modified (with
 *     nbrec_acl_set_log()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_log() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_log(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_LOG]);
}

/* Causes the original contents of column "match" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "match" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "match" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "match" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "match" has already been modified (with
 *     nbrec_acl_set_match()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_match() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_match(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_MATCH]);
}

/* Causes the original contents of column "priority" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "priority" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "priority" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "priority" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "priority" has already been modified (with
 *     nbrec_acl_set_priority()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_priority() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_priority(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_PRIORITY]);
}

/* Returns the "action" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes action's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "action" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_action(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_action);
}

/* Returns the "direction" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes direction's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "direction" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_direction(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_direction);
}

/* Returns the "external_ids" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_external_ids(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_external_ids);
}

/* Returns the "log" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes log's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "log" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_log(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_log);
}

/* Returns the "match" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes match's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "match" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_match(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_match);
}

/* Returns the "priority" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes priority's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "priority" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_priority(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_priority);
}

/* Sets the "action" column from the "ACL" table in 'row' to
 * 'action'.
 *
 * Argument constraints: one of "allow-related", "drop", "allow", or "reject"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_action(const struct nbrec_acl *row, const char *action)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, action);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_ACTION], &datum);
}

/* Sets the "direction" column from the "ACL" table in 'row' to
 * 'direction'.
 *
 * Argument constraints: either "to-lport" or "from-lport"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_direction(const struct nbrec_acl *row, const char *direction)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, direction);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_DIRECTION], &datum);
}

/* Sets the "external_ids" column's value from the "ACL" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_acl_set_external_ids(const struct nbrec_acl *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "log" column from the "ACL" table in 'row' to
 * 'log'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_log(const struct nbrec_acl *row, bool log)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = log;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_LOG], &datum);
}

/* Sets the "match" column from the "ACL" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_match(const struct nbrec_acl *row, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_MATCH], &datum);
}

/* Sets the "priority" column from the "ACL" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_priority(const struct nbrec_acl *row, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_PRIORITY], &datum);
}

/* Sets an element of the "external_ids" map column from the "ACL" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_acl_update_external_ids_setkey(const struct nbrec_acl *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "ACL" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_acl_update_external_ids_delkey(const struct nbrec_acl *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS],
                                    datum);
}

/* Sets the "action" column from the "ACL" table in 'row' to
 * 'action'.
 *
 * Argument constraints: one of "allow-related", "drop", "allow", or "reject"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_action(struct ovsdb_idl *idl, enum ovsdb_function function, const char *action)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, action);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL],
                          function,
                          &nbrec_acl_columns[NBREC_ACL_COL_ACTION],
                          &datum);
}

/* Sets the "direction" column from the "ACL" table in 'row' to
 * 'direction'.
 *
 * Argument constraints: either "to-lport" or "from-lport"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_direction(struct ovsdb_idl *idl, enum ovsdb_function function, const char *direction)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, direction);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL],
                          function,
                          &nbrec_acl_columns[NBREC_ACL_COL_DIRECTION],
                          &datum);
}

/* Sets the "external_ids" column's value from the "ACL" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_acl_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_ACL],
                                   function,
                                   &nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_acl_col_external_ids.type);
}


/* Sets the "log" column from the "ACL" table in 'row' to
 * 'log'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_log(struct ovsdb_idl *idl, enum ovsdb_function function, bool log)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = log;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL],
                          function,
                          &nbrec_acl_columns[NBREC_ACL_COL_LOG],
                          &datum);
}

/* Sets the "match" column from the "ACL" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_match(struct ovsdb_idl *idl, enum ovsdb_function function, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL],
                          function,
                          &nbrec_acl_columns[NBREC_ACL_COL_MATCH],
                          &datum);
}

/* Sets the "priority" column from the "ACL" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_add_clause_priority(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL],
                          function,
                          &nbrec_acl_columns[NBREC_ACL_COL_PRIORITY],
                          &datum);
}
void
nbrec_acl_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_acl_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "action" column from the "ACL" table in 'row' to
 * 'action'.
 *
 * Argument constraints: one of "allow-related", "drop", "allow", or "reject"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_remove_clause_action(struct ovsdb_idl *idl, enum ovsdb_function function, const char *action)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, action);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL],
                          function,
                          &nbrec_acl_columns[NBREC_ACL_COL_ACTION],
                          &datum);
}

/* Sets the "direction" column from the "ACL" table in 'row' to
 * 'direction'.
 *
 * Argument constraints: either "to-lport" or "from-lport"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_remove_clause_direction(struct ovsdb_idl *idl, enum ovsdb_function function, const char *direction)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, direction);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL],
                          function,
                          &nbrec_acl_columns[NBREC_ACL_COL_DIRECTION],
                          &datum);
}

/* Sets the "external_ids" column's value from the "ACL" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_acl_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL],
                                      function,
                                      &nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_acl_col_external_ids.type);
}


/* Sets the "log" column from the "ACL" table in 'row' to
 * 'log'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_remove_clause_log(struct ovsdb_idl *idl, enum ovsdb_function function, bool log)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = log;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL],
                          function,
                          &nbrec_acl_columns[NBREC_ACL_COL_LOG],
                          &datum);
}

/* Sets the "match" column from the "ACL" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_remove_clause_match(struct ovsdb_idl *idl, enum ovsdb_function function, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL],
                          function,
                          &nbrec_acl_columns[NBREC_ACL_COL_MATCH],
                          &datum);
}

/* Sets the "priority" column from the "ACL" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_remove_clause_priority(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL],
                          function,
                          &nbrec_acl_columns[NBREC_ACL_COL_PRIORITY],
                          &datum);
}
void
nbrec_acl_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_acl_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ACL], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column nbrec_acl_columns[NBREC_ACL_N_COLUMNS];

static void
nbrec_acl_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_acl_col_action. */
    c = &nbrec_acl_col_action;
    c->name = "action";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 4;
    c->type.key.enum_->keys = xmalloc(4 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("allow");
    c->type.key.enum_->keys[1].string = xstrdup("allow-related");
    c->type.key.enum_->keys[2].string = xstrdup("drop");
    c->type.key.enum_->keys[3].string = xstrdup("reject");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_acl_parse_action;
    c->unparse = nbrec_acl_unparse_action;

    /* Initialize nbrec_acl_col_direction. */
    c = &nbrec_acl_col_direction;
    c->name = "direction";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("from-lport");
    c->type.key.enum_->keys[1].string = xstrdup("to-lport");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_acl_parse_direction;
    c->unparse = nbrec_acl_unparse_direction;

    /* Initialize nbrec_acl_col_external_ids. */
    c = &nbrec_acl_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_acl_parse_external_ids;
    c->unparse = nbrec_acl_unparse_external_ids;

    /* Initialize nbrec_acl_col_log. */
    c = &nbrec_acl_col_log;
    c->name = "log";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_acl_parse_log;
    c->unparse = nbrec_acl_unparse_log;

    /* Initialize nbrec_acl_col_match. */
    c = &nbrec_acl_col_match;
    c->name = "match";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_acl_parse_match;
    c->unparse = nbrec_acl_unparse_match;

    /* Initialize nbrec_acl_col_priority. */
    c = &nbrec_acl_col_priority;
    c->name = "priority";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(32767);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_acl_parse_priority;
    c->unparse = nbrec_acl_unparse_priority;
}

/* Address_Set table. */

static void
nbrec_address_set_parse_addresses(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_address_set *row = nbrec_address_set_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->addresses = NULL;
    row->n_addresses = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_addresses) {
            row->addresses = xmalloc(datum->n * sizeof *row->addresses);
        }
        row->addresses[row->n_addresses] = datum->keys[i].string;
        row->n_addresses++;
    }
}

static void
nbrec_address_set_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_address_set *row = nbrec_address_set_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_address_set_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_address_set *row = nbrec_address_set_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_address_set_unparse_addresses(struct ovsdb_idl_row *row_)
{
    struct nbrec_address_set *row = nbrec_address_set_cast(row_);

    ovs_assert(inited);
    free(row->addresses);
}

static void
nbrec_address_set_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_address_set *row = nbrec_address_set_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_address_set_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_address_set_init__(struct ovsdb_idl_row *row)
{
    nbrec_address_set_init(nbrec_address_set_cast(row));
}

/* Clears the contents of 'row' in table "Address_Set". */
void
nbrec_address_set_init(struct nbrec_address_set *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Address_Set" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_address_set *
nbrec_address_set_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_address_set_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET], uuid));
}

/* Returns a row in table "Address_Set" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_address_set *
nbrec_address_set_first(const struct ovsdb_idl *idl)
{
    return nbrec_address_set_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_address_set *
nbrec_address_set_next(const struct nbrec_address_set *row)
{
    return nbrec_address_set_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_address_set_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET]);
}

unsigned int nbrec_address_set_row_get_seqno(const struct nbrec_address_set *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_address_set *
nbrec_address_set_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_address_set_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET]));
}

const struct nbrec_address_set
*nbrec_address_set_track_get_next(const struct nbrec_address_set *row)
{
    return nbrec_address_set_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Address_Set".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_address_set_delete(const struct nbrec_address_set *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Address_Set" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_address_set *
nbrec_address_set_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_address_set_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET], NULL));
}

bool
nbrec_address_set_is_updated(const struct nbrec_address_set *row, enum nbrec_address_set_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_address_set_columns[column]);
}

/* Causes the original contents of column "addresses" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "addresses" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "addresses" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "addresses" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_address_set_insert()).
 *
 *   - If "addresses" has already been modified (with
 *     nbrec_address_set_set_addresses()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_address_set_set_addresses() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_address_set_verify_addresses(const struct nbrec_address_set *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_ADDRESSES]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_address_set_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_address_set_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_address_set_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_address_set_verify_external_ids(const struct nbrec_address_set *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_address_set_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_address_set_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_address_set_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_address_set_verify_name(const struct nbrec_address_set *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_NAME]);
}

/* Returns the "addresses" column's value from the "Address_Set" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes addresses's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "addresses" member in nbrec_address_set. */
const struct ovsdb_datum *
nbrec_address_set_get_addresses(const struct nbrec_address_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_address_set_col_addresses);
}

/* Returns the "external_ids" column's value from the "Address_Set" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in nbrec_address_set. */
const struct ovsdb_datum *
nbrec_address_set_get_external_ids(const struct nbrec_address_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_address_set_col_external_ids);
}

/* Returns the "name" column's value from the "Address_Set" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in nbrec_address_set. */
const struct ovsdb_datum *
nbrec_address_set_get_name(const struct nbrec_address_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_address_set_col_name);
}

/* Sets the "addresses" column from the "Address_Set" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_set_addresses(const struct nbrec_address_set *row, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_addresses; i++) {
        datum.keys[i].string = xstrdup(addresses[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_ADDRESSES], &datum);
}

/* Sets the "external_ids" column's value from the "Address_Set" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_address_set_set_external_ids(const struct nbrec_address_set *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "name" column from the "Address_Set" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_set_name(const struct nbrec_address_set *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_NAME], &datum);
}

/* Adds the value 'new_value' to the "addresses" set column from the "Address_Set" table
 * in 'row'.
 *
 */
void
nbrec_address_set_update_addresses_addvalue(const struct nbrec_address_set *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_ADDRESSES],
                                    datum);
}

/* Deletes the value 'delete_value' from the "addresses" set column from the
 * "Address_Set" table in 'row'.
 *
 */
void
nbrec_address_set_update_addresses_delvalue(const struct nbrec_address_set *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_ADDRESSES],
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "Address_Set" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_address_set_update_external_ids_setkey(const struct nbrec_address_set *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Address_Set" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_address_set_update_external_ids_delkey(const struct nbrec_address_set *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_EXTERNAL_IDS],
                                    datum);
}

/* Sets the "addresses" column from the "Address_Set" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_add_clause_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_addresses; i++) {
        datum.keys[i].string = CONST_CAST(char *, addresses[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET],
                          function,
                          &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_ADDRESSES],
                          &datum);
    free(datum.keys);
}

/* Sets the "external_ids" column's value from the "Address_Set" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_address_set_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET],
                                   function,
                                   &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_address_set_col_external_ids.type);
}


/* Sets the "name" column from the "Address_Set" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET],
                          function,
                          &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_NAME],
                          &datum);
}
void
nbrec_address_set_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_address_set_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "addresses" column from the "Address_Set" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_remove_clause_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_addresses; i++) {
        datum.keys[i].string = CONST_CAST(char *, addresses[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET],
                          function,
                          &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_ADDRESSES],
                          &datum);
    free(datum.keys);
}

/* Sets the "external_ids" column's value from the "Address_Set" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_address_set_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET],
                                      function,
                                      &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_address_set_col_external_ids.type);
}


/* Sets the "name" column from the "Address_Set" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_address_set_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET],
                          function,
                          &nbrec_address_set_columns[NBREC_ADDRESS_SET_COL_NAME],
                          &datum);
}
void
nbrec_address_set_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_address_set_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_ADDRESS_SET], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column nbrec_address_set_columns[NBREC_ADDRESS_SET_N_COLUMNS];

static void
nbrec_address_set_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_address_set_col_addresses. */
    c = &nbrec_address_set_col_addresses;
    c->name = "addresses";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_address_set_parse_addresses;
    c->unparse = nbrec_address_set_unparse_addresses;

    /* Initialize nbrec_address_set_col_external_ids. */
    c = &nbrec_address_set_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_address_set_parse_external_ids;
    c->unparse = nbrec_address_set_unparse_external_ids;

    /* Initialize nbrec_address_set_col_name. */
    c = &nbrec_address_set_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_address_set_parse_name;
    c->unparse = nbrec_address_set_unparse_name;
}

/* DHCP_Options table. */

static void
nbrec_dhcp_options_parse_cidr(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_dhcp_options *row = nbrec_dhcp_options_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->cidr = datum->keys[0].string;
    } else {
        row->cidr = "";
    }
}

static void
nbrec_dhcp_options_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_dhcp_options *row = nbrec_dhcp_options_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_dhcp_options_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_dhcp_options *row = nbrec_dhcp_options_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->options);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->options,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_dhcp_options_unparse_cidr(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_dhcp_options_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_dhcp_options *row = nbrec_dhcp_options_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_dhcp_options_unparse_options(struct ovsdb_idl_row *row_)
{
    struct nbrec_dhcp_options *row = nbrec_dhcp_options_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->options);
}

static void
nbrec_dhcp_options_init__(struct ovsdb_idl_row *row)
{
    nbrec_dhcp_options_init(nbrec_dhcp_options_cast(row));
}

/* Clears the contents of 'row' in table "DHCP_Options". */
void
nbrec_dhcp_options_init(struct nbrec_dhcp_options *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->options);
}

/* Searches table "DHCP_Options" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_dhcp_options *
nbrec_dhcp_options_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS], uuid));
}

/* Returns a row in table "DHCP_Options" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_dhcp_options *
nbrec_dhcp_options_first(const struct ovsdb_idl *idl)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_dhcp_options *
nbrec_dhcp_options_next(const struct nbrec_dhcp_options *row)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_dhcp_options_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS]);
}

unsigned int nbrec_dhcp_options_row_get_seqno(const struct nbrec_dhcp_options *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_dhcp_options *
nbrec_dhcp_options_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS]));
}

const struct nbrec_dhcp_options
*nbrec_dhcp_options_track_get_next(const struct nbrec_dhcp_options *row)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "DHCP_Options".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_dhcp_options_delete(const struct nbrec_dhcp_options *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "DHCP_Options" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_dhcp_options *
nbrec_dhcp_options_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_dhcp_options_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS], NULL));
}

bool
nbrec_dhcp_options_is_updated(const struct nbrec_dhcp_options *row, enum nbrec_dhcp_options_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_dhcp_options_columns[column]);
}

/* Causes the original contents of column "cidr" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cidr" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cidr" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cidr" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_dhcp_options_insert()).
 *
 *   - If "cidr" has already been modified (with
 *     nbrec_dhcp_options_set_cidr()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_dhcp_options_set_cidr() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_dhcp_options_verify_cidr(const struct nbrec_dhcp_options *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_CIDR]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_dhcp_options_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_dhcp_options_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_dhcp_options_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_dhcp_options_verify_external_ids(const struct nbrec_dhcp_options *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_dhcp_options_insert()).
 *
 *   - If "options" has already been modified (with
 *     nbrec_dhcp_options_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_dhcp_options_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_dhcp_options_verify_options(const struct nbrec_dhcp_options *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_OPTIONS]);
}

/* Returns the "cidr" column's value from the "DHCP_Options" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes cidr's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "cidr" member in nbrec_dhcp_options. */
const struct ovsdb_datum *
nbrec_dhcp_options_get_cidr(const struct nbrec_dhcp_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_dhcp_options_col_cidr);
}

/* Returns the "external_ids" column's value from the "DHCP_Options" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in nbrec_dhcp_options. */
const struct ovsdb_datum *
nbrec_dhcp_options_get_external_ids(const struct nbrec_dhcp_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_dhcp_options_col_external_ids);
}

/* Returns the "options" column's value from the "DHCP_Options" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes options's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "options" member in nbrec_dhcp_options. */
const struct ovsdb_datum *
nbrec_dhcp_options_get_options(const struct nbrec_dhcp_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_dhcp_options_col_options);
}

/* Sets the "cidr" column from the "DHCP_Options" table in 'row' to
 * 'cidr'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_dhcp_options_set_cidr(const struct nbrec_dhcp_options *row, const char *cidr)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, cidr);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_CIDR], &datum);
}

/* Sets the "external_ids" column's value from the "DHCP_Options" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_dhcp_options_set_external_ids(const struct nbrec_dhcp_options *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "options" column's value from the "DHCP_Options" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_dhcp_options_set_options(const struct nbrec_dhcp_options *row, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_OPTIONS],
                        &datum);
}


/* Sets an element of the "external_ids" map column from the "DHCP_Options" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_dhcp_options_update_external_ids_setkey(const struct nbrec_dhcp_options *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "DHCP_Options" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_dhcp_options_update_external_ids_delkey(const struct nbrec_dhcp_options *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS],
                                    datum);
}

/* Sets an element of the "options" map column from the "DHCP_Options" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_dhcp_options_update_options_setkey(const struct nbrec_dhcp_options *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_OPTIONS],
                                    datum);
}

/* Deletes an element of the "options" map column from the "DHCP_Options" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_dhcp_options_update_options_delkey(const struct nbrec_dhcp_options *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_OPTIONS],
                                    datum);
}

/* Sets the "cidr" column from the "DHCP_Options" table in 'row' to
 * 'cidr'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_dhcp_options_add_clause_cidr(struct ovsdb_idl *idl, enum ovsdb_function function, const char *cidr)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, cidr);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS],
                          function,
                          &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_CIDR],
                          &datum);
}

/* Sets the "external_ids" column's value from the "DHCP_Options" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_dhcp_options_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS],
                                   function,
                                   &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_dhcp_options_col_external_ids.type);
}


/* Sets the "options" column's value from the "DHCP_Options" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_dhcp_options_add_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS],
                                   function,
                                   &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_OPTIONS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_dhcp_options_col_options.type);
}

void
nbrec_dhcp_options_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_dhcp_options_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "cidr" column from the "DHCP_Options" table in 'row' to
 * 'cidr'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_dhcp_options_remove_clause_cidr(struct ovsdb_idl *idl, enum ovsdb_function function, const char *cidr)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, cidr);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS],
                          function,
                          &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_CIDR],
                          &datum);
}

/* Sets the "external_ids" column's value from the "DHCP_Options" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_dhcp_options_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS],
                                      function,
                                      &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_dhcp_options_col_external_ids.type);
}


/* Sets the "options" column's value from the "DHCP_Options" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_dhcp_options_remove_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS],
                                      function,
                                      &nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_COL_OPTIONS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_dhcp_options_col_options.type);
}

void
nbrec_dhcp_options_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_dhcp_options_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column nbrec_dhcp_options_columns[NBREC_DHCP_OPTIONS_N_COLUMNS];

static void
nbrec_dhcp_options_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_dhcp_options_col_cidr. */
    c = &nbrec_dhcp_options_col_cidr;
    c->name = "cidr";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_dhcp_options_parse_cidr;
    c->unparse = nbrec_dhcp_options_unparse_cidr;

    /* Initialize nbrec_dhcp_options_col_external_ids. */
    c = &nbrec_dhcp_options_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_dhcp_options_parse_external_ids;
    c->unparse = nbrec_dhcp_options_unparse_external_ids;

    /* Initialize nbrec_dhcp_options_col_options. */
    c = &nbrec_dhcp_options_col_options;
    c->name = "options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_dhcp_options_parse_options;
    c->unparse = nbrec_dhcp_options_unparse_options;
}

/* Load_Balancer table. */

static void
nbrec_load_balancer_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_load_balancer *row = nbrec_load_balancer_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_load_balancer_parse_protocol(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_load_balancer *row = nbrec_load_balancer_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->protocol = datum->keys[0].string;
    } else {
        row->protocol = NULL;
    }
}

static void
nbrec_load_balancer_parse_vips(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_load_balancer *row = nbrec_load_balancer_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->vips);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->vips,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_load_balancer_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_load_balancer *row = nbrec_load_balancer_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_load_balancer_unparse_protocol(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_load_balancer_unparse_vips(struct ovsdb_idl_row *row_)
{
    struct nbrec_load_balancer *row = nbrec_load_balancer_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->vips);
}

static void
nbrec_load_balancer_init__(struct ovsdb_idl_row *row)
{
    nbrec_load_balancer_init(nbrec_load_balancer_cast(row));
}

/* Clears the contents of 'row' in table "Load_Balancer". */
void
nbrec_load_balancer_init(struct nbrec_load_balancer *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->vips);
}

/* Searches table "Load_Balancer" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_load_balancer *
nbrec_load_balancer_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_load_balancer_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER], uuid));
}

/* Returns a row in table "Load_Balancer" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_load_balancer *
nbrec_load_balancer_first(const struct ovsdb_idl *idl)
{
    return nbrec_load_balancer_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_load_balancer *
nbrec_load_balancer_next(const struct nbrec_load_balancer *row)
{
    return nbrec_load_balancer_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_load_balancer_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER]);
}

unsigned int nbrec_load_balancer_row_get_seqno(const struct nbrec_load_balancer *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_load_balancer *
nbrec_load_balancer_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_load_balancer_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER]));
}

const struct nbrec_load_balancer
*nbrec_load_balancer_track_get_next(const struct nbrec_load_balancer *row)
{
    return nbrec_load_balancer_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Load_Balancer".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_load_balancer_delete(const struct nbrec_load_balancer *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Load_Balancer" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_load_balancer *
nbrec_load_balancer_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_load_balancer_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER], NULL));
}

bool
nbrec_load_balancer_is_updated(const struct nbrec_load_balancer *row, enum nbrec_load_balancer_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_load_balancer_columns[column]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_load_balancer_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_load_balancer_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_load_balancer_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_load_balancer_verify_external_ids(const struct nbrec_load_balancer *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "protocol" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "protocol" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "protocol" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "protocol" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_load_balancer_insert()).
 *
 *   - If "protocol" has already been modified (with
 *     nbrec_load_balancer_set_protocol()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_load_balancer_set_protocol() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_load_balancer_verify_protocol(const struct nbrec_load_balancer *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_PROTOCOL]);
}

/* Causes the original contents of column "vips" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "vips" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "vips" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "vips" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_load_balancer_insert()).
 *
 *   - If "vips" has already been modified (with
 *     nbrec_load_balancer_set_vips()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_load_balancer_set_vips() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_load_balancer_verify_vips(const struct nbrec_load_balancer *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_VIPS]);
}

/* Returns the "external_ids" column's value from the "Load_Balancer" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in nbrec_load_balancer. */
const struct ovsdb_datum *
nbrec_load_balancer_get_external_ids(const struct nbrec_load_balancer *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_load_balancer_col_external_ids);
}

/* Returns the "protocol" column's value from the "Load_Balancer" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes protocol's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "protocol" member in nbrec_load_balancer. */
const struct ovsdb_datum *
nbrec_load_balancer_get_protocol(const struct nbrec_load_balancer *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_load_balancer_col_protocol);
}

/* Returns the "vips" column's value from the "Load_Balancer" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes vips's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "vips" member in nbrec_load_balancer. */
const struct ovsdb_datum *
nbrec_load_balancer_get_vips(const struct nbrec_load_balancer *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_load_balancer_col_vips);
}

/* Sets the "external_ids" column's value from the "Load_Balancer" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_load_balancer_set_external_ids(const struct nbrec_load_balancer *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "protocol" column from the "Load_Balancer" table in 'row' to
 * the 'protocol' set.
 *
 * If "protocol" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "udp" or "tcp"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_load_balancer_set_protocol(const struct nbrec_load_balancer *row, const char *protocol)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (protocol) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, protocol);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_PROTOCOL], &datum);
}

/* Sets the "vips" column's value from the "Load_Balancer" table in 'row'
 * to 'vips'.
 *
 * The caller retains ownership of 'vips' and everything in it. */
void
nbrec_load_balancer_set_vips(const struct nbrec_load_balancer *row, const struct smap *vips)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (vips) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(vips);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, vips) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_VIPS],
                        &datum);
}


/* Sets an element of the "external_ids" map column from the "Load_Balancer" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_load_balancer_update_external_ids_setkey(const struct nbrec_load_balancer *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Load_Balancer" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_load_balancer_update_external_ids_delkey(const struct nbrec_load_balancer *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS],
                                    datum);
}

/* Adds the value 'new_value' to the "protocol" set column from the "Load_Balancer" table
 * in 'row'.
 *
 */
void
nbrec_load_balancer_update_protocol_addvalue(const struct nbrec_load_balancer *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_PROTOCOL],
                                    datum);
}

/* Deletes the value 'delete_value' from the "protocol" set column from the
 * "Load_Balancer" table in 'row'.
 *
 */
void
nbrec_load_balancer_update_protocol_delvalue(const struct nbrec_load_balancer *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_PROTOCOL],
                                    datum);
}

/* Sets an element of the "vips" map column from the "Load_Balancer" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_load_balancer_update_vips_setkey(const struct nbrec_load_balancer *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_VIPS],
                                    datum);
}

/* Deletes an element of the "vips" map column from the "Load_Balancer" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_load_balancer_update_vips_delkey(const struct nbrec_load_balancer *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_VIPS],
                                    datum);
}

/* Sets the "external_ids" column's value from the "Load_Balancer" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_load_balancer_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER],
                                   function,
                                   &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_load_balancer_col_external_ids.type);
}


/* Sets the "protocol" column from the "Load_Balancer" table in 'row' to
 * the 'protocol' set.
 *
 * If "protocol" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "udp" or "tcp"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_load_balancer_add_clause_protocol(struct ovsdb_idl *idl, enum ovsdb_function function, const char *protocol)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (protocol) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, protocol);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER],
                          function,
                          &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_PROTOCOL],
                          &datum);
}

/* Sets the "vips" column's value from the "Load_Balancer" table in 'row'
 * to 'vips'.
 *
 * The caller retains ownership of 'vips' and everything in it. */
void
nbrec_load_balancer_add_clause_vips(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *vips)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (vips) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(vips);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, vips) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER],
                                   function,
                                   &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_VIPS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_load_balancer_col_vips.type);
}

void
nbrec_load_balancer_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_load_balancer_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "external_ids" column's value from the "Load_Balancer" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_load_balancer_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER],
                                      function,
                                      &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_load_balancer_col_external_ids.type);
}


/* Sets the "protocol" column from the "Load_Balancer" table in 'row' to
 * the 'protocol' set.
 *
 * If "protocol" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "udp" or "tcp"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_load_balancer_remove_clause_protocol(struct ovsdb_idl *idl, enum ovsdb_function function, const char *protocol)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (protocol) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, protocol);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER],
                          function,
                          &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_PROTOCOL],
                          &datum);
}

/* Sets the "vips" column's value from the "Load_Balancer" table in 'row'
 * to 'vips'.
 *
 * The caller retains ownership of 'vips' and everything in it. */
void
nbrec_load_balancer_remove_clause_vips(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *vips)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (vips) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(vips);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, vips) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER],
                                      function,
                                      &nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_COL_VIPS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_load_balancer_col_vips.type);
}

void
nbrec_load_balancer_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_load_balancer_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column nbrec_load_balancer_columns[NBREC_LOAD_BALANCER_N_COLUMNS];

static void
nbrec_load_balancer_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_load_balancer_col_external_ids. */
    c = &nbrec_load_balancer_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_load_balancer_parse_external_ids;
    c->unparse = nbrec_load_balancer_unparse_external_ids;

    /* Initialize nbrec_load_balancer_col_protocol. */
    c = &nbrec_load_balancer_col_protocol;
    c->name = "protocol";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("tcp");
    c->type.key.enum_->keys[1].string = xstrdup("udp");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_load_balancer_parse_protocol;
    c->unparse = nbrec_load_balancer_unparse_protocol;

    /* Initialize nbrec_load_balancer_col_vips. */
    c = &nbrec_load_balancer_col_vips;
    c->name = "vips";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_load_balancer_parse_vips;
    c->unparse = nbrec_load_balancer_unparse_vips;
}

/* Logical_Router table. */

static void
nbrec_logical_router_parse_enabled(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->enabled = NULL;
    row->n_enabled = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_enabled) {
            row->enabled = xmalloc(n * sizeof_bool);
        }
        row->enabled[row->n_enabled] = datum->keys[i].boolean;
        row->n_enabled++;
    }
}

static void
nbrec_logical_router_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_router_parse_load_balancer(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->load_balancer = NULL;
    row->n_load_balancer = 0;
    for (i = 0; i < datum->n; i++) {
        struct nbrec_load_balancer *keyRow = nbrec_load_balancer_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_load_balancer) {
                row->load_balancer = xmalloc(datum->n * sizeof *row->load_balancer);
            }
            row->load_balancer[row->n_load_balancer] = keyRow;
            row->n_load_balancer++;
        }
    }
}

static void
nbrec_logical_router_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_router_parse_nat(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->nat = NULL;
    row->n_nat = 0;
    for (i = 0; i < datum->n; i++) {
        struct nbrec_nat *keyRow = nbrec_nat_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_NAT], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_nat) {
                row->nat = xmalloc(datum->n * sizeof *row->nat);
            }
            row->nat[row->n_nat] = keyRow;
            row->n_nat++;
        }
    }
}

static void
nbrec_logical_router_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->options);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->options,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_router_parse_ports(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ports = NULL;
    row->n_ports = 0;
    for (i = 0; i < datum->n; i++) {
        struct nbrec_logical_router_port *keyRow = nbrec_logical_router_port_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_ports) {
                row->ports = xmalloc(datum->n * sizeof *row->ports);
            }
            row->ports[row->n_ports] = keyRow;
            row->n_ports++;
        }
    }
}

static void
nbrec_logical_router_parse_static_routes(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->static_routes = NULL;
    row->n_static_routes = 0;
    for (i = 0; i < datum->n; i++) {
        struct nbrec_logical_router_static_route *keyRow = nbrec_logical_router_static_route_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_static_routes) {
                row->static_routes = xmalloc(datum->n * sizeof *row->static_routes);
            }
            row->static_routes[row->n_static_routes] = keyRow;
            row->n_static_routes++;
        }
    }
}

static void
nbrec_logical_router_unparse_enabled(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    free(row->enabled);
}

static void
nbrec_logical_router_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_router_unparse_load_balancer(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    free(row->load_balancer);
}

static void
nbrec_logical_router_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_unparse_nat(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    free(row->nat);
}

static void
nbrec_logical_router_unparse_options(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->options);
}

static void
nbrec_logical_router_unparse_ports(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    free(row->ports);
}

static void
nbrec_logical_router_unparse_static_routes(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    free(row->static_routes);
}

static void
nbrec_logical_router_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_router_init(nbrec_logical_router_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Router". */
void
nbrec_logical_router_init(struct nbrec_logical_router *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->options);
}

/* Searches table "Logical_Router" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_router *
nbrec_logical_router_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_router_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER], uuid));
}

/* Returns a row in table "Logical_Router" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_router *
nbrec_logical_router_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_router *
nbrec_logical_router_next(const struct nbrec_logical_router *row)
{
    return nbrec_logical_router_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_router_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]);
}

unsigned int nbrec_logical_router_row_get_seqno(const struct nbrec_logical_router *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_router *
nbrec_logical_router_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]));
}

const struct nbrec_logical_router
*nbrec_logical_router_track_get_next(const struct nbrec_logical_router *row)
{
    return nbrec_logical_router_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Router".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_delete(const struct nbrec_logical_router *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Router" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_router *
nbrec_logical_router_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_router_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER], NULL));
}

bool
nbrec_logical_router_is_updated(const struct nbrec_logical_router *row, enum nbrec_logical_router_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_logical_router_columns[column]);
}

/* Causes the original contents of column "enabled" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "enabled" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "enabled" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "enabled" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "enabled" has already been modified (with
 *     nbrec_logical_router_set_enabled()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_enabled() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_enabled(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_ENABLED]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_router_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_external_ids(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "load_balancer" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "load_balancer" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "load_balancer" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "load_balancer" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "load_balancer" has already been modified (with
 *     nbrec_logical_router_set_load_balancer()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_load_balancer() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_load_balancer(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_router_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_name(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAME]);
}

/* Causes the original contents of column "nat" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "nat" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "nat" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "nat" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "nat" has already been modified (with
 *     nbrec_logical_router_set_nat()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_nat() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_nat(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAT]);
}

/* Causes the original contents of column "options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "options" has already been modified (with
 *     nbrec_logical_router_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_options(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_OPTIONS]);
}

/* Causes the original contents of column "ports" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ports" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ports" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ports" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "ports" has already been modified (with
 *     nbrec_logical_router_set_ports()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_ports() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_ports(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_PORTS]);
}

/* Causes the original contents of column "static_routes" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "static_routes" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "static_routes" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "static_routes" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "static_routes" has already been modified (with
 *     nbrec_logical_router_set_static_routes()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_static_routes() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_static_routes(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES]);
}

/* Returns the "enabled" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes enabled's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "enabled" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_enabled(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_enabled);
}

/* Returns the "external_ids" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_external_ids(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_external_ids);
}

/* Returns the "load_balancer" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes load_balancer's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "load_balancer" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_load_balancer(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_load_balancer);
}

/* Returns the "name" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_name(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_name);
}

/* Returns the "nat" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes nat's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "nat" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_nat(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_nat);
}

/* Returns the "options" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes options's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "options" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_options(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_options);
}

/* Returns the "ports" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ports's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ports" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_ports(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_ports);
}

/* Returns the "static_routes" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes static_routes's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "static_routes" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_static_routes(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_static_routes);
}

/* Sets the "enabled" column from the "Logical_Router" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_enabled(const struct nbrec_logical_router *row, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_ENABLED], &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_set_external_ids(const struct nbrec_logical_router *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "load_balancer" column from the "Logical_Router" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_load_balancer(const struct nbrec_logical_router *row, struct nbrec_load_balancer **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = load_balancer[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER], &datum);
}

/* Sets the "name" column from the "Logical_Router" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_name(const struct nbrec_logical_router *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAME], &datum);
}

/* Sets the "nat" column from the "Logical_Router" table in 'row' to
 * the 'nat' set with 'n_nat' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_nat(const struct nbrec_logical_router *row, struct nbrec_nat **nat, size_t n_nat)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_nat;
    datum.keys = n_nat ? xmalloc(n_nat * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_nat; i++) {
        datum.keys[i].uuid = nat[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAT], &datum);
}

/* Sets the "options" column's value from the "Logical_Router" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_router_set_options(const struct nbrec_logical_router *row, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_OPTIONS],
                        &datum);
}


/* Sets the "ports" column from the "Logical_Router" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_ports(const struct nbrec_logical_router *row, struct nbrec_logical_router_port **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = ports[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_PORTS], &datum);
}

/* Sets the "static_routes" column from the "Logical_Router" table in 'row' to
 * the 'static_routes' set with 'n_static_routes' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_static_routes(const struct nbrec_logical_router *row, struct nbrec_logical_router_static_route **static_routes, size_t n_static_routes)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_static_routes;
    datum.keys = n_static_routes ? xmalloc(n_static_routes * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_static_routes; i++) {
        datum.keys[i].uuid = static_routes[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES], &datum);
}

/* Adds the value 'new_value' to the "enabled" set column from the "Logical_Router" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_update_enabled_addvalue(const struct nbrec_logical_router *row, bool new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_ENABLED],
                                    datum);
}

/* Deletes the value 'delete_value' from the "enabled" set column from the
 * "Logical_Router" table in 'row'.
 *
 */
void
nbrec_logical_router_update_enabled_delvalue(const struct nbrec_logical_router *row, bool delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_ENABLED],
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "Logical_Router" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_router_update_external_ids_setkey(const struct nbrec_logical_router *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Logical_Router" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_router_update_external_ids_delkey(const struct nbrec_logical_router *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS],
                                    datum);
}

/* Adds the value 'new_value' to the "load_balancer" set column from the "Logical_Router" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_update_load_balancer_addvalue(const struct nbrec_logical_router *row, const struct nbrec_load_balancer *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER],
                                    datum);
}

/* Deletes the value 'delete_value' from the "load_balancer" set column from the
 * "Logical_Router" table in 'row'.
 *
 */
void
nbrec_logical_router_update_load_balancer_delvalue(const struct nbrec_logical_router *row, const struct nbrec_load_balancer *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER],
                                    datum);
}

/* Adds the value 'new_value' to the "nat" set column from the "Logical_Router" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_update_nat_addvalue(const struct nbrec_logical_router *row, const struct nbrec_nat *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAT],
                                    datum);
}

/* Deletes the value 'delete_value' from the "nat" set column from the
 * "Logical_Router" table in 'row'.
 *
 */
void
nbrec_logical_router_update_nat_delvalue(const struct nbrec_logical_router *row, const struct nbrec_nat *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAT],
                                    datum);
}

/* Sets an element of the "options" map column from the "Logical_Router" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_router_update_options_setkey(const struct nbrec_logical_router *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_OPTIONS],
                                    datum);
}

/* Deletes an element of the "options" map column from the "Logical_Router" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_router_update_options_delkey(const struct nbrec_logical_router *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_OPTIONS],
                                    datum);
}

/* Adds the value 'new_value' to the "ports" set column from the "Logical_Router" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_update_ports_addvalue(const struct nbrec_logical_router *row, const struct nbrec_logical_router_port *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_PORTS],
                                    datum);
}

/* Deletes the value 'delete_value' from the "ports" set column from the
 * "Logical_Router" table in 'row'.
 *
 */
void
nbrec_logical_router_update_ports_delvalue(const struct nbrec_logical_router *row, const struct nbrec_logical_router_port *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_PORTS],
                                    datum);
}

/* Adds the value 'new_value' to the "static_routes" set column from the "Logical_Router" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_update_static_routes_addvalue(const struct nbrec_logical_router *row, const struct nbrec_logical_router_static_route *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES],
                                    datum);
}

/* Deletes the value 'delete_value' from the "static_routes" set column from the
 * "Logical_Router" table in 'row'.
 *
 */
void
nbrec_logical_router_update_static_routes_delvalue(const struct nbrec_logical_router *row, const struct nbrec_logical_router_static_route *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES],
                                    datum);
}

/* Sets the "enabled" column from the "Logical_Router" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_ENABLED],
                          &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                                   function,
                                   &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_router_col_external_ids.type);
}


/* Sets the "load_balancer" column from the "Logical_Router" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_load_balancer(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = *load_balancer[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER],
                          &datum);
    free(datum.keys);
}

/* Sets the "name" column from the "Logical_Router" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAME],
                          &datum);
}

/* Sets the "nat" column from the "Logical_Router" table in 'row' to
 * the 'nat' set with 'n_nat' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_nat(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **nat, size_t n_nat)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_nat;
    datum.keys = n_nat ? xmalloc(n_nat * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_nat; i++) {
        datum.keys[i].uuid = *nat[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAT],
                          &datum);
    free(datum.keys);
}

/* Sets the "options" column's value from the "Logical_Router" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_router_add_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                                   function,
                                   &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_OPTIONS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_router_col_options.type);
}


/* Sets the "ports" column from the "Logical_Router" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_ports(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = *ports[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_PORTS],
                          &datum);
    free(datum.keys);
}

/* Sets the "static_routes" column from the "Logical_Router" table in 'row' to
 * the 'static_routes' set with 'n_static_routes' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_add_clause_static_routes(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **static_routes, size_t n_static_routes)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_static_routes;
    datum.keys = n_static_routes ? xmalloc(n_static_routes * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_static_routes; i++) {
        datum.keys[i].uuid = *static_routes[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES],
                          &datum);
    free(datum.keys);
}
void
nbrec_logical_router_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_logical_router_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "enabled" column from the "Logical_Router" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_remove_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_ENABLED],
                          &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                                      function,
                                      &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_router_col_external_ids.type);
}


/* Sets the "load_balancer" column from the "Logical_Router" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_remove_clause_load_balancer(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = *load_balancer[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_LOAD_BALANCER],
                          &datum);
    free(datum.keys);
}

/* Sets the "name" column from the "Logical_Router" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAME],
                          &datum);
}

/* Sets the "nat" column from the "Logical_Router" table in 'row' to
 * the 'nat' set with 'n_nat' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_remove_clause_nat(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **nat, size_t n_nat)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_nat;
    datum.keys = n_nat ? xmalloc(n_nat * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_nat; i++) {
        datum.keys[i].uuid = *nat[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAT],
                          &datum);
    free(datum.keys);
}

/* Sets the "options" column's value from the "Logical_Router" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_router_remove_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                                      function,
                                      &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_OPTIONS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_router_col_options.type);
}


/* Sets the "ports" column from the "Logical_Router" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_remove_clause_ports(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = *ports[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_PORTS],
                          &datum);
    free(datum.keys);
}

/* Sets the "static_routes" column from the "Logical_Router" table in 'row' to
 * the 'static_routes' set with 'n_static_routes' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_remove_clause_static_routes(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **static_routes, size_t n_static_routes)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_static_routes;
    datum.keys = n_static_routes ? xmalloc(n_static_routes * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_static_routes; i++) {
        datum.keys[i].uuid = *static_routes[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER],
                          function,
                          &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_STATIC_ROUTES],
                          &datum);
    free(datum.keys);
}
void
nbrec_logical_router_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_logical_router_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_N_COLUMNS];

static void
nbrec_logical_router_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_logical_router_col_enabled. */
    c = &nbrec_logical_router_col_enabled;
    c->name = "enabled";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_enabled;
    c->unparse = nbrec_logical_router_unparse_enabled;

    /* Initialize nbrec_logical_router_col_external_ids. */
    c = &nbrec_logical_router_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_external_ids;
    c->unparse = nbrec_logical_router_unparse_external_ids;

    /* Initialize nbrec_logical_router_col_load_balancer. */
    c = &nbrec_logical_router_col_load_balancer;
    c->name = "load_balancer";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Load_Balancer";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_load_balancer;
    c->unparse = nbrec_logical_router_unparse_load_balancer;

    /* Initialize nbrec_logical_router_col_name. */
    c = &nbrec_logical_router_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_name;
    c->unparse = nbrec_logical_router_unparse_name;

    /* Initialize nbrec_logical_router_col_nat. */
    c = &nbrec_logical_router_col_nat;
    c->name = "nat";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "NAT";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_nat;
    c->unparse = nbrec_logical_router_unparse_nat;

    /* Initialize nbrec_logical_router_col_options. */
    c = &nbrec_logical_router_col_options;
    c->name = "options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_options;
    c->unparse = nbrec_logical_router_unparse_options;

    /* Initialize nbrec_logical_router_col_ports. */
    c = &nbrec_logical_router_col_ports;
    c->name = "ports";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Logical_Router_Port";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_ports;
    c->unparse = nbrec_logical_router_unparse_ports;

    /* Initialize nbrec_logical_router_col_static_routes. */
    c = &nbrec_logical_router_col_static_routes;
    c->name = "static_routes";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Logical_Router_Static_Route";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_static_routes;
    c->unparse = nbrec_logical_router_unparse_static_routes;
}

/* Logical_Router_Port table. */

static void
nbrec_logical_router_port_parse_enabled(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->enabled = NULL;
    row->n_enabled = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_enabled) {
            row->enabled = xmalloc(n * sizeof_bool);
        }
        row->enabled[row->n_enabled] = datum->keys[i].boolean;
        row->n_enabled++;
    }
}

static void
nbrec_logical_router_port_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_router_port_parse_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->mac = datum->keys[0].string;
    } else {
        row->mac = "";
    }
}

static void
nbrec_logical_router_port_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_router_port_parse_networks(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->networks = NULL;
    row->n_networks = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_networks) {
            row->networks = xmalloc(datum->n * sizeof *row->networks);
        }
        row->networks[row->n_networks] = datum->keys[i].string;
        row->n_networks++;
    }
}

static void
nbrec_logical_router_port_parse_peer(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->peer = datum->keys[0].string;
    } else {
        row->peer = NULL;
    }
}

static void
nbrec_logical_router_port_unparse_enabled(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    free(row->enabled);
}

static void
nbrec_logical_router_port_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_router_port_unparse_mac(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_port_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_port_unparse_networks(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    free(row->networks);
}

static void
nbrec_logical_router_port_unparse_peer(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_port_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_router_port_init(nbrec_logical_router_port_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Router_Port". */
void
nbrec_logical_router_port_init(struct nbrec_logical_router_port *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Logical_Router_Port" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT], uuid));
}

/* Returns a row in table "Logical_Router_Port" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_next(const struct nbrec_logical_router_port *row)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_router_port_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]);
}

unsigned int nbrec_logical_router_port_row_get_seqno(const struct nbrec_logical_router_port *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_router_port *
nbrec_logical_router_port_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]));
}

const struct nbrec_logical_router_port
*nbrec_logical_router_port_track_get_next(const struct nbrec_logical_router_port *row)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Router_Port".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_delete(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Router_Port" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_router_port *
nbrec_logical_router_port_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT], NULL));
}

bool
nbrec_logical_router_port_is_updated(const struct nbrec_logical_router_port *row, enum nbrec_logical_router_port_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_logical_router_port_columns[column]);
}

/* Causes the original contents of column "enabled" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "enabled" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "enabled" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "enabled" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "enabled" has already been modified (with
 *     nbrec_logical_router_port_set_enabled()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_enabled() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_enabled(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_router_port_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_external_ids(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "mac" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "mac" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "mac" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "mac" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "mac" has already been modified (with
 *     nbrec_logical_router_port_set_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_mac(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_MAC]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_router_port_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_name(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NAME]);
}

/* Causes the original contents of column "networks" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "networks" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "networks" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "networks" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "networks" has already been modified (with
 *     nbrec_logical_router_port_set_networks()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_networks() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_networks(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS]);
}

/* Causes the original contents of column "peer" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "peer" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "peer" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "peer" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "peer" has already been modified (with
 *     nbrec_logical_router_port_set_peer()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_peer() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_peer(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_PEER]);
}

/* Returns the "enabled" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes enabled's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "enabled" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_enabled(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_enabled);
}

/* Returns the "external_ids" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_external_ids(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_external_ids);
}

/* Returns the "mac" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes mac's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "mac" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_mac(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_mac);
}

/* Returns the "name" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_name(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_name);
}

/* Returns the "networks" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes networks's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "networks" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_networks(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_networks);
}

/* Returns the "peer" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes peer's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "peer" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_peer(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_peer);
}

/* Sets the "enabled" column from the "Logical_Router_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_enabled(const struct nbrec_logical_router_port *row, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED], &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_port_set_external_ids(const struct nbrec_logical_router_port *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "mac" column from the "Logical_Router_Port" table in 'row' to
 * 'mac'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_mac(const struct nbrec_logical_router_port *row, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, mac);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_MAC], &datum);
}

/* Sets the "name" column from the "Logical_Router_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_name(const struct nbrec_logical_router_port *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NAME], &datum);
}

/* Sets the "networks" column from the "Logical_Router_Port" table in 'row' to
 * the 'networks' set with 'n_networks' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_networks(const struct nbrec_logical_router_port *row, const char **networks, size_t n_networks)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_networks;
    datum.keys = n_networks ? xmalloc(n_networks * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_networks; i++) {
        datum.keys[i].string = xstrdup(networks[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS], &datum);
}

/* Sets the "peer" column from the "Logical_Router_Port" table in 'row' to
 * the 'peer' set.
 *
 * If "peer" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_peer(const struct nbrec_logical_router_port *row, const char *peer)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (peer) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, peer);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_PEER], &datum);
}

/* Adds the value 'new_value' to the "enabled" set column from the "Logical_Router_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_port_update_enabled_addvalue(const struct nbrec_logical_router_port *row, bool new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED],
                                    datum);
}

/* Deletes the value 'delete_value' from the "enabled" set column from the
 * "Logical_Router_Port" table in 'row'.
 *
 */
void
nbrec_logical_router_port_update_enabled_delvalue(const struct nbrec_logical_router_port *row, bool delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED],
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "Logical_Router_Port" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_router_port_update_external_ids_setkey(const struct nbrec_logical_router_port *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Logical_Router_Port" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_router_port_update_external_ids_delkey(const struct nbrec_logical_router_port *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS],
                                    datum);
}

/* Adds the value 'new_value' to the "networks" set column from the "Logical_Router_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_port_update_networks_addvalue(const struct nbrec_logical_router_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS],
                                    datum);
}

/* Deletes the value 'delete_value' from the "networks" set column from the
 * "Logical_Router_Port" table in 'row'.
 *
 */
void
nbrec_logical_router_port_update_networks_delvalue(const struct nbrec_logical_router_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS],
                                    datum);
}

/* Adds the value 'new_value' to the "peer" set column from the "Logical_Router_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_port_update_peer_addvalue(const struct nbrec_logical_router_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_PEER],
                                    datum);
}

/* Deletes the value 'delete_value' from the "peer" set column from the
 * "Logical_Router_Port" table in 'row'.
 *
 */
void
nbrec_logical_router_port_update_peer_delvalue(const struct nbrec_logical_router_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_PEER],
                                    datum);
}

/* Sets the "enabled" column from the "Logical_Router_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_add_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                          function,
                          &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED],
                          &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_port_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                                   function,
                                   &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_router_port_col_external_ids.type);
}


/* Sets the "mac" column from the "Logical_Router_Port" table in 'row' to
 * 'mac'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_add_clause_mac(struct ovsdb_idl *idl, enum ovsdb_function function, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, mac);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                          function,
                          &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_MAC],
                          &datum);
}

/* Sets the "name" column from the "Logical_Router_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                          function,
                          &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NAME],
                          &datum);
}

/* Sets the "networks" column from the "Logical_Router_Port" table in 'row' to
 * the 'networks' set with 'n_networks' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_add_clause_networks(struct ovsdb_idl *idl, enum ovsdb_function function, const char **networks, size_t n_networks)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_networks;
    datum.keys = n_networks ? xmalloc(n_networks * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_networks; i++) {
        datum.keys[i].string = CONST_CAST(char *, networks[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                          function,
                          &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS],
                          &datum);
    free(datum.keys);
}

/* Sets the "peer" column from the "Logical_Router_Port" table in 'row' to
 * the 'peer' set.
 *
 * If "peer" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_add_clause_peer(struct ovsdb_idl *idl, enum ovsdb_function function, const char *peer)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (peer) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, peer);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                          function,
                          &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_PEER],
                          &datum);
}
void
nbrec_logical_router_port_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_logical_router_port_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "enabled" column from the "Logical_Router_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_remove_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                          function,
                          &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED],
                          &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_port_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                                      function,
                                      &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_router_port_col_external_ids.type);
}


/* Sets the "mac" column from the "Logical_Router_Port" table in 'row' to
 * 'mac'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_remove_clause_mac(struct ovsdb_idl *idl, enum ovsdb_function function, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, mac);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                          function,
                          &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_MAC],
                          &datum);
}

/* Sets the "name" column from the "Logical_Router_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                          function,
                          &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NAME],
                          &datum);
}

/* Sets the "networks" column from the "Logical_Router_Port" table in 'row' to
 * the 'networks' set with 'n_networks' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_remove_clause_networks(struct ovsdb_idl *idl, enum ovsdb_function function, const char **networks, size_t n_networks)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_networks;
    datum.keys = n_networks ? xmalloc(n_networks * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_networks; i++) {
        datum.keys[i].string = CONST_CAST(char *, networks[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                          function,
                          &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NETWORKS],
                          &datum);
    free(datum.keys);
}

/* Sets the "peer" column from the "Logical_Router_Port" table in 'row' to
 * the 'peer' set.
 *
 * If "peer" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_remove_clause_peer(struct ovsdb_idl *idl, enum ovsdb_function function, const char *peer)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (peer) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, peer);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT],
                          function,
                          &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_PEER],
                          &datum);
}
void
nbrec_logical_router_port_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_logical_router_port_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_N_COLUMNS];

static void
nbrec_logical_router_port_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_logical_router_port_col_enabled. */
    c = &nbrec_logical_router_port_col_enabled;
    c->name = "enabled";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_enabled;
    c->unparse = nbrec_logical_router_port_unparse_enabled;

    /* Initialize nbrec_logical_router_port_col_external_ids. */
    c = &nbrec_logical_router_port_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_external_ids;
    c->unparse = nbrec_logical_router_port_unparse_external_ids;

    /* Initialize nbrec_logical_router_port_col_mac. */
    c = &nbrec_logical_router_port_col_mac;
    c->name = "mac";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_mac;
    c->unparse = nbrec_logical_router_port_unparse_mac;

    /* Initialize nbrec_logical_router_port_col_name. */
    c = &nbrec_logical_router_port_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_name;
    c->unparse = nbrec_logical_router_port_unparse_name;

    /* Initialize nbrec_logical_router_port_col_networks. */
    c = &nbrec_logical_router_port_col_networks;
    c->name = "networks";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_networks;
    c->unparse = nbrec_logical_router_port_unparse_networks;

    /* Initialize nbrec_logical_router_port_col_peer. */
    c = &nbrec_logical_router_port_col_peer;
    c->name = "peer";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_peer;
    c->unparse = nbrec_logical_router_port_unparse_peer;
}

/* Logical_Router_Static_Route table. */

static void
nbrec_logical_router_static_route_parse_ip_prefix(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_static_route *row = nbrec_logical_router_static_route_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ip_prefix = datum->keys[0].string;
    } else {
        row->ip_prefix = "";
    }
}

static void
nbrec_logical_router_static_route_parse_nexthop(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_static_route *row = nbrec_logical_router_static_route_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->nexthop = datum->keys[0].string;
    } else {
        row->nexthop = "";
    }
}

static void
nbrec_logical_router_static_route_parse_output_port(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_static_route *row = nbrec_logical_router_static_route_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->output_port = datum->keys[0].string;
    } else {
        row->output_port = NULL;
    }
}

static void
nbrec_logical_router_static_route_unparse_ip_prefix(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_static_route_unparse_nexthop(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_static_route_unparse_output_port(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_static_route_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_router_static_route_init(nbrec_logical_router_static_route_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Router_Static_Route". */
void
nbrec_logical_router_static_route_init(struct nbrec_logical_router_static_route *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Logical_Router_Static_Route" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE], uuid));
}

/* Returns a row in table "Logical_Router_Static_Route" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_next(const struct nbrec_logical_router_static_route *row)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_router_static_route_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE]);
}

unsigned int nbrec_logical_router_static_route_row_get_seqno(const struct nbrec_logical_router_static_route *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE]));
}

const struct nbrec_logical_router_static_route
*nbrec_logical_router_static_route_track_get_next(const struct nbrec_logical_router_static_route *row)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Router_Static_Route".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_static_route_delete(const struct nbrec_logical_router_static_route *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Router_Static_Route" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_router_static_route *
nbrec_logical_router_static_route_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_router_static_route_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE], NULL));
}

bool
nbrec_logical_router_static_route_is_updated(const struct nbrec_logical_router_static_route *row, enum nbrec_logical_router_static_route_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_logical_router_static_route_columns[column]);
}

/* Causes the original contents of column "ip_prefix" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ip_prefix" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ip_prefix" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ip_prefix" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_static_route_insert()).
 *
 *   - If "ip_prefix" has already been modified (with
 *     nbrec_logical_router_static_route_set_ip_prefix()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_static_route_set_ip_prefix() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_static_route_verify_ip_prefix(const struct nbrec_logical_router_static_route *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_IP_PREFIX]);
}

/* Causes the original contents of column "nexthop" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "nexthop" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "nexthop" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "nexthop" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_static_route_insert()).
 *
 *   - If "nexthop" has already been modified (with
 *     nbrec_logical_router_static_route_set_nexthop()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_static_route_set_nexthop() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_static_route_verify_nexthop(const struct nbrec_logical_router_static_route *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_NEXTHOP]);
}

/* Causes the original contents of column "output_port" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "output_port" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "output_port" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "output_port" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_static_route_insert()).
 *
 *   - If "output_port" has already been modified (with
 *     nbrec_logical_router_static_route_set_output_port()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_static_route_set_output_port() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_static_route_verify_output_port(const struct nbrec_logical_router_static_route *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT]);
}

/* Returns the "ip_prefix" column's value from the "Logical_Router_Static_Route" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ip_prefix's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ip_prefix" member in nbrec_logical_router_static_route. */
const struct ovsdb_datum *
nbrec_logical_router_static_route_get_ip_prefix(const struct nbrec_logical_router_static_route *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_static_route_col_ip_prefix);
}

/* Returns the "nexthop" column's value from the "Logical_Router_Static_Route" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes nexthop's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "nexthop" member in nbrec_logical_router_static_route. */
const struct ovsdb_datum *
nbrec_logical_router_static_route_get_nexthop(const struct nbrec_logical_router_static_route *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_static_route_col_nexthop);
}

/* Returns the "output_port" column's value from the "Logical_Router_Static_Route" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes output_port's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "output_port" member in nbrec_logical_router_static_route. */
const struct ovsdb_datum *
nbrec_logical_router_static_route_get_output_port(const struct nbrec_logical_router_static_route *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_static_route_col_output_port);
}

/* Sets the "ip_prefix" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'ip_prefix'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_set_ip_prefix(const struct nbrec_logical_router_static_route *row, const char *ip_prefix)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip_prefix);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_IP_PREFIX], &datum);
}

/* Sets the "nexthop" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'nexthop'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_set_nexthop(const struct nbrec_logical_router_static_route *row, const char *nexthop)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, nexthop);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_NEXTHOP], &datum);
}

/* Sets the "output_port" column from the "Logical_Router_Static_Route" table in 'row' to
 * the 'output_port' set.
 *
 * If "output_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_set_output_port(const struct nbrec_logical_router_static_route *row, const char *output_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (output_port) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, output_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT], &datum);
}

/* Adds the value 'new_value' to the "output_port" set column from the "Logical_Router_Static_Route" table
 * in 'row'.
 *
 */
void
nbrec_logical_router_static_route_update_output_port_addvalue(const struct nbrec_logical_router_static_route *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT],
                                    datum);
}

/* Deletes the value 'delete_value' from the "output_port" set column from the
 * "Logical_Router_Static_Route" table in 'row'.
 *
 */
void
nbrec_logical_router_static_route_update_output_port_delvalue(const struct nbrec_logical_router_static_route *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT],
                                    datum);
}

/* Sets the "ip_prefix" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'ip_prefix'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_add_clause_ip_prefix(struct ovsdb_idl *idl, enum ovsdb_function function, const char *ip_prefix)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip_prefix);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE],
                          function,
                          &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_IP_PREFIX],
                          &datum);
}

/* Sets the "nexthop" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'nexthop'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_add_clause_nexthop(struct ovsdb_idl *idl, enum ovsdb_function function, const char *nexthop)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, nexthop);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE],
                          function,
                          &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_NEXTHOP],
                          &datum);
}

/* Sets the "output_port" column from the "Logical_Router_Static_Route" table in 'row' to
 * the 'output_port' set.
 *
 * If "output_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_add_clause_output_port(struct ovsdb_idl *idl, enum ovsdb_function function, const char *output_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (output_port) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, output_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE],
                          function,
                          &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT],
                          &datum);
}
void
nbrec_logical_router_static_route_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_logical_router_static_route_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "ip_prefix" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'ip_prefix'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_remove_clause_ip_prefix(struct ovsdb_idl *idl, enum ovsdb_function function, const char *ip_prefix)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip_prefix);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE],
                          function,
                          &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_IP_PREFIX],
                          &datum);
}

/* Sets the "nexthop" column from the "Logical_Router_Static_Route" table in 'row' to
 * 'nexthop'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_remove_clause_nexthop(struct ovsdb_idl *idl, enum ovsdb_function function, const char *nexthop)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, nexthop);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE],
                          function,
                          &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_NEXTHOP],
                          &datum);
}

/* Sets the "output_port" column from the "Logical_Router_Static_Route" table in 'row' to
 * the 'output_port' set.
 *
 * If "output_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_static_route_remove_clause_output_port(struct ovsdb_idl *idl, enum ovsdb_function function, const char *output_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (output_port) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, output_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE],
                          function,
                          &nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_COL_OUTPUT_PORT],
                          &datum);
}
void
nbrec_logical_router_static_route_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_logical_router_static_route_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_STATIC_ROUTE], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column nbrec_logical_router_static_route_columns[NBREC_LOGICAL_ROUTER_STATIC_ROUTE_N_COLUMNS];

static void
nbrec_logical_router_static_route_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_logical_router_static_route_col_ip_prefix. */
    c = &nbrec_logical_router_static_route_col_ip_prefix;
    c->name = "ip_prefix";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_static_route_parse_ip_prefix;
    c->unparse = nbrec_logical_router_static_route_unparse_ip_prefix;

    /* Initialize nbrec_logical_router_static_route_col_nexthop. */
    c = &nbrec_logical_router_static_route_col_nexthop;
    c->name = "nexthop";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_static_route_parse_nexthop;
    c->unparse = nbrec_logical_router_static_route_unparse_nexthop;

    /* Initialize nbrec_logical_router_static_route_col_output_port. */
    c = &nbrec_logical_router_static_route_col_output_port;
    c->name = "output_port";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_static_route_parse_output_port;
    c->unparse = nbrec_logical_router_static_route_unparse_output_port;
}

/* Logical_Switch table. */

static void
nbrec_logical_switch_parse_acls(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->acls = NULL;
    row->n_acls = 0;
    for (i = 0; i < datum->n; i++) {
        struct nbrec_acl *keyRow = nbrec_acl_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_ACL], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_acls) {
                row->acls = xmalloc(datum->n * sizeof *row->acls);
            }
            row->acls[row->n_acls] = keyRow;
            row->n_acls++;
        }
    }
}

static void
nbrec_logical_switch_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_switch_parse_load_balancer(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->load_balancer = NULL;
    row->n_load_balancer = 0;
    for (i = 0; i < datum->n; i++) {
        struct nbrec_load_balancer *keyRow = nbrec_load_balancer_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_LOAD_BALANCER], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_load_balancer) {
                row->load_balancer = xmalloc(datum->n * sizeof *row->load_balancer);
            }
            row->load_balancer[row->n_load_balancer] = keyRow;
            row->n_load_balancer++;
        }
    }
}

static void
nbrec_logical_switch_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_switch_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->other_config);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_switch_parse_ports(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ports = NULL;
    row->n_ports = 0;
    for (i = 0; i < datum->n; i++) {
        struct nbrec_logical_switch_port *keyRow = nbrec_logical_switch_port_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_ports) {
                row->ports = xmalloc(datum->n * sizeof *row->ports);
            }
            row->ports[row->n_ports] = keyRow;
            row->n_ports++;
        }
    }
}

static void
nbrec_logical_switch_unparse_acls(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);

    ovs_assert(inited);
    free(row->acls);
}

static void
nbrec_logical_switch_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_switch_unparse_load_balancer(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);

    ovs_assert(inited);
    free(row->load_balancer);
}

static void
nbrec_logical_switch_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->other_config);
}

static void
nbrec_logical_switch_unparse_ports(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);

    ovs_assert(inited);
    free(row->ports);
}

static void
nbrec_logical_switch_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_switch_init(nbrec_logical_switch_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Switch". */
void
nbrec_logical_switch_init(struct nbrec_logical_switch *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->other_config);
}

/* Searches table "Logical_Switch" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_switch *
nbrec_logical_switch_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_switch_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH], uuid));
}

/* Returns a row in table "Logical_Switch" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_switch *
nbrec_logical_switch_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_switch_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_switch *
nbrec_logical_switch_next(const struct nbrec_logical_switch *row)
{
    return nbrec_logical_switch_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_switch_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]);
}

unsigned int nbrec_logical_switch_row_get_seqno(const struct nbrec_logical_switch *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_switch *
nbrec_logical_switch_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_switch_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]));
}

const struct nbrec_logical_switch
*nbrec_logical_switch_track_get_next(const struct nbrec_logical_switch *row)
{
    return nbrec_logical_switch_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Switch".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_delete(const struct nbrec_logical_switch *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Switch" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_switch *
nbrec_logical_switch_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_switch_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH], NULL));
}

bool
nbrec_logical_switch_is_updated(const struct nbrec_logical_switch *row, enum nbrec_logical_switch_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_logical_switch_columns[column]);
}

/* Causes the original contents of column "acls" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "acls" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "acls" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "acls" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "acls" has already been modified (with
 *     nbrec_logical_switch_set_acls()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_acls() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_acls(const struct nbrec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_ACLS]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_switch_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_external_ids(const struct nbrec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "load_balancer" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "load_balancer" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "load_balancer" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "load_balancer" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "load_balancer" has already been modified (with
 *     nbrec_logical_switch_set_load_balancer()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_load_balancer() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_load_balancer(const struct nbrec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_switch_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_name(const struct nbrec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_NAME]);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     nbrec_logical_switch_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_other_config(const struct nbrec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG]);
}

/* Causes the original contents of column "ports" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ports" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ports" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ports" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "ports" has already been modified (with
 *     nbrec_logical_switch_set_ports()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_ports() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_ports(const struct nbrec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_PORTS]);
}

/* Returns the "acls" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes acls's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "acls" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_acls(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_acls);
}

/* Returns the "external_ids" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_external_ids(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_external_ids);
}

/* Returns the "load_balancer" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes load_balancer's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "load_balancer" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_load_balancer(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_load_balancer);
}

/* Returns the "name" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_name(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_name);
}

/* Returns the "other_config" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "other_config" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_other_config(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_other_config);
}

/* Returns the "ports" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ports's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ports" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_ports(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_ports);
}

/* Sets the "acls" column from the "Logical_Switch" table in 'row' to
 * the 'acls' set with 'n_acls' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_acls(const struct nbrec_logical_switch *row, struct nbrec_acl **acls, size_t n_acls)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_acls;
    datum.keys = n_acls ? xmalloc(n_acls * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_acls; i++) {
        datum.keys[i].uuid = acls[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_ACLS], &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Switch" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_set_external_ids(const struct nbrec_logical_switch *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "load_balancer" column from the "Logical_Switch" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_load_balancer(const struct nbrec_logical_switch *row, struct nbrec_load_balancer **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = load_balancer[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER], &datum);
}

/* Sets the "name" column from the "Logical_Switch" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_name(const struct nbrec_logical_switch *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_NAME], &datum);
}

/* Sets the "other_config" column's value from the "Logical_Switch" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
nbrec_logical_switch_set_other_config(const struct nbrec_logical_switch *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG],
                        &datum);
}


/* Sets the "ports" column from the "Logical_Switch" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_ports(const struct nbrec_logical_switch *row, struct nbrec_logical_switch_port **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = ports[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_PORTS], &datum);
}

/* Adds the value 'new_value' to the "acls" set column from the "Logical_Switch" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_update_acls_addvalue(const struct nbrec_logical_switch *row, const struct nbrec_acl *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_ACLS],
                                    datum);
}

/* Deletes the value 'delete_value' from the "acls" set column from the
 * "Logical_Switch" table in 'row'.
 *
 */
void
nbrec_logical_switch_update_acls_delvalue(const struct nbrec_logical_switch *row, const struct nbrec_acl *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_ACLS],
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "Logical_Switch" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_switch_update_external_ids_setkey(const struct nbrec_logical_switch *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Logical_Switch" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_switch_update_external_ids_delkey(const struct nbrec_logical_switch *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS],
                                    datum);
}

/* Adds the value 'new_value' to the "load_balancer" set column from the "Logical_Switch" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_update_load_balancer_addvalue(const struct nbrec_logical_switch *row, const struct nbrec_load_balancer *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER],
                                    datum);
}

/* Deletes the value 'delete_value' from the "load_balancer" set column from the
 * "Logical_Switch" table in 'row'.
 *
 */
void
nbrec_logical_switch_update_load_balancer_delvalue(const struct nbrec_logical_switch *row, const struct nbrec_load_balancer *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER],
                                    datum);
}

/* Sets an element of the "other_config" map column from the "Logical_Switch" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_switch_update_other_config_setkey(const struct nbrec_logical_switch *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG],
                                    datum);
}

/* Deletes an element of the "other_config" map column from the "Logical_Switch" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_switch_update_other_config_delkey(const struct nbrec_logical_switch *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG],
                                    datum);
}

/* Adds the value 'new_value' to the "ports" set column from the "Logical_Switch" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_update_ports_addvalue(const struct nbrec_logical_switch *row, const struct nbrec_logical_switch_port *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_PORTS],
                                    datum);
}

/* Deletes the value 'delete_value' from the "ports" set column from the
 * "Logical_Switch" table in 'row'.
 *
 */
void
nbrec_logical_switch_update_ports_delvalue(const struct nbrec_logical_switch *row, const struct nbrec_logical_switch_port *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_PORTS],
                                    datum);
}

/* Sets the "acls" column from the "Logical_Switch" table in 'row' to
 * the 'acls' set with 'n_acls' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_add_clause_acls(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **acls, size_t n_acls)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_acls;
    datum.keys = n_acls ? xmalloc(n_acls * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_acls; i++) {
        datum.keys[i].uuid = *acls[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                          function,
                          &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_ACLS],
                          &datum);
    free(datum.keys);
}

/* Sets the "external_ids" column's value from the "Logical_Switch" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                                   function,
                                   &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_col_external_ids.type);
}


/* Sets the "load_balancer" column from the "Logical_Switch" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_add_clause_load_balancer(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = *load_balancer[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                          function,
                          &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER],
                          &datum);
    free(datum.keys);
}

/* Sets the "name" column from the "Logical_Switch" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                          function,
                          &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_NAME],
                          &datum);
}

/* Sets the "other_config" column's value from the "Logical_Switch" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
nbrec_logical_switch_add_clause_other_config(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                                   function,
                                   &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_col_other_config.type);
}


/* Sets the "ports" column from the "Logical_Switch" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_add_clause_ports(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = *ports[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                          function,
                          &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_PORTS],
                          &datum);
    free(datum.keys);
}
void
nbrec_logical_switch_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_logical_switch_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "acls" column from the "Logical_Switch" table in 'row' to
 * the 'acls' set with 'n_acls' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_remove_clause_acls(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **acls, size_t n_acls)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_acls;
    datum.keys = n_acls ? xmalloc(n_acls * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_acls; i++) {
        datum.keys[i].uuid = *acls[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                          function,
                          &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_ACLS],
                          &datum);
    free(datum.keys);
}

/* Sets the "external_ids" column's value from the "Logical_Switch" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                                      function,
                                      &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_col_external_ids.type);
}


/* Sets the "load_balancer" column from the "Logical_Switch" table in 'row' to
 * the 'load_balancer' set with 'n_load_balancer' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_remove_clause_load_balancer(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **load_balancer, size_t n_load_balancer)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_load_balancer;
    datum.keys = n_load_balancer ? xmalloc(n_load_balancer * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_load_balancer; i++) {
        datum.keys[i].uuid = *load_balancer[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                          function,
                          &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_LOAD_BALANCER],
                          &datum);
    free(datum.keys);
}

/* Sets the "name" column from the "Logical_Switch" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                          function,
                          &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_NAME],
                          &datum);
}

/* Sets the "other_config" column's value from the "Logical_Switch" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
nbrec_logical_switch_remove_clause_other_config(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                                      function,
                                      &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_OTHER_CONFIG],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_col_other_config.type);
}


/* Sets the "ports" column from the "Logical_Switch" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_remove_clause_ports(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = *ports[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH],
                          function,
                          &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_PORTS],
                          &datum);
    free(datum.keys);
}
void
nbrec_logical_switch_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_logical_switch_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_N_COLUMNS];

static void
nbrec_logical_switch_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_logical_switch_col_acls. */
    c = &nbrec_logical_switch_col_acls;
    c->name = "acls";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "ACL";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_parse_acls;
    c->unparse = nbrec_logical_switch_unparse_acls;

    /* Initialize nbrec_logical_switch_col_external_ids. */
    c = &nbrec_logical_switch_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_parse_external_ids;
    c->unparse = nbrec_logical_switch_unparse_external_ids;

    /* Initialize nbrec_logical_switch_col_load_balancer. */
    c = &nbrec_logical_switch_col_load_balancer;
    c->name = "load_balancer";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Load_Balancer";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_parse_load_balancer;
    c->unparse = nbrec_logical_switch_unparse_load_balancer;

    /* Initialize nbrec_logical_switch_col_name. */
    c = &nbrec_logical_switch_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_parse_name;
    c->unparse = nbrec_logical_switch_unparse_name;

    /* Initialize nbrec_logical_switch_col_other_config. */
    c = &nbrec_logical_switch_col_other_config;
    c->name = "other_config";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_parse_other_config;
    c->unparse = nbrec_logical_switch_unparse_other_config;

    /* Initialize nbrec_logical_switch_col_ports. */
    c = &nbrec_logical_switch_col_ports;
    c->name = "ports";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Logical_Switch_Port";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_parse_ports;
    c->unparse = nbrec_logical_switch_unparse_ports;
}

/* Logical_Switch_Port table. */

static void
nbrec_logical_switch_port_parse_addresses(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->addresses = NULL;
    row->n_addresses = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_addresses) {
            row->addresses = xmalloc(datum->n * sizeof *row->addresses);
        }
        row->addresses[row->n_addresses] = datum->keys[i].string;
        row->n_addresses++;
    }
}

static void
nbrec_logical_switch_port_parse_dhcpv4_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->dhcpv4_options = nbrec_dhcp_options_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS], &datum->keys[0].uuid));
    } else {
        row->dhcpv4_options = NULL;
    }
}

static void
nbrec_logical_switch_port_parse_dhcpv6_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->dhcpv6_options = nbrec_dhcp_options_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_DHCP_OPTIONS], &datum->keys[0].uuid));
    } else {
        row->dhcpv6_options = NULL;
    }
}

static void
nbrec_logical_switch_port_parse_dynamic_addresses(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->dynamic_addresses = datum->keys[0].string;
    } else {
        row->dynamic_addresses = NULL;
    }
}

static void
nbrec_logical_switch_port_parse_enabled(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->enabled = NULL;
    row->n_enabled = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_enabled) {
            row->enabled = xmalloc(n * sizeof_bool);
        }
        row->enabled[row->n_enabled] = datum->keys[i].boolean;
        row->n_enabled++;
    }
}

static void
nbrec_logical_switch_port_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_switch_port_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_switch_port_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->options);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->options,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_logical_switch_port_parse_parent_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->parent_name = datum->keys[0].string;
    } else {
        row->parent_name = NULL;
    }
}

static void
nbrec_logical_switch_port_parse_port_security(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->port_security = NULL;
    row->n_port_security = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_port_security) {
            row->port_security = xmalloc(datum->n * sizeof *row->port_security);
        }
        row->port_security[row->n_port_security] = datum->keys[i].string;
        row->n_port_security++;
    }
}

static void
nbrec_logical_switch_port_parse_tag(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->tag = NULL;
    row->n_tag = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_tag) {
            row->tag = xmalloc(n * sizeof *row->tag);
        }
        row->tag[row->n_tag] = datum->keys[i].integer;
        row->n_tag++;
    }
}

static void
nbrec_logical_switch_port_parse_tag_request(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->tag_request = NULL;
    row->n_tag_request = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_tag_request) {
            row->tag_request = xmalloc(n * sizeof *row->tag_request);
        }
        row->tag_request[row->n_tag_request] = datum->keys[i].integer;
        row->n_tag_request++;
    }
}

static void
nbrec_logical_switch_port_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
nbrec_logical_switch_port_parse_up(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->up = NULL;
    row->n_up = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_up) {
            row->up = xmalloc(n * sizeof_bool);
        }
        row->up[row->n_up] = datum->keys[i].boolean;
        row->n_up++;
    }
}

static void
nbrec_logical_switch_port_unparse_addresses(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    free(row->addresses);
}

static void
nbrec_logical_switch_port_unparse_dhcpv4_options(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_dhcpv6_options(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_dynamic_addresses(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_enabled(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    free(row->enabled);
}

static void
nbrec_logical_switch_port_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_switch_port_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_options(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->options);
}

static void
nbrec_logical_switch_port_unparse_parent_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_port_security(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    free(row->port_security);
}

static void
nbrec_logical_switch_port_unparse_tag(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    free(row->tag);
}

static void
nbrec_logical_switch_port_unparse_tag_request(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    free(row->tag_request);
}

static void
nbrec_logical_switch_port_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_port_unparse_up(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch_port *row = nbrec_logical_switch_port_cast(row_);

    ovs_assert(inited);
    free(row->up);
}

static void
nbrec_logical_switch_port_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_switch_port_init(nbrec_logical_switch_port_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Switch_Port". */
void
nbrec_logical_switch_port_init(struct nbrec_logical_switch_port *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->options);
}

/* Searches table "Logical_Switch_Port" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT], uuid));
}

/* Returns a row in table "Logical_Switch_Port" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_next(const struct nbrec_logical_switch_port *row)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_switch_port_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]);
}

unsigned int nbrec_logical_switch_port_row_get_seqno(const struct nbrec_logical_switch_port *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_switch_port *
nbrec_logical_switch_port_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT]));
}

const struct nbrec_logical_switch_port
*nbrec_logical_switch_port_track_get_next(const struct nbrec_logical_switch_port *row)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Switch_Port".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_delete(const struct nbrec_logical_switch_port *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Switch_Port" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_switch_port *
nbrec_logical_switch_port_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_switch_port_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT], NULL));
}

bool
nbrec_logical_switch_port_is_updated(const struct nbrec_logical_switch_port *row, enum nbrec_logical_switch_port_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_logical_switch_port_columns[column]);
}

/* Causes the original contents of column "addresses" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "addresses" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "addresses" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "addresses" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "addresses" has already been modified (with
 *     nbrec_logical_switch_port_set_addresses()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_addresses() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_addresses(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES]);
}

/* Causes the original contents of column "dhcpv4_options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dhcpv4_options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dhcpv4_options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dhcpv4_options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "dhcpv4_options" has already been modified (with
 *     nbrec_logical_switch_port_set_dhcpv4_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_dhcpv4_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_dhcpv4_options(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS]);
}

/* Causes the original contents of column "dhcpv6_options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dhcpv6_options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dhcpv6_options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dhcpv6_options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "dhcpv6_options" has already been modified (with
 *     nbrec_logical_switch_port_set_dhcpv6_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_dhcpv6_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_dhcpv6_options(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS]);
}

/* Causes the original contents of column "dynamic_addresses" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dynamic_addresses" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dynamic_addresses" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dynamic_addresses" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "dynamic_addresses" has already been modified (with
 *     nbrec_logical_switch_port_set_dynamic_addresses()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_dynamic_addresses() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_dynamic_addresses(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES]);
}

/* Causes the original contents of column "enabled" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "enabled" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "enabled" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "enabled" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "enabled" has already been modified (with
 *     nbrec_logical_switch_port_set_enabled()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_enabled() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_enabled(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_switch_port_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_external_ids(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_switch_port_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_name(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_NAME]);
}

/* Causes the original contents of column "options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "options" has already been modified (with
 *     nbrec_logical_switch_port_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_options(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS]);
}

/* Causes the original contents of column "parent_name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "parent_name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "parent_name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "parent_name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "parent_name" has already been modified (with
 *     nbrec_logical_switch_port_set_parent_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_parent_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_parent_name(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME]);
}

/* Causes the original contents of column "port_security" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "port_security" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "port_security" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "port_security" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "port_security" has already been modified (with
 *     nbrec_logical_switch_port_set_port_security()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_port_security() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_port_security(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY]);
}

/* Causes the original contents of column "tag" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tag" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tag" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tag" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "tag" has already been modified (with
 *     nbrec_logical_switch_port_set_tag()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_tag() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_tag(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG]);
}

/* Causes the original contents of column "tag_request" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tag_request" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tag_request" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tag_request" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "tag_request" has already been modified (with
 *     nbrec_logical_switch_port_set_tag_request()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_tag_request() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_tag_request(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST]);
}

/* Causes the original contents of column "type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "type" has already been modified (with
 *     nbrec_logical_switch_port_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_type(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TYPE]);
}

/* Causes the original contents of column "up" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "up" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "up" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "up" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_port_insert()).
 *
 *   - If "up" has already been modified (with
 *     nbrec_logical_switch_port_set_up()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_port_set_up() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_port_verify_up(const struct nbrec_logical_switch_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_UP]);
}

/* Returns the "addresses" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes addresses's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "addresses" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_addresses(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_addresses);
}

/* Returns the "dhcpv4_options" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes dhcpv4_options's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "dhcpv4_options" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_dhcpv4_options(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_dhcpv4_options);
}

/* Returns the "dhcpv6_options" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes dhcpv6_options's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "dhcpv6_options" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_dhcpv6_options(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_dhcpv6_options);
}

/* Returns the "dynamic_addresses" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes dynamic_addresses's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "dynamic_addresses" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_dynamic_addresses(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_dynamic_addresses);
}

/* Returns the "enabled" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes enabled's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "enabled" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_enabled(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_enabled);
}

/* Returns the "external_ids" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_external_ids(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_external_ids);
}

/* Returns the "name" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_name(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_name);
}

/* Returns the "options" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes options's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "options" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_options(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_options);
}

/* Returns the "parent_name" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes parent_name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "parent_name" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_parent_name(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_parent_name);
}

/* Returns the "port_security" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes port_security's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "port_security" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_port_security(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_port_security);
}

/* Returns the "tag" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tag's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "tag" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_tag(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_tag);
}

/* Returns the "tag_request" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tag_request's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "tag_request" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_tag_request(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_tag_request);
}

/* Returns the "type" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes type's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "type" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_type(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_type);
}

/* Returns the "up" column's value from the "Logical_Switch_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes up's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "up" member in nbrec_logical_switch_port. */
const struct ovsdb_datum *
nbrec_logical_switch_port_get_up(const struct nbrec_logical_switch_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_port_col_up);
}

/* Sets the "addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_addresses(const struct nbrec_logical_switch_port *row, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_addresses; i++) {
        datum.keys[i].string = xstrdup(addresses[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES], &datum);
}

/* Sets the "dhcpv4_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv4_options' set.
 *
 * If "dhcpv4_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_dhcpv4_options(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *dhcpv4_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dhcpv4_options) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = dhcpv4_options->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS], &datum);
}

/* Sets the "dhcpv6_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv6_options' set.
 *
 * If "dhcpv6_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_dhcpv6_options(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *dhcpv6_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dhcpv6_options) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = dhcpv6_options->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS], &datum);
}

/* Sets the "dynamic_addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dynamic_addresses' set.
 *
 * If "dynamic_addresses" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_dynamic_addresses(const struct nbrec_logical_switch_port *row, const char *dynamic_addresses)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dynamic_addresses) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, dynamic_addresses);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES], &datum);
}

/* Sets the "enabled" column from the "Logical_Switch_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_enabled(const struct nbrec_logical_switch_port *row, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED], &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_port_set_external_ids(const struct nbrec_logical_switch_port *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "name" column from the "Logical_Switch_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_name(const struct nbrec_logical_switch_port *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_NAME], &datum);
}

/* Sets the "options" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_switch_port_set_options(const struct nbrec_logical_switch_port *row, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS],
                        &datum);
}


/* Sets the "parent_name" column from the "Logical_Switch_Port" table in 'row' to
 * the 'parent_name' set.
 *
 * If "parent_name" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_parent_name(const struct nbrec_logical_switch_port *row, const char *parent_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (parent_name) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, parent_name);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME], &datum);
}

/* Sets the "port_security" column from the "Logical_Switch_Port" table in 'row' to
 * the 'port_security' set with 'n_port_security' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_port_security(const struct nbrec_logical_switch_port *row, const char **port_security, size_t n_port_security)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_port_security;
    datum.keys = n_port_security ? xmalloc(n_port_security * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_port_security; i++) {
        datum.keys[i].string = xstrdup(port_security[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY], &datum);
}

/* Sets the "tag" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_tag(const struct nbrec_logical_switch_port *row, const int64_t *tag, size_t n_tag)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_tag) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG], &datum);
}

/* Sets the "tag_request" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag_request' set with 'n_tag_request' entries.
 *
 * 'n_tag_request' may be 0 or 1; if it is 0, then 'tag_request'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_tag_request(const struct nbrec_logical_switch_port *row, const int64_t *tag_request, size_t n_tag_request)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_tag_request) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag_request;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST], &datum);
}

/* Sets the "type" column from the "Logical_Switch_Port" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_type(const struct nbrec_logical_switch_port *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TYPE], &datum);
}

/* Sets the "up" column from the "Logical_Switch_Port" table in 'row' to
 * the 'up' set with 'n_up' entries.
 *
 * 'n_up' may be 0 or 1; if it is 0, then 'up'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_set_up(const struct nbrec_logical_switch_port *row, const bool *up, size_t n_up)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_up) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *up;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_UP], &datum);
}

/* Adds the value 'new_value' to the "addresses" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_addresses_addvalue(const struct nbrec_logical_switch_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES],
                                    datum);
}

/* Deletes the value 'delete_value' from the "addresses" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_addresses_delvalue(const struct nbrec_logical_switch_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES],
                                    datum);
}

/* Adds the value 'new_value' to the "dhcpv4_options" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dhcpv4_options_addvalue(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS],
                                    datum);
}

/* Deletes the value 'delete_value' from the "dhcpv4_options" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dhcpv4_options_delvalue(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS],
                                    datum);
}

/* Adds the value 'new_value' to the "dhcpv6_options" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dhcpv6_options_addvalue(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS],
                                    datum);
}

/* Deletes the value 'delete_value' from the "dhcpv6_options" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dhcpv6_options_delvalue(const struct nbrec_logical_switch_port *row, const struct nbrec_dhcp_options *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS],
                                    datum);
}

/* Adds the value 'new_value' to the "dynamic_addresses" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dynamic_addresses_addvalue(const struct nbrec_logical_switch_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES],
                                    datum);
}

/* Deletes the value 'delete_value' from the "dynamic_addresses" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_dynamic_addresses_delvalue(const struct nbrec_logical_switch_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES],
                                    datum);
}

/* Adds the value 'new_value' to the "enabled" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_enabled_addvalue(const struct nbrec_logical_switch_port *row, bool new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED],
                                    datum);
}

/* Deletes the value 'delete_value' from the "enabled" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_enabled_delvalue(const struct nbrec_logical_switch_port *row, bool delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED],
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "Logical_Switch_Port" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_switch_port_update_external_ids_setkey(const struct nbrec_logical_switch_port *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Logical_Switch_Port" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_switch_port_update_external_ids_delkey(const struct nbrec_logical_switch_port *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS],
                                    datum);
}

/* Sets an element of the "options" map column from the "Logical_Switch_Port" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_logical_switch_port_update_options_setkey(const struct nbrec_logical_switch_port *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS],
                                    datum);
}

/* Deletes an element of the "options" map column from the "Logical_Switch_Port" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_logical_switch_port_update_options_delkey(const struct nbrec_logical_switch_port *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS],
                                    datum);
}

/* Adds the value 'new_value' to the "parent_name" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_parent_name_addvalue(const struct nbrec_logical_switch_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME],
                                    datum);
}

/* Deletes the value 'delete_value' from the "parent_name" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_parent_name_delvalue(const struct nbrec_logical_switch_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME],
                                    datum);
}

/* Adds the value 'new_value' to the "port_security" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_port_security_addvalue(const struct nbrec_logical_switch_port *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY],
                                    datum);
}

/* Deletes the value 'delete_value' from the "port_security" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_port_security_delvalue(const struct nbrec_logical_switch_port *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY],
                                    datum);
}

/* Adds the value 'new_value' to the "tag" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_tag_addvalue(const struct nbrec_logical_switch_port *row, int64_t new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG],
                                    datum);
}

/* Deletes the value 'delete_value' from the "tag" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_tag_delvalue(const struct nbrec_logical_switch_port *row, int64_t delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG],
                                    datum);
}

/* Adds the value 'new_value' to the "tag_request" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_tag_request_addvalue(const struct nbrec_logical_switch_port *row, int64_t new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST],
                                    datum);
}

/* Deletes the value 'delete_value' from the "tag_request" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_tag_request_delvalue(const struct nbrec_logical_switch_port *row, int64_t delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST],
                                    datum);
}

/* Adds the value 'new_value' to the "up" set column from the "Logical_Switch_Port" table
 * in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_up_addvalue(const struct nbrec_logical_switch_port *row, bool new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_UP],
                                    datum);
}

/* Deletes the value 'delete_value' from the "up" set column from the
 * "Logical_Switch_Port" table in 'row'.
 *
 */
void
nbrec_logical_switch_port_update_up_delvalue(const struct nbrec_logical_switch_port *row, bool delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].boolean = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_UP],
                                    datum);
}

/* Sets the "addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_addresses; i++) {
        datum.keys[i].string = CONST_CAST(char *, addresses[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES],
                          &datum);
    free(datum.keys);
}

/* Sets the "dhcpv4_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv4_options' set.
 *
 * If "dhcpv4_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_dhcpv4_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *dhcpv4_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dhcpv4_options) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = *dhcpv4_options;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS],
                          &datum);
}

/* Sets the "dhcpv6_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv6_options' set.
 *
 * If "dhcpv6_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_dhcpv6_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *dhcpv6_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dhcpv6_options) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = *dhcpv6_options;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS],
                          &datum);
}

/* Sets the "dynamic_addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dynamic_addresses' set.
 *
 * If "dynamic_addresses" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_dynamic_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char *dynamic_addresses)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dynamic_addresses) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, dynamic_addresses);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES],
                          &datum);
}

/* Sets the "enabled" column from the "Logical_Switch_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED],
                          &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_port_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                                   function,
                                   &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_port_col_external_ids.type);
}


/* Sets the "name" column from the "Logical_Switch_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_NAME],
                          &datum);
}

/* Sets the "options" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_switch_port_add_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                                   function,
                                   &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_port_col_options.type);
}


/* Sets the "parent_name" column from the "Logical_Switch_Port" table in 'row' to
 * the 'parent_name' set.
 *
 * If "parent_name" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_parent_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *parent_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (parent_name) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, parent_name);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME],
                          &datum);
}

/* Sets the "port_security" column from the "Logical_Switch_Port" table in 'row' to
 * the 'port_security' set with 'n_port_security' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_port_security(struct ovsdb_idl *idl, enum ovsdb_function function, const char **port_security, size_t n_port_security)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_port_security;
    datum.keys = n_port_security ? xmalloc(n_port_security * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_port_security; i++) {
        datum.keys[i].string = CONST_CAST(char *, port_security[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY],
                          &datum);
    free(datum.keys);
}

/* Sets the "tag" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_tag(struct ovsdb_idl *idl, enum ovsdb_function function, const int64_t *tag, size_t n_tag)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_tag) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG],
                          &datum);
}

/* Sets the "tag_request" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag_request' set with 'n_tag_request' entries.
 *
 * 'n_tag_request' may be 0 or 1; if it is 0, then 'tag_request'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_tag_request(struct ovsdb_idl *idl, enum ovsdb_function function, const int64_t *tag_request, size_t n_tag_request)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_tag_request) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag_request;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST],
                          &datum);
}

/* Sets the "type" column from the "Logical_Switch_Port" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TYPE],
                          &datum);
}

/* Sets the "up" column from the "Logical_Switch_Port" table in 'row' to
 * the 'up' set with 'n_up' entries.
 *
 * 'n_up' may be 0 or 1; if it is 0, then 'up'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_add_clause_up(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *up, size_t n_up)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_up) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *up;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_UP],
                          &datum);
}
void
nbrec_logical_switch_port_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_logical_switch_port_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_addresses; i++) {
        datum.keys[i].string = CONST_CAST(char *, addresses[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ADDRESSES],
                          &datum);
    free(datum.keys);
}

/* Sets the "dhcpv4_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv4_options' set.
 *
 * If "dhcpv4_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_dhcpv4_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *dhcpv4_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dhcpv4_options) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = *dhcpv4_options;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV4_OPTIONS],
                          &datum);
}

/* Sets the "dhcpv6_options" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dhcpv6_options' set.
 *
 * If "dhcpv6_options" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_dhcpv6_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *dhcpv6_options)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dhcpv6_options) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = *dhcpv6_options;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DHCPV6_OPTIONS],
                          &datum);
}

/* Sets the "dynamic_addresses" column from the "Logical_Switch_Port" table in 'row' to
 * the 'dynamic_addresses' set.
 *
 * If "dynamic_addresses" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_dynamic_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char *dynamic_addresses)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dynamic_addresses) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, dynamic_addresses);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_DYNAMIC_ADDRESSES],
                          &datum);
}

/* Sets the "enabled" column from the "Logical_Switch_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_enabled(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_ENABLED],
                          &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_port_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                                      function,
                                      &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_port_col_external_ids.type);
}


/* Sets the "name" column from the "Logical_Switch_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_NAME],
                          &datum);
}

/* Sets the "options" column's value from the "Logical_Switch_Port" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_switch_port_remove_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                                      function,
                                      &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_OPTIONS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_logical_switch_port_col_options.type);
}


/* Sets the "parent_name" column from the "Logical_Switch_Port" table in 'row' to
 * the 'parent_name' set.
 *
 * If "parent_name" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_parent_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *parent_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (parent_name) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, parent_name);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PARENT_NAME],
                          &datum);
}

/* Sets the "port_security" column from the "Logical_Switch_Port" table in 'row' to
 * the 'port_security' set with 'n_port_security' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_port_security(struct ovsdb_idl *idl, enum ovsdb_function function, const char **port_security, size_t n_port_security)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_port_security;
    datum.keys = n_port_security ? xmalloc(n_port_security * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_port_security; i++) {
        datum.keys[i].string = CONST_CAST(char *, port_security[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_PORT_SECURITY],
                          &datum);
    free(datum.keys);
}

/* Sets the "tag" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_tag(struct ovsdb_idl *idl, enum ovsdb_function function, const int64_t *tag, size_t n_tag)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_tag) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG],
                          &datum);
}

/* Sets the "tag_request" column from the "Logical_Switch_Port" table in 'row' to
 * the 'tag_request' set with 'n_tag_request' entries.
 *
 * 'n_tag_request' may be 0 or 1; if it is 0, then 'tag_request'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_tag_request(struct ovsdb_idl *idl, enum ovsdb_function function, const int64_t *tag_request, size_t n_tag_request)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_tag_request) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag_request;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TAG_REQUEST],
                          &datum);
}

/* Sets the "type" column from the "Logical_Switch_Port" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_TYPE],
                          &datum);
}

/* Sets the "up" column from the "Logical_Switch_Port" table in 'row' to
 * the 'up' set with 'n_up' entries.
 *
 * 'n_up' may be 0 or 1; if it is 0, then 'up'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_port_remove_clause_up(struct ovsdb_idl *idl, enum ovsdb_function function, const bool *up, size_t n_up)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_up) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *up;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT],
                          function,
                          &nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_COL_UP],
                          &datum);
}
void
nbrec_logical_switch_port_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_logical_switch_port_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH_PORT], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column nbrec_logical_switch_port_columns[NBREC_LOGICAL_SWITCH_PORT_N_COLUMNS];

static void
nbrec_logical_switch_port_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_logical_switch_port_col_addresses. */
    c = &nbrec_logical_switch_port_col_addresses;
    c->name = "addresses";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_addresses;
    c->unparse = nbrec_logical_switch_port_unparse_addresses;

    /* Initialize nbrec_logical_switch_port_col_dhcpv4_options. */
    c = &nbrec_logical_switch_port_col_dhcpv4_options;
    c->name = "dhcpv4_options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "DHCP_Options";
    c->type.key.u.uuid.refType = OVSDB_REF_WEAK;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_dhcpv4_options;
    c->unparse = nbrec_logical_switch_port_unparse_dhcpv4_options;

    /* Initialize nbrec_logical_switch_port_col_dhcpv6_options. */
    c = &nbrec_logical_switch_port_col_dhcpv6_options;
    c->name = "dhcpv6_options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "DHCP_Options";
    c->type.key.u.uuid.refType = OVSDB_REF_WEAK;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_dhcpv6_options;
    c->unparse = nbrec_logical_switch_port_unparse_dhcpv6_options;

    /* Initialize nbrec_logical_switch_port_col_dynamic_addresses. */
    c = &nbrec_logical_switch_port_col_dynamic_addresses;
    c->name = "dynamic_addresses";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_dynamic_addresses;
    c->unparse = nbrec_logical_switch_port_unparse_dynamic_addresses;

    /* Initialize nbrec_logical_switch_port_col_enabled. */
    c = &nbrec_logical_switch_port_col_enabled;
    c->name = "enabled";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_enabled;
    c->unparse = nbrec_logical_switch_port_unparse_enabled;

    /* Initialize nbrec_logical_switch_port_col_external_ids. */
    c = &nbrec_logical_switch_port_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_external_ids;
    c->unparse = nbrec_logical_switch_port_unparse_external_ids;

    /* Initialize nbrec_logical_switch_port_col_name. */
    c = &nbrec_logical_switch_port_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_name;
    c->unparse = nbrec_logical_switch_port_unparse_name;

    /* Initialize nbrec_logical_switch_port_col_options. */
    c = &nbrec_logical_switch_port_col_options;
    c->name = "options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_options;
    c->unparse = nbrec_logical_switch_port_unparse_options;

    /* Initialize nbrec_logical_switch_port_col_parent_name. */
    c = &nbrec_logical_switch_port_col_parent_name;
    c->name = "parent_name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_parent_name;
    c->unparse = nbrec_logical_switch_port_unparse_parent_name;

    /* Initialize nbrec_logical_switch_port_col_port_security. */
    c = &nbrec_logical_switch_port_col_port_security;
    c->name = "port_security";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_port_security;
    c->unparse = nbrec_logical_switch_port_unparse_port_security;

    /* Initialize nbrec_logical_switch_port_col_tag. */
    c = &nbrec_logical_switch_port_col_tag;
    c->name = "tag";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_tag;
    c->unparse = nbrec_logical_switch_port_unparse_tag;

    /* Initialize nbrec_logical_switch_port_col_tag_request. */
    c = &nbrec_logical_switch_port_col_tag_request;
    c->name = "tag_request";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_tag_request;
    c->unparse = nbrec_logical_switch_port_unparse_tag_request;

    /* Initialize nbrec_logical_switch_port_col_type. */
    c = &nbrec_logical_switch_port_col_type;
    c->name = "type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_type;
    c->unparse = nbrec_logical_switch_port_unparse_type;

    /* Initialize nbrec_logical_switch_port_col_up. */
    c = &nbrec_logical_switch_port_col_up;
    c->name = "up";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_port_parse_up;
    c->unparse = nbrec_logical_switch_port_unparse_up;
}

/* NAT table. */

static void
nbrec_nat_parse_external_ip(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nat *row = nbrec_nat_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->external_ip = datum->keys[0].string;
    } else {
        row->external_ip = "";
    }
}

static void
nbrec_nat_parse_logical_ip(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nat *row = nbrec_nat_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->logical_ip = datum->keys[0].string;
    } else {
        row->logical_ip = "";
    }
}

static void
nbrec_nat_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nat *row = nbrec_nat_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
nbrec_nat_unparse_external_ip(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nat_unparse_logical_ip(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nat_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nat_init__(struct ovsdb_idl_row *row)
{
    nbrec_nat_init(nbrec_nat_cast(row));
}

/* Clears the contents of 'row' in table "NAT". */
void
nbrec_nat_init(struct nbrec_nat *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "NAT" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_nat *
nbrec_nat_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_nat_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_NAT], uuid));
}

/* Returns a row in table "NAT" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_nat *
nbrec_nat_first(const struct ovsdb_idl *idl)
{
    return nbrec_nat_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_NAT]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_nat *
nbrec_nat_next(const struct nbrec_nat *row)
{
    return nbrec_nat_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_nat_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_NAT]);
}

unsigned int nbrec_nat_row_get_seqno(const struct nbrec_nat *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_nat *
nbrec_nat_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_nat_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_NAT]));
}

const struct nbrec_nat
*nbrec_nat_track_get_next(const struct nbrec_nat *row)
{
    return nbrec_nat_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "NAT".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nat_delete(const struct nbrec_nat *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "NAT" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_nat *
nbrec_nat_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_nat_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_NAT], NULL));
}

bool
nbrec_nat_is_updated(const struct nbrec_nat *row, enum nbrec_nat_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_nat_columns[column]);
}

/* Causes the original contents of column "external_ip" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ip" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ip" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ip" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nat_insert()).
 *
 *   - If "external_ip" has already been modified (with
 *     nbrec_nat_set_external_ip()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nat_set_external_ip() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nat_verify_external_ip(const struct nbrec_nat *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nat_columns[NBREC_NAT_COL_EXTERNAL_IP]);
}

/* Causes the original contents of column "logical_ip" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_ip" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_ip" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_ip" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nat_insert()).
 *
 *   - If "logical_ip" has already been modified (with
 *     nbrec_nat_set_logical_ip()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nat_set_logical_ip() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nat_verify_logical_ip(const struct nbrec_nat *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nat_columns[NBREC_NAT_COL_LOGICAL_IP]);
}

/* Causes the original contents of column "type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nat_insert()).
 *
 *   - If "type" has already been modified (with
 *     nbrec_nat_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nat_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nat_verify_type(const struct nbrec_nat *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nat_columns[NBREC_NAT_COL_TYPE]);
}

/* Returns the "external_ip" column's value from the "NAT" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ip's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ip" member in nbrec_nat. */
const struct ovsdb_datum *
nbrec_nat_get_external_ip(const struct nbrec_nat *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_nat_col_external_ip);
}

/* Returns the "logical_ip" column's value from the "NAT" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes logical_ip's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "logical_ip" member in nbrec_nat. */
const struct ovsdb_datum *
nbrec_nat_get_logical_ip(const struct nbrec_nat *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_nat_col_logical_ip);
}

/* Returns the "type" column's value from the "NAT" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes type's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "type" member in nbrec_nat. */
const struct ovsdb_datum *
nbrec_nat_get_type(const struct nbrec_nat *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_nat_col_type);
}

/* Sets the "external_ip" column from the "NAT" table in 'row' to
 * 'external_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_set_external_ip(const struct nbrec_nat *row, const char *external_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, external_ip);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nat_columns[NBREC_NAT_COL_EXTERNAL_IP], &datum);
}

/* Sets the "logical_ip" column from the "NAT" table in 'row' to
 * 'logical_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_set_logical_ip(const struct nbrec_nat *row, const char *logical_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_ip);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nat_columns[NBREC_NAT_COL_LOGICAL_IP], &datum);
}

/* Sets the "type" column from the "NAT" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "snat", "dnat", or "dnat_and_snat"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_set_type(const struct nbrec_nat *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nat_columns[NBREC_NAT_COL_TYPE], &datum);
}

/* Sets the "external_ip" column from the "NAT" table in 'row' to
 * 'external_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_add_clause_external_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *external_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, external_ip);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_NAT],
                          function,
                          &nbrec_nat_columns[NBREC_NAT_COL_EXTERNAL_IP],
                          &datum);
}

/* Sets the "logical_ip" column from the "NAT" table in 'row' to
 * 'logical_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_add_clause_logical_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *logical_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_ip);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_NAT],
                          function,
                          &nbrec_nat_columns[NBREC_NAT_COL_LOGICAL_IP],
                          &datum);
}

/* Sets the "type" column from the "NAT" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "snat", "dnat", or "dnat_and_snat"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_add_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_NAT],
                          function,
                          &nbrec_nat_columns[NBREC_NAT_COL_TYPE],
                          &datum);
}
void
nbrec_nat_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_NAT], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_nat_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_NAT], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "external_ip" column from the "NAT" table in 'row' to
 * 'external_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_remove_clause_external_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *external_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, external_ip);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_NAT],
                          function,
                          &nbrec_nat_columns[NBREC_NAT_COL_EXTERNAL_IP],
                          &datum);
}

/* Sets the "logical_ip" column from the "NAT" table in 'row' to
 * 'logical_ip'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_remove_clause_logical_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *logical_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_ip);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_NAT],
                          function,
                          &nbrec_nat_columns[NBREC_NAT_COL_LOGICAL_IP],
                          &datum);
}

/* Sets the "type" column from the "NAT" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "snat", "dnat", or "dnat_and_snat"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nat_remove_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_NAT],
                          function,
                          &nbrec_nat_columns[NBREC_NAT_COL_TYPE],
                          &datum);
}
void
nbrec_nat_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_NAT], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_nat_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_NAT], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column nbrec_nat_columns[NBREC_NAT_N_COLUMNS];

static void
nbrec_nat_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_nat_col_external_ip. */
    c = &nbrec_nat_col_external_ip;
    c->name = "external_ip";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_nat_parse_external_ip;
    c->unparse = nbrec_nat_unparse_external_ip;

    /* Initialize nbrec_nat_col_logical_ip. */
    c = &nbrec_nat_col_logical_ip;
    c->name = "logical_ip";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_nat_parse_logical_ip;
    c->unparse = nbrec_nat_unparse_logical_ip;

    /* Initialize nbrec_nat_col_type. */
    c = &nbrec_nat_col_type;
    c->name = "type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 3;
    c->type.key.enum_->keys = xmalloc(3 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("dnat");
    c->type.key.enum_->keys[1].string = xstrdup("dnat_and_snat");
    c->type.key.enum_->keys[2].string = xstrdup("snat");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_nat_parse_type;
    c->unparse = nbrec_nat_unparse_type;
}

/* NB_Global table. */

static void
nbrec_nb_global_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
nbrec_nb_global_parse_hv_cfg(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->hv_cfg = datum->keys[0].integer;
    } else {
        row->hv_cfg = 0;
    }
}

static void
nbrec_nb_global_parse_nb_cfg(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->nb_cfg = datum->keys[0].integer;
    } else {
        row->nb_cfg = 0;
    }
}

static void
nbrec_nb_global_parse_sb_cfg(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->sb_cfg = datum->keys[0].integer;
    } else {
        row->sb_cfg = 0;
    }
}

static void
nbrec_nb_global_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_nb_global *row = nbrec_nb_global_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_nb_global_unparse_hv_cfg(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nb_global_unparse_nb_cfg(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nb_global_unparse_sb_cfg(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_nb_global_init__(struct ovsdb_idl_row *row)
{
    nbrec_nb_global_init(nbrec_nb_global_cast(row));
}

/* Clears the contents of 'row' in table "NB_Global". */
void
nbrec_nb_global_init(struct nbrec_nb_global *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "NB_Global" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_nb_global *
nbrec_nb_global_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_nb_global_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL], uuid));
}

/* Returns a row in table "NB_Global" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_nb_global *
nbrec_nb_global_first(const struct ovsdb_idl *idl)
{
    return nbrec_nb_global_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_nb_global *
nbrec_nb_global_next(const struct nbrec_nb_global *row)
{
    return nbrec_nb_global_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_nb_global_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL]);
}

unsigned int nbrec_nb_global_row_get_seqno(const struct nbrec_nb_global *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_nb_global *
nbrec_nb_global_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_nb_global_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL]));
}

const struct nbrec_nb_global
*nbrec_nb_global_track_get_next(const struct nbrec_nb_global *row)
{
    return nbrec_nb_global_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "NB_Global".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_delete(const struct nbrec_nb_global *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "NB_Global" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_nb_global *
nbrec_nb_global_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_nb_global_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL], NULL));
}

bool
nbrec_nb_global_is_updated(const struct nbrec_nb_global *row, enum nbrec_nb_global_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &nbrec_nb_global_columns[column]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nb_global_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_nb_global_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nb_global_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_verify_external_ids(const struct nbrec_nb_global *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "hv_cfg" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "hv_cfg" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "hv_cfg" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "hv_cfg" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nb_global_insert()).
 *
 *   - If "hv_cfg" has already been modified (with
 *     nbrec_nb_global_set_hv_cfg()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nb_global_set_hv_cfg() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_verify_hv_cfg(const struct nbrec_nb_global *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_HV_CFG]);
}

/* Causes the original contents of column "nb_cfg" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "nb_cfg" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "nb_cfg" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "nb_cfg" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nb_global_insert()).
 *
 *   - If "nb_cfg" has already been modified (with
 *     nbrec_nb_global_set_nb_cfg()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nb_global_set_nb_cfg() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_verify_nb_cfg(const struct nbrec_nb_global *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_NB_CFG]);
}

/* Causes the original contents of column "sb_cfg" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "sb_cfg" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "sb_cfg" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "sb_cfg" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_nb_global_insert()).
 *
 *   - If "sb_cfg" has already been modified (with
 *     nbrec_nb_global_set_sb_cfg()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_nb_global_set_sb_cfg() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_nb_global_verify_sb_cfg(const struct nbrec_nb_global *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_SB_CFG]);
}

/* Returns the "external_ids" column's value from the "NB_Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in nbrec_nb_global. */
const struct ovsdb_datum *
nbrec_nb_global_get_external_ids(const struct nbrec_nb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_nb_global_col_external_ids);
}

/* Returns the "hv_cfg" column's value from the "NB_Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes hv_cfg's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "hv_cfg" member in nbrec_nb_global. */
const struct ovsdb_datum *
nbrec_nb_global_get_hv_cfg(const struct nbrec_nb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_nb_global_col_hv_cfg);
}

/* Returns the "nb_cfg" column's value from the "NB_Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes nb_cfg's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "nb_cfg" member in nbrec_nb_global. */
const struct ovsdb_datum *
nbrec_nb_global_get_nb_cfg(const struct nbrec_nb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_nb_global_col_nb_cfg);
}

/* Returns the "sb_cfg" column's value from the "NB_Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes sb_cfg's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "sb_cfg" member in nbrec_nb_global. */
const struct ovsdb_datum *
nbrec_nb_global_get_sb_cfg(const struct nbrec_nb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_nb_global_col_sb_cfg);
}

/* Sets the "external_ids" column's value from the "NB_Global" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_nb_global_set_external_ids(const struct nbrec_nb_global *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "hv_cfg" column from the "NB_Global" table in 'row' to
 * 'hv_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_set_hv_cfg(const struct nbrec_nb_global *row, int64_t hv_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = hv_cfg;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_HV_CFG], &datum);
}

/* Sets the "nb_cfg" column from the "NB_Global" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_set_nb_cfg(const struct nbrec_nb_global *row, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_NB_CFG], &datum);
}

/* Sets the "sb_cfg" column from the "NB_Global" table in 'row' to
 * 'sb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_set_sb_cfg(const struct nbrec_nb_global *row, int64_t sb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = sb_cfg;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_SB_CFG], &datum);
}

/* Sets an element of the "external_ids" map column from the "NB_Global" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
nbrec_nb_global_update_external_ids_setkey(const struct nbrec_nb_global *row, const char *new_key, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = xmalloc(datum->n * sizeof *datum->values);

    datum->keys[0].string = xstrdup(new_key);
    datum->values[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_map(&row->header_,
                                    &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "NB_Global" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
nbrec_nb_global_update_external_ids_delkey(const struct nbrec_nb_global *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_EXTERNAL_IDS],
                                    datum);
}

/* Sets the "external_ids" column's value from the "NB_Global" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_nb_global_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_add_clause(idl,
                                   &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL],
                                   function,
                                   &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &nbrec_nb_global_col_external_ids.type);
}


/* Sets the "hv_cfg" column from the "NB_Global" table in 'row' to
 * 'hv_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_add_clause_hv_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t hv_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = hv_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL],
                          function,
                          &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_HV_CFG],
                          &datum);
}

/* Sets the "nb_cfg" column from the "NB_Global" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_add_clause_nb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL],
                          function,
                          &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_NB_CFG],
                          &datum);
}

/* Sets the "sb_cfg" column from the "NB_Global" table in 'row' to
 * 'sb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_add_clause_sb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t sb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = sb_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL],
                          function,
                          &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_SB_CFG],
                          &datum);
}
void
nbrec_nb_global_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_nb_global_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "external_ids" column's value from the "NB_Global" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_nb_global_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }

    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL],
                                      function,
                                      &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &nbrec_nb_global_col_external_ids.type);
}


/* Sets the "hv_cfg" column from the "NB_Global" table in 'row' to
 * 'hv_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_remove_clause_hv_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t hv_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = hv_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL],
                          function,
                          &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_HV_CFG],
                          &datum);
}

/* Sets the "nb_cfg" column from the "NB_Global" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_remove_clause_nb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL],
                          function,
                          &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_NB_CFG],
                          &datum);
}

/* Sets the "sb_cfg" column from the "NB_Global" table in 'row' to
 * 'sb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_nb_global_remove_clause_sb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t sb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = sb_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL],
                          function,
                          &nbrec_nb_global_columns[NBREC_NB_GLOBAL_COL_SB_CFG],
                          &datum);
}
void
nbrec_nb_global_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL], OVSDB_F_FALSE, NULL, &datum);
}
void
nbrec_nb_global_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &nbrec_table_classes[NBREC_TABLE_NB_GLOBAL], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column nbrec_nb_global_columns[NBREC_NB_GLOBAL_N_COLUMNS];

static void
nbrec_nb_global_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_nb_global_col_external_ids. */
    c = &nbrec_nb_global_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_nb_global_parse_external_ids;
    c->unparse = nbrec_nb_global_unparse_external_ids;

    /* Initialize nbrec_nb_global_col_hv_cfg. */
    c = &nbrec_nb_global_col_hv_cfg;
    c->name = "hv_cfg";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_nb_global_parse_hv_cfg;
    c->unparse = nbrec_nb_global_unparse_hv_cfg;

    /* Initialize nbrec_nb_global_col_nb_cfg. */
    c = &nbrec_nb_global_col_nb_cfg;
    c->name = "nb_cfg";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_nb_global_parse_nb_cfg;
    c->unparse = nbrec_nb_global_unparse_nb_cfg;

    /* Initialize nbrec_nb_global_col_sb_cfg. */
    c = &nbrec_nb_global_col_sb_cfg;
    c->name = "sb_cfg";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_nb_global_parse_sb_cfg;
    c->unparse = nbrec_nb_global_unparse_sb_cfg;
}

struct ovsdb_idl_table_class nbrec_table_classes[NBREC_N_TABLES] = {
    {"ACL", false,
     nbrec_acl_columns, ARRAY_SIZE(nbrec_acl_columns),
     sizeof(struct nbrec_acl), nbrec_acl_init__},
    {"Address_Set", true,
     nbrec_address_set_columns, ARRAY_SIZE(nbrec_address_set_columns),
     sizeof(struct nbrec_address_set), nbrec_address_set_init__},
    {"DHCP_Options", true,
     nbrec_dhcp_options_columns, ARRAY_SIZE(nbrec_dhcp_options_columns),
     sizeof(struct nbrec_dhcp_options), nbrec_dhcp_options_init__},
    {"Load_Balancer", true,
     nbrec_load_balancer_columns, ARRAY_SIZE(nbrec_load_balancer_columns),
     sizeof(struct nbrec_load_balancer), nbrec_load_balancer_init__},
    {"Logical_Router", true,
     nbrec_logical_router_columns, ARRAY_SIZE(nbrec_logical_router_columns),
     sizeof(struct nbrec_logical_router), nbrec_logical_router_init__},
    {"Logical_Router_Port", false,
     nbrec_logical_router_port_columns, ARRAY_SIZE(nbrec_logical_router_port_columns),
     sizeof(struct nbrec_logical_router_port), nbrec_logical_router_port_init__},
    {"Logical_Router_Static_Route", false,
     nbrec_logical_router_static_route_columns, ARRAY_SIZE(nbrec_logical_router_static_route_columns),
     sizeof(struct nbrec_logical_router_static_route), nbrec_logical_router_static_route_init__},
    {"Logical_Switch", true,
     nbrec_logical_switch_columns, ARRAY_SIZE(nbrec_logical_switch_columns),
     sizeof(struct nbrec_logical_switch), nbrec_logical_switch_init__},
    {"Logical_Switch_Port", false,
     nbrec_logical_switch_port_columns, ARRAY_SIZE(nbrec_logical_switch_port_columns),
     sizeof(struct nbrec_logical_switch_port), nbrec_logical_switch_port_init__},
    {"NAT", false,
     nbrec_nat_columns, ARRAY_SIZE(nbrec_nat_columns),
     sizeof(struct nbrec_nat), nbrec_nat_init__},
    {"NB_Global", true,
     nbrec_nb_global_columns, ARRAY_SIZE(nbrec_nb_global_columns),
     sizeof(struct nbrec_nb_global), nbrec_nb_global_init__},
};

struct ovsdb_idl_class nbrec_idl_class = {
    "OVN_Northbound", nbrec_table_classes, ARRAY_SIZE(nbrec_table_classes)
};

void
nbrec_init(void)
{
    if (inited) {
        return;
    }
    assert_single_threaded();
    inited = true;

    nbrec_acl_columns_init();
    nbrec_address_set_columns_init();
    nbrec_dhcp_options_columns_init();
    nbrec_load_balancer_columns_init();
    nbrec_logical_router_columns_init();
    nbrec_logical_router_port_columns_init();
    nbrec_logical_router_static_route_columns_init();
    nbrec_logical_switch_columns_init();
    nbrec_logical_switch_port_columns_init();
    nbrec_nat_columns_init();
    nbrec_nb_global_columns_init();
}

/* Return the schema version.  The caller must not free the returned value. */
const char *
nbrec_get_db_version(void)
{
    return "5.3.3";
}

