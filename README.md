<p align="center">
  <a href="https://openrac.dev/">
    <picture>
      <source media="(prefers-color-scheme: dark)" srcset="docs/assets/openrac-logo-dark.svg">
      <img src="docs/assets/openrac-logo-light.svg" alt="OpenRAC" width="360">
    </picture>
  </a>
</p>

<h3 align="center">Ratchet &amp; Clank: Secret Agent Clank decompilation project</h3>

<p align="center">
  <a href="https://bytematch.dev/OpenRAC/rac-sac-decomp"><img src="https://bytematch.dev/OpenRAC/rac-sac-decomp.svg?mode=shield&label=Code&measure=matched_code_percent" alt="Code matched"></a>
  <a href="https://openrac.dev/"><img src="https://img.shields.io/badge/website-openrac.dev-e8a317" alt="openrac.dev"></a>
  <a href="https://discord.gg/Sfd2B54PDG"><img src="https://img.shields.io/badge/Discord-join%20us-5865F2?logo=discord&logoColor=white" alt="Discord"></a>
</p>

<p align="center">
  A work-in-progress, matching decompilation of <i>Ratchet &amp; Clank: Secret Agent Clank</i> (2008) for PlayStation 2.<br>
  The executable and its relocatable modules, rebuilt as C that compiles back to the same bytes as retail at every placement.
</p>

> [!WARNING]
> This repository has no game data, executables, disc images or proprietary toolchains.
> You need your own copy of the game. Read [LEGAL.md](LEGAL.md) before contributing.

## Progress

`python3 tools/progress.py` prints the counts. Live numbers are on [ByteMatch](https://bytematch.dev/OpenRAC/rac-sac-decomp),
and [docs/state.md](docs/state.md) says where the work stands.

## Supported versions

| Release | Region | Boot executable | Code | Notes |
| --- | --- | --- | --- | --- |
| v1.00 | NTSC-U | `SCUS_976.23` | [![Code](https://bytematch.dev/OpenRAC/rac-sac-decomp.svg?mode=shield&label=Code&measure=matched_code_percent)](https://bytematch.dev/OpenRAC/rac-sac-decomp) | Primary version |
| v1.00 | PAL | `SCES_554.96` | [![Code](https://bytematch.dev/OpenRAC/rac-sac-decomp.svg?mode=shield&label=Code&measure=matched_code_percent&version=SCES_554.96)](https://bytematch.dev/OpenRAC/rac-sac-decomp/SCES_554.96) | Shares the US C source |

Expected SHA-1 of the primary disc image:

```text
6f4a37c8157e3e1214abed01406cbfce42e22cc6
```

Program tables, hashes and the cross-version checks: [docs/setup/versions.md](docs/setup/versions.md).

## Quick setup

You need Python 3.10+ and your own disc images in `baserom/`.

```sh
git clone https://github.com/OpenRAC/rac-sac-decomp.git && cd rac-sac-decomp
mkdir -p baserom/us && ln -sf /path/to/your-disc.iso baserom/us/SCUS_976.23.iso && ln -sf /path/to/your-disc.iso baserom/SCUS_976.23.iso
python3 tools/versions.py check
python3 tools/check_repository.py
python3 -m unittest discover -s tests
```

The PAL disc and every step in detail: [docs/setup/building.md](docs/setup/building.md).

## Contributing

Start with [CONTRIBUTING.md](CONTRIBUTING.md) and [AGENTS.md](AGENTS.md). All docs are listed in [docs/README.md](docs/README.md):

- [docs/state.md](docs/state.md) - where the work stands, measured, and what is next
- [docs/setup/](docs/setup) - setup and the supported versions
- [docs/contributing/](docs/contributing) - the method, the gates, what counts as evidence, and reuse from sibling projects
- [docs/agents/](docs/agents) - the starter prompt for AI agents

Keep the build matching retail. Never commit game images, extracted game data or proprietary tool binaries.

## Credits

- [OpenRAC](https://openrac.dev) and the sibling decompilations: [rac1-decomp](https://github.com/OpenRAC/rac1-decomp),
  [rac2-gc-decomp](https://github.com/OpenRAC/rac2-gc-decomp) and [rac5-sm-decomp](https://github.com/OpenRAC/rac5-sm-decomp).

## License

Code written for this project is under the [GNU General Public License v3.0](LICENSE). Code reconstructed from
third-party binaries belongs to its copyright holders; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
