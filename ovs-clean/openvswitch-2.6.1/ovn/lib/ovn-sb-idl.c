/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#include <config.h>
#include "ovn/lib/ovn-sb-idl.h"
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


static struct sbrec_address_set *
sbrec_address_set_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_address_set, header_) : NULL;
}

static struct sbrec_chassis *
sbrec_chassis_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_chassis, header_) : NULL;
}

static struct sbrec_dhcp_options *
sbrec_dhcp_options_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_dhcp_options, header_) : NULL;
}

static struct sbrec_dhcpv6_options *
sbrec_dhcpv6_options_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_dhcpv6_options, header_) : NULL;
}

static struct sbrec_datapath_binding *
sbrec_datapath_binding_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_datapath_binding, header_) : NULL;
}

static struct sbrec_encap *
sbrec_encap_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_encap, header_) : NULL;
}

static struct sbrec_logical_flow *
sbrec_logical_flow_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_logical_flow, header_) : NULL;
}

static struct sbrec_mac_binding *
sbrec_mac_binding_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_mac_binding, header_) : NULL;
}

static struct sbrec_multicast_group *
sbrec_multicast_group_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_multicast_group, header_) : NULL;
}

static struct sbrec_port_binding *
sbrec_port_binding_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_port_binding, header_) : NULL;
}

static struct sbrec_sb_global *
sbrec_sb_global_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_sb_global, header_) : NULL;
}

/* Address_Set table. */

static void
sbrec_address_set_parse_addresses(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_address_set *row = sbrec_address_set_cast(row_);
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
sbrec_address_set_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_address_set *row = sbrec_address_set_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
sbrec_address_set_unparse_addresses(struct ovsdb_idl_row *row_)
{
    struct sbrec_address_set *row = sbrec_address_set_cast(row_);

    ovs_assert(inited);
    free(row->addresses);
}

static void
sbrec_address_set_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_address_set_init__(struct ovsdb_idl_row *row)
{
    sbrec_address_set_init(sbrec_address_set_cast(row));
}

/* Clears the contents of 'row' in table "Address_Set". */
void
sbrec_address_set_init(struct sbrec_address_set *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Address_Set" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_address_set *
sbrec_address_set_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_address_set_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET], uuid));
}

/* Returns a row in table "Address_Set" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_address_set *
sbrec_address_set_first(const struct ovsdb_idl *idl)
{
    return sbrec_address_set_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_address_set *
sbrec_address_set_next(const struct sbrec_address_set *row)
{
    return sbrec_address_set_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_address_set_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET]);
}

unsigned int sbrec_address_set_row_get_seqno(const struct sbrec_address_set *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_address_set *
sbrec_address_set_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_address_set_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET]));
}

const struct sbrec_address_set
*sbrec_address_set_track_get_next(const struct sbrec_address_set *row)
{
    return sbrec_address_set_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Address_Set".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_address_set_delete(const struct sbrec_address_set *row)
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
struct sbrec_address_set *
sbrec_address_set_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_address_set_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET], NULL));
}

bool
sbrec_address_set_is_updated(const struct sbrec_address_set *row, enum sbrec_address_set_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &sbrec_address_set_columns[column]);
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
 *     sbrec_address_set_insert()).
 *
 *   - If "addresses" has already been modified (with
 *     sbrec_address_set_set_addresses()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_address_set_set_addresses() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_address_set_verify_addresses(const struct sbrec_address_set *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_ADDRESSES]);
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
 *     sbrec_address_set_insert()).
 *
 *   - If "name" has already been modified (with
 *     sbrec_address_set_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_address_set_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_address_set_verify_name(const struct sbrec_address_set *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_NAME]);
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
 * directly through the "addresses" member in sbrec_address_set. */
const struct ovsdb_datum *
sbrec_address_set_get_addresses(const struct sbrec_address_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_address_set_col_addresses);
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
 * directly through the "name" member in sbrec_address_set. */
const struct ovsdb_datum *
sbrec_address_set_get_name(const struct sbrec_address_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_address_set_col_name);
}

/* Sets the "addresses" column from the "Address_Set" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_address_set_set_addresses(const struct sbrec_address_set *row, const char **addresses, size_t n_addresses)
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
    ovsdb_idl_txn_write(&row->header_, &sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_ADDRESSES], &datum);
}

/* Sets the "name" column from the "Address_Set" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_address_set_set_name(const struct sbrec_address_set *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_NAME], &datum);
}

/* Adds the value 'new_value' to the "addresses" set column from the "Address_Set" table
 * in 'row'.
 *
 */
void
sbrec_address_set_update_addresses_addvalue(const struct sbrec_address_set *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_ADDRESSES],
                                    datum);
}

/* Deletes the value 'delete_value' from the "addresses" set column from the
 * "Address_Set" table in 'row'.
 *
 */
void
sbrec_address_set_update_addresses_delvalue(const struct sbrec_address_set *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_ADDRESSES],
                                    datum);
}

/* Sets the "addresses" column from the "Address_Set" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_address_set_add_clause_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char **addresses, size_t n_addresses)
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
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET],
                          function,
                          &sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_ADDRESSES],
                          &datum);
    free(datum.keys);
}

/* Sets the "name" column from the "Address_Set" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_address_set_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET],
                          function,
                          &sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_NAME],
                          &datum);
}
void
sbrec_address_set_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_address_set_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "addresses" column from the "Address_Set" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_address_set_remove_clause_addresses(struct ovsdb_idl *idl, enum ovsdb_function function, const char **addresses, size_t n_addresses)
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
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET],
                          function,
                          &sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_ADDRESSES],
                          &datum);
    free(datum.keys);
}

/* Sets the "name" column from the "Address_Set" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_address_set_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET],
                          function,
                          &sbrec_address_set_columns[SBREC_ADDRESS_SET_COL_NAME],
                          &datum);
}
void
sbrec_address_set_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_address_set_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_ADDRESS_SET], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column sbrec_address_set_columns[SBREC_ADDRESS_SET_N_COLUMNS];

static void
sbrec_address_set_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_address_set_col_addresses. */
    c = &sbrec_address_set_col_addresses;
    c->name = "addresses";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_address_set_parse_addresses;
    c->unparse = sbrec_address_set_unparse_addresses;

    /* Initialize sbrec_address_set_col_name. */
    c = &sbrec_address_set_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_address_set_parse_name;
    c->unparse = sbrec_address_set_unparse_name;
}

/* Chassis table. */

static void
sbrec_chassis_parse_encaps(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->encaps = NULL;
    row->n_encaps = 0;
    for (i = 0; i < datum->n; i++) {
        struct sbrec_encap *keyRow = sbrec_encap_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_ENCAP], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_encaps) {
                row->encaps = xmalloc(datum->n * sizeof *row->encaps);
            }
            row->encaps[row->n_encaps] = keyRow;
            row->n_encaps++;
        }
    }
}

static void
sbrec_chassis_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);
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
sbrec_chassis_parse_hostname(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->hostname = datum->keys[0].string;
    } else {
        row->hostname = "";
    }
}

static void
sbrec_chassis_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
sbrec_chassis_parse_nb_cfg(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->nb_cfg = datum->keys[0].integer;
    } else {
        row->nb_cfg = 0;
    }
}

static void
sbrec_chassis_parse_vtep_logical_switches(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->vtep_logical_switches = NULL;
    row->n_vtep_logical_switches = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_vtep_logical_switches) {
            row->vtep_logical_switches = xmalloc(datum->n * sizeof *row->vtep_logical_switches);
        }
        row->vtep_logical_switches[row->n_vtep_logical_switches] = datum->keys[i].string;
        row->n_vtep_logical_switches++;
    }
}

static void
sbrec_chassis_unparse_encaps(struct ovsdb_idl_row *row_)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);

    ovs_assert(inited);
    free(row->encaps);
}

static void
sbrec_chassis_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
sbrec_chassis_unparse_hostname(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_chassis_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_chassis_unparse_nb_cfg(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_chassis_unparse_vtep_logical_switches(struct ovsdb_idl_row *row_)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);

    ovs_assert(inited);
    free(row->vtep_logical_switches);
}

static void
sbrec_chassis_init__(struct ovsdb_idl_row *row)
{
    sbrec_chassis_init(sbrec_chassis_cast(row));
}

/* Clears the contents of 'row' in table "Chassis". */
void
sbrec_chassis_init(struct sbrec_chassis *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Chassis" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_chassis *
sbrec_chassis_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_chassis_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS], uuid));
}

/* Returns a row in table "Chassis" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_chassis *
sbrec_chassis_first(const struct ovsdb_idl *idl)
{
    return sbrec_chassis_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_chassis *
sbrec_chassis_next(const struct sbrec_chassis *row)
{
    return sbrec_chassis_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_chassis_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS]);
}

unsigned int sbrec_chassis_row_get_seqno(const struct sbrec_chassis *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_chassis *
sbrec_chassis_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_chassis_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS]));
}

const struct sbrec_chassis
*sbrec_chassis_track_get_next(const struct sbrec_chassis *row)
{
    return sbrec_chassis_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Chassis".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_chassis_delete(const struct sbrec_chassis *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Chassis" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_chassis *
sbrec_chassis_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_chassis_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_CHASSIS], NULL));
}

bool
sbrec_chassis_is_updated(const struct sbrec_chassis *row, enum sbrec_chassis_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &sbrec_chassis_columns[column]);
}

/* Causes the original contents of column "encaps" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "encaps" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "encaps" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "encaps" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_chassis_insert()).
 *
 *   - If "encaps" has already been modified (with
 *     sbrec_chassis_set_encaps()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_chassis_set_encaps() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_chassis_verify_encaps(const struct sbrec_chassis *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_ENCAPS]);
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
 *     sbrec_chassis_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     sbrec_chassis_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_chassis_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_chassis_verify_external_ids(const struct sbrec_chassis *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "hostname" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "hostname" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "hostname" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "hostname" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_chassis_insert()).
 *
 *   - If "hostname" has already been modified (with
 *     sbrec_chassis_set_hostname()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_chassis_set_hostname() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_chassis_verify_hostname(const struct sbrec_chassis *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_HOSTNAME]);
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
 *     sbrec_chassis_insert()).
 *
 *   - If "name" has already been modified (with
 *     sbrec_chassis_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_chassis_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_chassis_verify_name(const struct sbrec_chassis *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_NAME]);
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
 *     sbrec_chassis_insert()).
 *
 *   - If "nb_cfg" has already been modified (with
 *     sbrec_chassis_set_nb_cfg()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_chassis_set_nb_cfg() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_chassis_verify_nb_cfg(const struct sbrec_chassis *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_NB_CFG]);
}

/* Causes the original contents of column "vtep_logical_switches" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "vtep_logical_switches" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "vtep_logical_switches" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "vtep_logical_switches" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_chassis_insert()).
 *
 *   - If "vtep_logical_switches" has already been modified (with
 *     sbrec_chassis_set_vtep_logical_switches()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_chassis_set_vtep_logical_switches() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_chassis_verify_vtep_logical_switches(const struct sbrec_chassis *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES]);
}

/* Returns the "encaps" column's value from the "Chassis" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes encaps's
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
 * directly through the "encaps" member in sbrec_chassis. */
const struct ovsdb_datum *
sbrec_chassis_get_encaps(const struct sbrec_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_chassis_col_encaps);
}

/* Returns the "external_ids" column's value from the "Chassis" table in 'row'
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
 * directly through the "external_ids" member in sbrec_chassis. */
const struct ovsdb_datum *
sbrec_chassis_get_external_ids(const struct sbrec_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_chassis_col_external_ids);
}

/* Returns the "hostname" column's value from the "Chassis" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes hostname's
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
 * directly through the "hostname" member in sbrec_chassis. */
const struct ovsdb_datum *
sbrec_chassis_get_hostname(const struct sbrec_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_chassis_col_hostname);
}

/* Returns the "name" column's value from the "Chassis" table in 'row'
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
 * directly through the "name" member in sbrec_chassis. */
const struct ovsdb_datum *
sbrec_chassis_get_name(const struct sbrec_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_chassis_col_name);
}

/* Returns the "nb_cfg" column's value from the "Chassis" table in 'row'
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
 * directly through the "nb_cfg" member in sbrec_chassis. */
const struct ovsdb_datum *
sbrec_chassis_get_nb_cfg(const struct sbrec_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_chassis_col_nb_cfg);
}

/* Returns the "vtep_logical_switches" column's value from the "Chassis" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes vtep_logical_switches's
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
 * directly through the "vtep_logical_switches" member in sbrec_chassis. */
const struct ovsdb_datum *
sbrec_chassis_get_vtep_logical_switches(const struct sbrec_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_chassis_col_vtep_logical_switches);
}

