<?hh // strict
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/thephpleague/oauth2-server
 */

namespace League\OAuth2\Server\Entities;

interface AuthCodeEntityInterface extends TokenInterface
{
    /**
     * @return string
     */
    public function getRedirectUri() : string;

    /**
     * @param string $uri
     */
    public function setRedirectUri(string $uri) : void;
}
