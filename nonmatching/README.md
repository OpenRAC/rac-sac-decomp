# Nonmatching C

A failed match stays here, indexed by function. It does not count toward
progress. Before parking a function, keep its best useful C attempt in this
tree with the measured difference and a reason to retry. A private scratch
copy is not the shared record.

`nonmatching/levels/` holds level functions. `nonmatching/boot/` holds boot
functions. Name the file and the definition after the function. Distinct
alternatives go under `alternatives/` with a form suffix.

The attempt must be authored C: no inline assembly, no fixed registers, and
no raw instruction words. Record the compiler profile, the first difference,
and what would justify another try.
