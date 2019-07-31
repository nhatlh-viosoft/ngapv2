#include <stdint.h>
#include <unistd.h>
#include "ngap_asn1c.h"

typedef struct NGAP_NGAP_PDU ngap_message_t;

int ngap_decode_pdu(ngap_message_t *message, pkbuf_t *pkbuf);
int ngap_encode_pdu(pkbuf_t **pkbuf, ngap_message_t *message);
int ngap_free_pdu(ngap_message_t *message);
