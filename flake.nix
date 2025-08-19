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
          shield = "nice_view_crystal";
          zephyrDepsHash = "sha256-j7rYe1CDeeXaY/cpINtKDWMoxMpIBecIWyEb6hx7+7o=";
        };

        update = zmk-nix.packages.${system}.update;
      });

      devShells = forAllSystems (system: import ./shell.nix { pkgs = nixpkgs.legacyPackages.${system}; });
    };
}
