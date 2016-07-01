<?hh // strict
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @author      Freddy Vielma <freddyvielma@gmail.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/frodov/oauth2-hhvm
 */

namespace League\OAuth2\Server\Entities;

use League\OAuth2\Server\CryptKey;

interface AccessTokenEntityInterface extends TokenInterface
{
    /**
     * Generate a JWT from the access token
     *
     * @param \League\OAuth2\Server\CryptKey $privateKey
     *
     * @return string
     */
    public function convertToJWT(CryptKey $privateKey) : string;
}
