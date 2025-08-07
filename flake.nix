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
      packages = forAllSystems (
        system:
        let
          src = nixpkgs.lib.sourceFilesBySuffices self [
            ".board"
            ".cmake"
            ".conf"
            ".defconfig"
            ".dts"
            ".dtsi"
            ".json"
            ".keymap"
            ".overlay"
            ".shield"
            ".yml"
            "_defconfig"
            ".h"
          ];
        in
        {
          firmware = zmk-nix.legacyPackages.${system}.buildSplitKeyboard {
            name = "eyelash_sofle";
            inherit src;
            board = "eyelash_sofle_%PART%";
            shield = "nice_view";
            zephyrDepsHash = "sha256-IkUO29jGSRcIiV5wAlqC9Xae041yuFg1lYEI+sAX8RM=";
          };

          update = zmk-nix.packages.${system}.update;
        }
      );

      devShells = forAllSystems (system: {
        default = zmk-nix.devShells.${system}.default;
      });
    };
}
