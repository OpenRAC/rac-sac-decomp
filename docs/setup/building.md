# Setup

## 1. Setup & Dependencies

Ensure Python 3.10+ is available on your machine:

```bash
git clone https://github.com/OpenRAC/rac-sac-decomp.git
cd rac-sac-decomp
```

## 2. Provide Your Retail Discs

Place your disc images (or create symlinks) in `baserom/` (your own `LOCAL.md`, never committed, can list the local paths):

```bash
mkdir -p baserom/us baserom/pal

# USA release (Expected SHA-1: 6f4a37c8157e3e1214abed01406cbfce42e22cc6)
ln -sf "/path/to/Secret Agent Clank (USA).iso" baserom/us/SCUS_976.23.iso
ln -sf "/path/to/Secret Agent Clank (USA).iso" baserom/SCUS_976.23.iso

# Europe release (Expected SHA-1: ba1ca463f0900b61eaedf875f1791672979ae0d3)
ln -sf "/path/to/Secret Agent Clank (Europe).iso" baserom/pal/SCES_554.96.iso
```

## 3. Verify Dumps and Checks

```bash
# Verify both disc images against committed program specifications
python3 tools/versions.py check

# Run the repository checks and test suite
python3 tools/check_repository.py
python3 -m unittest discover -s tests

# Check decompilation progress
python3 tools/progress.py

# Cross-version comparison (compare US vs PAL)
python3 tools/version_check.py --version pal
```
