<?hh // strict
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/thephpleague/oauth2-server
 */

namespace League\OAuth2\Server\Repositories;

use League\OAuth2\Server\Entities\UserEntityInterface;
use League\OAuth2\Server\Entities\ClientEntityInterface;

interface UserRepositoryInterface extends RepositoryInterface
{
    /**
     * Get a user entity.
     *
     * @param string                                               $username
     * @param string                                               $password
     * @param string                                               $grantType    The grant type used
     * @param \League\OAuth2\Server\Entities\ClientEntityInterface $clientEntity
     *
     * @return \League\OAuth2\Server\Entities\UserEntityInterface
     */
    public function getUserEntityByUserCredentials(
        string $username,
        string $password,
        string $grantType,
        ClientEntityInterface $clientEntity
    ) : UserEntityInterface;
}
