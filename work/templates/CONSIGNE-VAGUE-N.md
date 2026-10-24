# Wave N Instructions — <campaign> (ROOT, <date>)

> Wave anchor. General state: `docs/STATE.md`. Wave baseline:
> `master`/`main` = `<commit>`.

## Departure

- What is already matched, with exact figures.
- What remains open, and origin of the wave queue.

## Foundation lot E0 — delivered

- Extracted modules, hashes, manifests.
- Boundaries: one bounded candidate per boundary, with boundary evidence.
- Shortlist: `module, offset, size, boundary source, raw body sha,
  shared modules, shared placements`, **sorted by yield**
  (number of placements carrying the identical raw body).
- Tooling: the per-function harness, and proof that it refuses invalid inputs.

## Translation lots (N)

| lot | modules | targets |
|---|---|---|
| L01 | | |

Brief: `work/templates/BRIEF-COMMUN.md`. Lists: `work/lots/L*.tsv`.

## Integration (ROOT)

1. Copy exact bodies from `work/<LOT>/bodies/` to `src/`.
2. Recompute hashes, update the placement table.
3. Run the complete program gate, tests, and repository guard.
4. Single writer in the clone: ROOT only.

## Immediate recovery if interrupted

1. `ls work/*/RAPPORT.md`, `cat work/*/resultats.tsv`.
2. Exact body -> `work/<LOT>/bodies/`; reverify before integrating.
3. Do not rerun E0: modules, bounds, and harness are delivered.
