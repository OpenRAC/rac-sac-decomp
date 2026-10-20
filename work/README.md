# Work templates

The private workspace follows the sibling projects' layout. The templates
here are the public part of it; the rest is ignored by git.

```
work/
  E0/          the foundation lot: extraction, identity, bounds, shortlist, harness
  lots/        the lot tables (L01.tsv, L02.tsv, ...), one per agent
  <LOT>/       one agent's dossier:
                 bodies/        one authored C source per placement
                 abandonnes/    parked attempts, with their first difference
                 work/          the agent's scratch (never published)
                 resultats.tsv  the measured table
                 RAPPORT.md     what was measured
  gate/        the private gate receipts
```

`CONSIGNE-VAGUE-N.md` is the root's plan for a wave: the departure state, the
lots, and the integration steps. `BRIEF-COMMUN.md` is the brief every agent
of the wave reads. `RAPPORT.md` is what an agent hands back.
