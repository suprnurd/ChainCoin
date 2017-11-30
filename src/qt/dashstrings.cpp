

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *chaincoin_strings[] = {
QT_TRANSLATE_NOOP("chaincoin-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"-fallbackfee is set very high! This is the transaction fee you may pay when "
"fee estimates are not available."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"-paytxfee is set very high! This is the transaction fee you will pay if you "
"send a transaction."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"A fee rate (in %s/kB) that will be used when fee estimation has insufficient "
"data (default: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Accept relayed transactions received from whitelisted peers even when not "
"relaying transactions (default: %d)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Cannot obtain a lock on data directory %s. Chaincoin Core is probably already "
"running."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Disable all Chaincoin specific functionality (Masternodes, PrivateSend, "
"InstantSend, Governance) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Discover own IP addresses (default: 1 when listening and no -externalip or -"
"proxy)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Do not keep transactions in the mempool longer than <n> hours (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Enable InstantSend, show confirmations for locked transactions (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Enable multiple PrivateSend mixing sessions per block, experimental (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Enable use of automated PrivateSend for funds stored in this wallet (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Error loading %s: You can't enable HD on a already existing non-HD wallet"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Error reading wallet.dat! All keys read correctly, but transaction data or "
"address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Execute command when a wallet InstantSend transaction is successfully locked "
"(%s in cmd is replaced by TxID)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Failed to create backup, file already exists! This could happen if you "
"restarted wallet in less than 60 seconds. You can continue if you are ok "
"with this."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for relaying, "
"mining and transaction creation (default: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Force relay of transactions from whitelisted peers even they violate local "
"relay policy (default: %d)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"If <category> is not supplied or if <category> = 1, output all debugging "
"information."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"If this block is in the chain assume that it and its ancestors are valid and "
"potentially skip their script verification (0 to verify all, default: %s, "
"testnet: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"InstantSend doesn't support sending values that high yet. Transactions are "
"currently limited to %1 CHC."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"InstantSend requires inputs with at least %d confirmations, you might need "
"to wait a few minutes and try again."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Maintain a full address index, used to query for the balance, txids and "
"unspent outputs for addresses (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Maintain a full spent index, used to query the spending txid and input index "
"for an outpoint (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Maintain a timestamp index for block hashes, used to query blocks hashes by "
"a range of timestamps (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Maintain at most <n> connections to peers (temporary service connections "
"excluded) (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Make sure to encrypt your wallet and delete all non-encrypted backups after "
"you verified that wallet works!"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Maximum total fees (in %s) to use in a single wallet transaction; setting "
"this too low may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Name to construct url for KeePass entry that stores the wallet passphrase"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong Chaincoin Core will not work properly."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"PrivateSend uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Provide liquidity to PrivateSend by infrequently mixing coins on a continual "
"basis (0-100, default: %u, 1=very frequent, high fees, 100=very infrequent, "
"low fees)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Reduce storage requirements by pruning (deleting) old blocks. This mode is "
"incompatible with -txindex and -rescan. Warning: Reverting this setting "
"requires re-downloading the entire blockchain. (default: 0 = disable pruning "
"blocks, >%u = target size in MiB to use for block files)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Specify full path to directory for automatic wallet backups (must exist)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Tries to keep outbound traffic under the given target (in MiB per 24h), 0 = "
"no limit (default: %d)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Unable to bind to %s on this computer. Chaincoin Core is probably already running."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Unable to locate enough PrivateSend denominated funds for this transaction."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Unable to locate enough PrivateSend non-denominated funds for this "
"transaction that are not equal 1000 CHC."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Unable to locate enough funds for this transaction that are not equal 1000 "
"CHC."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Unsupported argument -socks found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Unsupported argument -whitelistalwaysrelay ignored, use -whitelistrelay and/"
"or -whitelistforcerelay."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Use N separate masternodes for each denominated input to mix funds (2-16, "
"default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Use UPnP to map the listening port (default: 1 when listening and no -proxy)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Use hierarchical deterministic key generation (HD) after bip39/bip44. Only "
"has effect during wallet creation/first start"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"User defined mnemonic for HD wallet (bip39). Only has effect during wallet "
"creation/first start (default: randomly generated)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"User defined mnemonic passphrase for HD wallet (bip39). Only has effect "
"during wallet creation/first start (default: empty string)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"User defined seed for HD wallet (should be in hex). Only has effect during "
"wallet creation/first start (default: randomly generated)"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Username and hashed password for JSON-RPC connections. The field <userpw> "
"comes in the format: <USERNAME>:<SALT>$<HASH>. A canonical python script is "
"included in share/rpcuser. This option can be specified multiple times"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"WARNING! Failed to replenish keypool, please unlock your wallet to do so."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Wallet is locked, can't replenish keypool! Automatic backups and mixing are "
"disabled, please unlock your wallet to replenish keypool."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: Unknown block versions being mined! It's possible unknown rules are "
"in effect"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: incorrect parameter -walletbackupsdir, path must exist! Using "
"default path."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"You need to rebuild the database using -reindex-chainstate to change -txindex"),
QT_TRANSLATE_NOOP("chaincoin-core", ""
"masternodeaddr option is deprecated. Please use masternode.conf to manage "
"your remote masternodes."),
QT_TRANSLATE_NOOP("chaincoin-core", "%s - %d confirmations"),
QT_TRANSLATE_NOOP("chaincoin-core", "(%d could be used only on mainnet)"),
QT_TRANSLATE_NOOP("chaincoin-core", "(default: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "(default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "(must be %d for mainnet)"),
QT_TRANSLATE_NOOP("chaincoin-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("chaincoin-core", "<category> can be:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("chaincoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("chaincoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("chaincoin-core", "Already have that input."),
QT_TRANSLATE_NOOP("chaincoin-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("chaincoin-core", "Attempt to recover private keys from a corrupt wallet.dat on startup"),
QT_TRANSLATE_NOOP("chaincoin-core", "Automatic backups disabled"),
QT_TRANSLATE_NOOP("chaincoin-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("chaincoin-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("chaincoin-core", "Can't mix: no compatible inputs found!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("chaincoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("chaincoin-core", "Chain selection options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("chaincoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("chaincoin-core", "Connect to KeePassHttp on port <port> (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("chaincoin-core", "Connection options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("chaincoin-core", "Copyright (C) 2014-%i The Chaincoin Core Developers"),
QT_TRANSLATE_NOOP("chaincoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("chaincoin-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("chaincoin-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("chaincoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("chaincoin-core", "Done loading"),
QT_TRANSLATE_NOOP("chaincoin-core", "ERROR! Failed to create automatic backup"),
QT_TRANSLATE_NOOP("chaincoin-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("chaincoin-core", "Enable publish hash transaction (locked via InstantSend) in <address>"),
QT_TRANSLATE_NOOP("chaincoin-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("chaincoin-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("chaincoin-core", "Enable publish raw transaction (locked via InstantSend) in <address>"),
QT_TRANSLATE_NOOP("chaincoin-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("chaincoin-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Enable transaction replacement in the memory pool (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Entries are full."),
QT_TRANSLATE_NOOP("chaincoin-core", "Entry exceeds maximum size."),
QT_TRANSLATE_NOOP("chaincoin-core", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("chaincoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error loading %s: You can't disable HD on a already existing HD wallet"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error loading wallet.dat: Wallet requires newer version of Chaincoin Core"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("chaincoin-core", "Error"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("chaincoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to create backup %s!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to create backup, error: %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to delete backup, error: %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to load fulfilled requests cache from"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to load governance cache from"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to load masternode cache from"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to load masternode payments cache from"),
QT_TRANSLATE_NOOP("chaincoin-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("chaincoin-core", "Fee (in %s/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("chaincoin-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Importing..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Imports blocks from external blk000??.dat file on startup"),
QT_TRANSLATE_NOOP("chaincoin-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("chaincoin-core", "Incompatible version."),
QT_TRANSLATE_NOOP("chaincoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("chaincoin-core", "Information"),
QT_TRANSLATE_NOOP("chaincoin-core", "Initialization sanity check failed. Chaincoin Core is shutting down."),
QT_TRANSLATE_NOOP("chaincoin-core", "Input is not valid."),
QT_TRANSLATE_NOOP("chaincoin-core", "InstantSend options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("chaincoin-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("chaincoin-core", "KeePassHttp id for the established association"),
QT_TRANSLATE_NOOP("chaincoin-core", "KeePassHttp key for AES encrypted communication with KeePass"),
QT_TRANSLATE_NOOP("chaincoin-core", "Keep N CHC anonymized (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Keep the transaction memory pool below <n> megabytes (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("chaincoin-core", "Last PrivateSend was too recent."),
QT_TRANSLATE_NOOP("chaincoin-core", "Last successful PrivateSend action was too recent."),
QT_TRANSLATE_NOOP("chaincoin-core", "Line: %d"),
QT_TRANSLATE_NOOP("chaincoin-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading fulfilled requests cache..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading governance cache..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("chaincoin-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Make the wallet broadcast transactions"),
QT_TRANSLATE_NOOP("chaincoin-core", "Masternode cache is empty, skipping payments and governance cache..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Masternode options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("chaincoin-core", "Masternode:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Minimum bytes per sigop in transactions we relay and mine (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("chaincoin-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Mnemonic passphrase is too long, must be at most 256 characters"),
QT_TRANSLATE_NOOP("chaincoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("chaincoin-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("chaincoin-core", "No errors detected."),
QT_TRANSLATE_NOOP("chaincoin-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("chaincoin-core", "Node relay options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("chaincoin-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("chaincoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("chaincoin-core", "Not enough funds to anonymize."),
QT_TRANSLATE_NOOP("chaincoin-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("chaincoin-core", "Number of automatic wallet backups (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("chaincoin-core", "Port: %d"),
QT_TRANSLATE_NOOP("chaincoin-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Print version and exit"),
QT_TRANSLATE_NOOP("chaincoin-core", "PrivateSend is idle."),
QT_TRANSLATE_NOOP("chaincoin-core", "PrivateSend options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "PrivateSend request complete:"),
QT_TRANSLATE_NOOP("chaincoin-core", "PrivateSend request incomplete:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("chaincoin-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("chaincoin-core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("chaincoin-core", "RPC server options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Rebuild chain state and block index from the blk*.dat files on disk"),
QT_TRANSLATE_NOOP("chaincoin-core", "Rebuild chain state from the currently indexed blocks"),
QT_TRANSLATE_NOOP("chaincoin-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("chaincoin-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Rescan the block chain for missing wallet transactions on startup"),
QT_TRANSLATE_NOOP("chaincoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("chaincoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("chaincoin-core", "Send trace/debug info to debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Session not complete!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Session timed out."),
QT_TRANSLATE_NOOP("chaincoin-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("chaincoin-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("chaincoin-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("chaincoin-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("chaincoin-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("chaincoin-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchroning blockchain..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronizing governance objects..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronizing masternode payments..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("chaincoin-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("chaincoin-core", "This help message"),
QT_TRANSLATE_NOOP("chaincoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("chaincoin-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("chaincoin-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Too many %f denominations, removing."),
QT_TRANSLATE_NOOP("chaincoin-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("chaincoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("chaincoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("chaincoin-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("chaincoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("chaincoin-core", "Unknown response."),
QT_TRANSLATE_NOOP("chaincoin-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("chaincoin-core", "Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("chaincoin-core", "Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("chaincoin-core", "Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("chaincoin-core", "Upgrade wallet to latest format on startup"),
QT_TRANSLATE_NOOP("chaincoin-core", "Use KeePass 2 integration using KeePassHttp plugin (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Use the test chain"),
QT_TRANSLATE_NOOP("chaincoin-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("chaincoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("chaincoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Very low number of keys left: %d"),
QT_TRANSLATE_NOOP("chaincoin-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("chaincoin-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("chaincoin-core", "Wallet needed to be rewritten: restart Chaincoin Core to complete"),
QT_TRANSLATE_NOOP("chaincoin-core", "Wallet options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "Wallet window title"),
QT_TRANSLATE_NOOP("chaincoin-core", "Warning"),
QT_TRANSLATE_NOOP("chaincoin-core", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Wasn't able to create wallet backup folder %s!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Whether to operate in a blocks only mode (default: %u)"),
QT_TRANSLATE_NOOP("chaincoin-core", "Will retry..."),
QT_TRANSLATE_NOOP("chaincoin-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("chaincoin-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("chaincoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("chaincoin-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("chaincoin-core", "no mixing available."),
QT_TRANSLATE_NOOP("chaincoin-core", "see debug.log for details."),
QT_TRANSLATE_NOOP("chaincoin-core", "wallet.dat corrupt, salvage failed"),
};
