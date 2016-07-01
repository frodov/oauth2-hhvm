<?hh // strict
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @author      Freddy Vielma <freddyvielma@gmail.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/frodov/oauth2-hhvm
 */

namespace League\OAuth2\Server\Repositories;

use League\OAuth2\Server\Entities\ScopeEntityInterface;
use League\OAuth2\Server\Entities\ClientEntityInterface;
use League\OAuth2\Server\Entities\AccessTokenEntityInterface;

/**
 * Access token interface.
 */
interface AccessTokenRepositoryInterface extends RepositoryInterface
{
    /**
     * Create a new access token
     *
     * @param \League\OAuth2\Server\Entities
     * \ClientEntityInterface                                   $clientEntity
     * @param \League\OAuth2\Server\Entities
     * \ScopeEntityInterface[]                                  $scopes
     * @param mixed                                             $userIdentifier
     *
     * @return AccessTokenEntityInterface
     */
    public function getNewToken(
        ClientEntityInterface $clientEntity,
        array<ScopeEntityInterface> $scopes,
        ?string $userIdentifier = null
    ) : AccessTokenEntityInterface;

    /**
     * Persists a new access token to permanent storage.
     *
     * @param \League\OAuth2\Server\Entities
     * \AccessTokenEntityInterface                           $accessTokenEntity
     */
    public function persistNewAccessToken(
        AccessTokenEntityInterface $accessTokenEntity
    ) : void;

    /**
     * Revoke an access token.
     *
     * @param string $tokenId
     */
    public function revokeAccessToken(string $tokenId) : void;

    /**
     * Check if the access token has been revoked.
     *
     * @param string $tokenId
     *
     * @return bool Return true if this token has been revoked
     */
    public function isAccessTokenRevoked(string $tokenId) : bool;
}
