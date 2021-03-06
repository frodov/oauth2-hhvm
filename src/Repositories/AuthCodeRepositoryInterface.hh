<?hh // strict
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/thephpleague/oauth2-server
 */
namespace League\OAuth2\Server\Repositories;

use League\OAuth2\Server\Entities\AuthCodeEntityInterface;

/**
 * Auth code storage interface.
 */
interface AuthCodeRepositoryInterface extends RepositoryInterface
{
    /**
     * Creates a new AuthCode
     *
     * @return \League\OAuth2\Server\Entities\AuthCodeEntityInterface
     */
    public function getNewAuthCode() : AuthCodeEntityInterface;

    /**
     * Persists a new auth code to permanent storage.
     *
     * @param \League\OAuth2\Server\Entities
     * \AuthCodeEntityInterface                                 $authCodeEntity
     */
    public function persistNewAuthCode(
        AuthCodeEntityInterface $authCodeEntity
    ) : void;

    /**
     * Revoke an auth code.
     *
     * @param string $codeId
     */
    public function revokeAuthCode(string $codeId) : void;

    /**
     * Check if the auth code has been revoked.
     *
     * @param string $codeId
     *
     * @return bool Return true if this code has been revoked
     */
    public function isAuthCodeRevoked(string $codeId) : bool;
}