/* Sets the "encaps" column from the "Chassis" table in 'row' to
 * the 'encaps' set with 'n_encaps' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_set_encaps(const struct sbrec_chassis *row, struct sbrec_encap **encaps, size_t n_encaps)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_encaps;
    datum.keys = n_encaps ? xmalloc(n_encaps * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_encaps; i++) {
        datum.keys[i].uuid = encaps[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_ENCAPS], &datum);
}

/* Sets the "external_ids" column's value from the "Chassis" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_chassis_set_external_ids(const struct sbrec_chassis *row, const struct smap *external_ids)
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
                        &sbrec_chassis_columns[SBREC_CHASSIS_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "hostname" column from the "Chassis" table in 'row' to
 * 'hostname'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_set_hostname(const struct sbrec_chassis *row, const char *hostname)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, hostname);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_HOSTNAME], &datum);
}

/* Sets the "name" column from the "Chassis" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_set_name(const struct sbrec_chassis *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_NAME], &datum);
}

/* Sets the "nb_cfg" column from the "Chassis" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_set_nb_cfg(const struct sbrec_chassis *row, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_NB_CFG], &datum);
}

/* Sets the "vtep_logical_switches" column from the "Chassis" table in 'row' to
 * the 'vtep_logical_switches' set with 'n_vtep_logical_switches' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_set_vtep_logical_switches(const struct sbrec_chassis *row, const char **vtep_logical_switches, size_t n_vtep_logical_switches)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_vtep_logical_switches;
    datum.keys = n_vtep_logical_switches ? xmalloc(n_vtep_logical_switches * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_vtep_logical_switches; i++) {
        datum.keys[i].string = xstrdup(vtep_logical_switches[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES], &datum);
}

/* Adds the value 'new_value' to the "encaps" set column from the "Chassis" table
 * in 'row'.
 *
 */
void
sbrec_chassis_update_encaps_addvalue(const struct sbrec_chassis *row, const struct sbrec_encap *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &sbrec_chassis_columns[SBREC_CHASSIS_COL_ENCAPS],
                                    datum);
}

/* Deletes the value 'delete_value' from the "encaps" set column from the
 * "Chassis" table in 'row'.
 *
 */
void
sbrec_chassis_update_encaps_delvalue(const struct sbrec_chassis *row, const struct sbrec_encap *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &sbrec_chassis_columns[SBREC_CHASSIS_COL_ENCAPS],
                                    datum);
}

/* Sets an element of the "external_ids" map column from the "Chassis" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
sbrec_chassis_update_external_ids_setkey(const struct sbrec_chassis *row, const char *new_key, const char *new_value)
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
                                    &sbrec_chassis_columns[SBREC_CHASSIS_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Chassis" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
sbrec_chassis_update_external_ids_delkey(const struct sbrec_chassis *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &sbrec_chassis_columns[SBREC_CHASSIS_COL_EXTERNAL_IDS],
                                    datum);
}

/* Adds the value 'new_value' to the "vtep_logical_switches" set column from the "Chassis" table
 * in 'row'.
 *
 */
void
sbrec_chassis_update_vtep_logical_switches_addvalue(const struct sbrec_chassis *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &sbrec_chassis_columns[SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES],
                                    datum);
}

/* Deletes the value 'delete_value' from the "vtep_logical_switches" set column from the
 * "Chassis" table in 'row'.
 *
 */
void
sbrec_chassis_update_vtep_logical_switches_delvalue(const struct sbrec_chassis *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &sbrec_chassis_columns[SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES],
                                    datum);
}

/* Sets the "encaps" column from the "Chassis" table in 'row' to
 * the 'encaps' set with 'n_encaps' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_add_clause_encaps(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **encaps, size_t n_encaps)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_encaps;
    datum.keys = n_encaps ? xmalloc(n_encaps * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_encaps; i++) {
        datum.keys[i].uuid = *encaps[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                          function,
                          &sbrec_chassis_columns[SBREC_CHASSIS_COL_ENCAPS],
                          &datum);
    free(datum.keys);
}

/* Sets the "external_ids" column's value from the "Chassis" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_chassis_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
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
                                   &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                                   function,
                                   &sbrec_chassis_columns[SBREC_CHASSIS_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &sbrec_chassis_col_external_ids.type);
}


/* Sets the "hostname" column from the "Chassis" table in 'row' to
 * 'hostname'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_add_clause_hostname(struct ovsdb_idl *idl, enum ovsdb_function function, const char *hostname)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, hostname);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                          function,
                          &sbrec_chassis_columns[SBREC_CHASSIS_COL_HOSTNAME],
                          &datum);
}

/* Sets the "name" column from the "Chassis" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                          function,
                          &sbrec_chassis_columns[SBREC_CHASSIS_COL_NAME],
                          &datum);
}

/* Sets the "nb_cfg" column from the "Chassis" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_add_clause_nb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                          function,
                          &sbrec_chassis_columns[SBREC_CHASSIS_COL_NB_CFG],
                          &datum);
}

/* Sets the "vtep_logical_switches" column from the "Chassis" table in 'row' to
 * the 'vtep_logical_switches' set with 'n_vtep_logical_switches' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_add_clause_vtep_logical_switches(struct ovsdb_idl *idl, enum ovsdb_function function, const char **vtep_logical_switches, size_t n_vtep_logical_switches)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_vtep_logical_switches;
    datum.keys = n_vtep_logical_switches ? xmalloc(n_vtep_logical_switches * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_vtep_logical_switches; i++) {
        datum.keys[i].string = CONST_CAST(char *, vtep_logical_switches[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                          function,
                          &sbrec_chassis_columns[SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES],
                          &datum);
    free(datum.keys);
}
void
sbrec_chassis_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_chassis_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "encaps" column from the "Chassis" table in 'row' to
 * the 'encaps' set with 'n_encaps' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_remove_clause_encaps(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **encaps, size_t n_encaps)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_encaps;
    datum.keys = n_encaps ? xmalloc(n_encaps * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_encaps; i++) {
        datum.keys[i].uuid = *encaps[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                          function,
                          &sbrec_chassis_columns[SBREC_CHASSIS_COL_ENCAPS],
                          &datum);
    free(datum.keys);
}

/* Sets the "external_ids" column's value from the "Chassis" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_chassis_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
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

    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                                      function,
                                      &sbrec_chassis_columns[SBREC_CHASSIS_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &sbrec_chassis_col_external_ids.type);
}


/* Sets the "hostname" column from the "Chassis" table in 'row' to
 * 'hostname'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_remove_clause_hostname(struct ovsdb_idl *idl, enum ovsdb_function function, const char *hostname)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, hostname);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                          function,
                          &sbrec_chassis_columns[SBREC_CHASSIS_COL_HOSTNAME],
                          &datum);
}

/* Sets the "name" column from the "Chassis" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                          function,
                          &sbrec_chassis_columns[SBREC_CHASSIS_COL_NAME],
                          &datum);
}

/* Sets the "nb_cfg" column from the "Chassis" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_remove_clause_nb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                          function,
                          &sbrec_chassis_columns[SBREC_CHASSIS_COL_NB_CFG],
                          &datum);
}

/* Sets the "vtep_logical_switches" column from the "Chassis" table in 'row' to
 * the 'vtep_logical_switches' set with 'n_vtep_logical_switches' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_remove_clause_vtep_logical_switches(struct ovsdb_idl *idl, enum ovsdb_function function, const char **vtep_logical_switches, size_t n_vtep_logical_switches)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_vtep_logical_switches;
    datum.keys = n_vtep_logical_switches ? xmalloc(n_vtep_logical_switches * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_vtep_logical_switches; i++) {
        datum.keys[i].string = CONST_CAST(char *, vtep_logical_switches[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS],
                          function,
                          &sbrec_chassis_columns[SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES],
                          &datum);
    free(datum.keys);
}
void
sbrec_chassis_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_chassis_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column sbrec_chassis_columns[SBREC_CHASSIS_N_COLUMNS];

static void
sbrec_chassis_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_chassis_col_encaps. */
    c = &sbrec_chassis_col_encaps;
    c->name = "encaps";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Encap";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_chassis_parse_encaps;
    c->unparse = sbrec_chassis_unparse_encaps;

    /* Initialize sbrec_chassis_col_external_ids. */
    c = &sbrec_chassis_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_chassis_parse_external_ids;
    c->unparse = sbrec_chassis_unparse_external_ids;

    /* Initialize sbrec_chassis_col_hostname. */
    c = &sbrec_chassis_col_hostname;
    c->name = "hostname";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_chassis_parse_hostname;
    c->unparse = sbrec_chassis_unparse_hostname;

    /* Initialize sbrec_chassis_col_name. */
    c = &sbrec_chassis_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_chassis_parse_name;
    c->unparse = sbrec_chassis_unparse_name;

    /* Initialize sbrec_chassis_col_nb_cfg. */
    c = &sbrec_chassis_col_nb_cfg;
    c->name = "nb_cfg";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_chassis_parse_nb_cfg;
    c->unparse = sbrec_chassis_unparse_nb_cfg;

    /* Initialize sbrec_chassis_col_vtep_logical_switches. */
    c = &sbrec_chassis_col_vtep_logical_switches;
    c->name = "vtep_logical_switches";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_chassis_parse_vtep_logical_switches;
    c->unparse = sbrec_chassis_unparse_vtep_logical_switches;
}

/* DHCP_Options table. */

static void
sbrec_dhcp_options_parse_code(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_dhcp_options *row = sbrec_dhcp_options_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->code = datum->keys[0].integer;
    } else {
        row->code = 0;
    }
}

static void
sbrec_dhcp_options_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_dhcp_options *row = sbrec_dhcp_options_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
sbrec_dhcp_options_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_dhcp_options *row = sbrec_dhcp_options_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
sbrec_dhcp_options_unparse_code(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_dhcp_options_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_dhcp_options_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_dhcp_options_init__(struct ovsdb_idl_row *row)
{
    sbrec_dhcp_options_init(sbrec_dhcp_options_cast(row));
}

/* Clears the contents of 'row' in table "DHCP_Options". */
void
sbrec_dhcp_options_init(struct sbrec_dhcp_options *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "DHCP_Options" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_dhcp_options *
sbrec_dhcp_options_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_dhcp_options_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS], uuid));
}

/* Returns a row in table "DHCP_Options" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_dhcp_options *
sbrec_dhcp_options_first(const struct ovsdb_idl *idl)
{
    return sbrec_dhcp_options_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_dhcp_options *
sbrec_dhcp_options_next(const struct sbrec_dhcp_options *row)
{
    return sbrec_dhcp_options_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_dhcp_options_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS]);
}

unsigned int sbrec_dhcp_options_row_get_seqno(const struct sbrec_dhcp_options *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_dhcp_options *
sbrec_dhcp_options_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_dhcp_options_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS]));
}

const struct sbrec_dhcp_options
*sbrec_dhcp_options_track_get_next(const struct sbrec_dhcp_options *row)
{
    return sbrec_dhcp_options_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "DHCP_Options".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_dhcp_options_delete(const struct sbrec_dhcp_options *row)
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
struct sbrec_dhcp_options *
sbrec_dhcp_options_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_dhcp_options_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS], NULL));
}

bool
sbrec_dhcp_options_is_updated(const struct sbrec_dhcp_options *row, enum sbrec_dhcp_options_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &sbrec_dhcp_options_columns[column]);
}

/* Causes the original contents of column "code" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "code" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "code" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "code" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_dhcp_options_insert()).
 *
 *   - If "code" has already been modified (with
 *     sbrec_dhcp_options_set_code()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_dhcp_options_set_code() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_dhcp_options_verify_code(const struct sbrec_dhcp_options *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_CODE]);
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
 *     sbrec_dhcp_options_insert()).
 *
 *   - If "name" has already been modified (with
 *     sbrec_dhcp_options_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_dhcp_options_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_dhcp_options_verify_name(const struct sbrec_dhcp_options *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_NAME]);
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
 *     sbrec_dhcp_options_insert()).
 *
 *   - If "type" has already been modified (with
 *     sbrec_dhcp_options_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_dhcp_options_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_dhcp_options_verify_type(const struct sbrec_dhcp_options *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_TYPE]);
}

/* Returns the "code" column's value from the "DHCP_Options" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes code's
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
 * directly through the "code" member in sbrec_dhcp_options. */
const struct ovsdb_datum *
sbrec_dhcp_options_get_code(const struct sbrec_dhcp_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_dhcp_options_col_code);
}

/* Returns the "name" column's value from the "DHCP_Options" table in 'row'
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
 * directly through the "name" member in sbrec_dhcp_options. */
const struct ovsdb_datum *
sbrec_dhcp_options_get_name(const struct sbrec_dhcp_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_dhcp_options_col_name);
}

/* Returns the "type" column's value from the "DHCP_Options" table in 'row'
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
 * directly through the "type" member in sbrec_dhcp_options. */
const struct ovsdb_datum *
sbrec_dhcp_options_get_type(const struct sbrec_dhcp_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_dhcp_options_col_type);
}

