# COMMON BRIEF — Wave N, <campaign> (<date>)

To be read in full before any action. Common to all agents in the wave.

## 1. Context

What the wave must produce, in one sentence. What is already matched, and
what remains open.

## 2. Where is what

| Element | Path | Role |
|---|---|---|
| Repository | this repository | **READ-ONLY** for a lot agent |
| Local target | `LOCAL.md` | disc image, hashes, toolchain |
| Retail modules | `work/E0/modules/` | extracted target |
| Boundaries | `work/E0/bounds/` | bounded candidates |
| Harness | `work/E0/harness.py` | compile, link, compare to retail |
| Your list | `work/lots/<LOT>.tsv` | your targets |
| **Your folder** | `work/<LOT>/` | **write only here** |

## 3. Harness

```
python3 work/E0/harness.py <MODULE> <OFFSET> <src.c> [--size N]
```

The byte-for-byte comparison of the compiled body with the retail bytes is
the **only proof**. Otherwise, the harness displays the first difference (offset
+ bytes) and the attempted profile. Exit codes: 0 = exact match, 1 = measured
mismatch, 2 = refusal. **A refusal is not an attempt.**

## 4. Hard rules

1. **Never write to the repository** outside of `work/<LOT>/`.
2. **Pure C**: no inline/global asm, no `.word`, no fixed registers,
   no artificial barriers.
3. **No codegen steering**: if the byte does not match, look for the authentic
   form of the routine, not a construct that shifts register allocation.
4. **Never run** the global gates or a full build — ROOT integrates.
5. **Bound your target**: the extent comes from your list; verify the actual
   return before concluding.
6. After three attempts within the same mismatch class: park the body in
   `abandonnes/` with the first difference and a reopening condition.
7. No assumptions: only what the harness has printed.

## 5. Lot deliverables

```
bodies/<MODULE>_<OFFSET>.c
resultats.tsv        module<TAB>offset<TAB>size<TAB>profile<TAB>as<TAB>status
abandonnes/          parked bodies + NOTE (1st diff, reopening condition)
RAPPORT.md
```

## 6. Final report to ROOT

**English, 20 lines maximum**: number of exacts, list of
`module:offset size profile`, notable near-matches (n/total), blockers,
leads.
