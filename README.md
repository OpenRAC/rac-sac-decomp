# Ratchet & Clank : Secret Agent Clank — matching decompilation

An early matching-decompilation workspace for **Ratchet & Clank: Secret Agent
Clank**. The goal is to rebuild the retail program in **C/C++ compiled**, with
a proof: the bytes the qualified toolchain produces must be **identical** to
the retail bytes, at every applicable placement, and the complete program must
still hash to the pinned retail hash.

This repository is a **configured starting point**. The method, the rules, the
templates and the tooling layout are in place; the local target (the game
image, the pinned hashes, the toolchain) still has to be pinned before the
first campaign. Nothing has been measured yet, and nothing is claimed.

## Start here

| Document | What it gives you |
| --- | --- |
| [PROMPT.md](PROMPT.md) | **the starter prompt** — what an agent reads, and the prompt to launch a wave |
| [AGENTS.md](AGENTS.md) | the ten working rules, and what must never be committed |
| [docs/METHOD.md](docs/METHOD.md) | the wave protocol, from the foundation lot to the pull request |
| [docs/EVIDENCE.md](docs/EVIDENCE.md) | what counts as a proof, and what does not |
| [docs/STATE.md](docs/STATE.md) | the anchor: where the project stands, and what to do next |
| [docs/REUSE.md](docs/REUSE.md) | what to take from the sibling OpenRAC projects |

## Layout

| Path | Role |
| --- | --- |
| `src/` | accepted authored C/C++ definitions, one per function |
| `nonmatching/` | useful but nonmatching attempts, indexed by function |
| `tools/` | reusable tools, with tests |
| `config/` | pinned metadata: target identity, compiler profiles, placement tables |
| `docs/` | the method, the evidence standard, the anchor |
| `work/` | the private workspace: modules, bounds, lots, agent dossiers (git-ignored except the templates) |

## The method in one paragraph

A **foundation lot** extracts the target locally, pins its identity, computes
the bounded candidate entries and builds a shortlist ranked by leverage (how
many placements carry the same body). The shortlist is cut into **lots**; one
agent per lot writes one authored C source per target and **proves** it by
compiling, linking at the measured offset and comparing every byte with the
retail bytes. The **root** re-measures every claim, merges the bodies that
compile to the same code, writes the placement table, runs the
complete-program gates, regenerates the catalogues and the progress snapshot,
runs the tests, and opens the pull request. Bodies that will not match are
parked with their first difference and a reopening condition, never counted.

## Public boundary

This repository publishes **written** source, reusable tools, research
metadata (names, addresses, hashes) and documentation. It never publishes
disc images, retail executables, extracted modules, instruction listings,
disassembly, assets, proprietary toolchains, SDK sources, or leaked or NDA
source. See `AGENTS.md` and `LEGAL.md`.

Obtain your own lawful copy of the game; the project cannot supply one, and
the local tooling and receipts stay on your machine.

## Licence

The independently authored material here is GPL-3.0, like the sibling
projects; see `LICENSE`. That licence does not cover the game, its assets or
any proprietary toolchain. Contributions should be original or compatible with
that licence, with attribution where required.