/* Sets the "code" column from the "DHCP_Options" table in 'row' to
 * 'code'.
 *
 * Argument constraints: in range 0 to 254
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcp_options_set_code(const struct sbrec_dhcp_options *row, int64_t code)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = code;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_CODE], &datum);
}

/* Sets the "name" column from the "DHCP_Options" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcp_options_set_name(const struct sbrec_dhcp_options *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_NAME], &datum);
}

/* Sets the "type" column from the "DHCP_Options" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "static_routes", "uint8", "uint16", "bool", "ipv4", "str", or "uint32"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcp_options_set_type(const struct sbrec_dhcp_options *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_TYPE], &datum);
}

/* Sets the "code" column from the "DHCP_Options" table in 'row' to
 * 'code'.
 *
 * Argument constraints: in range 0 to 254
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcp_options_add_clause_code(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t code)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = code;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS],
                          function,
                          &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_CODE],
                          &datum);
}

/* Sets the "name" column from the "DHCP_Options" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcp_options_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS],
                          function,
                          &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_NAME],
                          &datum);
}

/* Sets the "type" column from the "DHCP_Options" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "static_routes", "uint8", "uint16", "bool", "ipv4", "str", or "uint32"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcp_options_add_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS],
                          function,
                          &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_TYPE],
                          &datum);
}
void
sbrec_dhcp_options_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_dhcp_options_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "code" column from the "DHCP_Options" table in 'row' to
 * 'code'.
 *
 * Argument constraints: in range 0 to 254
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcp_options_remove_clause_code(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t code)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = code;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS],
                          function,
                          &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_CODE],
                          &datum);
}

/* Sets the "name" column from the "DHCP_Options" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcp_options_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS],
                          function,
                          &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_NAME],
                          &datum);
}

/* Sets the "type" column from the "DHCP_Options" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "static_routes", "uint8", "uint16", "bool", "ipv4", "str", or "uint32"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcp_options_remove_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS],
                          function,
                          &sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_COL_TYPE],
                          &datum);
}
void
sbrec_dhcp_options_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_dhcp_options_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCP_OPTIONS], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column sbrec_dhcp_options_columns[SBREC_DHCP_OPTIONS_N_COLUMNS];

static void
sbrec_dhcp_options_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_dhcp_options_col_code. */
    c = &sbrec_dhcp_options_col_code;
    c->name = "code";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(254);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_dhcp_options_parse_code;
    c->unparse = sbrec_dhcp_options_unparse_code;

    /* Initialize sbrec_dhcp_options_col_name. */
    c = &sbrec_dhcp_options_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_dhcp_options_parse_name;
    c->unparse = sbrec_dhcp_options_unparse_name;

    /* Initialize sbrec_dhcp_options_col_type. */
    c = &sbrec_dhcp_options_col_type;
    c->name = "type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 7;
    c->type.key.enum_->keys = xmalloc(7 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("bool");
    c->type.key.enum_->keys[1].string = xstrdup("ipv4");
    c->type.key.enum_->keys[2].string = xstrdup("static_routes");
    c->type.key.enum_->keys[3].string = xstrdup("str");
    c->type.key.enum_->keys[4].string = xstrdup("uint16");
    c->type.key.enum_->keys[5].string = xstrdup("uint32");
    c->type.key.enum_->keys[6].string = xstrdup("uint8");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_dhcp_options_parse_type;
    c->unparse = sbrec_dhcp_options_unparse_type;
}

/* DHCPv6_Options table. */

static void
sbrec_dhcpv6_options_parse_code(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_dhcpv6_options *row = sbrec_dhcpv6_options_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->code = datum->keys[0].integer;
    } else {
        row->code = 0;
    }
}

static void
sbrec_dhcpv6_options_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_dhcpv6_options *row = sbrec_dhcpv6_options_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
sbrec_dhcpv6_options_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_dhcpv6_options *row = sbrec_dhcpv6_options_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
sbrec_dhcpv6_options_unparse_code(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_dhcpv6_options_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_dhcpv6_options_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_dhcpv6_options_init__(struct ovsdb_idl_row *row)
{
    sbrec_dhcpv6_options_init(sbrec_dhcpv6_options_cast(row));
}

/* Clears the contents of 'row' in table "DHCPv6_Options". */
void
sbrec_dhcpv6_options_init(struct sbrec_dhcpv6_options *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "DHCPv6_Options" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_dhcpv6_options *
sbrec_dhcpv6_options_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_dhcpv6_options_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS], uuid));
}

/* Returns a row in table "DHCPv6_Options" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_dhcpv6_options *
sbrec_dhcpv6_options_first(const struct ovsdb_idl *idl)
{
    return sbrec_dhcpv6_options_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_dhcpv6_options *
sbrec_dhcpv6_options_next(const struct sbrec_dhcpv6_options *row)
{
    return sbrec_dhcpv6_options_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_dhcpv6_options_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS]);
}

unsigned int sbrec_dhcpv6_options_row_get_seqno(const struct sbrec_dhcpv6_options *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_dhcpv6_options *
sbrec_dhcpv6_options_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_dhcpv6_options_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS]));
}

const struct sbrec_dhcpv6_options
*sbrec_dhcpv6_options_track_get_next(const struct sbrec_dhcpv6_options *row)
{
    return sbrec_dhcpv6_options_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "DHCPv6_Options".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_dhcpv6_options_delete(const struct sbrec_dhcpv6_options *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "DHCPv6_Options" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_dhcpv6_options *
sbrec_dhcpv6_options_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_dhcpv6_options_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS], NULL));
}

bool
sbrec_dhcpv6_options_is_updated(const struct sbrec_dhcpv6_options *row, enum sbrec_dhcpv6_options_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &sbrec_dhcpv6_options_columns[column]);
}

/* Causes the original contents of column "code" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "code" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "code" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "code" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_dhcpv6_options_insert()).
 *
 *   - If "code" has already been modified (with
 *     sbrec_dhcpv6_options_set_code()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_dhcpv6_options_set_code() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_dhcpv6_options_verify_code(const struct sbrec_dhcpv6_options *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_CODE]);
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
 *     sbrec_dhcpv6_options_insert()).
 *
 *   - If "name" has already been modified (with
 *     sbrec_dhcpv6_options_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_dhcpv6_options_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_dhcpv6_options_verify_name(const struct sbrec_dhcpv6_options *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_NAME]);
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
 *     sbrec_dhcpv6_options_insert()).
 *
 *   - If "type" has already been modified (with
 *     sbrec_dhcpv6_options_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_dhcpv6_options_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_dhcpv6_options_verify_type(const struct sbrec_dhcpv6_options *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_TYPE]);
}

/* Returns the "code" column's value from the "DHCPv6_Options" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes code's
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
 * directly through the "code" member in sbrec_dhcpv6_options. */
const struct ovsdb_datum *
sbrec_dhcpv6_options_get_code(const struct sbrec_dhcpv6_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_dhcpv6_options_col_code);
}

/* Returns the "name" column's value from the "DHCPv6_Options" table in 'row'
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
 * directly through the "name" member in sbrec_dhcpv6_options. */
const struct ovsdb_datum *
sbrec_dhcpv6_options_get_name(const struct sbrec_dhcpv6_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_dhcpv6_options_col_name);
}

/* Returns the "type" column's value from the "DHCPv6_Options" table in 'row'
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
 * directly through the "type" member in sbrec_dhcpv6_options. */
const struct ovsdb_datum *
sbrec_dhcpv6_options_get_type(const struct sbrec_dhcpv6_options *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_dhcpv6_options_col_type);
}

/* Sets the "code" column from the "DHCPv6_Options" table in 'row' to
 * 'code'.
 *
 * Argument constraints: in range 0 to 254
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcpv6_options_set_code(const struct sbrec_dhcpv6_options *row, int64_t code)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = code;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_CODE], &datum);
}

/* Sets the "name" column from the "DHCPv6_Options" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcpv6_options_set_name(const struct sbrec_dhcpv6_options *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_NAME], &datum);
}

/* Sets the "type" column from the "DHCPv6_Options" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "mac", "str", or "ipv6"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcpv6_options_set_type(const struct sbrec_dhcpv6_options *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_TYPE], &datum);
}

/* Sets the "code" column from the "DHCPv6_Options" table in 'row' to
 * 'code'.
 *
 * Argument constraints: in range 0 to 254
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcpv6_options_add_clause_code(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t code)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = code;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS],
                          function,
                          &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_CODE],
                          &datum);
}

/* Sets the "name" column from the "DHCPv6_Options" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcpv6_options_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS],
                          function,
                          &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_NAME],
                          &datum);
}

/* Sets the "type" column from the "DHCPv6_Options" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "mac", "str", or "ipv6"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcpv6_options_add_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS],
                          function,
                          &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_TYPE],
                          &datum);
}
void
sbrec_dhcpv6_options_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_dhcpv6_options_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "code" column from the "DHCPv6_Options" table in 'row' to
 * 'code'.
 *
 * Argument constraints: in range 0 to 254
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcpv6_options_remove_clause_code(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t code)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = code;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS],
                          function,
                          &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_CODE],
                          &datum);
}

/* Sets the "name" column from the "DHCPv6_Options" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcpv6_options_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS],
                          function,
                          &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_NAME],
                          &datum);
}

/* Sets the "type" column from the "DHCPv6_Options" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "mac", "str", or "ipv6"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_dhcpv6_options_remove_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS],
                          function,
                          &sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_COL_TYPE],
                          &datum);
}
void
sbrec_dhcpv6_options_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_dhcpv6_options_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DHCPV6_OPTIONS], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column sbrec_dhcpv6_options_columns[SBREC_DHCPV6_OPTIONS_N_COLUMNS];

static void
sbrec_dhcpv6_options_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_dhcpv6_options_col_code. */
    c = &sbrec_dhcpv6_options_col_code;
    c->name = "code";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(254);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_dhcpv6_options_parse_code;
    c->unparse = sbrec_dhcpv6_options_unparse_code;

    /* Initialize sbrec_dhcpv6_options_col_name. */
    c = &sbrec_dhcpv6_options_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_dhcpv6_options_parse_name;
    c->unparse = sbrec_dhcpv6_options_unparse_name;

    /* Initialize sbrec_dhcpv6_options_col_type. */
    c = &sbrec_dhcpv6_options_col_type;
    c->name = "type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 3;
    c->type.key.enum_->keys = xmalloc(3 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("ipv6");
    c->type.key.enum_->keys[1].string = xstrdup("mac");
    c->type.key.enum_->keys[2].string = xstrdup("str");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_dhcpv6_options_parse_type;
    c->unparse = sbrec_dhcpv6_options_unparse_type;
}

/* Datapath_Binding table. */

static void
sbrec_datapath_binding_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_datapath_binding *row = sbrec_datapath_binding_cast(row_);
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
sbrec_datapath_binding_parse_tunnel_key(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_datapath_binding *row = sbrec_datapath_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->tunnel_key = datum->keys[0].integer;
    } else {
        row->tunnel_key = 0;
    }
}

static void
sbrec_datapath_binding_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct sbrec_datapath_binding *row = sbrec_datapath_binding_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
sbrec_datapath_binding_unparse_tunnel_key(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_datapath_binding_init__(struct ovsdb_idl_row *row)
{
    sbrec_datapath_binding_init(sbrec_datapath_binding_cast(row));
}

/* Clears the contents of 'row' in table "Datapath_Binding". */
void
sbrec_datapath_binding_init(struct sbrec_datapath_binding *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Datapath_Binding" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_datapath_binding *
sbrec_datapath_binding_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], uuid));
}

/* Returns a row in table "Datapath_Binding" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_datapath_binding *
sbrec_datapath_binding_first(const struct ovsdb_idl *idl)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_datapath_binding *
sbrec_datapath_binding_next(const struct sbrec_datapath_binding *row)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_datapath_binding_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING]);
}

unsigned int sbrec_datapath_binding_row_get_seqno(const struct sbrec_datapath_binding *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_datapath_binding *
sbrec_datapath_binding_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING]));
}

const struct sbrec_datapath_binding
*sbrec_datapath_binding_track_get_next(const struct sbrec_datapath_binding *row)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Datapath_Binding".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_datapath_binding_delete(const struct sbrec_datapath_binding *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Datapath_Binding" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_datapath_binding *
sbrec_datapath_binding_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], NULL));
}

bool
sbrec_datapath_binding_is_updated(const struct sbrec_datapath_binding *row, enum sbrec_datapath_binding_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &sbrec_datapath_binding_columns[column]);
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
 *     sbrec_datapath_binding_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     sbrec_datapath_binding_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_datapath_binding_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_datapath_binding_verify_external_ids(const struct sbrec_datapath_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "tunnel_key" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tunnel_key" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tunnel_key" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tunnel_key" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_datapath_binding_insert()).
 *
 *   - If "tunnel_key" has already been modified (with
 *     sbrec_datapath_binding_set_tunnel_key()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_datapath_binding_set_tunnel_key() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_datapath_binding_verify_tunnel_key(const struct sbrec_datapath_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_TUNNEL_KEY]);
}

/* Returns the "external_ids" column's value from the "Datapath_Binding" table in 'row'
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
 * directly through the "external_ids" member in sbrec_datapath_binding. */
const struct ovsdb_datum *
sbrec_datapath_binding_get_external_ids(const struct sbrec_datapath_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_datapath_binding_col_external_ids);
}

/* Returns the "tunnel_key" column's value from the "Datapath_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tunnel_key's
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
 * directly through the "tunnel_key" member in sbrec_datapath_binding. */
const struct ovsdb_datum *
sbrec_datapath_binding_get_tunnel_key(const struct sbrec_datapath_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_datapath_binding_col_tunnel_key);
}

/* Sets the "external_ids" column's value from the "Datapath_Binding" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_datapath_binding_set_external_ids(const struct sbrec_datapath_binding *row, const struct smap *external_ids)
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
                        &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "tunnel_key" column from the "Datapath_Binding" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 1 to 16,777,215
 *
 * The caller retains ownership of the arguments. */
void
sbrec_datapath_binding_set_tunnel_key(const struct sbrec_datapath_binding *row, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_TUNNEL_KEY], &datum);
}

/* Sets an element of the "external_ids" map column from the "Datapath_Binding" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
sbrec_datapath_binding_update_external_ids_setkey(const struct sbrec_datapath_binding *row, const char *new_key, const char *new_value)
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
                                    &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Datapath_Binding" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
sbrec_datapath_binding_update_external_ids_delkey(const struct sbrec_datapath_binding *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS],
                                    datum);
}

/* Sets the "external_ids" column's value from the "Datapath_Binding" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_datapath_binding_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
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
                                   &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING],
                                   function,
                                   &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &sbrec_datapath_binding_col_external_ids.type);
}


/* Sets the "tunnel_key" column from the "Datapath_Binding" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 1 to 16,777,215
 *
 * The caller retains ownership of the arguments. */
