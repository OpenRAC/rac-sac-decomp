# Docs

Every doc of this repository. New here? Read [state.md](state.md), then [building.md](setup/building.md) and
[method.md](contributing/method.md).

| Doc | What it covers |
|---|---|
| [state.md](state.md) | Anchor file: current measured state, verified metrics and next steps |
| [setup/building.md](setup/building.md) | Setup, your discs and the checks |
| [setup/versions.md](setup/versions.md) | Supported releases (USA and Europe), program tables and cross-version checks |
| [contributing/method.md](contributing/method.md) | The wave protocol, from the foundation lot to pull request integration |
| [contributing/evidence.md](contributing/evidence.md) | What counts as matching proof, and what does not |
| [contributing/gates.md](contributing/gates.md) | The three gates: body gate, placement gate and complete-program gate |
| [contributing/reuse.md](contributing/reuse.md) | Method and toolchain reuse from sibling OpenRAC projects (RAC1, RAC2, RAC5) |
| [agents/prompt.md](agents/prompt.md) | Starter prompt: project identity, workstation setup and agent mandate |

## Where things are

| Path | Description |
|---|---|
| `src/` | Accepted authored C/C++ definitions, one per function |
| `src/levels/bodies/` | Proved bodies of the SNR2 level modules, one file per distinct body |
| `src/boot/bodies/` | Proved bodies of the boot executable |
| `nonmatching/` | Useful but nonmatching attempts, indexed by function |
| `config/` | Pinned metadata: target identities, toolchain profile, placement tables |
| `config/versions/` | Multi-version configurations (`us/`, `pal/`): `programs.tsv`, `modules.tsv`, `target.json` |
| `config/levels/` | Level module catalogues, code intervals, baseline, and placement tables |
| `config/boot/` | Boot executable inventory, slot surveys, and placement tables |
| `tools/` | Reusable tools (versions, rel, elf, disc, inspection, baseline, gates) with tests |
| `tests/` | Unit tests for repository tools (synthetic test data only) |
| `docs/` | Method, gates, evidence standards, reuse, and version documentation |
| `work/` | Private workspace: modules, bounds, lots, agent dossiers (git-ignored except templates) |
