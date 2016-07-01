<?hh // strict
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/thephpleague/oauth2-server
 */

namespace League\OAuth2\Server\Entities\Traits;

trait AuthCodeTrait
{
    /**
     * @var null|string
     */
    protected ?string $redirectUri;

    /**
     * @return string
     */
    public function getRedirectUri() : ?string
    {
        return $this->redirectUri;
    }

    /**
     * @param string $uri
     */
    public function setRedirectUri(string $uri) : void
    {
        $this->redirectUri = $uri;
    }
}