void
sbrec_datapath_binding_add_clause_tunnel_key(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING],
                          function,
                          &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_TUNNEL_KEY],
                          &datum);
}
void
sbrec_datapath_binding_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_datapath_binding_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "external_ids" column's value from the "Datapath_Binding" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_datapath_binding_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
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

    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING],
                                      function,
                                      &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &sbrec_datapath_binding_col_external_ids.type);
}


/* Sets the "tunnel_key" column from the "Datapath_Binding" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 1 to 16,777,215
 *
 * The caller retains ownership of the arguments. */
void
sbrec_datapath_binding_remove_clause_tunnel_key(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING],
                          function,
                          &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_TUNNEL_KEY],
                          &datum);
}
void
sbrec_datapath_binding_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_datapath_binding_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_N_COLUMNS];

static void
sbrec_datapath_binding_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_datapath_binding_col_external_ids. */
    c = &sbrec_datapath_binding_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_datapath_binding_parse_external_ids;
    c->unparse = sbrec_datapath_binding_unparse_external_ids;

    /* Initialize sbrec_datapath_binding_col_tunnel_key. */
    c = &sbrec_datapath_binding_col_tunnel_key;
    c->name = "tunnel_key";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1);
    c->type.key.u.integer.max = INT64_C(16777215);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_datapath_binding_parse_tunnel_key;
    c->unparse = sbrec_datapath_binding_unparse_tunnel_key;
}

/* Encap table. */

static void
sbrec_encap_parse_ip(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_encap *row = sbrec_encap_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ip = datum->keys[0].string;
    } else {
        row->ip = "";
    }
}

static void
sbrec_encap_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_encap *row = sbrec_encap_cast(row_);
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
sbrec_encap_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_encap *row = sbrec_encap_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
sbrec_encap_unparse_ip(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_encap_unparse_options(struct ovsdb_idl_row *row_)
{
    struct sbrec_encap *row = sbrec_encap_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->options);
}

static void
sbrec_encap_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_encap_init__(struct ovsdb_idl_row *row)
{
    sbrec_encap_init(sbrec_encap_cast(row));
}

/* Clears the contents of 'row' in table "Encap". */
void
sbrec_encap_init(struct sbrec_encap *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->options);
}

/* Searches table "Encap" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_encap *
sbrec_encap_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_encap_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP], uuid));
}

/* Returns a row in table "Encap" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_encap *
sbrec_encap_first(const struct ovsdb_idl *idl)
{
    return sbrec_encap_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_encap *
sbrec_encap_next(const struct sbrec_encap *row)
{
    return sbrec_encap_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_encap_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP]);
}

unsigned int sbrec_encap_row_get_seqno(const struct sbrec_encap *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_encap *
sbrec_encap_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_encap_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP]));
}

const struct sbrec_encap
*sbrec_encap_track_get_next(const struct sbrec_encap *row)
{
    return sbrec_encap_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Encap".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_encap_delete(const struct sbrec_encap *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Encap" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_encap *
sbrec_encap_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_encap_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_ENCAP], NULL));
}

bool
sbrec_encap_is_updated(const struct sbrec_encap *row, enum sbrec_encap_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &sbrec_encap_columns[column]);
}

/* Causes the original contents of column "ip" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ip" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ip" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ip" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_encap_insert()).
 *
 *   - If "ip" has already been modified (with
 *     sbrec_encap_set_ip()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_encap_set_ip() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_encap_verify_ip(const struct sbrec_encap *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_encap_columns[SBREC_ENCAP_COL_IP]);
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
 *     sbrec_encap_insert()).
 *
 *   - If "options" has already been modified (with
 *     sbrec_encap_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_encap_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_encap_verify_options(const struct sbrec_encap *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_encap_columns[SBREC_ENCAP_COL_OPTIONS]);
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
 *     sbrec_encap_insert()).
 *
 *   - If "type" has already been modified (with
 *     sbrec_encap_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_encap_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_encap_verify_type(const struct sbrec_encap *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_encap_columns[SBREC_ENCAP_COL_TYPE]);
}

/* Returns the "ip" column's value from the "Encap" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ip's
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
 * directly through the "ip" member in sbrec_encap. */
const struct ovsdb_datum *
sbrec_encap_get_ip(const struct sbrec_encap *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_encap_col_ip);
}

/* Returns the "options" column's value from the "Encap" table in 'row'
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
 * directly through the "options" member in sbrec_encap. */
const struct ovsdb_datum *
sbrec_encap_get_options(const struct sbrec_encap *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_encap_col_options);
}

/* Returns the "type" column's value from the "Encap" table in 'row'
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
 * directly through the "type" member in sbrec_encap. */
const struct ovsdb_datum *
sbrec_encap_get_type(const struct sbrec_encap *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_encap_col_type);
}

/* Sets the "ip" column from the "Encap" table in 'row' to
 * 'ip'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_encap_set_ip(const struct sbrec_encap *row, const char *ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_encap_columns[SBREC_ENCAP_COL_IP], &datum);
}

/* Sets the "options" column's value from the "Encap" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
sbrec_encap_set_options(const struct sbrec_encap *row, const struct smap *options)
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
                        &sbrec_encap_columns[SBREC_ENCAP_COL_OPTIONS],
                        &datum);
}


/* Sets the "type" column from the "Encap" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "stt", "geneve", or "vxlan"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_encap_set_type(const struct sbrec_encap *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_encap_columns[SBREC_ENCAP_COL_TYPE], &datum);
}

/* Sets an element of the "options" map column from the "Encap" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
sbrec_encap_update_options_setkey(const struct sbrec_encap *row, const char *new_key, const char *new_value)
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
                                    &sbrec_encap_columns[SBREC_ENCAP_COL_OPTIONS],
                                    datum);
}

/* Deletes an element of the "options" map column from the "Encap" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
sbrec_encap_update_options_delkey(const struct sbrec_encap *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &sbrec_encap_columns[SBREC_ENCAP_COL_OPTIONS],
                                    datum);
}

/* Sets the "ip" column from the "Encap" table in 'row' to
 * 'ip'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_encap_add_clause_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP],
                          function,
                          &sbrec_encap_columns[SBREC_ENCAP_COL_IP],
                          &datum);
}

/* Sets the "options" column's value from the "Encap" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
sbrec_encap_add_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *options)
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
                                   &sbrec_table_classes[SBREC_TABLE_ENCAP],
                                   function,
                                   &sbrec_encap_columns[SBREC_ENCAP_COL_OPTIONS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &sbrec_encap_col_options.type);
}


/* Sets the "type" column from the "Encap" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "stt", "geneve", or "vxlan"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_encap_add_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP],
                          function,
                          &sbrec_encap_columns[SBREC_ENCAP_COL_TYPE],
                          &datum);
}
void
sbrec_encap_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_encap_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "ip" column from the "Encap" table in 'row' to
 * 'ip'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_encap_remove_clause_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP],
                          function,
                          &sbrec_encap_columns[SBREC_ENCAP_COL_IP],
                          &datum);
}

/* Sets the "options" column's value from the "Encap" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
sbrec_encap_remove_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *options)
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

    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP],
                                      function,
                                      &sbrec_encap_columns[SBREC_ENCAP_COL_OPTIONS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &sbrec_encap_col_options.type);
}


/* Sets the "type" column from the "Encap" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "stt", "geneve", or "vxlan"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_encap_remove_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP],
                          function,
                          &sbrec_encap_columns[SBREC_ENCAP_COL_TYPE],
                          &datum);
}
void
sbrec_encap_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_encap_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column sbrec_encap_columns[SBREC_ENCAP_N_COLUMNS];

static void
sbrec_encap_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_encap_col_ip. */
    c = &sbrec_encap_col_ip;
    c->name = "ip";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_encap_parse_ip;
    c->unparse = sbrec_encap_unparse_ip;

    /* Initialize sbrec_encap_col_options. */
    c = &sbrec_encap_col_options;
    c->name = "options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_encap_parse_options;
    c->unparse = sbrec_encap_unparse_options;

    /* Initialize sbrec_encap_col_type. */
    c = &sbrec_encap_col_type;
    c->name = "type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 3;
    c->type.key.enum_->keys = xmalloc(3 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("geneve");
    c->type.key.enum_->keys[1].string = xstrdup("stt");
    c->type.key.enum_->keys[2].string = xstrdup("vxlan");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_encap_parse_type;
    c->unparse = sbrec_encap_unparse_type;
}

/* Logical_Flow table. */

static void
sbrec_logical_flow_parse_actions(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->actions = datum->keys[0].string;
    } else {
        row->actions = "";
    }
}

static void
sbrec_logical_flow_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);
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
sbrec_logical_flow_parse_logical_datapath(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->logical_datapath = sbrec_datapath_binding_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], &datum->keys[0].uuid));
    } else {
        row->logical_datapath = NULL;
    }
}

static void
sbrec_logical_flow_parse_match(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->match = datum->keys[0].string;
    } else {
        row->match = "";
    }
}

static void
sbrec_logical_flow_parse_pipeline(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->pipeline = datum->keys[0].string;
    } else {
        row->pipeline = "";
    }
}

static void
sbrec_logical_flow_parse_priority(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->priority = datum->keys[0].integer;
    } else {
        row->priority = 0;
    }
}

static void
sbrec_logical_flow_parse_table_id(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->table_id = datum->keys[0].integer;
    } else {
        row->table_id = 0;
    }
}

