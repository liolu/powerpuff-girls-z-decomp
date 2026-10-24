# Powerpuff Girls Z decompilation (JP)

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/powerpuff-girls-z-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/powerpuff-girls-z-decomp) [![Data](https://bytematch.dev/liolu/powerpuff-girls-z-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/powerpuff-girls-z-decomp) [![Functions](https://bytematch.dev/liolu/powerpuff-girls-z-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/powerpuff-girls-z-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `YPPJ`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`█████░░░░░░░░░░░░░░░` **26.00%** of the code matched · data 0.00% · 1489/2361 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Reused from other decompilations, not merged into files yet | 904 | 904/904 | 18.62% |
| Auto-matched (raw m2c output, to clean up) | 585 | 585/585 | 7.39% |

*Updated 2026-10-24 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py jp
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
