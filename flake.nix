{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";

    zmk-nix = {
      url = "github:lilyinstarlight/zmk-nix";
      inputs.nixpkgs.follows = "nixpkgs";
    };
  };

  outputs =
    {
      self,
      nixpkgs,
      zmk-nix,
    }:
    let
      forAllSystems = nixpkgs.lib.genAttrs (nixpkgs.lib.attrNames zmk-nix.packages);

    in
    {
      packages = forAllSystems (system: {
        firmware = zmk-nix.legacyPackages.${system}.buildSplitKeyboard {
          name = "eyelash_sofle";
          src = ./.;
          board = "eyelash_sofle_%PART%";
          shield = "nice_epaper";
          zephyrDepsHash = "sha256-PGZIyrPuN8qccV6qIm81bLa8ALd9p2x9Xj0n3XYwtz0=";
        };

        update = zmk-nix.packages.${system}.update;
      });

      devShells = forAllSystems (system: import ./shell.nix { pkgs = nixpkgs.legacyPackages.${system}; });
    };
}