static void
sbrec_logical_flow_unparse_actions(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
sbrec_logical_flow_unparse_logical_datapath(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_unparse_match(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_unparse_pipeline(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_unparse_priority(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_unparse_table_id(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_init__(struct ovsdb_idl_row *row)
{
    sbrec_logical_flow_init(sbrec_logical_flow_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Flow". */
void
sbrec_logical_flow_init(struct sbrec_logical_flow *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Logical_Flow" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_logical_flow *
sbrec_logical_flow_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_logical_flow_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW], uuid));
}

/* Returns a row in table "Logical_Flow" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_logical_flow *
sbrec_logical_flow_first(const struct ovsdb_idl *idl)
{
    return sbrec_logical_flow_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_logical_flow *
sbrec_logical_flow_next(const struct sbrec_logical_flow *row)
{
    return sbrec_logical_flow_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_logical_flow_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW]);
}

unsigned int sbrec_logical_flow_row_get_seqno(const struct sbrec_logical_flow *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_logical_flow *
sbrec_logical_flow_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_logical_flow_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW]));
}

const struct sbrec_logical_flow
*sbrec_logical_flow_track_get_next(const struct sbrec_logical_flow *row)
{
    return sbrec_logical_flow_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Flow".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_delete(const struct sbrec_logical_flow *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Flow" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_logical_flow *
sbrec_logical_flow_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_logical_flow_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW], NULL));
}

bool
sbrec_logical_flow_is_updated(const struct sbrec_logical_flow *row, enum sbrec_logical_flow_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &sbrec_logical_flow_columns[column]);
}

/* Causes the original contents of column "actions" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "actions" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "actions" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "actions" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_logical_flow_insert()).
 *
 *   - If "actions" has already been modified (with
 *     sbrec_logical_flow_set_actions()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_actions() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_actions(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_ACTIONS]);
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
 *     sbrec_logical_flow_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     sbrec_logical_flow_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_external_ids(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "logical_datapath" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_datapath" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_datapath" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_datapath" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_logical_flow_insert()).
 *
 *   - If "logical_datapath" has already been modified (with
 *     sbrec_logical_flow_set_logical_datapath()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_logical_datapath() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_logical_datapath(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_LOGICAL_DATAPATH]);
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
 *     sbrec_logical_flow_insert()).
 *
 *   - If "match" has already been modified (with
 *     sbrec_logical_flow_set_match()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_match() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_match(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_MATCH]);
}

/* Causes the original contents of column "pipeline" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "pipeline" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "pipeline" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "pipeline" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_logical_flow_insert()).
 *
 *   - If "pipeline" has already been modified (with
 *     sbrec_logical_flow_set_pipeline()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_pipeline() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_pipeline(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PIPELINE]);
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
 *     sbrec_logical_flow_insert()).
 *
 *   - If "priority" has already been modified (with
 *     sbrec_logical_flow_set_priority()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_priority() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_priority(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PRIORITY]);
}

/* Causes the original contents of column "table_id" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "table_id" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "table_id" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "table_id" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_logical_flow_insert()).
 *
 *   - If "table_id" has already been modified (with
 *     sbrec_logical_flow_set_table_id()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_table_id() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_table_id(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_TABLE_ID]);
}

/* Returns the "actions" column's value from the "Logical_Flow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes actions's
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
 * directly through the "actions" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_actions(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_actions);
}

/* Returns the "external_ids" column's value from the "Logical_Flow" table in 'row'
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
 * directly through the "external_ids" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_external_ids(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_external_ids);
}

/* Returns the "logical_datapath" column's value from the "Logical_Flow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes logical_datapath's
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
 * directly through the "logical_datapath" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_logical_datapath(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_logical_datapath);
}

/* Returns the "match" column's value from the "Logical_Flow" table in 'row'
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
 * directly through the "match" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_match(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_match);
}

/* Returns the "pipeline" column's value from the "Logical_Flow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes pipeline's
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
 * directly through the "pipeline" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_pipeline(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_pipeline);
}

/* Returns the "priority" column's value from the "Logical_Flow" table in 'row'
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
 * directly through the "priority" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_priority(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_priority);
}

/* Returns the "table_id" column's value from the "Logical_Flow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes table_id's
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
 * directly through the "table_id" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_table_id(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_table_id);
}

/* Sets the "actions" column from the "Logical_Flow" table in 'row' to
 * 'actions'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_actions(const struct sbrec_logical_flow *row, const char *actions)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, actions);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_ACTIONS], &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Flow" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_logical_flow_set_external_ids(const struct sbrec_logical_flow *row, const struct smap *external_ids)
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
                        &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "logical_datapath" column from the "Logical_Flow" table in 'row' to
 * 'logical_datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_logical_datapath(const struct sbrec_logical_flow *row, const struct sbrec_datapath_binding *logical_datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = logical_datapath->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_LOGICAL_DATAPATH], &datum);
}

/* Sets the "match" column from the "Logical_Flow" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_match(const struct sbrec_logical_flow *row, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_MATCH], &datum);
}

/* Sets the "pipeline" column from the "Logical_Flow" table in 'row' to
 * 'pipeline'.
 *
 * Argument constraints: either "ingress" or "egress"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_pipeline(const struct sbrec_logical_flow *row, const char *pipeline)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, pipeline);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PIPELINE], &datum);
}

/* Sets the "priority" column from the "Logical_Flow" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 65,535
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_priority(const struct sbrec_logical_flow *row, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PRIORITY], &datum);
}

/* Sets the "table_id" column from the "Logical_Flow" table in 'row' to
 * 'table_id'.
 *
 * Argument constraints: in range 0 to 15
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_table_id(const struct sbrec_logical_flow *row, int64_t table_id)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = table_id;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_TABLE_ID], &datum);
}

/* Sets an element of the "external_ids" map column from the "Logical_Flow" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
sbrec_logical_flow_update_external_ids_setkey(const struct sbrec_logical_flow *row, const char *new_key, const char *new_value)
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
                                    &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "Logical_Flow" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
sbrec_logical_flow_update_external_ids_delkey(const struct sbrec_logical_flow *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS],
                                    datum);
}

/* Sets the "actions" column from the "Logical_Flow" table in 'row' to
 * 'actions'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_add_clause_actions(struct ovsdb_idl *idl, enum ovsdb_function function, const char *actions)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, actions);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_ACTIONS],
                          &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Flow" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_logical_flow_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
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
                                   &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                                   function,
                                   &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &sbrec_logical_flow_col_external_ids.type);
}


/* Sets the "logical_datapath" column from the "Logical_Flow" table in 'row' to
 * 'logical_datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_add_clause_logical_datapath(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *logical_datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = *logical_datapath;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_LOGICAL_DATAPATH],
                          &datum);
}

/* Sets the "match" column from the "Logical_Flow" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_add_clause_match(struct ovsdb_idl *idl, enum ovsdb_function function, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_MATCH],
                          &datum);
}

/* Sets the "pipeline" column from the "Logical_Flow" table in 'row' to
 * 'pipeline'.
 *
 * Argument constraints: either "ingress" or "egress"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_add_clause_pipeline(struct ovsdb_idl *idl, enum ovsdb_function function, const char *pipeline)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, pipeline);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PIPELINE],
                          &datum);
}

/* Sets the "priority" column from the "Logical_Flow" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 65,535
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_add_clause_priority(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PRIORITY],
                          &datum);
}

/* Sets the "table_id" column from the "Logical_Flow" table in 'row' to
 * 'table_id'.
 *
 * Argument constraints: in range 0 to 15
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_add_clause_table_id(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t table_id)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = table_id;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_TABLE_ID],
                          &datum);
}
void
sbrec_logical_flow_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_logical_flow_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "actions" column from the "Logical_Flow" table in 'row' to
 * 'actions'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_remove_clause_actions(struct ovsdb_idl *idl, enum ovsdb_function function, const char *actions)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, actions);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_ACTIONS],
                          &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Flow" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_logical_flow_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
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

    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                                      function,
                                      &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &sbrec_logical_flow_col_external_ids.type);
}


/* Sets the "logical_datapath" column from the "Logical_Flow" table in 'row' to
 * 'logical_datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_remove_clause_logical_datapath(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *logical_datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = *logical_datapath;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_LOGICAL_DATAPATH],
                          &datum);
}

/* Sets the "match" column from the "Logical_Flow" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_remove_clause_match(struct ovsdb_idl *idl, enum ovsdb_function function, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_MATCH],
                          &datum);
}

/* Sets the "pipeline" column from the "Logical_Flow" table in 'row' to
 * 'pipeline'.
 *
 * Argument constraints: either "ingress" or "egress"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_remove_clause_pipeline(struct ovsdb_idl *idl, enum ovsdb_function function, const char *pipeline)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, pipeline);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PIPELINE],
                          &datum);
}

/* Sets the "priority" column from the "Logical_Flow" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 65,535
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_remove_clause_priority(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PRIORITY],
                          &datum);
}

/* Sets the "table_id" column from the "Logical_Flow" table in 'row' to
 * 'table_id'.
 *
 * Argument constraints: in range 0 to 15
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_remove_clause_table_id(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t table_id)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = table_id;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW],
                          function,
                          &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_TABLE_ID],
                          &datum);
}
void
sbrec_logical_flow_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_logical_flow_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_N_COLUMNS];

static void
sbrec_logical_flow_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_logical_flow_col_actions. */
    c = &sbrec_logical_flow_col_actions;
    c->name = "actions";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_actions;
    c->unparse = sbrec_logical_flow_unparse_actions;

    /* Initialize sbrec_logical_flow_col_external_ids. */
    c = &sbrec_logical_flow_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_external_ids;
    c->unparse = sbrec_logical_flow_unparse_external_ids;

    /* Initialize sbrec_logical_flow_col_logical_datapath. */
    c = &sbrec_logical_flow_col_logical_datapath;
    c->name = "logical_datapath";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Datapath_Binding";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_logical_datapath;
    c->unparse = sbrec_logical_flow_unparse_logical_datapath;

    /* Initialize sbrec_logical_flow_col_match. */
    c = &sbrec_logical_flow_col_match;
    c->name = "match";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_match;
    c->unparse = sbrec_logical_flow_unparse_match;

    /* Initialize sbrec_logical_flow_col_pipeline. */
    c = &sbrec_logical_flow_col_pipeline;
    c->name = "pipeline";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("egress");
    c->type.key.enum_->keys[1].string = xstrdup("ingress");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_pipeline;
    c->unparse = sbrec_logical_flow_unparse_pipeline;

    /* Initialize sbrec_logical_flow_col_priority. */
    c = &sbrec_logical_flow_col_priority;
    c->name = "priority";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(65535);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_priority;
    c->unparse = sbrec_logical_flow_unparse_priority;

    /* Initialize sbrec_logical_flow_col_table_id. */
    c = &sbrec_logical_flow_col_table_id;
    c->name = "table_id";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(15);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_table_id;
    c->unparse = sbrec_logical_flow_unparse_table_id;
}

/* MAC_Binding table. */

static void
sbrec_mac_binding_parse_datapath(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_mac_binding *row = sbrec_mac_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->datapath = sbrec_datapath_binding_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], &datum->keys[0].uuid));
    } else {
        row->datapath = NULL;
    }
}

static void
sbrec_mac_binding_parse_ip(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_mac_binding *row = sbrec_mac_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ip = datum->keys[0].string;
    } else {
        row->ip = "";
    }
}

static void
sbrec_mac_binding_parse_logical_port(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_mac_binding *row = sbrec_mac_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->logical_port = datum->keys[0].string;
    } else {
        row->logical_port = "";
    }
}

static void
sbrec_mac_binding_parse_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_mac_binding *row = sbrec_mac_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->mac = datum->keys[0].string;
    } else {
        row->mac = "";
    }
}

static void
sbrec_mac_binding_unparse_datapath(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_mac_binding_unparse_ip(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_mac_binding_unparse_logical_port(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_mac_binding_unparse_mac(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_mac_binding_init__(struct ovsdb_idl_row *row)
{
    sbrec_mac_binding_init(sbrec_mac_binding_cast(row));
}

/* Clears the contents of 'row' in table "MAC_Binding". */
void
sbrec_mac_binding_init(struct sbrec_mac_binding *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "MAC_Binding" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_mac_binding *
sbrec_mac_binding_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_mac_binding_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING], uuid));
}

/* Returns a row in table "MAC_Binding" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_mac_binding *
sbrec_mac_binding_first(const struct ovsdb_idl *idl)
{
    return sbrec_mac_binding_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_mac_binding *
sbrec_mac_binding_next(const struct sbrec_mac_binding *row)
{
    return sbrec_mac_binding_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_mac_binding_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING]);
}

unsigned int sbrec_mac_binding_row_get_seqno(const struct sbrec_mac_binding *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_mac_binding *
sbrec_mac_binding_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_mac_binding_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING]));
}

const struct sbrec_mac_binding
*sbrec_mac_binding_track_get_next(const struct sbrec_mac_binding *row)
{
    return sbrec_mac_binding_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "MAC_Binding".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_mac_binding_delete(const struct sbrec_mac_binding *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "MAC_Binding" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_mac_binding *
sbrec_mac_binding_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_mac_binding_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING], NULL));
}

bool
sbrec_mac_binding_is_updated(const struct sbrec_mac_binding *row, enum sbrec_mac_binding_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &sbrec_mac_binding_columns[column]);
}

/* Causes the original contents of column "datapath" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "datapath" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "datapath" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "datapath" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_mac_binding_insert()).
 *
 *   - If "datapath" has already been modified (with
 *     sbrec_mac_binding_set_datapath()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_mac_binding_set_datapath() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_mac_binding_verify_datapath(const struct sbrec_mac_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_DATAPATH]);
}

/* Causes the original contents of column "ip" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ip" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ip" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ip" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_mac_binding_insert()).
 *
 *   - If "ip" has already been modified (with
 *     sbrec_mac_binding_set_ip()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_mac_binding_set_ip() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_mac_binding_verify_ip(const struct sbrec_mac_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_IP]);
}

/* Causes the original contents of column "logical_port" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_port" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_port" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_port" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_mac_binding_insert()).
 *
 *   - If "logical_port" has already been modified (with
 *     sbrec_mac_binding_set_logical_port()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_mac_binding_set_logical_port() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_mac_binding_verify_logical_port(const struct sbrec_mac_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_LOGICAL_PORT]);
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
 *     sbrec_mac_binding_insert()).
 *
 *   - If "mac" has already been modified (with
 *     sbrec_mac_binding_set_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_mac_binding_set_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_mac_binding_verify_mac(const struct sbrec_mac_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_MAC]);
}

/* Returns the "datapath" column's value from the "MAC_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes datapath's
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
 * directly through the "datapath" member in sbrec_mac_binding. */
const struct ovsdb_datum *
sbrec_mac_binding_get_datapath(const struct sbrec_mac_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_mac_binding_col_datapath);
}

/* Returns the "ip" column's value from the "MAC_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ip's
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
 * directly through the "ip" member in sbrec_mac_binding. */
const struct ovsdb_datum *
sbrec_mac_binding_get_ip(const struct sbrec_mac_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_mac_binding_col_ip);
}

/* Returns the "logical_port" column's value from the "MAC_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes logical_port's
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
 * directly through the "logical_port" member in sbrec_mac_binding. */
const struct ovsdb_datum *
sbrec_mac_binding_get_logical_port(const struct sbrec_mac_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_mac_binding_col_logical_port);
}

/* Returns the "mac" column's value from the "MAC_Binding" table in 'row'
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
 * directly through the "mac" member in sbrec_mac_binding. */
const struct ovsdb_datum *
sbrec_mac_binding_get_mac(const struct sbrec_mac_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_mac_binding_col_mac);
}

