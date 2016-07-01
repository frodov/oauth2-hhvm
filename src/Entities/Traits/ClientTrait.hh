<?hh // strict
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/thephpleague/oauth2-server
 */

namespace League\OAuth2\Server\Entities\Traits;

trait ClientTrait
{
    protected string $name;

    protected string $redirectUri;

    /**
     * Get the client's name.
     *
     * @return string
     * @codeCoverageIgnore
     */
    public function getName() : string
    {
        return $this->name;
    }

    /**
     * Returns the registered redirect URI (as a string).
     *
     * Alternatively return an indexed array of redirect URIs.
     *
     * @return string|string[]
     */
    public function getRedirectUri() : string
    {
        return $this->redirectUri;
    }
}
