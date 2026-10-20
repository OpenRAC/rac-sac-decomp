# STATE — the anchor of the workspace

> **Convention** : this file is the resume. Read it first, update it at every
> milestone. Everything else in the private workspace is disposable; this file
> is not.

Last update: **2026-10-20** (project opened, nothing measured yet).

## 1. Where things are

| Element | Path | Role |
| --- | --- | --- |
| Public repository | this repository | authored sources, tools, documentation |
| Local target | `LOCAL.md` (git-ignored) | the game image, the pinned hashes, the toolchain |
| Private workspace | `work/` (git-ignored except the templates) | extracted modules, bounds, lots, agent dossiers |
| Anchor | `docs/STATE.md` | this file |

The private workspace is local-only on purpose: the project publishes written
source, tools and metadata, never retail bytes, listings or raw reports.

## 2. Configuration to do before the first wave

Nothing has been measured yet. The following must be pinned first, and the
result written in this section:

- [ ] **The target.** Which exact release and region is the reference (build
      id, language, revision)? Its size and SHA-1/SHA-256 go into a pinned
      config file, never into a commit as the image itself.
- [ ] **The identity check.** A tool that refuses an image whose size or
      hashes do not match the pinned values, so a wrong revision cannot enter
      the campaign by accident.
- [ ] **The extraction.** Which modules or segments the program is made of,
      how they are named, and where they are written locally.
- [ ] **The symbol and boundary sources.** Which tables give the candidate
      entries, and which give their extents.
- [ ] **The toolchain.** The compiler, the assembler, the linker, the flags,
      and the hashes of each binary. Until they are pinned, no body can be
      proved.
- [ ] **The gates.** The complete-program gate (rebuild and compare hashes)
      and the C gate (recompile the bodies, place them, rebuild, compare).
- [ ] **The tests.** The repository guard and the unit tests.

Record here, as soon as each is done: the paths, the hashes, and the exact
command that reproduces the measurement.

## 3. State at the opening of the project

- The public repository holds the method, the rules, the templates and the
  starter prompt. **No function has been measured yet.**
- The sibling projects (see `docs/REUSE.md`) hold the reusable method and,
  for some of their routines, the authentic source form that this project
  will need.

## 4. The first wave — plan

1. **E0 (foundation)**: extract, pin, bound, shortlist. Deliver
   `work/E0/` with the manifest, the bounds and the shortlist.
2. **Lots**: cut the shortlist by region and by size band.
3. **Translation**: one agent per lot, harness-proved bodies only.
4. **Integration**: the root gates, catalogs, documents and opens the pull
   request.

## 5. Resume checklist

If a session is interrupted:

1. `ls work/*/RAPPORT.md` and read the reports.
2. `cat work/*/resultats.tsv` for the measured table.
3. A body proved but not integrated: re-prove it with the harness, then hand
   it to the root. Do not re-run the foundation lot.
4. Update this file before stopping.

## 6. Open decisions

- Which release is the reference, and is a European or a later revision
  acceptable as a second target?
- Is the reference program a single executable, a set of modules, or both?
- Which sibling project's boundary tools fit this target's format?