/* Sets the "datapath" column from the "MAC_Binding" table in 'row' to
 * 'datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_set_datapath(const struct sbrec_mac_binding *row, const struct sbrec_datapath_binding *datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = datapath->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_DATAPATH], &datum);
}

/* Sets the "ip" column from the "MAC_Binding" table in 'row' to
 * 'ip'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_set_ip(const struct sbrec_mac_binding *row, const char *ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_IP], &datum);
}

/* Sets the "logical_port" column from the "MAC_Binding" table in 'row' to
 * 'logical_port'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_set_logical_port(const struct sbrec_mac_binding *row, const char *logical_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_port);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_LOGICAL_PORT], &datum);
}

/* Sets the "mac" column from the "MAC_Binding" table in 'row' to
 * 'mac'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_set_mac(const struct sbrec_mac_binding *row, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, mac);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_MAC], &datum);
}

/* Sets the "datapath" column from the "MAC_Binding" table in 'row' to
 * 'datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_add_clause_datapath(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = *datapath;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING],
                          function,
                          &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_DATAPATH],
                          &datum);
}

/* Sets the "ip" column from the "MAC_Binding" table in 'row' to
 * 'ip'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_add_clause_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING],
                          function,
                          &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_IP],
                          &datum);
}

/* Sets the "logical_port" column from the "MAC_Binding" table in 'row' to
 * 'logical_port'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_add_clause_logical_port(struct ovsdb_idl *idl, enum ovsdb_function function, const char *logical_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_port);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING],
                          function,
                          &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_LOGICAL_PORT],
                          &datum);
}

/* Sets the "mac" column from the "MAC_Binding" table in 'row' to
 * 'mac'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_add_clause_mac(struct ovsdb_idl *idl, enum ovsdb_function function, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, mac);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING],
                          function,
                          &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_MAC],
                          &datum);
}
void
sbrec_mac_binding_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_mac_binding_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "datapath" column from the "MAC_Binding" table in 'row' to
 * 'datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_remove_clause_datapath(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = *datapath;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING],
                          function,
                          &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_DATAPATH],
                          &datum);
}

/* Sets the "ip" column from the "MAC_Binding" table in 'row' to
 * 'ip'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_remove_clause_ip(struct ovsdb_idl *idl, enum ovsdb_function function, const char *ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING],
                          function,
                          &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_IP],
                          &datum);
}

/* Sets the "logical_port" column from the "MAC_Binding" table in 'row' to
 * 'logical_port'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_remove_clause_logical_port(struct ovsdb_idl *idl, enum ovsdb_function function, const char *logical_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_port);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING],
                          function,
                          &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_LOGICAL_PORT],
                          &datum);
}

/* Sets the "mac" column from the "MAC_Binding" table in 'row' to
 * 'mac'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_mac_binding_remove_clause_mac(struct ovsdb_idl *idl, enum ovsdb_function function, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, mac);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING],
                          function,
                          &sbrec_mac_binding_columns[SBREC_MAC_BINDING_COL_MAC],
                          &datum);
}
void
sbrec_mac_binding_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_mac_binding_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MAC_BINDING], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column sbrec_mac_binding_columns[SBREC_MAC_BINDING_N_COLUMNS];

static void
sbrec_mac_binding_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_mac_binding_col_datapath. */
    c = &sbrec_mac_binding_col_datapath;
    c->name = "datapath";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Datapath_Binding";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_mac_binding_parse_datapath;
    c->unparse = sbrec_mac_binding_unparse_datapath;

    /* Initialize sbrec_mac_binding_col_ip. */
    c = &sbrec_mac_binding_col_ip;
    c->name = "ip";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_mac_binding_parse_ip;
    c->unparse = sbrec_mac_binding_unparse_ip;

    /* Initialize sbrec_mac_binding_col_logical_port. */
    c = &sbrec_mac_binding_col_logical_port;
    c->name = "logical_port";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_mac_binding_parse_logical_port;
    c->unparse = sbrec_mac_binding_unparse_logical_port;

    /* Initialize sbrec_mac_binding_col_mac. */
    c = &sbrec_mac_binding_col_mac;
    c->name = "mac";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_mac_binding_parse_mac;
    c->unparse = sbrec_mac_binding_unparse_mac;
}

/* Multicast_Group table. */

static void
sbrec_multicast_group_parse_datapath(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_multicast_group *row = sbrec_multicast_group_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->datapath = sbrec_datapath_binding_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], &datum->keys[0].uuid));
    } else {
        row->datapath = NULL;
    }
}

static void
sbrec_multicast_group_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_multicast_group *row = sbrec_multicast_group_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
sbrec_multicast_group_parse_ports(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_multicast_group *row = sbrec_multicast_group_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ports = NULL;
    row->n_ports = 0;
    for (i = 0; i < datum->n; i++) {
        struct sbrec_port_binding *keyRow = sbrec_port_binding_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING], &datum->keys[i].uuid));
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
sbrec_multicast_group_parse_tunnel_key(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_multicast_group *row = sbrec_multicast_group_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->tunnel_key = datum->keys[0].integer;
    } else {
        row->tunnel_key = 0;
    }
}

static void
sbrec_multicast_group_unparse_datapath(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_multicast_group_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_multicast_group_unparse_ports(struct ovsdb_idl_row *row_)
{
    struct sbrec_multicast_group *row = sbrec_multicast_group_cast(row_);

    ovs_assert(inited);
    free(row->ports);
}

static void
sbrec_multicast_group_unparse_tunnel_key(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_multicast_group_init__(struct ovsdb_idl_row *row)
{
    sbrec_multicast_group_init(sbrec_multicast_group_cast(row));
}

/* Clears the contents of 'row' in table "Multicast_Group". */
void
sbrec_multicast_group_init(struct sbrec_multicast_group *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Multicast_Group" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_multicast_group *
sbrec_multicast_group_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_multicast_group_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP], uuid));
}

/* Returns a row in table "Multicast_Group" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_multicast_group *
sbrec_multicast_group_first(const struct ovsdb_idl *idl)
{
    return sbrec_multicast_group_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_multicast_group *
sbrec_multicast_group_next(const struct sbrec_multicast_group *row)
{
    return sbrec_multicast_group_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_multicast_group_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP]);
}

unsigned int sbrec_multicast_group_row_get_seqno(const struct sbrec_multicast_group *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_multicast_group *
sbrec_multicast_group_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_multicast_group_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP]));
}

const struct sbrec_multicast_group
*sbrec_multicast_group_track_get_next(const struct sbrec_multicast_group *row)
{
    return sbrec_multicast_group_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Multicast_Group".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_multicast_group_delete(const struct sbrec_multicast_group *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Multicast_Group" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_multicast_group *
sbrec_multicast_group_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_multicast_group_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP], NULL));
}

bool
sbrec_multicast_group_is_updated(const struct sbrec_multicast_group *row, enum sbrec_multicast_group_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &sbrec_multicast_group_columns[column]);
}

/* Causes the original contents of column "datapath" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "datapath" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "datapath" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "datapath" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_multicast_group_insert()).
 *
 *   - If "datapath" has already been modified (with
 *     sbrec_multicast_group_set_datapath()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_multicast_group_set_datapath() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_multicast_group_verify_datapath(const struct sbrec_multicast_group *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_DATAPATH]);
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
 *     sbrec_multicast_group_insert()).
 *
 *   - If "name" has already been modified (with
 *     sbrec_multicast_group_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_multicast_group_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_multicast_group_verify_name(const struct sbrec_multicast_group *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_NAME]);
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
 *     sbrec_multicast_group_insert()).
 *
 *   - If "ports" has already been modified (with
 *     sbrec_multicast_group_set_ports()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_multicast_group_set_ports() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_multicast_group_verify_ports(const struct sbrec_multicast_group *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_PORTS]);
}

/* Causes the original contents of column "tunnel_key" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tunnel_key" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tunnel_key" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tunnel_key" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_multicast_group_insert()).
 *
 *   - If "tunnel_key" has already been modified (with
 *     sbrec_multicast_group_set_tunnel_key()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_multicast_group_set_tunnel_key() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_multicast_group_verify_tunnel_key(const struct sbrec_multicast_group *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_TUNNEL_KEY]);
}

/* Returns the "datapath" column's value from the "Multicast_Group" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes datapath's
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
 * directly through the "datapath" member in sbrec_multicast_group. */
const struct ovsdb_datum *
sbrec_multicast_group_get_datapath(const struct sbrec_multicast_group *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_multicast_group_col_datapath);
}

/* Returns the "name" column's value from the "Multicast_Group" table in 'row'
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
 * directly through the "name" member in sbrec_multicast_group. */
const struct ovsdb_datum *
sbrec_multicast_group_get_name(const struct sbrec_multicast_group *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_multicast_group_col_name);
}

/* Returns the "ports" column's value from the "Multicast_Group" table in 'row'
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
 * directly through the "ports" member in sbrec_multicast_group. */
const struct ovsdb_datum *
sbrec_multicast_group_get_ports(const struct sbrec_multicast_group *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_multicast_group_col_ports);
}

/* Returns the "tunnel_key" column's value from the "Multicast_Group" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tunnel_key's
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
 * directly through the "tunnel_key" member in sbrec_multicast_group. */
const struct ovsdb_datum *
sbrec_multicast_group_get_tunnel_key(const struct sbrec_multicast_group *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_multicast_group_col_tunnel_key);
}

/* Sets the "datapath" column from the "Multicast_Group" table in 'row' to
 * 'datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_set_datapath(const struct sbrec_multicast_group *row, const struct sbrec_datapath_binding *datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = datapath->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_DATAPATH], &datum);
}

/* Sets the "name" column from the "Multicast_Group" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_set_name(const struct sbrec_multicast_group *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_NAME], &datum);
}

/* Sets the "ports" column from the "Multicast_Group" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_set_ports(const struct sbrec_multicast_group *row, struct sbrec_port_binding **ports, size_t n_ports)
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
    ovsdb_idl_txn_write(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_PORTS], &datum);
}

/* Sets the "tunnel_key" column from the "Multicast_Group" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 32,768 to 65,535
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_set_tunnel_key(const struct sbrec_multicast_group *row, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_TUNNEL_KEY], &datum);
}

/* Adds the value 'new_value' to the "ports" set column from the "Multicast_Group" table
 * in 'row'.
 *
 */
void
sbrec_multicast_group_update_ports_addvalue(const struct sbrec_multicast_group *row, const struct sbrec_port_binding *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_PORTS],
                                    datum);
}

/* Deletes the value 'delete_value' from the "ports" set column from the
 * "Multicast_Group" table in 'row'.
 *
 */
void
sbrec_multicast_group_update_ports_delvalue(const struct sbrec_multicast_group *row, const struct sbrec_port_binding *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_PORTS],
                                    datum);
}

/* Sets the "datapath" column from the "Multicast_Group" table in 'row' to
 * 'datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_add_clause_datapath(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = *datapath;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP],
                          function,
                          &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_DATAPATH],
                          &datum);
}

/* Sets the "name" column from the "Multicast_Group" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_add_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP],
                          function,
                          &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_NAME],
                          &datum);
}

/* Sets the "ports" column from the "Multicast_Group" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_add_clause_ports(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **ports, size_t n_ports)
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
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP],
                          function,
                          &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_PORTS],
                          &datum);
    free(datum.keys);
}

/* Sets the "tunnel_key" column from the "Multicast_Group" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 32,768 to 65,535
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_add_clause_tunnel_key(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP],
                          function,
                          &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_TUNNEL_KEY],
                          &datum);
}
void
sbrec_multicast_group_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_multicast_group_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "datapath" column from the "Multicast_Group" table in 'row' to
 * 'datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_remove_clause_datapath(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = *datapath;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP],
                          function,
                          &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_DATAPATH],
                          &datum);
}

/* Sets the "name" column from the "Multicast_Group" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_remove_clause_name(struct ovsdb_idl *idl, enum ovsdb_function function, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP],
                          function,
                          &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_NAME],
                          &datum);
}

/* Sets the "ports" column from the "Multicast_Group" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_remove_clause_ports(struct ovsdb_idl *idl, enum ovsdb_function function, struct uuid **ports, size_t n_ports)
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
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP],
                          function,
                          &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_PORTS],
                          &datum);
    free(datum.keys);
}

/* Sets the "tunnel_key" column from the "Multicast_Group" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 32,768 to 65,535
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_remove_clause_tunnel_key(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP],
                          function,
                          &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_TUNNEL_KEY],
                          &datum);
}
void
sbrec_multicast_group_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_multicast_group_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_N_COLUMNS];

static void
sbrec_multicast_group_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_multicast_group_col_datapath. */
    c = &sbrec_multicast_group_col_datapath;
    c->name = "datapath";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Datapath_Binding";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_multicast_group_parse_datapath;
    c->unparse = sbrec_multicast_group_unparse_datapath;

    /* Initialize sbrec_multicast_group_col_name. */
    c = &sbrec_multicast_group_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_multicast_group_parse_name;
    c->unparse = sbrec_multicast_group_unparse_name;

    /* Initialize sbrec_multicast_group_col_ports. */
    c = &sbrec_multicast_group_col_ports;
    c->name = "ports";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Port_Binding";
    c->type.key.u.uuid.refType = OVSDB_REF_WEAK;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_multicast_group_parse_ports;
    c->unparse = sbrec_multicast_group_unparse_ports;

    /* Initialize sbrec_multicast_group_col_tunnel_key. */
    c = &sbrec_multicast_group_col_tunnel_key;
    c->name = "tunnel_key";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(32768);
    c->type.key.u.integer.max = INT64_C(65535);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_multicast_group_parse_tunnel_key;
    c->unparse = sbrec_multicast_group_unparse_tunnel_key;
}

/* Port_Binding table. */

static void
sbrec_port_binding_parse_chassis(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->chassis = sbrec_chassis_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_CHASSIS], &datum->keys[0].uuid));
    } else {
        row->chassis = NULL;
    }
}

static void
sbrec_port_binding_parse_datapath(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->datapath = sbrec_datapath_binding_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], &datum->keys[0].uuid));
    } else {
        row->datapath = NULL;
    }
}

static void
sbrec_port_binding_parse_logical_port(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->logical_port = datum->keys[0].string;
    } else {
        row->logical_port = "";
    }
}

static void
sbrec_port_binding_parse_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->mac = NULL;
    row->n_mac = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_mac) {
            row->mac = xmalloc(datum->n * sizeof *row->mac);
        }
        row->mac[row->n_mac] = datum->keys[i].string;
        row->n_mac++;
    }
}

static void
sbrec_port_binding_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);
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
sbrec_port_binding_parse_parent_port(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->parent_port = datum->keys[0].string;
    } else {
        row->parent_port = NULL;
    }
}

static void
sbrec_port_binding_parse_tag(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);
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
sbrec_port_binding_parse_tunnel_key(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->tunnel_key = datum->keys[0].integer;
    } else {
        row->tunnel_key = 0;
    }
}

static void
sbrec_port_binding_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
sbrec_port_binding_unparse_chassis(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_unparse_datapath(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_unparse_logical_port(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_unparse_mac(struct ovsdb_idl_row *row_)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    free(row->mac);
}

static void
sbrec_port_binding_unparse_options(struct ovsdb_idl_row *row_)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->options);
}

