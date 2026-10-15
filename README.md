# Powerpuff Girls Z decompilation (JP)

Nintendo DS, game code `YPPJ`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`░░░░░░░░░░░░░░░░░░░░` **0.43%** of the code matched · data 0.00% · 41/2360 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Reused from other decompilations, not merged into files yet | 41 | 41/41 | 0.43% |

*Updated 2026-10-15 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py jp
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
