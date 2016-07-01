<?hh // strict
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/thephpleague/oauth2-server
 */

namespace League\OAuth2\Server\Entities\Traits;

trait EntityTrait
{
    /*
     * @var string
     */
    protected string $identifier;

    /**
     * @return mixed
     */
    public function getIdentifier() : mixed
    {
        return $this->identifier;
    }

    /**
     * @param mixed $identifier
     */
    public function setIdentifier(string $identifier) : void
    {
        $this->identifier = $identifier;
    }
}