static void
sbrec_port_binding_unparse_parent_port(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_unparse_tag(struct ovsdb_idl_row *row_)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    free(row->tag);
}

static void
sbrec_port_binding_unparse_tunnel_key(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_init__(struct ovsdb_idl_row *row)
{
    sbrec_port_binding_init(sbrec_port_binding_cast(row));
}

/* Clears the contents of 'row' in table "Port_Binding". */
void
sbrec_port_binding_init(struct sbrec_port_binding *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->options);
}

/* Searches table "Port_Binding" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_port_binding *
sbrec_port_binding_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_port_binding_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING], uuid));
}

/* Returns a row in table "Port_Binding" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_port_binding *
sbrec_port_binding_first(const struct ovsdb_idl *idl)
{
    return sbrec_port_binding_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_port_binding *
sbrec_port_binding_next(const struct sbrec_port_binding *row)
{
    return sbrec_port_binding_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_port_binding_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING]);
}

unsigned int sbrec_port_binding_row_get_seqno(const struct sbrec_port_binding *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_port_binding *
sbrec_port_binding_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_port_binding_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING]));
}

const struct sbrec_port_binding
*sbrec_port_binding_track_get_next(const struct sbrec_port_binding *row)
{
    return sbrec_port_binding_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Port_Binding".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_delete(const struct sbrec_port_binding *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Port_Binding" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_port_binding *
sbrec_port_binding_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_port_binding_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING], NULL));
}

bool
sbrec_port_binding_is_updated(const struct sbrec_port_binding *row, enum sbrec_port_binding_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &sbrec_port_binding_columns[column]);
}

/* Causes the original contents of column "chassis" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "chassis" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "chassis" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "chassis" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "chassis" has already been modified (with
 *     sbrec_port_binding_set_chassis()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_chassis() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_chassis(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_CHASSIS]);
}

/* Causes the original contents of column "datapath" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "datapath" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "datapath" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "datapath" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "datapath" has already been modified (with
 *     sbrec_port_binding_set_datapath()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_datapath() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_datapath(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_DATAPATH]);
}

/* Causes the original contents of column "logical_port" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_port" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_port" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_port" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "logical_port" has already been modified (with
 *     sbrec_port_binding_set_logical_port()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_logical_port() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_logical_port(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_LOGICAL_PORT]);
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
 *     sbrec_port_binding_insert()).
 *
 *   - If "mac" has already been modified (with
 *     sbrec_port_binding_set_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_mac(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_MAC]);
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
 *     sbrec_port_binding_insert()).
 *
 *   - If "options" has already been modified (with
 *     sbrec_port_binding_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_options(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_OPTIONS]);
}

/* Causes the original contents of column "parent_port" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "parent_port" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "parent_port" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "parent_port" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "parent_port" has already been modified (with
 *     sbrec_port_binding_set_parent_port()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_parent_port() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_parent_port(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_PARENT_PORT]);
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
 *     sbrec_port_binding_insert()).
 *
 *   - If "tag" has already been modified (with
 *     sbrec_port_binding_set_tag()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_tag() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_tag(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TAG]);
}

/* Causes the original contents of column "tunnel_key" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tunnel_key" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tunnel_key" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tunnel_key" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "tunnel_key" has already been modified (with
 *     sbrec_port_binding_set_tunnel_key()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_tunnel_key() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_tunnel_key(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TUNNEL_KEY]);
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
 *     sbrec_port_binding_insert()).
 *
 *   - If "type" has already been modified (with
 *     sbrec_port_binding_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_type(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TYPE]);
}

/* Returns the "chassis" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes chassis's
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
 * directly through the "chassis" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_chassis(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_chassis);
}

/* Returns the "datapath" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes datapath's
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
 * directly through the "datapath" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_datapath(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_datapath);
}

/* Returns the "logical_port" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes logical_port's
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
 * directly through the "logical_port" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_logical_port(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_logical_port);
}

/* Returns the "mac" column's value from the "Port_Binding" table in 'row'
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
 * directly through the "mac" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_mac(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_mac);
}

/* Returns the "options" column's value from the "Port_Binding" table in 'row'
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
 * directly through the "options" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_options(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_options);
}

/* Returns the "parent_port" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes parent_port's
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
 * directly through the "parent_port" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_parent_port(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_parent_port);
}

/* Returns the "tag" column's value from the "Port_Binding" table in 'row'
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
 * directly through the "tag" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_tag(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_tag);
}

/* Returns the "tunnel_key" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tunnel_key's
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
 * directly through the "tunnel_key" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_tunnel_key(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_tunnel_key);
}

/* Returns the "type" column's value from the "Port_Binding" table in 'row'
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
 * directly through the "type" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_type(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_type);
}

/* Sets the "chassis" column from the "Port_Binding" table in 'row' to
 * the 'chassis' set.
 *
 * If "chassis" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_chassis(const struct sbrec_port_binding *row, const struct sbrec_chassis *chassis)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (chassis) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = chassis->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_CHASSIS], &datum);
}

/* Sets the "datapath" column from the "Port_Binding" table in 'row' to
 * 'datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_datapath(const struct sbrec_port_binding *row, const struct sbrec_datapath_binding *datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = datapath->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_DATAPATH], &datum);
}

/* Sets the "logical_port" column from the "Port_Binding" table in 'row' to
 * 'logical_port'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_logical_port(const struct sbrec_port_binding *row, const char *logical_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_port);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_LOGICAL_PORT], &datum);
}

/* Sets the "mac" column from the "Port_Binding" table in 'row' to
 * the 'mac' set with 'n_mac' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_mac(const struct sbrec_port_binding *row, const char **mac, size_t n_mac)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_mac;
    datum.keys = n_mac ? xmalloc(n_mac * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_mac; i++) {
        datum.keys[i].string = xstrdup(mac[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_MAC], &datum);
}

/* Sets the "options" column's value from the "Port_Binding" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
sbrec_port_binding_set_options(const struct sbrec_port_binding *row, const struct smap *options)
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
                        &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_OPTIONS],
                        &datum);
}


/* Sets the "parent_port" column from the "Port_Binding" table in 'row' to
 * the 'parent_port' set.
 *
 * If "parent_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_parent_port(const struct sbrec_port_binding *row, const char *parent_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (parent_port) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, parent_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_PARENT_PORT], &datum);
}

/* Sets the "tag" column from the "Port_Binding" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_tag(const struct sbrec_port_binding *row, const int64_t *tag, size_t n_tag)
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
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TAG], &datum);
}

/* Sets the "tunnel_key" column from the "Port_Binding" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 1 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_tunnel_key(const struct sbrec_port_binding *row, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TUNNEL_KEY], &datum);
}

/* Sets the "type" column from the "Port_Binding" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_type(const struct sbrec_port_binding *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TYPE], &datum);
}

/* Adds the value 'new_value' to the "chassis" set column from the "Port_Binding" table
 * in 'row'.
 *
 */
void
sbrec_port_binding_update_chassis_addvalue(const struct sbrec_port_binding *row, const struct sbrec_chassis *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = new_value->header_.uuid;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_CHASSIS],
                                    datum);
}

/* Deletes the value 'delete_value' from the "chassis" set column from the
 * "Port_Binding" table in 'row'.
 *
 */
void
sbrec_port_binding_update_chassis_delvalue(const struct sbrec_port_binding *row, const struct sbrec_chassis *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].uuid = delete_value->header_.uuid;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_CHASSIS],
                                    datum);
}

/* Adds the value 'new_value' to the "mac" set column from the "Port_Binding" table
 * in 'row'.
 *
 */
void
sbrec_port_binding_update_mac_addvalue(const struct sbrec_port_binding *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_MAC],
                                    datum);
}

/* Deletes the value 'delete_value' from the "mac" set column from the
 * "Port_Binding" table in 'row'.
 *
 */
void
sbrec_port_binding_update_mac_delvalue(const struct sbrec_port_binding *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_MAC],
                                    datum);
}

/* Sets an element of the "options" map column from the "Port_Binding" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
sbrec_port_binding_update_options_setkey(const struct sbrec_port_binding *row, const char *new_key, const char *new_value)
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
                                    &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_OPTIONS],
                                    datum);
}

/* Deletes an element of the "options" map column from the "Port_Binding" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
sbrec_port_binding_update_options_delkey(const struct sbrec_port_binding *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_OPTIONS],
                                    datum);
}

/* Adds the value 'new_value' to the "parent_port" set column from the "Port_Binding" table
 * in 'row'.
 *
 */
void
sbrec_port_binding_update_parent_port_addvalue(const struct sbrec_port_binding *row, const char *new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(new_value);

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_PARENT_PORT],
                                    datum);
}

/* Deletes the value 'delete_value' from the "parent_port" set column from the
 * "Port_Binding" table in 'row'.
 *
 */
void
sbrec_port_binding_update_parent_port_delvalue(const struct sbrec_port_binding *row, const char *delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_value);

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_PARENT_PORT],
                                    datum);
}

/* Adds the value 'new_value' to the "tag" set column from the "Port_Binding" table
 * in 'row'.
 *
 */
void
sbrec_port_binding_update_tag_addvalue(const struct sbrec_port_binding *row, int64_t new_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = new_value;

    ovsdb_idl_txn_write_partial_set(&row->header_,
                                    &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TAG],
                                    datum);
}

/* Deletes the value 'delete_value' from the "tag" set column from the
 * "Port_Binding" table in 'row'.
 *
 */
void
sbrec_port_binding_update_tag_delvalue(const struct sbrec_port_binding *row, int64_t delete_value)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->values);
    datum->values = NULL;

    datum->keys[0].integer = delete_value;

    ovsdb_idl_txn_delete_partial_set(&row->header_,
                                    &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TAG],
                                    datum);
}

/* Sets the "chassis" column from the "Port_Binding" table in 'row' to
 * the 'chassis' set.
 *
 * If "chassis" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_add_clause_chassis(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *chassis)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (chassis) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = *chassis;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_CHASSIS],
                          &datum);
}

/* Sets the "datapath" column from the "Port_Binding" table in 'row' to
 * 'datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_add_clause_datapath(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = *datapath;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_DATAPATH],
                          &datum);
}

/* Sets the "logical_port" column from the "Port_Binding" table in 'row' to
 * 'logical_port'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_add_clause_logical_port(struct ovsdb_idl *idl, enum ovsdb_function function, const char *logical_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_port);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_LOGICAL_PORT],
                          &datum);
}

/* Sets the "mac" column from the "Port_Binding" table in 'row' to
 * the 'mac' set with 'n_mac' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_add_clause_mac(struct ovsdb_idl *idl, enum ovsdb_function function, const char **mac, size_t n_mac)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_mac;
    datum.keys = n_mac ? xmalloc(n_mac * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_mac; i++) {
        datum.keys[i].string = CONST_CAST(char *, mac[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_MAC],
                          &datum);
    free(datum.keys);
}

/* Sets the "options" column's value from the "Port_Binding" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
sbrec_port_binding_add_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *options)
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
                                   &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                                   function,
                                   &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_OPTIONS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &sbrec_port_binding_col_options.type);
}


/* Sets the "parent_port" column from the "Port_Binding" table in 'row' to
 * the 'parent_port' set.
 *
 * If "parent_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_add_clause_parent_port(struct ovsdb_idl *idl, enum ovsdb_function function, const char *parent_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (parent_port) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, parent_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_PARENT_PORT],
                          &datum);
}

/* Sets the "tag" column from the "Port_Binding" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_add_clause_tag(struct ovsdb_idl *idl, enum ovsdb_function function, const int64_t *tag, size_t n_tag)
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
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TAG],
                          &datum);
}

/* Sets the "tunnel_key" column from the "Port_Binding" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 1 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_add_clause_tunnel_key(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TUNNEL_KEY],
                          &datum);
}

/* Sets the "type" column from the "Port_Binding" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_add_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TYPE],
                          &datum);
}
void
sbrec_port_binding_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_port_binding_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "chassis" column from the "Port_Binding" table in 'row' to
 * the 'chassis' set.
 *
 * If "chassis" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_remove_clause_chassis(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *chassis)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (chassis) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = *chassis;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_CHASSIS],
                          &datum);
}

/* Sets the "datapath" column from the "Port_Binding" table in 'row' to
 * 'datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_remove_clause_datapath(struct ovsdb_idl *idl, enum ovsdb_function function, const struct uuid *datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = *datapath;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_DATAPATH],
                          &datum);
}

/* Sets the "logical_port" column from the "Port_Binding" table in 'row' to
 * 'logical_port'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_remove_clause_logical_port(struct ovsdb_idl *idl, enum ovsdb_function function, const char *logical_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_port);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_LOGICAL_PORT],
                          &datum);
}

/* Sets the "mac" column from the "Port_Binding" table in 'row' to
 * the 'mac' set with 'n_mac' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_remove_clause_mac(struct ovsdb_idl *idl, enum ovsdb_function function, const char **mac, size_t n_mac)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_mac;
    datum.keys = n_mac ? xmalloc(n_mac * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_mac; i++) {
        datum.keys[i].string = CONST_CAST(char *, mac[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_MAC],
                          &datum);
    free(datum.keys);
}

/* Sets the "options" column's value from the "Port_Binding" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
sbrec_port_binding_remove_clause_options(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *options)
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

    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                                      function,
                                      &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_OPTIONS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &sbrec_port_binding_col_options.type);
}


/* Sets the "parent_port" column from the "Port_Binding" table in 'row' to
 * the 'parent_port' set.
 *
 * If "parent_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_remove_clause_parent_port(struct ovsdb_idl *idl, enum ovsdb_function function, const char *parent_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (parent_port) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, parent_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_PARENT_PORT],
                          &datum);
}

/* Sets the "tag" column from the "Port_Binding" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_remove_clause_tag(struct ovsdb_idl *idl, enum ovsdb_function function, const int64_t *tag, size_t n_tag)
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
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TAG],
                          &datum);
}

/* Sets the "tunnel_key" column from the "Port_Binding" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 1 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_remove_clause_tunnel_key(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TUNNEL_KEY],
                          &datum);
}

/* Sets the "type" column from the "Port_Binding" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_remove_clause_type(struct ovsdb_idl *idl, enum ovsdb_function function, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING],
                          function,
                          &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TYPE],
                          &datum);
}
void
sbrec_port_binding_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_port_binding_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column sbrec_port_binding_columns[SBREC_PORT_BINDING_N_COLUMNS];

static void
sbrec_port_binding_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_port_binding_col_chassis. */
    c = &sbrec_port_binding_col_chassis;
    c->name = "chassis";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Chassis";
    c->type.key.u.uuid.refType = OVSDB_REF_WEAK;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_chassis;
    c->unparse = sbrec_port_binding_unparse_chassis;

    /* Initialize sbrec_port_binding_col_datapath. */
    c = &sbrec_port_binding_col_datapath;
    c->name = "datapath";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Datapath_Binding";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_datapath;
    c->unparse = sbrec_port_binding_unparse_datapath;

    /* Initialize sbrec_port_binding_col_logical_port. */
    c = &sbrec_port_binding_col_logical_port;
    c->name = "logical_port";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_logical_port;
    c->unparse = sbrec_port_binding_unparse_logical_port;

    /* Initialize sbrec_port_binding_col_mac. */
    c = &sbrec_port_binding_col_mac;
    c->name = "mac";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_mac;
    c->unparse = sbrec_port_binding_unparse_mac;

    /* Initialize sbrec_port_binding_col_options. */
    c = &sbrec_port_binding_col_options;
    c->name = "options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_options;
    c->unparse = sbrec_port_binding_unparse_options;

    /* Initialize sbrec_port_binding_col_parent_port. */
    c = &sbrec_port_binding_col_parent_port;
    c->name = "parent_port";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_parent_port;
    c->unparse = sbrec_port_binding_unparse_parent_port;

    /* Initialize sbrec_port_binding_col_tag. */
    c = &sbrec_port_binding_col_tag;
    c->name = "tag";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_tag;
    c->unparse = sbrec_port_binding_unparse_tag;

    /* Initialize sbrec_port_binding_col_tunnel_key. */
    c = &sbrec_port_binding_col_tunnel_key;
    c->name = "tunnel_key";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1);
    c->type.key.u.integer.max = INT64_C(32767);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_tunnel_key;
    c->unparse = sbrec_port_binding_unparse_tunnel_key;

    /* Initialize sbrec_port_binding_col_type. */
    c = &sbrec_port_binding_col_type;
    c->name = "type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_type;
    c->unparse = sbrec_port_binding_unparse_type;
}

