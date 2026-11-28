/* GCSASTEROID_PayloadProcess__FP11GCS_PayloadPC14GCS_CurvePoint -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GCS_Payload {
    char pad[0x74];
    struct GCS_Payload *next;
} GCS_Payload;

typedef struct GCS_CurvePoint GCS_CurvePoint;

extern GCS_Payload *g_payloadHead;

void GCSASTEROID_PayloadProcess__FP11GCS_PayloadPC14GCS_CurvePoint(
    GCS_Payload *payload, const GCS_CurvePoint *point)
{
    payload->next = g_payloadHead;
    g_payloadHead = payload;
}
