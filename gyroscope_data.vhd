library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;


Entity gyroscope_data is port( 

	clk : in std_logic;
	SCL : inout std_logic   := 'X';
	SDA : inout std_logic   := 'X';
	piobp : in    std_logic := 'X';
	SPI_enable : out std_logic;
	Aff_7segs_0			  : out std_logic_vector(7 downto 0);
	Aff_7segs_1			  : out std_logic_vector(7 downto 0);
	Aff_7segs_2			  : out std_logic_vector(7 downto 0);
	Aff_7segs_3			  : out std_logic_vector(7 downto 0);
	Aff_7segs_4			  : out std_logic_vector(7 downto 0);
	Aff_7segs_5			  : out std_logic_vector(7 downto 0);
	reset : in std_logic );

End entity gyroscope_data;


architecture arch of gyroscope_data is

signal BCD_0 : std_logic_vector(3 downto 0);
signal BCD_1 : std_logic_vector(3 downto 0);
signal BCD_2 : std_logic_vector(3 downto 0);
signal BCD_3 : std_logic_vector(3 downto 0);
signal BCD_4 : std_logic_vector(3 downto 0);
signal BCD_5 : std_logic_vector(3 downto 0);

		component BCD_2_7SEG is
		port(
			inp : in std_logic_vector(3 downto 0); -- input 
			outp : out std_logic_vector(7 downto 0) -- output 
		);
		end component BCD_2_7SEG;

		component gyroscope_data_sys is
			port (
				clk_clk                              : in    std_logic                    := 'X'; -- clk
				opencores_i2c_0_export_0_scl_pad_io  : inout std_logic                    := 'X'; -- scl_pad_io
				opencores_i2c_0_export_0_sda_pad_io  : inout std_logic                    := 'X'; -- sda_pad_io
				pio0_7seg_external_connection_export : out   std_logic_vector(3 downto 0);        -- export
				pio1_7seg_external_connection_export : out   std_logic_vector(3 downto 0);        -- export
				pio2_7seg_external_connection_export : out   std_logic_vector(3 downto 0);        -- export
				pio3_7seg_external_connection_export : out   std_logic_vector(3 downto 0);        -- export
				pio4_7seg_external_connection_export : out   std_logic_vector(3 downto 0);        -- export
				pio5_7seg_external_connection_export : out   std_logic_vector(3 downto 0);        -- export
				piobp_external_connection_export     : in    std_logic                    := 'X'; -- export
				reset_reset_n                        : in    std_logic                    := 'X'  -- reset_n
			);
		end component gyroscope_data_sys;

		begin
		
		SPI_enable <= '1';

		u0 : component gyroscope_data_sys
			port map (
				clk_clk                              => clk,                              --                           clk.clk
				opencores_i2c_0_export_0_scl_pad_io  => SCL,  --      opencores_i2c_0_export_0.scl_pad_io
				opencores_i2c_0_export_0_sda_pad_io  => SDA,  --                              .sda_pad_io
				pio0_7seg_external_connection_export => BCD_0, -- pio0_7seg_external_connection.export
				pio1_7seg_external_connection_export => BCD_1, -- pio1_7seg_external_connection.export
				pio2_7seg_external_connection_export => BCD_2, -- pio2_7seg_external_connection.export
				pio3_7seg_external_connection_export => BCD_3, -- pio3_7seg_external_connection.export
				pio4_7seg_external_connection_export => BCD_4, -- pio4_7seg_external_connection.export
				pio5_7seg_external_connection_export => BCD_5, -- pio5_7seg_external_connection.export
				piobp_external_connection_export     => piobp,     --     piobp_external_connection.export
				reset_reset_n                        => reset                         --                         reset.reset_n
			);
 
		u1 : component BCD_2_7SEG
			port map (
				inp   => BCD_0,                 
				outp  => Aff_7segs_0
			);
		
		u2 : component BCD_2_7SEG
			port map (
				inp   => BCD_1,                 
				outp  => Aff_7segs_1
			);
			
		u3 : component BCD_2_7SEG
			port map (
				inp   => BCD_2,                 
				outp  => Aff_7segs_2
			);
		
		u4 : component BCD_2_7SEG
			port map (
				inp   => BCD_3,                 
				outp  => Aff_7segs_3
			);
		
		u5 : component BCD_2_7SEG
			port map (
				inp   => BCD_4,                 
				outp  => Aff_7segs_4
			);
			
		u6 : component BCD_2_7SEG
			port map (
				inp   => BCD_5,                 
				outp  => Aff_7segs_5
			);
		
		


end arch;