/* SB_Global table. */

static void
sbrec_sb_global_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_sb_global *row = sbrec_sb_global_cast(row_);
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
sbrec_sb_global_parse_nb_cfg(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_sb_global *row = sbrec_sb_global_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->nb_cfg = datum->keys[0].integer;
    } else {
        row->nb_cfg = 0;
    }
}

static void
sbrec_sb_global_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct sbrec_sb_global *row = sbrec_sb_global_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
sbrec_sb_global_unparse_nb_cfg(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_sb_global_init__(struct ovsdb_idl_row *row)
{
    sbrec_sb_global_init(sbrec_sb_global_cast(row));
}

/* Clears the contents of 'row' in table "SB_Global". */
void
sbrec_sb_global_init(struct sbrec_sb_global *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "SB_Global" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_sb_global *
sbrec_sb_global_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_sb_global_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL], uuid));
}

/* Returns a row in table "SB_Global" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_sb_global *
sbrec_sb_global_first(const struct ovsdb_idl *idl)
{
    return sbrec_sb_global_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_sb_global *
sbrec_sb_global_next(const struct sbrec_sb_global *row)
{
    return sbrec_sb_global_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_sb_global_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL]);
}

unsigned int sbrec_sb_global_row_get_seqno(const struct sbrec_sb_global *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_sb_global *
sbrec_sb_global_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_sb_global_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL]));
}

const struct sbrec_sb_global
*sbrec_sb_global_track_get_next(const struct sbrec_sb_global *row)
{
    return sbrec_sb_global_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "SB_Global".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_sb_global_delete(const struct sbrec_sb_global *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "SB_Global" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_sb_global *
sbrec_sb_global_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_sb_global_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL], NULL));
}

bool
sbrec_sb_global_is_updated(const struct sbrec_sb_global *row, enum sbrec_sb_global_column_id column)
{
    return ovsdb_idl_track_is_updated(&row->header_, &sbrec_sb_global_columns[column]);
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
 *     sbrec_sb_global_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     sbrec_sb_global_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_sb_global_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_sb_global_verify_external_ids(const struct sbrec_sb_global *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_EXTERNAL_IDS]);
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
 *     sbrec_sb_global_insert()).
 *
 *   - If "nb_cfg" has already been modified (with
 *     sbrec_sb_global_set_nb_cfg()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_sb_global_set_nb_cfg() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_sb_global_verify_nb_cfg(const struct sbrec_sb_global *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_NB_CFG]);
}

/* Returns the "external_ids" column's value from the "SB_Global" table in 'row'
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
 * directly through the "external_ids" member in sbrec_sb_global. */
const struct ovsdb_datum *
sbrec_sb_global_get_external_ids(const struct sbrec_sb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_sb_global_col_external_ids);
}

/* Returns the "nb_cfg" column's value from the "SB_Global" table in 'row'
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
 * directly through the "nb_cfg" member in sbrec_sb_global. */
const struct ovsdb_datum *
sbrec_sb_global_get_nb_cfg(const struct sbrec_sb_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_sb_global_col_nb_cfg);
}

/* Sets the "external_ids" column's value from the "SB_Global" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_sb_global_set_external_ids(const struct sbrec_sb_global *row, const struct smap *external_ids)
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
                        &sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "nb_cfg" column from the "SB_Global" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_sb_global_set_nb_cfg(const struct sbrec_sb_global *row, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_NB_CFG], &datum);
}

/* Sets an element of the "external_ids" map column from the "SB_Global" table in 'row'
 * to 'new_value' given the key value 'new_key'.
 *
 */
void
sbrec_sb_global_update_external_ids_setkey(const struct sbrec_sb_global *row, const char *new_key, const char *new_value)
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
                                    &sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_EXTERNAL_IDS],
                                    datum);
}

/* Deletes an element of the "external_ids" map column from the "SB_Global" table in 'row'
 * given the key value 'delete_key'.
 *
 */
void
sbrec_sb_global_update_external_ids_delkey(const struct sbrec_sb_global *row, const char *delete_key)
{
    struct ovsdb_datum *datum;

    ovs_assert(inited);

    datum = xmalloc(sizeof *datum);
    datum->n = 1;
    datum->keys = xmalloc(datum->n * sizeof *datum->keys);
    datum->values = NULL;

    datum->keys[0].string = xstrdup(delete_key);

    ovsdb_idl_txn_delete_partial_map(&row->header_,
                                    &sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_EXTERNAL_IDS],
                                    datum);
}

/* Sets the "external_ids" column's value from the "SB_Global" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_sb_global_add_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
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
                                   &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL],
                                   function,
                                   &sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_EXTERNAL_IDS],
                                   &datum);

    ovsdb_datum_destroy(&datum, &sbrec_sb_global_col_external_ids.type);
}


/* Sets the "nb_cfg" column from the "SB_Global" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_sb_global_add_clause_nb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL],
                          function,
                          &sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_NB_CFG],
                          &datum);
}
void
sbrec_sb_global_add_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_sb_global_add_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_add_clause(idl, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL], OVSDB_F_TRUE, NULL, &datum);
}

/* Sets the "external_ids" column's value from the "SB_Global" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_sb_global_remove_clause_external_ids(struct ovsdb_idl *idl, enum ovsdb_function function, const struct smap *external_ids)
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

    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL],
                                      function,
                                      &sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_EXTERNAL_IDS],
                                      &datum);

    ovsdb_datum_destroy(&datum, &sbrec_sb_global_col_external_ids.type);
}


/* Sets the "nb_cfg" column from the "SB_Global" table in 'row' to
 * 'nb_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_sb_global_remove_clause_nb_cfg(struct ovsdb_idl *idl, enum ovsdb_function function, int64_t nb_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = nb_cfg;
    datum.values = NULL;
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL],
                          function,
                          &sbrec_sb_global_columns[SBREC_SB_GLOBAL_COL_NB_CFG],
                          &datum);
}
void
sbrec_sb_global_remove_clause_false(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL], OVSDB_F_FALSE, NULL, &datum);
}
void
sbrec_sb_global_remove_clause_true(struct ovsdb_idl *idl)
{
    struct ovsdb_datum datum;

    ovsdb_datum_init_empty(&datum);
    ovsdb_idl_condition_remove_clause(idl, &sbrec_table_classes[SBREC_TABLE_SB_GLOBAL], OVSDB_F_TRUE, NULL, &datum);
}

struct ovsdb_idl_column sbrec_sb_global_columns[SBREC_SB_GLOBAL_N_COLUMNS];

static void
sbrec_sb_global_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_sb_global_col_external_ids. */
    c = &sbrec_sb_global_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_sb_global_parse_external_ids;
    c->unparse = sbrec_sb_global_unparse_external_ids;

    /* Initialize sbrec_sb_global_col_nb_cfg. */
    c = &sbrec_sb_global_col_nb_cfg;
    c->name = "nb_cfg";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_sb_global_parse_nb_cfg;
    c->unparse = sbrec_sb_global_unparse_nb_cfg;
}

struct ovsdb_idl_table_class sbrec_table_classes[SBREC_N_TABLES] = {
    {"Address_Set", true,
     sbrec_address_set_columns, ARRAY_SIZE(sbrec_address_set_columns),
     sizeof(struct sbrec_address_set), sbrec_address_set_init__},
    {"Chassis", true,
     sbrec_chassis_columns, ARRAY_SIZE(sbrec_chassis_columns),
     sizeof(struct sbrec_chassis), sbrec_chassis_init__},
    {"DHCP_Options", true,
     sbrec_dhcp_options_columns, ARRAY_SIZE(sbrec_dhcp_options_columns),
     sizeof(struct sbrec_dhcp_options), sbrec_dhcp_options_init__},
    {"DHCPv6_Options", true,
     sbrec_dhcpv6_options_columns, ARRAY_SIZE(sbrec_dhcpv6_options_columns),
     sizeof(struct sbrec_dhcpv6_options), sbrec_dhcpv6_options_init__},
    {"Datapath_Binding", true,
     sbrec_datapath_binding_columns, ARRAY_SIZE(sbrec_datapath_binding_columns),
     sizeof(struct sbrec_datapath_binding), sbrec_datapath_binding_init__},
    {"Encap", false,
     sbrec_encap_columns, ARRAY_SIZE(sbrec_encap_columns),
     sizeof(struct sbrec_encap), sbrec_encap_init__},
    {"Logical_Flow", true,
     sbrec_logical_flow_columns, ARRAY_SIZE(sbrec_logical_flow_columns),
     sizeof(struct sbrec_logical_flow), sbrec_logical_flow_init__},
    {"MAC_Binding", true,
     sbrec_mac_binding_columns, ARRAY_SIZE(sbrec_mac_binding_columns),
     sizeof(struct sbrec_mac_binding), sbrec_mac_binding_init__},
    {"Multicast_Group", true,
     sbrec_multicast_group_columns, ARRAY_SIZE(sbrec_multicast_group_columns),
     sizeof(struct sbrec_multicast_group), sbrec_multicast_group_init__},
    {"Port_Binding", true,
     sbrec_port_binding_columns, ARRAY_SIZE(sbrec_port_binding_columns),
     sizeof(struct sbrec_port_binding), sbrec_port_binding_init__},
    {"SB_Global", true,
     sbrec_sb_global_columns, ARRAY_SIZE(sbrec_sb_global_columns),
     sizeof(struct sbrec_sb_global), sbrec_sb_global_init__},
};

struct ovsdb_idl_class sbrec_idl_class = {
    "OVN_Southbound", sbrec_table_classes, ARRAY_SIZE(sbrec_table_classes)
};

void
sbrec_init(void)
{
    if (inited) {
        return;
    }
    assert_single_threaded();
    inited = true;

    sbrec_address_set_columns_init();
    sbrec_chassis_columns_init();
    sbrec_dhcp_options_columns_init();
    sbrec_dhcpv6_options_columns_init();
    sbrec_datapath_binding_columns_init();
    sbrec_encap_columns_init();
    sbrec_logical_flow_columns_init();
    sbrec_mac_binding_columns_init();
    sbrec_multicast_group_columns_init();
    sbrec_port_binding_columns_init();
    sbrec_sb_global_columns_init();
}

/* Return the schema version.  The caller must not free the returned value. */
const char *
sbrec_get_db_version(void)
{
    return "1.8.0";
}

