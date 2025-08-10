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
          zephyrDepsHash = "sha256-IkUO29jGSRcIiV5wAlqC9Xae041yuFg1lYEI+sAX8RM=";
        };

        update = zmk-nix.packages.${system}.update;
      });

      devShells = forAllSystems (system: import ./shell.nix { pkgs = nixpkgs.legacyPackages.${system}; });
    };
}
